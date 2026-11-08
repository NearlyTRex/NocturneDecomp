// Name: FUN_005779d0
// Address: 005779d0
// Address Range: [[005779d0, 00577a06] [00577a7b, 00577ae6] [00577fb5, 00578044]]
// Convention: unknown
// Signature: void FUN_005779d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005779d0(int param_1,float param_2)

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
  float afStackY_1070 [987];
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
  *(uint *)(param_1 + 0x45c) = 0;
  iStack_24 = 0;
  switch(*(uint *)(param_1 + 0x2d0)) {
  case 0:
    iVar6 = FUN_004ce100(param_1 + 0x20,*(uint *)(param_1 + 0x2b4));
    if (iVar6 != 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
      iVar6 = 0;
      if (0 < _DAT_01cedee0) {
        iVar10 = 0;
        do {
          iVar4 = FUN_00578800(param_1,*(uint *)(iVar10 + 0x1cedee4));
          if (iVar4 != 0) {
            uVar5 = *(uint *)(iVar10 + 0x1cedee4);
            goto LAB_00577a75;
          }
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar6 < _DAT_01cedee0);
      }
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x4c8) == 0) {
      uVar5 = FUN_004fc740(0x01D182F0,param_1 + 0x2d4);
      *(uint *)(param_1 + 0x4c8) = uVar5;
    }
    iVar6 = *(int *)(param_1 + 0x4c8);
    if ((((iVar6 != 0) && (*(int *)(iVar6 + 0x70) == 1)) &&
        (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar6 + 0x20),
        fVar3 = *(float *)(param_1 + 0x24) - *(float *)(iVar6 + 0x24),
        fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28),
        fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        *(float *)(param_1 + 0x2b4) * *(float *)(param_1 + 0x2b4))) &&
       (iVar6 = FUN_00578800(param_1,iVar6), iVar6 != 0)) {
      uVar5 = *(uint *)(param_1 + 0x4c8);
LAB_00577a75:
      iStack_24 = 1;
      *(uint *)(param_1 + 0x45c) = uVar5;
    }
    break;
  case 2:
    iVar6 = FUN_004ce100(param_1 + 0x20,*(uint *)(param_1 + 0x2b4));
    if (iVar6 != 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
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
      afStack_84[2] = fStack_88 * _DAT_005ecd82;
      afStack_84[3] = afStack_84[0] * _DAT_005ecd82;
      fStack_74 = afStack_84[1] * _DAT_005ecd82;
      afStack_70[0] = fStack_88 * _DAT_005ecd82;
      afStack_84[(uint)bVar11 * -2 + 6] = afStack_84[(uint)bVar11 * -2 + 3];
      afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      FUN_00408d70(param_1,afStack_84 + 5);
      fStack_4c = fStack_58;
      afStack_84[(uint)bVar11 * -2 + 0xf] = afStack_84[(uint)bVar11 * -2 + 0xc];
      afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
           afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
      if (&stack0xffffff60 != afStack_84 + 0xe) {
        fStack_a0 = fStack_4c;
        fStack_9c = fStack_48;
        fStack_98 = fStack_44;
      }
      iStack_94 = (int)ROUND(fStack_a0 * _DAT_005fd200);
      iStack_90 = (int)ROUND(fStack_9c * _DAT_005fd200);
      iStack_8c = (int)ROUND(fStack_98 * _DAT_005fd200);
      iStack_14 = FUN_005311e0(0x01E661B8,&iStack_94,0);
      if ((*(float *)(param_1 + 0x378) * (float)_DAT_005ecd8a <= (float)iStack_14) &&
         ((float)iStack_14 <= *(float *)(param_1 + 0x37c) * (float)_DAT_005ecd8a)) {
        iStack_24 = 1;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
    iStack_24 = *(int *)(param_1 + 0x44c);
    *(uint *)(param_1 + 0x44c) = 0;
    break;
  case 6:
    iVar6 = FUN_004ce100(param_1 + 0x20,*(uint *)(param_1 + 0x2b4));
    if (iVar6 != 0) {
      fStack_34 = *(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x2c4) +
                  *(float *)(param_1 + 0x2c0) * *(float *)(param_1 + 0x2c0) +
                  *(float *)(param_1 + 700) * *(float *)(param_1 + 700);
      iStack_24 = FUN_0049e3e0(0x01C3DEB4,param_1 + 0x20,((int)fStack_34 >> 1) + _DAT_01caf5b4,0,0
                              );
    }
    break;
  case 7:
    param_2 = *(float *)(param_1 + 0x4cc) - param_2;
    *(float *)(param_1 + 0x4cc) = param_2;
    if (param_2 < 0.0) {
      *(uint *)(param_1 + 0x4cc) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x454)) {
      iStack_24 = 0;
    }
    else {
      iStack_24 = 1;
    }
    break;
  case 8:
    iVar6 = FUN_004ce100(param_1 + 0x20,*(uint *)(param_1 + 0x2b4));
    if (iVar6 != 0) {
      iVar10 = 0;
      for (iVar6 = 0; iVar6 < *(int *)(0x01E661B8 + 0x14d164); iVar6 = iVar6 + 1) {
        iVar4 = *(int *)(iVar10 + 0x14d168 + 0x01E661B8);
        iVar7 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 100))(iVar4);
        if ((iVar7 != 0) && (iVar7 = FUN_00578800(param_1,iVar4), iVar7 != 0)) {
          iStack_24 = 1;
          *(int *)(param_1 + 0x45c) = iVar4;
          break;
        }
        iVar10 = iVar10 + 4;
      }
    }
    break;
  case 9:
    iVar6 = FUN_004ce100((float *)(param_1 + 0x20),*(uint *)(param_1 + 0x2b4));
    if (iVar6 != 0) {
      iStack_1c = param_1 + 0x2d4;
      iVar10 = 0;
      iStack_20 = param_1 + 0x324;
      pfStack_18 = (float *)(param_1 + 0x20);
      for (iVar6 = 0; iVar6 < *(int *)(0x01E661B8 + 0x14d164); iVar6 = iVar6 + 1) {
        iVar4 = *(int *)(iVar10 + 0x14d168 + 0x01E661B8);
        fVar1 = *(float *)(iVar4 + 0x20) - *pfStack_18;
        fVar2 = *(float *)(iVar4 + 0x24) - pfStack_18[1];
        fVar3 = *(float *)(iVar4 + 0x28) - pfStack_18[2];
        if ((((fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 <=
               *(float *)(param_1 + 0x2b4) * *(float *)(param_1 + 0x2b4)) && (iVar4 != param_1)) &&
            (iVar7 = FUN_0040c840(iVar4,iStack_20), iVar7 != 0)) &&
           ((iVar7 = FUN_00485840(iStack_1c,iVar4,0), iVar7 != 0 &&
            (iVar7 = FUN_00578800(param_1,iVar4), iVar7 != 0)))) {
          iStack_24 = 1;
          *(int *)(param_1 + 0x45c) = iVar4;
          break;
        }
        iVar10 = iVar10 + 4;
      }
    }
  }
  switch(*(uint *)(param_1 + 0x2b8)) {
  case 0:
  case 1:
    if (iStack_24 == 0) {
      if (*(int *)(param_1 + 0x2b8) == 0) {
        *(uint *)(param_1 + 0x2c8) = 0;
      }
      goto switchD_00577a89_default;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x448) != 0) || (iStack_24 == 0)) goto LAB_00577fea;
    break;
  case 3:
    if ((*(int *)(param_1 + 0x448) == 1) && (iStack_24 == 0)) {
      *(uint *)(param_1 + 0x2c8) = 1;
      goto switchD_00577a89_default;
    }
LAB_00577fea:
    *(uint *)(param_1 + 0x2c8) = 0;
  default:
    goto switchD_00577a89_default;
  }
  *(uint *)(param_1 + 0x2c8) = 1;
switchD_00577a89_default:
  *(int *)(param_1 + 0x448) = iStack_24;
  if (*(int *)(param_1 + 0x2c8) == 0) {
    FUN_004894f0(0x01C38BC0,param_1 + 0x3e4);
    *(uint *)(param_1 + 0x45c) = 0;
    return;
  }
  FUN_004894f0(0x01C38BC0,param_1 + 0x380);
  return;
}
