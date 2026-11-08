// Name: FUN_0056e230
// Address: 0056e230
// Address Range: [[0056e230, 0056e266] [0056e2db, 0056e346] [0056e817, 0056e8a6]]
// Convention: unknown
// Signature: void FUN_0056e230(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e230(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  byte bVar11;
  float afStackY_1070 [986];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float afStack_70 [3];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_34;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  int iStack_14;
  
  bVar11 = 0;
  *(uint *)(param_1 + 0x300) = 0;
  iStack_24 = 0;
  switch(*(uint *)(param_1 + 0x174)) {
  case 0:
    iVar6 = FUN_004d2370(param_1 + 0x20,*(uint *)(param_1 + 0x158));
    if (iVar6 != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      iVar6 = 0;
      if (0 < _DAT_01d5ba00) {
        iVar10 = 0;
        do {
          iVar4 = FUN_0056f080(param_1,*(uint *)(iVar10 + 0x1d5ba04));
          if (iVar4 != 0) {
            uVar5 = *(uint *)(iVar10 + 0x1d5ba04);
            goto LAB_0056e2d5;
          }
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar6 < _DAT_01d5ba00);
      }
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x36c) == 0) {
      uVar5 = FUN_004f6e90(0x01D81080,param_1 + 0x178);
      *(uint *)(param_1 + 0x36c) = uVar5;
    }
    iVar6 = *(int *)(param_1 + 0x36c);
    if ((((iVar6 != 0) && (*(int *)(iVar6 + 0x70) == 1)) &&
        (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar6 + 0x20),
        fVar3 = *(float *)(param_1 + 0x24) - *(float *)(iVar6 + 0x24),
        fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28),
        fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158))) &&
       (iVar6 = FUN_0056f080(param_1,iVar6), iVar6 != 0)) {
      uVar5 = *(uint *)(param_1 + 0x36c);
LAB_0056e2d5:
      iStack_24 = 1;
      *(uint *)(param_1 + 0x300) = uVar5;
    }
    break;
  case 2:
    iVar6 = FUN_004d2370(param_1 + 0x20,*(uint *)(param_1 + 0x158));
    if (iVar6 != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      puVar8 = (uint *)&stack0xffffff48;
      puVar9 = &stack0xffffff30;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      fStack_64 = fStack_d0 + fStack_c4;
      fStack_60 = fStack_cc + fStack_c0;
      fStack_5c = fStack_c8 + fStack_bc;
      fStack_88 = fStack_d0 + fStack_c4;
      afStack_84[(uint)bVar11 * -2] = afStack_84[(uint)bVar11 * -2 + 9];
      afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
      afStack_84[2] = fStack_88 * _DAT_005d660b;
      afStack_84[3] = afStack_84[0] * _DAT_005d660b;
      fStack_74 = afStack_84[1] * _DAT_005d660b;
      afStack_70[0] = fStack_88 * _DAT_005d660b;
      afStack_84[(uint)bVar11 * -2 + 6] = afStack_84[(uint)bVar11 * -2 + 3];
      afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      FUN_00408b80(param_1,afStack_84 + 5);
      fStack_4c = fStack_58;
      afStack_84[(uint)bVar11 * -2 + 0xf] = afStack_84[(uint)bVar11 * -2 + 0xc];
      afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
           afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
      if (&stack0xffffff60 != afStack_84 + 0xe) {
        fStack_a0 = fStack_4c;
        fStack_9c = fStack_48;
        fStack_98 = fStack_44;
      }
      iStack_94 = (int)ROUND(fStack_a0 * _DAT_005e58b0);
      iStack_90 = (int)ROUND(fStack_9c * _DAT_005e58b0);
      iStack_8c = (int)ROUND(fStack_98 * _DAT_005e58b0);
      iStack_14 = FUN_00537e20(0x01ED78C8,&iStack_94,0);
      if ((*(float *)(param_1 + 0x21c) * (float)_DAT_005d6613 <= (float)iStack_14) &&
         ((float)iStack_14 <= *(float *)(param_1 + 0x220) * (float)_DAT_005d6613)) {
        iStack_24 = 1;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
    iStack_24 = *(int *)(param_1 + 0x2f0);
    *(uint *)(param_1 + 0x2f0) = 0;
    break;
  case 6:
    iVar6 = FUN_004d2370(param_1 + 0x20,*(uint *)(param_1 + 0x158));
    if (iVar6 != 0) {
      fStack_34 = *(float *)(param_1 + 0x168) * *(float *)(param_1 + 0x168) +
                  *(float *)(param_1 + 0x164) * *(float *)(param_1 + 0x164) +
                  *(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x160);
      iStack_24 = FUN_004a3790(0x01C73654,param_1 + 0x20,((int)fStack_34 >> 1) + _DAT_01d1a0a4,0,0
                               ,0);
    }
    break;
  case 7:
    param_2 = *(float *)(param_1 + 0x370) - param_2;
    *(float *)(param_1 + 0x370) = param_2;
    if (param_2 < 0.0) {
      *(uint *)(param_1 + 0x370) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x2f8)) {
      iStack_24 = 0;
    }
    else {
      iStack_24 = 1;
    }
    break;
  case 8:
    iVar6 = FUN_004d2370(param_1 + 0x20,*(uint *)(param_1 + 0x158));
    if (iVar6 != 0) {
      iVar10 = 0;
      for (iVar6 = 0; iVar6 < *(int *)(0x01ED78C8 + 0x14d164); iVar6 = iVar6 + 1) {
        iVar4 = *(int *)(iVar10 + 0x14d168 + 0x01ED78C8);
        iVar7 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x5c))(iVar4);
        if ((iVar7 != 0) && (iVar7 = FUN_0056f080(param_1,iVar4), iVar7 != 0)) {
          iStack_24 = 1;
          *(int *)(param_1 + 0x300) = iVar4;
          break;
        }
        iVar10 = iVar10 + 4;
      }
    }
    break;
  case 9:
    iVar6 = FUN_004d2370((float *)(param_1 + 0x20),*(uint *)(param_1 + 0x158));
    if (iVar6 != 0) {
      iStack_1c = param_1 + 0x178;
      iVar10 = 0;
      iStack_20 = param_1 + 0x1c8;
      pfStack_18 = (float *)(param_1 + 0x20);
      for (iVar6 = 0; iVar6 < *(int *)(0x01ED78C8 + 0x14d164); iVar6 = iVar6 + 1) {
        iVar4 = *(int *)(iVar10 + 0x14d168 + 0x01ED78C8);
        fVar1 = *(float *)(iVar4 + 0x20) - *pfStack_18;
        fVar2 = *(float *)(iVar4 + 0x24) - pfStack_18[1];
        fVar3 = *(float *)(iVar4 + 0x28) - pfStack_18[2];
        if ((((fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 <=
               *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158)) && (iVar4 != param_1)) &&
            (iVar7 = FUN_0040c790(iVar4,iStack_20), iVar7 != 0)) &&
           ((iVar7 = FUN_00486a40(iStack_1c,iVar4,0), iVar7 != 0 &&
            (iVar7 = FUN_0056f080(param_1,iVar4), iVar7 != 0)))) {
          iStack_24 = 1;
          *(int *)(param_1 + 0x300) = iVar4;
          break;
        }
        iVar10 = iVar10 + 4;
      }
    }
  }
  switch(*(uint *)(param_1 + 0x15c)) {
  case 0:
  case 1:
    if (iStack_24 == 0) {
      if (*(int *)(param_1 + 0x15c) == 0) {
        *(uint *)(param_1 + 0x16c) = 0;
      }
      goto switchD_0056e2e9_default;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x2ec) != 0) || (iStack_24 == 0)) goto LAB_0056e84c;
    break;
  case 3:
    if ((*(int *)(param_1 + 0x2ec) == 1) && (iStack_24 == 0)) {
      *(uint *)(param_1 + 0x16c) = 1;
      goto switchD_0056e2e9_default;
    }
LAB_0056e84c:
    *(uint *)(param_1 + 0x16c) = 0;
  default:
    goto switchD_0056e2e9_default;
  }
  *(uint *)(param_1 + 0x16c) = 1;
switchD_0056e2e9_default:
  *(int *)(param_1 + 0x2ec) = iStack_24;
  if (*(int *)(param_1 + 0x16c) == 0) {
    FUN_0048c150(0x01C6E360,param_1 + 0x288);
    *(uint *)(param_1 + 0x300) = 0;
    return;
  }
  FUN_0048c150(0x01C6E360,param_1 + 0x224);
  return;
}
