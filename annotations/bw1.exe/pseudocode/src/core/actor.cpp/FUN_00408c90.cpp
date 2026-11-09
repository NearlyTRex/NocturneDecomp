// Name: core_actor.cpp_FUN_00408c90
// Address: 00408c90
// Address Range: [[00408c90, 00408cbf]]
// Convention: unknown
// Signature: uint core_actor_cpp_FUN_00408c90(CDemonActor *param_1,char *param_2,float param_3)

#include "nocturne.h"

uint core_actor_cpp_FUN_00408c90(CDemonActor *param_1,char *param_2,float param_3)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980
                    (0x02C82A60,param_1,param_2,(CVector3f *)&param_1->field_0x20,param_3);
  return uVar1;
}
