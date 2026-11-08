// Name: FUN_004154f0
// Address: 004154f0
// Address Range: [[004154f0, 004156a3]]
// Convention: unknown
// Signature: int FUN_004154f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004154f0(uint *param_1,uint *param_2,uint *param_3,int param_4,uint param_5,uint param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar1 = FUN_005b8be2(0x1344);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004156e0(iVar1);
  }
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\bodypart.cpp";
    _DAT_01d046a4 = 0x32;
    FUN_004e4500("Can't create body part!");
  }
  *(uint *)(iVar2 + 0x20) = *param_1;
  *(uint *)(iVar2 + 0x24) = param_1[1];
  *(uint *)(iVar2 + 0x28) = param_1[2];
  if ((uint *)(iVar2 + 0x30) != param_2) {
    *(uint *)(iVar2 + 0x30) = *param_2;
    *(uint *)(iVar2 + 0x34) = param_2[1];
    *(uint *)(iVar2 + 0x38) = param_2[2];
  }
  FUN_00408ae0(iVar2);
  if (param_3 == (uint *)0x0) {
    fVar3 = (float)FUN_0040cf60(0x3f490fdb,0x3fc90fdb);
    fVar4 = (float)FUN_0040cf60(0,0x40c90fdb);
    fVar5 = (float10)fcos((float10)fVar4);
    fVar6 = (float10)fcos((float10)fVar3);
    fVar7 = (float10)fsin((float10)fVar4);
    fVar8 = (float10)fsin((float10)fVar3);
    fVar9 = (float10)_DAT_005cbd52;
    *(float *)(iVar2 + 0x3e0) = (float)(fVar8 * fVar9);
    *(float *)(iVar2 + 0x3dc) = (float)(fVar5 * fVar9 * fVar6);
    *(float *)(iVar2 + 0x3e4) = (float)(fVar7 * fVar9 * fVar6);
  }
  else if ((uint *)(iVar2 + 0x3dc) != param_3) {
    *(uint *)(iVar2 + 0x3dc) = *param_3;
    *(uint *)(iVar2 + 0x3e0) = param_3[1];
    *(uint *)(iVar2 + 0x3e4) = param_3[2];
  }
  FUN_004fcda0(0x01D182F0,iVar2);
  FUN_004fc200(0x01D182F0,iVar2);
  if (param_4 != 0) {
    *(uint *)(iVar2 + 0x108) = *(uint *)(param_4 + 0x108);
    *(uint *)(iVar2 + 0x10c) = *(uint *)(param_4 + 0x10c);
    *(uint *)(iVar2 + 0x110) = *(uint *)(param_4 + 0x110);
  }
  *(uint *)(iVar2 + 0x10c4) = param_5;
  *(uint *)(iVar2 + 0xfc) = param_6;
  *(uint *)(iVar2 + 0x10c8) = param_6;
  *(uint *)(iVar2 + 0x10cc) = param_7;
  return iVar2;
}
