// Name: FUN_00414550
// Address: 00414550
// Address Range: [[00414550, 0041471d]]
// Convention: unknown
// Signature: int FUN_00414550(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00414550(uint *param_1,uint *param_2,uint *param_3,int param_4,uint param_5,uint param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar1 = FUN_005a3cb2(0xf34);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_00414750(iVar1);
  }
  if (iVar3 == 0) {
    _DAT_01d71de0 = "..\\core\\bodypart.cpp";
    _DAT_01d71de4 = 0x32;
    FUN_004e4330("Can't create body part!");
  }
  *(uint *)(iVar3 + 0x20) = *param_1;
  *(uint *)(iVar3 + 0x24) = param_1[1];
  *(uint *)(iVar3 + 0x28) = param_1[2];
  if ((uint *)(iVar3 + 0x30) != param_2) {
    *(uint *)(iVar3 + 0x30) = *param_2;
    *(uint *)(iVar3 + 0x34) = param_2[1];
    *(uint *)(iVar3 + 0x38) = param_2[2];
  }
  FUN_004088f0(iVar3);
  if (param_4 == 0) {
    uVar2 = *0x01D81080;
  }
  else {
    uVar2 = *(uint *)(param_4 + 0x2c);
  }
  *(uint *)(iVar3 + 0x2c) = uVar2;
  if (param_3 == (uint *)0x0) {
    fVar4 = (float)FUN_0040ce40(0x3f490fdb,0x3fc90fdb);
    fVar5 = (float)FUN_0040ce40(0,0x40c90fdb);
    fVar6 = (float10)fcos((float10)fVar5);
    fVar7 = (float10)fcos((float10)fVar4);
    fVar8 = (float10)fsin((float10)fVar5);
    fVar9 = (float10)fsin((float10)fVar4);
    fVar10 = (float10)_DAT_005b6a5a;
    *(float *)(iVar3 + 0x284) = (float)(fVar9 * fVar10);
    *(float *)(iVar3 + 0x280) = (float)(fVar6 * fVar10 * fVar7);
    *(float *)(iVar3 + 0x288) = (float)(fVar8 * fVar10 * fVar7);
  }
  else if ((uint *)(iVar3 + 0x280) != param_3) {
    *(uint *)(iVar3 + 0x280) = *param_3;
    *(uint *)(iVar3 + 0x284) = param_3[1];
    *(uint *)(iVar3 + 0x288) = param_3[2];
  }
  FUN_004f7530(0x01D81080,iVar3);
  FUN_004f6930(0x01D81080,iVar3);
  if (param_4 != 0) {
    *(uint *)(iVar3 + 0x108) = *(uint *)(param_4 + 0x108);
    *(uint *)(iVar3 + 0x10c) = *(uint *)(param_4 + 0x10c);
    *(uint *)(iVar3 + 0x110) = *(uint *)(param_4 + 0x110);
  }
  *(uint *)(iVar3 + 0xcb0) = param_5;
  *(uint *)(iVar3 + 0xfc) = param_6;
  *(uint *)(iVar3 + 0xcb4) = param_6;
  *(uint *)(iVar3 + 0xcb8) = param_7;
  return iVar3;
}
