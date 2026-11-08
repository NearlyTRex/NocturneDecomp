// Name: FUN_004c9bd0
// Address: 004c9bd0
// Address Range: [[004c9bd0, 004c9cb8]]
// Convention: unknown
// Signature: int FUN_004c9bd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c9bd0(uint param_1,uint *param_2,uint param_3,float param_4,uint *param_5)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_005b8be2(0x2b7c);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_004a6a90(iVar3);
  }
  if (iVar4 == 0) {
    _DAT_01d046a0 = "..\\core\\gore.cpp";
    _DAT_01d046a4 = 0x681;
    FUN_004e4500("Can't create flies!");
  }
  fVar2 = (float)_DAT_005d9572;
  *(uint *)(iVar4 + 0x20) = *param_2;
  *(uint *)(iVar4 + 0x24) = param_2[1];
  *(uint *)(iVar4 + 0x28) = param_2[2];
  uVar1 = *0x01D182F0;
  *(uint *)(iVar4 + 0x2c0) = 0;
  *(uint *)(iVar4 + 0x2c) = uVar1;
  *(uint *)(iVar4 + 0x2b68) = param_3;
  *(float *)(iVar4 + 0x2b70) = fVar2 / param_4;
  if ((param_5 != (uint *)0x0) && ((uint *)(iVar4 + 0x2b4) != param_5)) {
    *(uint *)(iVar4 + 0x2b4) = *param_5;
    *(uint *)(iVar4 + 0x2b8) = param_5[1];
    *(uint *)(iVar4 + 700) = param_5[2];
  }
  (**(code **)(*(int *)(iVar4 + 0x2b0) + 8))(iVar4);
  FUN_004fcda0(0x01D182F0,iVar4);
  FUN_004fc200(0x01D182F0,iVar4);
  return iVar4;
}
