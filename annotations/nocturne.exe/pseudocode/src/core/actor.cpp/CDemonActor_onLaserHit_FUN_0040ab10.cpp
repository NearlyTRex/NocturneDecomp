// Name: core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10
// Address: 0040ab10
// Address Range: [[0040ab10, 0040ab2f]]
// Convention: unknown
// Signature: undefined8 core_actor_cpp_CDemonActor_onLaserHit_FUN_0040ab10(undefined4 param_1,int param_2)

#include "nocturne.h"

ulonglong core_actor_cpp_CDemonActor_onLaserHit_FUN_0040ab10(uint param_1,int param_2)

{
  *(uint *)(param_2 + 0x48) = 0;
  *(uint *)(param_2 + 0x50) = 0;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x44);
  return CONCAT44(*(uint *)(param_2 + 0x44),param_2);
}
