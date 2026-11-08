// Name: FUN_004b22c0
// Address: 004b22c0
// Address Range: [[004b22c0, 004b27e5]]
// Convention: unknown
// Signature: void FUN_004b22c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b22c0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_10a4 [940];
  uint auStack_188 [12];
  uint auStack_158 [3];
  float fStack_14c;
  float fStack_13c;
  float fStack_12c;
  uint auStack_128 [12];
  uint auStack_f8 [6];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint auStack_b8 [2];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
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
  uint uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [2];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar5 = 0;
  iVar1 = (int)param_2 * 0x78 + param_1;
  iVar2 = *(int *)(iVar1 + 0x2620);
  iStack_14 = *(int *)(iVar1 + 0x2618);
  uStack_c0 = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  fStack_a8 = 0.0;
  fStack_ac = 0.0;
  fStack_b0 = 0.0;
  iStack_10 = FUN_0040c8f0(iVar2,DAT_007bcc84);
  if (iStack_10 == 0) goto LAB_004b233f;
  (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
  puVar3 = auStack_f8;
  puVar4 = &fStack_e0;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_5c = fStack_e0 + fStack_d4;
  fStack_58 = fStack_dc + fStack_d0;
  fStack_54 = fStack_d8 + fStack_cc;
  fStack_68 = fStack_e0 + fStack_d4;
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + 0xc) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + 0xf) * 4);
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10) * 4);
  fStack_74 = fStack_68 * _DAT_005d71fb;
  fStack_70 = fStack_64 * _DAT_005d71fb;
  fStack_6c = fStack_60 * _DAT_005d71fb;
  fStack_50 = fStack_68 * _DAT_005d71fb;
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + 0x12) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + 9) * 4);
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4);
  if (&fStack_b0 != &fStack_50) {
    fStack_b0 = fStack_50;
    fStack_ac = fStack_4c;
    fStack_a8 = fStack_48;
  }
  iVar2 = *(int *)(iStack_10 + 0x7d4);
  if (iVar2 == 2) {
    fStack_ac = fStack_d0;
    goto LAB_004b233f;
  }
  if (iVar2 != 1) {
    if (iVar2 == 3) {
      fStack_ac = fStack_d0;
    }
    else {
      _DAT_01d046a0 = "..\\core\\gabriela.cpp";
      _DAT_01d046a4 = 0x944;
      FUN_004e4500("Don't know how to carry light %s",iStack_10);
    }
    goto LAB_004b233f;
  }
  if (param_2 == 0.0) {
    FUN_005932c0(0xbfc90fdb);
    puVar3 = (uint *)&stack0xfffffe48;
LAB_004b2627:
    puVar4 = auStack_188;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  else {
    if (param_2 == 1.4013e-45) {
      FUN_005932c0(0x3fc90fdb);
      puVar3 = (uint *)&stack0xfffffe18;
      goto LAB_004b2627;
    }
    FUN_005918a0(auStack_188);
  }
  FUN_005916b0(auStack_188,iStack_14 * 0x30 + param_1 + 0x1134);
  puVar3 = auStack_128;
  puVar4 = auStack_188;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_00591de0(auStack_188);
  uStack_80 = uStack_bc;
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + 6) * 4) =
       *(uint *)((int)auStack_b8 + (uint)bVar5 * 0xfffffff8);
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -8) * 4);
  if (&uStack_c8 != &uStack_80) {
    uStack_c8 = uStack_80;
    uStack_c4 = uStack_7c;
    uStack_c0 = uStack_78;
  }
  fStack_a8 = fStack_cc * (float)_DAT_005d720b + fStack_d8 * (float)_DAT_005d7203;
LAB_004b233f:
  if (param_2 == 0.0) {
    fStack_34 = param_2;
    uStack_38 = 0xbecccccd;
    fStack_30 = param_2;
    if (&fStack_20 != (float *)&uStack_38) {
      fStack_1c = param_2;
      fStack_18 = param_2;
      fStack_20 = -0.4;
    }
  }
  else if (param_2 == 1.4013e-45) {
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_a4 = 0x3ecccccd;
    if (&fStack_20 != (float *)&uStack_a4) {
      fStack_20 = 0.4;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
    }
  }
  else {
    fStack_1c = 0.0;
    fStack_20 = 0.0;
    fStack_18 = 0.0;
  }
  FUN_005915b0(&fStack_20,param_1 + 0x1134 + iStack_14 * 0x30);
  FUN_00591c10(auStack_158,&fStack_20,&uStack_c8);
  FUN_00591530(&fStack_b0,auStack_158);
  fStack_98 = fStack_44;
  *(uint *)((int)afStack_94 + (uint)bVar5 * 0xfffffff8) =
       *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + 0x15) * 4);
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16) * 4);
  fStack_2c = fStack_20 - fStack_98;
  afStack_28[0] = fStack_1c - afStack_94[0];
  afStack_28[1] = fStack_18 - afStack_94[1];
  afStack_94[2] = fStack_20 - fStack_98;
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + 3) * 4) =
       *(uint *)((int)afStack_28 + (uint)bVar5 * 0xfffffff8);
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
       *(uint *)((int)afStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
  fStack_14c = fStack_14c + afStack_94[2];
  fStack_13c = fStack_13c + afStack_94[3];
  fStack_12c = fStack_12c + fStack_84;
  puVar3 = auStack_158;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
