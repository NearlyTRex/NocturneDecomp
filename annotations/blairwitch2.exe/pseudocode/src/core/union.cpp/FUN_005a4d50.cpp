// Name: core_union.cpp_FUN_005a4d50
// Address: 005a4d50
// Address Range: [[005a4d50, 005a4e56]]
// Convention: unknown
// Signature: void core_union_cpp_FUN_005a4d50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_union_cpp_FUN_005a4d50(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar3 == 0) &&
     (iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar3 == 0)
     ) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
    if (*(int *)(param_1 + 0x10a78) == 0) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x10a78) == 0) {
    return;
  }
  iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Chasing");
  if ((((iVar3 != 0) &&
       (iVar3 = unkaddr_0059d350_cpp_FUN_0059dae0
                          (param_1 + 0x10af8,"ChaseComplete","RangeAttack"),
       iVar3 != 0)) &&
      (fVar2 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x20) - *(float *)(param_1 + 0x20),
      fVar1 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x28) - *(float *)(param_1 + 0x28),
      fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1), fVar1 < _DAT_005ff8f0)) &&
     (_DAT_005ff8f4 < fVar1)) {
    *(float *)(param_1 + 0x11394) = fVar1;
    return;
  }
  return;
}
