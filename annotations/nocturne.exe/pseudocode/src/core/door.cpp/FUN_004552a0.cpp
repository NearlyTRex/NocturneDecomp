// Name: FUN_004552a0
// Address: 004552a0
// Address Range: [[004552a0, 0045562f]]
// Convention: unknown
// Signature: void FUN_004552a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004552a0(int param_1)

{
  float fVar1;
  uint *puVar2;
  float *pfVar3;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [3];
  byte auStack_98 [12];
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  byte auStack_74 [12];
  byte auStack_68 [12];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  byte auStack_50 [12];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  byte auStack_38 [12];
  byte auStack_2c [12];
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_c8);
  switch(*(uint *)(param_1 + 0x2d0)) {
  case 0:
    *(uint *)(param_1 + 0x30) = 0;
    *(uint *)(param_1 + 0x38) = 0;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x98c);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x990);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x994);
    if (*(int *)(param_1 + 0x2dc) == 0) {
      fVar1 = *(float *)(param_1 + 0x9a4) * (float)_DAT_0057d0aa + *(float *)(param_1 + 0x99c);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x99c) - *(float *)(param_1 + 0x9a4) * (float)_DAT_0057d0aa;
    }
    *(float *)(param_1 + 0x34) = fVar1;
    FUN_0040a000(param_1);
    if (ABS(local_c8) <= ABS(fStack_bc)) {
      local_c8 = fStack_bc + (float)_DAT_0057d0ba;
    }
    else {
      local_c8 = local_c8 + (float)_DAT_0057d0c2;
    }
    *(float *)(param_1 + 0x9b4) = local_c8;
    *(uint *)(param_1 + 0x9b8) = 0x40600000;
    *(uint *)(param_1 + 0x9bc) = 0;
    puVar2 = (uint *)FUN_0040a240(param_1,auStack_50,param_1 + 0x9b4);
    break;
  case 1:
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x990) + *(float *)(param_1 + 0x9a4);
    uStack_40 = 0x40600000;
    uStack_44 = 0;
    uStack_3c = 0;
    puVar2 = (uint *)FUN_0040a240(param_1,auStack_74,&uStack_44);
    break;
  case 2:
    if (*(int *)(param_1 + 0x2d4) == 1) {
      afStack_a4[0] = *(float *)(param_1 + 0x9a4);
    }
    else {
      afStack_a4[0] = -*(float *)(param_1 + 0x9a4);
    }
    afStack_a4[1] = 0.0;
    afStack_a4[2] = 0.0;
    pfVar3 = (float *)FUN_0044da40(param_1 + 0x3c,auStack_2c,afStack_a4);
    fStack_80 = *(float *)(param_1 + 0x98c) + *pfVar3;
    fStack_7c = *(float *)(param_1 + 0x990) + pfVar3[1];
    fStack_78 = *(float *)(param_1 + 0x994) + pfVar3[2];
    *(float *)(param_1 + 0x20) = fStack_80;
    *(float *)(param_1 + 0x24) = fStack_7c;
    *(float *)(param_1 + 0x28) = fStack_78;
    uStack_8c = 0;
    uStack_88 = 0x40600000;
    uStack_84 = 0;
    puVar2 = (uint *)FUN_0040a240(param_1,auStack_68,&uStack_8c);
    break;
  case 3:
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x9a4) * (float)_DAT_0057d0aa;
    FUN_0040a000(param_1);
    fStack_b0 = local_c8 + fStack_bc;
    fStack_ac = fStack_c4 + fStack_b8;
    fStack_5c = fStack_b0 * _DAT_0057d0b2;
    fStack_58 = fStack_ac * _DAT_0057d0b2;
    fStack_a8 = fStack_c0 + fStack_b4;
    fStack_54 = fStack_a8 * _DAT_0057d0b2;
    puVar2 = (uint *)FUN_0040a240(param_1,auStack_38,&fStack_5c);
    break;
  default:
    _DAT_01cc4800 = "..\\core\\door.cpp";
    _DAT_01cc4804 = 0xf8;
    FUN_004c8440("CDoor::reposition - Unknown type");
    goto LAB_00455399;
  }
  if ((uint *)(param_1 + 0x9b4) != puVar2) {
    *(uint *)(param_1 + 0x9b4) = *puVar2;
    *(uint *)(param_1 + 0x9b8) = puVar2[1];
    *(uint *)(param_1 + 0x9bc) = puVar2[2];
  }
LAB_00455399:
  if (0.0 < *(float *)(param_1 + 0x9c4)) {
    uStack_20 = FUN_0040dda0(-*(float *)(param_1 + 0x9c4),*(uint *)(param_1 + 0x9c4));
    uStack_1c = 0;
    uStack_14 = uStack_20;
    uStack_18 = FUN_0040dda0(-*(float *)(param_1 + 0x9c4),*(uint *)(param_1 + 0x9c4));
    uStack_14 = uStack_18;
    pfVar3 = (float *)FUN_0040a200(param_1,auStack_98,&uStack_20);
    *(float *)(param_1 + 0x20) = *pfVar3 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = pfVar3[1] + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = pfVar3[2] + *(float *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x9c4) = 0;
    return;
  }
  return;
}
