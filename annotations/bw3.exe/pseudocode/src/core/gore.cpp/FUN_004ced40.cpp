// Name: FUN_004ced40
// Address: 004ced40
// Address Range: [[004ced40, 004cee27]]
// Convention: unknown
// Signature: int FUN_004ced40(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ced40(uint param_1,uint *param_2,uint param_3,float param_4,uint *param_5)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_005a3cb2(0x2a20);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_004ad7b0(iVar3);
  }
  if (iVar4 == 0) {
    _DAT_01d71de0 = "..\\core\\gore.cpp";
    _DAT_01d71de4 = 0x6aa;
    FUN_004e4330("Can't create flies!");
  }
  fVar2 = (float)_DAT_005c4779;
  *(uint *)(iVar4 + 0x20) = *param_2;
  *(uint *)(iVar4 + 0x24) = param_2[1];
  *(uint *)(iVar4 + 0x28) = param_2[2];
  uVar1 = *0x01D81080;
  *(uint *)(iVar4 + 0x164) = 0;
  *(uint *)(iVar4 + 0x2c) = uVar1;
  *(uint *)(iVar4 + 0x2a0c) = param_3;
  *(float *)(iVar4 + 0x2a14) = fVar2 / param_4;
  if ((param_5 != (uint *)0x0) && ((uint *)(iVar4 + 0x158) != param_5)) {
    *(uint *)(iVar4 + 0x158) = *param_5;
    *(uint *)(iVar4 + 0x15c) = param_5[1];
    *(uint *)(iVar4 + 0x160) = param_5[2];
  }
  (*(code *)**(uint **)(iVar4 + 0x154))(iVar4);
  FUN_004f7530(0x01D81080,iVar4);
  FUN_004f6930(0x01D81080,iVar4);
  return iVar4;
}
