// Name: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_00534a70
// Address: 00534a70
// Address Range: [[00534a70, 00534aba]]
// Convention: unknown
// Signature: undefined4 core_stairs_cpp_CStairs_customGetFloorHeight_FUN_00534a70(int param_1,CVector3f *param_2,float param_3,float *param_4)

#include "nocturne.h"

uint core_stairs_cpp_CStairs_customGetFloorHeight_FUN_00534a70(int param_1,CVector3f *param_2,float param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  CDemonTriangle *triangle;
  uint uVar3;
  
  triangle = (CDemonTriangle *)(param_1 + 0x168);
  uVar3 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x164) * 2; iVar2 = iVar2 + 1) {
    iVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(triangle,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
    triangle = triangle + 1;
  }
  return uVar3;
}
