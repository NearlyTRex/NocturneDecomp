// Name: core_actor.cpp_FUN_00408cd0
// Address: 00408cd0
// Address Range: [[00408cd0, 00408cff]]
// Convention: unknown
// Signature: uint core_actor_cpp_FUN_00408cd0(CDemonActor *param_1,char *param_2,float param_3)

#include "nocturne.h"

uint core_actor_cpp_FUN_00408cd0(CDemonActor *param_1,char *param_2,float param_3)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0
                    (0x02CF5680,param_1,param_2,(CVector3f *)&param_1->field_0x20,param_3);
  return uVar1;
}
