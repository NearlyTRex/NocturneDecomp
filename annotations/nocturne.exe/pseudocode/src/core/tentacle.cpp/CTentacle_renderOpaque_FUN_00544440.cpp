// Name: core_tentacle.cpp_CTentacle_renderOpaque_FUN_00544440
// Address: 00544440
// Address Range: [[00544440, 0054446f]]
// Convention: unknown
// Signature: int core_tentacle_cpp_CTentacle_renderOpaque_FUN_00544440(CCharacter *param_1)

#include "nocturne.h"

int core_tentacle_cpp_CTentacle_renderOpaque_FUN_00544440(CCharacter *param_1)

{
  int iVar1;
  
  iVar1 = (*((param_1->base).vtable._ub)->shouldIgnoreForTargeting)(&param_1->base);
  if ((iVar1 != 0) && (*(int *)(0x01CC9450 + 4) == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
  return iVar1;
}
