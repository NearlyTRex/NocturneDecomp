// Name: core_carved.cpp_FUN_0042bd50
// Address: 0042bd50
// Address Range: [[0042bd50, 0042bd80]]
// Convention: unknown
// Signature: int core_carved_cpp_FUN_0042bd50(CCharacter *param_1,CDemonActor *param_2)

#include "nocturne.h"

int core_carved_cpp_FUN_0042bd50(CCharacter *param_1,CDemonActor *param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040c550(param_2,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_FUN_00431430(param_1,param_2);
  return iVar1;
}
