// Name: FUN_0056b770
// Address: 0056b770
// Address Range: [[0056b770, 0056bc71]]
// Convention: unknown
// Signature: undefined4 FUN_0056b770(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056b770(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_10b4 [948];
  byte *puVar7;
  byte auStack_18c [48];
  uint auStack_15c [12];
  uint auStack_12c [12];
  byte auStack_fc [48];
  uint uStack_cc;
  uint auStack_c8 [5];
  uint uStack_b4;
  uint uStack_a8;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint auStack_8c [5];
  uint auStack_78 [3];
  uint auStack_6c [3];
  uint auStack_60 [3];
  uint uStack_54;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = FUN_004254b0(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  fStack_14 = (float)FUN_0042a5a0(param_1,6);
  if ((float)_DAT_005ebc45 < fStack_14) {
    iStack_18 = 0;
    if (*(int *)(param_1 + 0x2698) != 0) {
      iStack_18 = *(int *)(param_1 + 0x2698) + 0x20;
    }
    if (*(int *)(param_1 + 0x25698) != 0) {
      iStack_18 = *(int *)(param_1 + 0x25698) + 0x20;
    }
    if (iStack_18 != 0) {
      FUN_00537e00(0x01E661B8);
      FUN_00537eb0(0x01E661B8,1);
      FUN_00537e30(0x01E661B8,param_1);
      FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x25698));
      FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x2698));
      FUN_0056da90(param_1);
      puVar4 = auStack_c8 + 0xe;
      uStack_90 = uStack_b4;
      auStack_8c[(uint)bVar6 * -2] = auStack_c8[(uint)bVar6 * -2 + 6];
      auStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           auStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_00408cf0(param_1,puVar4);
      iVar2 = iStack_18;
      puVar4 = auStack_8c + 8;
      auStack_6c[0] = uStack_cc;
      auStack_8c[(uint)bVar6 * -2 + 9] = auStack_c8[(uint)bVar6 * -2];
      auStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           auStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fStack_14 = (float)FUN_00536210(0x01E661B8,iVar2,puVar4);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      FUN_0049d840(0x01C3DEB4,iStack_18,auStack_8c + 8,0x3f800000,0x3f800000,
                   0x01E661B8 + 0x14d128,fStack_1c,0xff,0,0);
      FUN_00537e00(0x01E661B8);
    }
  }
  iVar2 = *(int *)(param_1 + 0x25698);
  if ((((iVar2 == 0) || (iVar2 == *(int *)(param_1 + 0x2620))) ||
      (iVar2 == *(int *)(param_1 + 0x2698))) ||
     (*(int *)(param_1 + 0x23f4 + _DAT_0264be88 * 4) == 0)) goto LAB_0056ba07;
  (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x18))(iVar2);
  if (*(int *)(param_1 + 0x25698) == 0) {
switchD_0056b94f_caseD_3:
    uVar3 = 0;
  }
  else {
    switch(*(uint *)(*(int *)(param_1 + 0x25698) + 0x43c)) {
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
      goto switchD_0056b94f_caseD_3;
    case 4:
      uVar3 = 7;
      break;
    case 7:
      uVar3 = 8;
    }
  }
  fStack_14 = (float)FUN_0042a5a0(param_1,uVar3);
  bVar1 = (float)_DAT_005ebc4d < fStack_14;
  if ((*(int *)(*(int *)(param_1 + 0x25698) + 0x43c) == 1) && (*(int *)(param_1 + 0x2d04) == 8)) {
    bVar1 = true;
LAB_0056b99f:
    (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xf8))(*(int *)(param_1 + 0x25698))
    ;
  }
  else if (bVar1) goto LAB_0056b99f;
  if (*(int *)(*(int *)(param_1 + 0x25698) + 0x43c) == 0) {
    FUN_005683d0(param_1,1);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0x18))(*(int *)(param_1 + 0x25698))
    ;
    if (bVar1) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xf8))
                (*(int *)(param_1 + 0x25698));
    }
  }
  FUN_005683d0(param_1,0);
LAB_0056ba07:
  if (((*(int *)(param_1 + 0x255e8) != 0) && (*(int *)(param_1 + 0x23f4 + _DAT_0264be88 * 4) != 0))
     && (iStack_24 = *(int *)(param_1 + 0x247d4), iStack_24 != 0)) {
    FUN_004089d0(param_1);
    iStack_20 = param_1 + 0x1134;
    if (*(int *)(param_1 + 0x255e8) == 2) {
      puVar4 = auStack_8c + 0xb;
      uStack_30 = 0xbe0fd3f6;
      uStack_28 = 0;
      uStack_2c = 0xc04507c8;
      uStack_44 = 0x3e9135db;
      uStack_48 = 0x3bc63091;
      puVar5 = auStack_8c + 0x11;
      puVar7 = auStack_18c;
      uStack_40 = 0x3f09a30a;
      auStack_60[0] = 0xbe0fd3f6;
      auStack_8c[(uint)bVar6 * -2 + 0xc] = auStack_8c[(uint)bVar6 * -2 + 0x18];
      auStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           auStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      FUN_00591c10(puVar7,puVar5,puVar4);
      FUN_005916b0(auStack_18c,_DAT_0264be30 * 0x30 + iStack_20);
      puVar4 = (uint *)&stack0xfffffe44;
    }
    else {
      uStack_3c = 0x3f94bac7;
      uStack_34 = 0x3d488e0e;
      puVar4 = auStack_8c + 2;
      uStack_38 = 0x3ebc7410;
      auStack_8c[2] = 0x3f94bac7;
      auStack_8c[(uint)bVar6 * -2 + 3] = auStack_8c[(uint)bVar6 * -2 + 0x15];
      auStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           auStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
      uStack_94 = 0x3e05d9a1;
      uStack_9c = 0x3f033b43;
      uStack_98 = 0xbca5f882;
      FUN_00591c10(auStack_fc,auStack_c8 + 0xb,puVar4);
      FUN_005916b0(auStack_fc,_DAT_0264be68 * 0x30 + iStack_20);
      puVar4 = auStack_12c;
    }
    puVar5 = auStack_15c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_00591de0(auStack_15c);
    auStack_c8[2] = uStack_54;
    auStack_c8[(uint)bVar6 * -2 + 3] = auStack_8c[(uint)bVar6 * -2 + 0xf];
    auStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         auStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    FUN_00592720(auStack_15c);
    puVar4 = auStack_8c + 5;
    auStack_78[0] = uStack_a8;
    auStack_8c[(uint)bVar6 * -2 + 6] = auStack_c8[(uint)bVar6 * -2 + 9];
    auStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         auStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    FUN_0046b350(DAT_0060b280,auStack_c8 + 2,puVar4);
    FUN_0044fcc0(iStack_24 + 0x2b4,0,0xffffffff);
    thunk_FUN_004e9810(DAT_0060b280);
    FUN_00408a10(param_1);
  }
  if (((*(int *)(param_1 + 0x23f4 + _DAT_0264be88 * 4) == 0) &&
      (iVar2 = FUN_0046b960(DAT_0060b280), iVar2 == 0)) && (0 < *(int *)(param_1 + 0x2d0c))) {
    FUN_005b1550(param_1 + 0x2d0c);
  }
  return 1;
}
