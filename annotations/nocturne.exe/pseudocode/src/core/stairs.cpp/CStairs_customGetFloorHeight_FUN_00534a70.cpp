// Name: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_00534a70
// Address: 00534a70
// Address Range: [[00534a70, 00534aba]]
// Convention: unknown
// Signature: undefined4 core_stairs_cpp_CStairs_customGetFloorHeight_FUN_00534a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint core_stairs_cpp_CStairs_customGetFloorHeight_FUN_00534a70(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1 + 0x168;
  uVar4 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x164) * 2; iVar2 = iVar2 + 1) {
    iVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(iVar3,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar4 = 1;
    }
    iVar3 = iVar3 + 0x38;
  }
  return uVar4;
}
