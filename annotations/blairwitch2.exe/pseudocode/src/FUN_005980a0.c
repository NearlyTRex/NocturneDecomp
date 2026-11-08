// Name: FUN_005980a0
// Address: 005980a0
// Address Range: [[005980a0, 005984d7]]
// Convention: unknown
// Signature: void FUN_005980a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005980a0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *unaff_ESI;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1100 [955];
  byte *puVar7;
  uint auStack_1d8 [3];
  float fStack_1cc;
  float fStack_1bc;
  float fStack_1ac;
  uint auStack_1a8 [12];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint auStack_148 [6];
  uint auStack_130 [6];
  float fStack_118;
  float afStack_114 [2];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  float fStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  uint auStack_cc [2];
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float afStack_b4 [2];
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float afStack_9c [2];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  uint uStack_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_1c;
  int iStack_10;
  
  bVar6 = 0;
  iVar2 = param_2 * 0x78 + param_1;
  iVar3 = *(int *)(iVar2 + 0x2620);
  iStack_10 = *(int *)(iVar2 + 0x2618);
  uVar1 = *(uint *)(param_1 + 0x10b0c);
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x24))(iVar3);
    puVar4 = auStack_130;
    puVar5 = &fStack_178;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    fStack_b8 = fStack_178 + fStack_16c;
    afStack_b4[0] = fStack_174 + fStack_168;
    afStack_b4[1] = fStack_170 + fStack_164;
    fStack_7c = fStack_178 + fStack_16c;
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 9) * 4) =
         *(uint *)((int)afStack_b4 + (uint)bVar6 * 0xfffffff8);
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 10) * 4) =
         *(uint *)((int)afStack_b4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
    fStack_88 = fStack_7c * _DAT_005ef1c6;
    fStack_84 = fStack_78 * _DAT_005ef1c6;
    fStack_80 = fStack_74 * _DAT_005ef1c6;
    fStack_40 = fStack_7c * _DAT_005ef1c6;
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 0x18) * 4) =
         *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 6) * 4);
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19) * 4) =
         *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 7) * 4);
    if (&fStack_dc != &fStack_40) {
      fStack_dc = fStack_40;
      uStack_d8 = uStack_3c;
      uStack_d4 = uStack_38;
    }
    puVar4 = (uint *)(param_2 * 0x78 + param_1 + 0x2624);
    puVar5 = auStack_1a8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    iVar2 = FUN_005b8da0(param_1 + 0x2514,&DAT_005ef1c2,3);
    if (iVar2 == 0) {
      uStack_a4 = 0xbf7c6a90;
      uStack_a8 = 0x3f7343c8;
      uStack_ac = 0xbf93b0b4;
    }
    else {
      uStack_a4 = 0;
      uStack_a8 = 0x3f676c8b;
      uStack_ac = 0x3e1eb852;
    }
    FUN_00591c10(auStack_1a8,&DAT_0265370c,&uStack_ac);
    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x24))(iVar3);
    puVar4 = auStack_148;
    puVar5 = &fStack_160;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_0040d340(&fStack_4c);
    puVar7 = (byte *)&fStack_94;
    fStack_4c = fStack_160 + fStack_154;
    fStack_48 = fStack_15c + fStack_150;
    fStack_44 = fStack_158 + fStack_14c;
    fStack_118 = fStack_160 + fStack_154;
    *(uint *)((int)afStack_114 + (uint)bVar6 * 0xfffffff8) =
         *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 0x15) * 4);
    *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + -5) * 4) =
         *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16) * 4);
    FUN_0040d340(puVar7);
    fStack_94 = fStack_118 * _DAT_005ef1c6;
    fStack_90 = afStack_114[0] * _DAT_005ef1c6;
    fStack_8c = afStack_114[1] * _DAT_005ef1c6;
    afStack_fc[2] = fStack_118 * _DAT_005ef1c6;
    *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + 3) * 4) =
         *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 3) * 4);
    *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4) =
         *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
    fStack_ec = fStack_158 + (float)_DAT_005ef1ca;
    fStack_34 = afStack_fc[2];
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 0x1b) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + 3) * 4);
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
    if (&fStack_dc != &fStack_34) {
      fStack_dc = fStack_34;
      uStack_d8 = uStack_30;
      uStack_d4 = uStack_2c;
    }
  }
  iVar3 = iStack_10 * 0x30 + param_1 + 0x1134;
  if (iStack_10 == *(int *)(param_1 + 0x10b8c)) {
    uStack_e8 = 0xbecccccd;
    uStack_e4 = 0;
    uStack_e0 = 0;
    FUN_00591530(&uStack_e8,iVar3);
    fStack_70 = fStack_28;
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 0xc) * 4) =
         *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 0x1e) * 4);
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd) * 4) =
         *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f) * 4);
    if (&fStack_10c != &fStack_70) {
      fStack_10c = fStack_70;
      fStack_108 = fStack_6c;
      fStack_104 = fStack_68;
    }
  }
  else {
    uStack_c4 = 0x3ecccccd;
    uStack_c0 = 0;
    uStack_bc = 0;
    FUN_00591530(&uStack_c4,iVar3);
    fStack_a0 = fStack_d0;
    *(uint *)((int)afStack_9c + (uint)bVar6 * 0xfffffff8) =
         *(uint *)((int)auStack_cc + (uint)bVar6 * 0xfffffff8);
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
         *(uint *)((int)auStack_cc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
    if (&fStack_10c != &fStack_a0) {
      fStack_10c = fStack_a0;
      fStack_108 = afStack_9c[0];
      fStack_104 = afStack_9c[1];
    }
  }
  FUN_005916b0(auStack_1a8,param_1 + 0x1134 + iStack_10 * 0x30);
  puVar4 = (uint *)&stack0xfffffdf8;
  puVar5 = auStack_1d8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_00591530(&fStack_dc,auStack_1d8);
  fStack_58 = fStack_1c;
  *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 0x12) * 4) =
       *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 0x21) * 4);
  *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13) * 4) =
       *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22) * 4);
  fStack_100 = fStack_10c - fStack_58;
  afStack_fc[0] = fStack_108 - fStack_54;
  afStack_fc[1] = fStack_104 - fStack_50;
  fStack_64 = fStack_10c - fStack_58;
  *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + 0xf) * 4) =
       *(uint *)((int)afStack_fc + (uint)bVar6 * 0xfffffff8);
  *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10) * 4) =
       *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
  fStack_1cc = fStack_1cc + fStack_64;
  fStack_1bc = fStack_1bc + fStack_60;
  fStack_1ac = fStack_1ac + fStack_5c;
  puVar4 = auStack_1d8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
