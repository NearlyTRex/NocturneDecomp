// Name: core_stairs.cpp_FUN_005621e0
// Address: 005621e0
// Address Range: [[005621e0, 0056222a]]
// Convention: unknown
// Signature: undefined4 core_stairs_cpp_FUN_005621e0(int param_1,CVector3f *param_2,float param_3,float *param_4)

#include "nocturne.h"

uint core_stairs_cpp_FUN_005621e0(int param_1,CVector3f *param_2,float param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  CDemonTriangle *triangle;
  uint uVar3;
  
  triangle = (CDemonTriangle *)(param_1 + 0x2cc);
  uVar3 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x2c8) * 2; iVar2 = iVar2 + 1) {
    iVar1 = core_dtri_cpp_FUN_00478550(triangle,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
    triangle = triangle + 1;
  }
  return uVar3;
}
