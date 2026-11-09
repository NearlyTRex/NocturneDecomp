// Name: unkafter_demnfolk.cpp_FUN_0045cd00
// Address: 0045cd00
// Address Range: [[0045cd00, 0045cd30]]
// Convention: unknown
// Signature: int unkafter_demnfolk_cpp_FUN_0045cd00(CCharacter *param_1,CDemonActor *param_2)

#include "nocturne.h"

int unkafter_demnfolk_cpp_FUN_0045cd00(CCharacter *param_1,CDemonActor *param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040c550(param_2,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_FUN_00431430(param_1,param_2);
  return iVar1;
}
