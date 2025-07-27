#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "SpartaGameState.generated.h"


//USTURCT()
//struct WaveData
//{
//	int32 CurrentWaveIndex; // 현재 Wave
//	int32 MaxWaves; // 최대 Wave
//	float WaveDuration; // Wave 지속 시간
//	TArray<int32> ItemsToSpawnPerWave; // 웨이브 당 스폰 아이템 수
//};

UCLASS()
class SPARTAPROJECT_API ASpartaGameState : public AGameState
{
	GENERATED_BODY()

public:
	ASpartaGameState();

	virtual void BeginPlay() override;

	// Score 및 Coin
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score")
	int32 Score;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	int32 SpawnedCoinCount;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	int32 CollectedCoinCount;

	// Level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	float LevelDuration;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	int32 CurrentLevelIndex;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	int32 MaxLevels;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Level")
	TArray<FName> LevelMapNames;

	FTimerHandle WaveTimerHandle;
	FTimerHandle HUDUpdateTimerHandle;

	// Wave
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wave")
	int32 CurrentWaveIndex; // 현재 Wave
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wave")
	int32 MaxWaves; // 최대 Wave
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wave")
	float WaveDuration; // Wave 지속 시간
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wave")
	TArray<int32> ItemsToSpawnPerWave; // 웨이브 당 스폰 아이템 수

	UPROPERTY()
	TArray<AActor*> PreWaveItems;

	// WaveDatas.Num() == 100
	// 레벨 웨이브 100
	//TArray<WaveData> WaveDatas;

	UFUNCTION(BlueprintPure, Category = "Scroe")
	int32 GetScore() const;
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Amout);
	UFUNCTION(BlueprintCallable, Category = "Level")
	void OnGameOver();

	void StartLevel();
	void StartWave();

	void OnWaveTimeUp();
	void OnCoinCollected();

	void EndLevel();
	void EndWave();

	void EnableWave2();
	void EnableWave3();

	void UpdateHUD();

};
