// Name: FUN_00415b30
// Address: 00415b30
// Address Range: [[00415b30, 00415ce3]]
// Convention: unknown
// Signature: int FUN_00415b30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00415b30(uint *param_1,uint *param_2,uint *param_3,int param_4,uint param_5,uint param_6,uint param_7)

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
  
  iVar1 = FUN_0056497c(0xf18);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00415d20(iVar1);
  }
  if (iVar2 == 0) {
    _DAT_01cc4800 = "?..\\core\\bodypart.cpp" + 1;
    _DAT_01cc4804 = 0x32;
    FUN_004c8440("Can't create body part!");
  }
  *(uint *)(iVar2 + 0x20) = *param_1;
  *(uint *)(iVar2 + 0x24) = param_1[1];
  *(uint *)(iVar2 + 0x28) = param_1[2];
  if ((uint *)(iVar2 + 0x30) != param_2) {
    *(uint *)(iVar2 + 0x30) = *param_2;
    *(uint *)(iVar2 + 0x34) = param_2[1];
    *(uint *)(iVar2 + 0x38) = param_2[2];
  }
  FUN_0040a000(iVar2);
  if (param_3 == (uint *)0x0) {
    fVar3 = (float)FUN_0040dda0(0x3f490fdb,0x3fc90fdb);
    fVar4 = (float)FUN_0040dda0(0,0x40c90fdb);
    fVar5 = (float10)fcos((float10)fVar4);
    fVar6 = (float10)fcos((float10)fVar3);
    fVar7 = (float10)fsin((float10)fVar4);
    fVar8 = (float10)fsin((float10)fVar3);
    fVar9 = (float10)_DAT_00578eaa;
    *(float *)(iVar2 + 0x27c) = (float)(fVar8 * fVar9);
    *(float *)(iVar2 + 0x278) = (float)(fVar5 * fVar9 * fVar6);
    *(float *)(iVar2 + 0x280) = (float)(fVar7 * fVar9 * fVar6);
  }
  else if ((uint *)(iVar2 + 0x278) != param_3) {
    *(uint *)(iVar2 + 0x278) = *param_3;
    *(uint *)(iVar2 + 0x27c) = param_3[1];
    *(uint *)(iVar2 + 0x280) = param_3[2];
  }
  FUN_004d9720(0x01CC9450,iVar2);
  FUN_004d8c60(0x01CC9450,iVar2);
  if (param_4 != 0) {
    *(uint *)(iVar2 + 0x108) = *(uint *)(param_4 + 0x108);
    *(uint *)(iVar2 + 0x10c) = *(uint *)(param_4 + 0x10c);
    *(uint *)(iVar2 + 0x110) = *(uint *)(param_4 + 0x110);
  }
  *(uint *)(iVar2 + 0xc98) = param_5;
  *(uint *)(iVar2 + 0xfc) = param_6;
  *(uint *)(iVar2 + 0xc9c) = param_6;
  *(uint *)(iVar2 + 0xca0) = param_7;
  return iVar2;
}
