// Name: FUN_00471af0
// Address: 00471af0
// Address Range: [[00471af0, 0047221e]]
// Convention: unknown
// Signature: undefined4 FUN_00471af0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00471af0(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1134 [888];
  byte auStack_23c [48];
  byte auStack_20c [48];
  byte auStack_1dc [48];
  byte auStack_1ac [48];
  uint auStack_17c [12];
  uint uStack_14c;
  uint auStack_148 [5];
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint auStack_118 [5];
  uint auStack_104 [3];
  uint auStack_f8 [3];
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint auStack_ac [5];
  uint auStack_98 [3];
  uint auStack_8c [3];
  uint uStack_80;
  uint uStack_74;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint auStack_4c [5];
  uint auStack_38 [3];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = FUN_0042f240(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  fStack_14 = (float)FUN_00434590(param_1,6);
  if ((float)_DAT_005da2a4 < fStack_14) {
    iStack_18 = 0;
    if (*(int *)(param_1 + 0x2628) != 0) {
      iStack_18 = *(int *)(param_1 + 0x2628) + 0x20;
    }
    if (*(int *)(param_1 + 0x20004) != 0) {
      iStack_18 = *(int *)(param_1 + 0x20004) + 0x20;
    }
    if (iStack_18 != 0) {
      FUN_00559220(0x01E82168);
      FUN_005592d0(0x01E82168,1);
      FUN_00559250(0x01E82168,param_1);
      FUN_00559250(0x01E82168,*(uint *)(param_1 + 0x20004));
      FUN_00559250(0x01E82168,*(uint *)(param_1 + 0x2628));
      FUN_004742a0(param_1);
      puVar4 = auStack_118 + 8;
      auStack_f8[0] = uStack_d4;
      auStack_118[(uint)bVar6 * -2 + 9] = auStack_118[(uint)bVar6 * -2 + 0x12];
      auStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           auStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      FUN_00408ac0(param_1,puVar4);
      iVar2 = iStack_18;
      puVar4 = auStack_148 + 0xb;
      uStack_11c = auStack_148[2];
      auStack_118[(uint)bVar6 * -2] = auStack_148[(uint)bVar6 * -2 + 3];
      auStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      fStack_14 = (float)FUN_00557630(0x01E82168,iVar2,puVar4);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      FUN_004b6140(0x01C57074,iStack_18,auStack_148 + 0xb,0x3f800000,0x3f800000,
                   0x01E82168 + 0x14d128,fStack_1c,0xff,0,0);
      FUN_00559220(0x01E82168);
    }
  }
  iVar2 = *(int *)(param_1 + 0x20004);
  if ((((iVar2 == 0) || (iVar2 == *(int *)(param_1 + 0x25b0))) ||
      (iVar2 == *(int *)(param_1 + 0x2628))) ||
     (*(int *)(param_1 + 0x2298 + _DAT_01b6886c * 4) == 0)) goto LAB_00471d62;
  (**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2);
  if (*(int *)(param_1 + 0x20004) == 0) {
switchD_00471ce6_caseD_3:
    uVar3 = 0;
  }
  else {
    switch(*(uint *)(*(int *)(param_1 + 0x20004) + 0x2e0)) {
    case 0:
    case 5:
      uVar3 = 2;
      break;
    case 1:
      uVar3 = 4;
      break;
    case 2:
      uVar3 = 5;
      break;
    default:
      goto switchD_00471ce6_caseD_3;
    case 4:
      uVar3 = 7;
      break;
    case 7:
      uVar3 = 8;
      break;
    case 9:
    case 10:
      uVar3 = 0xe;
    }
  }
  fStack_14 = (float)FUN_00434590(param_1,uVar3);
  bVar1 = (float)_DAT_005da2ac < fStack_14;
  if ((*(int *)(*(int *)(param_1 + 0x20004) + 0x2e0) == 1) && (*(int *)(param_1 + 0x2c98) == 8)) {
    bVar1 = true;
  }
  if ((*(int *)(*(int *)(param_1 + 0x20004) + 0x2e0) == 9) || (bVar1)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xf0))(*(int *)(param_1 + 0x20004))
    ;
  }
  FUN_0046f610(param_1,0);
LAB_00471d62:
  if ((*(int *)(param_1 + 0x1ff54) != 0) && (*(int *)(param_1 + 0x2298 + _DAT_01b6886c * 4) != 0)) {
    uVar3 = FUN_004f8c90(param_1 + 0x1fae8,"CGasMask",_DAT_01cd0d40);
    iStack_28 = FUN_0040c600(uVar3);
    if (iStack_28 != 0) {
      FUN_004087b0(param_1);
      iStack_20 = param_1 + 0xfd8;
      if (*(int *)(param_1 + 0x1ff54) == 2) {
        uStack_c8 = 0xbe0fd3f6;
        uStack_c0 = 0;
        uStack_c4 = 0xc04507c8;
        uStack_bc = 0x3bc63091;
        puVar4 = auStack_ac + 5;
        auStack_98[0] = 0xbe0fd3f6;
        auStack_ac[(uint)bVar6 * -2 + 6] = auStack_118[(uint)bVar6 * -2 + 0x15];
        auStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             auStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
        uStack_b8 = 0x3e9135db;
        uStack_b4 = 0x3f09a30a;
        FUN_005b5760(auStack_20c,auStack_118 + 0x17,puVar4);
        FUN_005b5200(auStack_20c,_DAT_01b68814 * 0x30 + iStack_20);
        puVar4 = (uint *)&stack0xfffffd64;
      }
      else {
        puVar4 = auStack_ac + 2;
        uStack_e0 = 0x3f94bac7;
        uStack_d8 = 0x3d488e0e;
        uStack_dc = 0x3ebc7410;
        uStack_124 = 0xbca5f882;
        auStack_ac[2] = 0x3f94bac7;
        auStack_ac[(uint)bVar6 * -2 + 3] = auStack_118[(uint)bVar6 * -2 + 0xf];
        auStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             auStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        uStack_120 = 0x3e05d9a1;
        uStack_128 = 0x3f033b43;
        FUN_005b5760(auStack_1dc,auStack_148 + 8,puVar4);
        FUN_005b5200(auStack_1dc,_DAT_01b6884c * 0x30 + iStack_20);
        puVar4 = (uint *)&stack0xfffffcd4;
      }
      puVar5 = (uint *)&stack0xfffffd04;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      FUN_005b5930(&stack0xfffffd04);
      auStack_8c[0] = uStack_74;
      auStack_ac[(uint)bVar6 * -2 + 9] = auStack_ac[(uint)bVar6 * -2 + 0xf];
      auStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           auStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      FUN_005b6270(&stack0xfffffd04);
      puVar4 = auStack_ac + 0x17;
      puVar5 = auStack_ac + 8;
      uStack_50 = uStack_80;
      auStack_4c[(uint)bVar6 * -2] = auStack_ac[(uint)bVar6 * -2 + 0xc];
      uVar3 = DAT_00612560;
      auStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           auStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      FUN_00483850(uVar3,puVar5,puVar4);
      FUN_004688a0(iStack_28 + 0x158,0,0xffffffff);
      thunk_FUN_005084b0(DAT_00612560);
      FUN_004087f0(param_1);
    }
  }
  if ((*(int *)(param_1 + 0x1ff58) != 0) && (*(int *)(param_1 + 0x2298 + _DAT_01b6886c * 4) != 0)) {
    uVar3 = FUN_004f8c90(param_1 + 0x1fae8,"CGoggles",_DAT_01cd0e38);
    iStack_2c = FUN_0040c600(uVar3);
    if (iStack_2c != 0) {
      FUN_004087b0(param_1);
      iStack_24 = param_1 + 0xfd8;
      if (*(int *)(param_1 + 0x1ff58) == 2) {
        uStack_134 = 0x3da9307b;
        uStack_12c = 0x3c518d91;
        uStack_130 = 0x404904ab;
        uStack_68 = 0x3c17ff3b;
        puVar4 = &uStack_14c;
        uStack_14c = 0x3da9307b;
        auStack_148[(uint)bVar6 * -2] = auStack_148[(uint)bVar6 * -2 + 6];
        auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        uStack_64 = 0x3eac59da;
        uStack_60 = 0x3e5903ea;
        FUN_005b5760(auStack_23c,auStack_ac + 0x11,puVar4);
        FUN_005b5200(auStack_23c,_DAT_01b68814 * 0x30 + iStack_24);
        puVar4 = (uint *)&stack0xfffffd34;
      }
      else {
        puVar4 = auStack_4c + 5;
        uStack_ec = 0xbe59e27a;
        uStack_e4 = 0xbf8480c7;
        uStack_e8 = 0x3eeac8e7;
        uStack_58 = 0xbe996873;
        auStack_38[0] = 0xbe59e27a;
        auStack_4c[(uint)bVar6 * -2 + 6] = auStack_118[(uint)bVar6 * -2 + 0xc];
        auStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             auStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        uStack_54 = 0xbce677ce;
        uStack_5c = 0x3e87a398;
        FUN_005b5760(auStack_1ac,auStack_ac + 0x14,puVar4);
        FUN_005b5200(auStack_1ac,_DAT_01b6884c * 0x30 + iStack_24);
        puVar4 = auStack_17c;
      }
      puVar5 = (uint *)&stack0xfffffd94;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      FUN_005b5930(&stack0xfffffd94);
      auStack_118[2] = uStack_b0;
      auStack_118[(uint)bVar6 * -2 + 3] = auStack_ac[(uint)bVar6 * -2];
      auStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           auStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      FUN_005b6270(&stack0xfffffd94);
      puVar4 = auStack_118 + 5;
      puVar5 = auStack_118 + 2;
      auStack_104[0] = auStack_4c[2];
      auStack_118[(uint)bVar6 * -2 + 6] = auStack_4c[(uint)bVar6 * -2 + 3];
      uVar3 = DAT_00612560;
      auStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           auStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      FUN_00483850(uVar3,puVar5,puVar4);
      FUN_004688a0(iStack_2c + 0x158,0,0xffffffff);
      thunk_FUN_005084b0(DAT_00612560);
      FUN_004087f0(param_1);
    }
  }
  if (((*(int *)(param_1 + 0x2298 + _DAT_01b6886c * 4) == 0) &&
      (iVar2 = FUN_00483e60(DAT_00612560), iVar2 == 0)) && (0 < *(int *)(param_1 + 0x2ca0))) {
    FUN_00441d70(param_1 + 0x2ca0);
  }
  return 1;
}
