#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GenerationItem.h"
#include "SpawnTriggerItem.generated.h"

class AActor;

UCLASS(Abstract)
class ASpawnTriggerItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Message;
    
public:
    ASpawnTriggerItem();
};

