// Name: core_stairs.cpp_FUN_005621a0
// Address: 005621a0
// Address Range: [[005621a0, 005621d4]]
// Convention: unknown
// Signature: void core_stairs_cpp_FUN_005621a0(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_stairs_cpp_FUN_005621a0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x2cc;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x2c8) * 2; iVar1 = iVar1 + 1) {
    core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(iVar2,param_2);
    iVar2 = iVar2 + 0x38;
  }
  return;
}
