// Name: FUN_005220d0
// Address: 005220d0
// Address Range: [[005220d0, 00522875]]
// Convention: unknown
// Signature: undefined4 FUN_005220d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005220d0(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1134 [888];
  byte auStack_32c [48];
  uint auStack_2fc [12];
  byte auStack_2cc [48];
  uint auStack_29c [12];
  byte auStack_26c [48];
  uint auStack_23c [12];
  uint auStack_20c [12];
  uint auStack_1dc [12];
  byte auStack_1ac [48];
  uint auStack_17c [12];
  uint uStack_14c;
  uint auStack_148 [5];
  uint uStack_134;
  uint auStack_128 [3];
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint auStack_f8 [3];
  uint auStack_ec [3];
  uint auStack_e0 [3];
  uint uStack_d4;
  uint uStack_c8;
  uint uStack_bc;
  uint auStack_b0 [3];
  uint auStack_a4 [3];
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint auStack_80 [3];
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint auStack_68 [3];
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint auStack_44 [3];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = FUN_0042e220(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  fStack_14 = (float)FUN_00433a60(param_1,6);
  if ((float)_DAT_005cd687 < fStack_14) {
    iStack_18 = 0;
    if (*(int *)(param_1 + 0x2628) != 0) {
      iStack_18 = *(int *)(param_1 + 0x2628) + 0x20;
    }
    if (*(int *)(param_1 + 0x20c24) != 0) {
      iStack_18 = *(int *)(param_1 + 0x20c24) + 0x20;
    }
    if (iStack_18 != 0) {
      FUN_0053ebe0(0x01ED78C8);
      FUN_0053ec90(0x01ED78C8,1);
      FUN_0053ec10(0x01ED78C8,param_1);
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0x20c24));
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0x2628));
      FUN_00524800(param_1);
      puVar4 = auStack_148 + 0x29;
      auStack_a4[0] = uStack_d4;
      auStack_148[(uint)bVar6 * -2 + 0x2a] = auStack_148[(uint)bVar6 * -2 + 0x1e];
      auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b] =
           auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
      FUN_00408b00(param_1,puVar4);
      iVar2 = iStack_18;
      puVar4 = &uStack_14c;
      uStack_14c = uStack_c8;
      auStack_148[(uint)bVar6 * -2] = auStack_148[(uint)bVar6 * -2 + 0x21];
      auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
      fStack_14 = (float)FUN_0053cff0(0x01ED78C8,iVar2,puVar4);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      FUN_004a2b70(0x01C73654,iStack_18,&uStack_14c,0x3f800000,0x3f800000,0x01ED78C8 + 0x14d128,
                   fStack_1c,0xff,0,0);
      FUN_0053ebe0(0x01ED78C8);
    }
  }
  iVar2 = *(int *)(param_1 + 0x25b0);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x20c24);
  if ((((iVar2 == 0) || (iVar2 == *(int *)(param_1 + 0x25b0))) ||
      (iVar2 == *(int *)(param_1 + 0x2628))) ||
     (*(int *)(param_1 + 0x2298 + _DAT_01ed3744 * 4) == 0)) goto LAB_00522382;
  iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x20c24),_DAT_01549b0c);
  if ((iVar2 != 0) ||
     (iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x20c24),DAT_007dff04), iVar2 != 0)) {
    FUN_0051f360(param_1,1);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0x10))(*(int *)(param_1 + 0x20c24));
  if (*(int *)(param_1 + 0x20c24) == 0) {
switchD_00522306_caseD_3:
    uVar3 = 0;
  }
  else {
    switch(*(uint *)(*(int *)(param_1 + 0x20c24) + 0x2e0)) {
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
      goto switchD_00522306_caseD_3;
    case 4:
      uVar3 = 7;
      break;
    case 7:
    case 0xc:
      uVar3 = 8;
      break;
    case 9:
    case 10:
      uVar3 = 0xe;
      break;
    case 0xd:
      uVar3 = 0x11;
      break;
    case 0xe:
      uVar3 = 0x12;
    }
  }
  fStack_14 = (float)FUN_00433a60(param_1,uVar3);
  bVar1 = (float)_DAT_005cd68f < fStack_14;
  if ((*(int *)(*(int *)(param_1 + 0x20c24) + 0x2e0) == 1) && (*(int *)(param_1 + 0x2f00) == 8)) {
    bVar1 = true;
  }
  if ((*(int *)(*(int *)(param_1 + 0x20c24) + 0x2e0) == 9) || (bVar1)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0xf0))(*(int *)(param_1 + 0x20c24))
    ;
  }
  FUN_0051f360(param_1,0);
LAB_00522382:
  if ((*(int *)(param_1 + 0x20b58) != 0) && (*(int *)(param_1 + 0x2298 + _DAT_01ed3744 * 4) != 0)) {
    uVar3 = FUN_004db9e0(param_1 + 0x206e8,"CGasMask",_DAT_01d22d48);
    iStack_2c = FUN_0040c840(uVar3);
    if (iStack_2c != 0) {
      FUN_004087f0(param_1);
      iStack_20 = param_1 + 0xfd8;
      if (*(int *)(param_1 + 0x20b58) == 2) {
        uStack_5c = 0xbe0fd3f6;
        uStack_54 = 0;
        uStack_58 = 0xc04507c8;
        uStack_50 = 0x3bc63091;
        puVar4 = auStack_148 + 0x41;
        auStack_44[0] = 0xbe0fd3f6;
        auStack_148[(uint)bVar6 * -2 + 0x42] = auStack_148[(uint)bVar6 * -2 + 0x3c];
        auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x43] =
             auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d];
        uStack_4c = 0x3e9135db;
        uStack_48 = 0x3f09a30a;
        FUN_00583940(auStack_2cc,auStack_148 + 0x3e,puVar4);
        FUN_005833e0(auStack_2cc,_DAT_01ed36dc * 0x30 + iStack_20);
        puVar4 = auStack_1dc;
      }
      else {
        puVar4 = auStack_148 + 0x32;
        uStack_104 = 0x3f94bac7;
        uStack_fc = 0x3d488e0e;
        uStack_100 = 0x3ebc7410;
        uStack_10c = 0xbca5f882;
        auStack_80[0] = 0x3f94bac7;
        auStack_148[(uint)bVar6 * -2 + 0x33] = auStack_148[(uint)bVar6 * -2 + 0x12];
        auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34] =
             auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
        uStack_108 = 0x3e05d9a1;
        uStack_110 = 0x3f033b43;
        FUN_00583940(auStack_32c,auStack_148 + 0xe,puVar4);
        FUN_005833e0(auStack_32c,_DAT_01ed3714 * 0x30 + iStack_20);
        puVar4 = auStack_2fc;
      }
      puVar5 = auStack_20c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      FUN_00583b10(auStack_20c);
      auStack_128[0] = uStack_8c;
      auStack_148[(uint)bVar6 * -2 + 9] = auStack_148[(uint)bVar6 * -2 + 0x30];
      auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31];
      FUN_00584450(auStack_20c);
      puVar4 = auStack_148 + 0x14;
      puVar5 = auStack_148 + 8;
      auStack_f8[0] = uStack_134;
      auStack_148[(uint)bVar6 * -2 + 0x15] = auStack_148[(uint)bVar6 * -2 + 6];
      uVar3 = DAT_005f2afc;
      auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_0046cf30(uVar3,puVar5,puVar4);
      FUN_00462540(iStack_2c + 0x158,0,0xffffffff);
      thunk_FUN_004e5ef0(DAT_005f2afc);
      FUN_00408830(param_1);
    }
  }
  if ((*(int *)(param_1 + 0x20b5c) != 0) && (*(int *)(param_1 + 0x2298 + _DAT_01ed3744 * 4) != 0)) {
    uVar3 = FUN_004db9e0(param_1 + 0x206e8,"CGoggles",_DAT_01d22e40);
    iStack_28 = FUN_0040c840(uVar3);
    if (iStack_28 != 0) {
      FUN_004087f0(param_1);
      iStack_24 = param_1 + 0xfd8;
      if (*(int *)(param_1 + 0x20b5c) == 2) {
        uStack_38 = 0x3da9307b;
        uStack_30 = 0x3c518d91;
        uStack_34 = 0x404904ab;
        uStack_11c = 0x3c17ff3b;
        puVar4 = auStack_148 + 0x1a;
        auStack_e0[0] = 0x3da9307b;
        auStack_148[(uint)bVar6 * -2 + 0x1b] = auStack_148[(uint)bVar6 * -2 + 0x45];
        auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x46];
        uStack_118 = 0x3eac59da;
        uStack_114 = 0x3e5903ea;
        FUN_00583940(auStack_26c,auStack_148 + 0xb,puVar4);
        FUN_005833e0(auStack_26c,_DAT_01ed36dc * 0x30 + iStack_24);
        puVar4 = auStack_23c;
      }
      else {
        puVar4 = auStack_148 + 0x38;
        uStack_98 = 0x3ea30f8c;
        uStack_90 = 0x3b9b6f1c;
        uStack_94 = 0xbe7cc187;
        uStack_70 = 0xbd9786f8;
        auStack_68[0] = 0x3ea30f8c;
        auStack_148[(uint)bVar6 * -2 + 0x39] = auStack_148[(uint)bVar6 * -2 + 0x2d];
        auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a] =
             auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
        uStack_6c = 0xbcb456b4;
        uStack_74 = 0xbedac387;
        FUN_00583940(auStack_1ac,auStack_148 + 0x35,puVar4);
        FUN_005833e0(auStack_1ac,_DAT_01ed3710 * 0x30 + iStack_24);
        puVar4 = auStack_29c;
      }
      puVar5 = auStack_17c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      FUN_00583b10(auStack_17c);
      auStack_ec[0] = auStack_148[2];
      auStack_148[(uint)bVar6 * -2 + 0x18] = auStack_148[(uint)bVar6 * -2 + 3];
      auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
           auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      FUN_00584450(auStack_17c);
      puVar4 = auStack_148 + 0x26;
      puVar5 = auStack_148 + 0x17;
      auStack_b0[0] = uStack_bc;
      auStack_148[(uint)bVar6 * -2 + 0x27] = auStack_148[(uint)bVar6 * -2 + 0x24];
      uVar3 = DAT_005f2afc;
      auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
           auStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
      FUN_0046cf30(uVar3,puVar5,puVar4);
      FUN_00462540(iStack_28 + 0x158,0,0xffffffff);
      thunk_FUN_004e5ef0(DAT_005f2afc);
      FUN_00408830(param_1);
    }
  }
  if (((*(int *)(param_1 + 0x2298 + _DAT_01ed3744 * 4) == 0) &&
      (iVar2 = FUN_0046d540(DAT_005f2afc), iVar2 == 0)) && (0 < *(int *)(param_1 + 0x2f08))) {
    FUN_0043f9d0(param_1 + 0x2f08);
  }
  return 1;
}
