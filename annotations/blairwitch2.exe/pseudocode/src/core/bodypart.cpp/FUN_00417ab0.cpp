// Name: core_bodypart.cpp_FUN_00417ab0
// Address: 00417ab0
// Address Range: [[00417ab0, 00417ac9]]
// Convention: unknown
// Signature: int core_bodypart_cpp_FUN_00417ab0(CDemonActor *param_1)

#include "nocturne.h"

int core_bodypart_cpp_FUN_00417ab0(CDemonActor *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 1) != 0) {
    return 0;
  }
  iVar1 = core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409f20(param_1);
  return iVar1;
}
