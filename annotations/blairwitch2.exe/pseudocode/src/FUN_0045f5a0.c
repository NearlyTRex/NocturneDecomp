// Name: FUN_0045f5a0
// Address: 0045f5a0
// Address Range: [[0045f5a0, 0045fd09]]
// Convention: unknown
// Signature: void FUN_0045f5a0(int param_1,float param_2)

#include "nocturne.h"

void FUN_0045f5a0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_108c [991];
  byte auStack_108 [20];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float afStack_e0 [6];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [5];
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float fStack_80;
  float afStack_7c [8];
  int iStack_5c;
  float fStack_58;
  int iStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float *pfStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  uStack_8c = *(uint *)(param_1 + 0x20);
  uStack_88 = *(uint *)(param_1 + 0x24);
  uStack_84 = *(uint *)(param_1 + 0x28);
  fStack_58 = *(float *)(param_1 + 0xb08);
  if (1 < *(int *)(param_1 + 0xb24)) {
    return;
  }
  switch(*(uint *)(param_1 + 0x43c)) {
  case 0:
    iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x444);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x43c) = 1;
      if (*(char *)(param_1 + 0x9c0) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x9c0);
      }
      FUN_005380c0(0x01E661B8,param_1);
    }
    *(uint *)(param_1 + 0xb08) = 0;
    break;
  case 1:
    *(float *)(param_1 + 0xb08) =
         (param_2 * *(float *)(param_1 + 0xb0c)) / *(float *)(param_1 + 0xb10) + fStack_58;
    if (*(float *)(param_1 + 0xb0c) <= 0.0) {
      if (*(float *)(param_1 + 0xb08) < *(float *)(param_1 + 0xb0c)) {
        *(uint *)(param_1 + 0x43c) = 2;
        *(uint *)(param_1 + 0xb08) = *(uint *)(param_1 + 0xb0c);
        if (*(int *)(param_1 + 0xb24) != 0) {
          *(uint *)(param_1 + 0xb24) = 2;
        }
      }
    }
    else if (*(float *)(param_1 + 0xb0c) < *(float *)(param_1 + 0xb08)) {
      *(uint *)(param_1 + 0x43c) = 2;
      *(uint *)(param_1 + 0xb08) = *(uint *)(param_1 + 0xb0c);
      if (*(int *)(param_1 + 0xb24) != 0) {
        *(uint *)(param_1 + 0xb24) = 2;
      }
    }
    break;
  case 2:
    iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x4a8);
    if ((iVar3 != 0) && (*(uint *)(param_1 + 0x43c) = 3, *(char *)(param_1 + 0xa24) != '\0'))
    {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0xa24);
    }
    *(uint *)(param_1 + 0xb08) = *(uint *)(param_1 + 0xb0c);
    break;
  case 3:
    *(float *)(param_1 + 0xb08) =
         fStack_58 - (param_2 * *(float *)(param_1 + 0xb0c)) / *(float *)(param_1 + 0xb14);
    if (*(float *)(param_1 + 0xb0c) <= 0.0) {
      if (0.0 < *(float *)(param_1 + 0xb08)) {
        *(uint *)(param_1 + 0x43c) = 0;
        *(uint *)(param_1 + 0xb08) = 0;
        if (*(int *)(param_1 + 0xb24) != 0) {
          *(uint *)(param_1 + 0xb24) = 2;
        }
        FUN_00538020(0x01E661B8,param_1);
      }
    }
    else if (*(float *)(param_1 + 0xb08) < 0.0) {
      *(uint *)(param_1 + 0x43c) = 0;
      *(uint *)(param_1 + 0xb08) = 0;
      if (*(int *)(param_1 + 0xb24) != 0) {
        *(uint *)(param_1 + 0xb24) = 2;
      }
      FUN_00538020(0x01E661B8,param_1);
    }
  }
  if (*(int *)(param_1 + 0x43c) == 0) {
    if (*(char *)(param_1 + 0x570) == '\0') goto LAB_0045f677;
    iVar3 = param_1 + 0x570;
  }
  else {
    if ((*(int *)(param_1 + 0x43c) != 2) || (*(char *)(param_1 + 0x50c) == '\0')) goto LAB_0045f677;
    iVar3 = param_1 + 0x50c;
  }
  FUN_004894f0(0x01C38BC0,iVar3);
LAB_0045f677:
  FUN_0045f030(param_1);
  if ((*(float *)(param_1 + 0xb08) != fStack_58) && (*(int *)(param_1 + 0x434) != 3)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    pfStack_1c = (float *)(param_1 + 0x20);
    pfVar4 = afStack_e0;
    pfVar5 = &fStack_c8;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    }
    iStack_54 = param_1 + 0x3c;
    iStack_5c = 0;
    iStack_24 = 0;
    iStack_20 = 0;
    while( true ) {
      if (*(int *)(0x01E661B8 + 0x14f0a8) <= iStack_24) break;
      iVar3 = *(int *)(0x01E661B8 + iStack_20 + 0x14f0ac);
      FUN_00537fa0(auStack_108);
      iVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x44))(iVar3,auStack_108);
      iVar1 = iStack_54;
      if (((iVar2 == 2) &&
          (fStack_f4 + *(float *)(iVar3 + 0x24) <= *(float *)(param_1 + 0x24) + fStack_b8)) &&
         (*(float *)(param_1 + 0x24) + fStack_c4 <= fStack_f0 + *(float *)(iVar3 + 0x24))) {
        fStack_a4 = *(float *)(iVar3 + 0x20) - *pfStack_1c;
        afStack_a0[0] = *(float *)(iVar3 + 0x24) - pfStack_1c[1];
        pfVar4 = afStack_7c + 2;
        afStack_a0[1] = *(float *)(iVar3 + 0x28) - pfStack_1c[2];
        afStack_7c[2] = fStack_a4;
        afStack_7c[(uint)bVar6 * -2 + 3] = afStack_a0[(uint)bVar6 * -2];
        afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        FUN_004495a0(iVar1,pfVar4);
        fStack_80 = afStack_a0[2];
        afStack_7c[(uint)bVar6 * -2] = afStack_a0[(uint)bVar6 * -2 + 3];
        afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        if (&fStack_b0 != &fStack_80) {
          fStack_b0 = fStack_80;
          fStack_ac = afStack_7c[0];
          fStack_a8 = afStack_7c[1];
        }
        fStack_48 = fStack_b0 + fStack_ec;
        if (((fStack_c8 <= fStack_48) && (fStack_50 = fStack_b0 - fStack_ec, fStack_50 <= fStack_bc)
            ) && ((fStack_14 = fStack_a8 + fStack_ec, fStack_c0 <= fStack_14 &&
                  (fStack_4c = fStack_a8 - fStack_ec, fStack_4c <= fStack_b4)))) {
          if (((fStack_c8 <= fStack_50) && (fStack_48 <= fStack_bc)) &&
             ((fStack_c0 <= fStack_4c && (fStack_14 <= fStack_b4)))) goto LAB_0045fae0;
          fStack_18 = fStack_ec * fStack_ec;
          fStack_30 = SQRT(fStack_18 - (fStack_bc - fStack_b0) * (fStack_bc - fStack_b0));
          fStack_40 = fStack_a8 + fStack_30;
          fStack_30 = fStack_a8 - fStack_30;
          if (((fStack_c0 <= fStack_40) && (fStack_40 <= fStack_b4)) ||
             ((fStack_c0 <= fStack_30 && (fStack_30 <= fStack_b4)))) goto LAB_0045fae0;
          fStack_3c = SQRT(fStack_18 - (fStack_c8 - fStack_b0) * (fStack_c8 - fStack_b0));
          fStack_28 = fStack_a8 + fStack_3c;
          fStack_3c = fStack_a8 - fStack_3c;
          if (((fStack_c0 <= fStack_28) && (fStack_28 <= fStack_b4)) ||
             ((fStack_c0 <= fStack_3c && (fStack_3c <= fStack_b4)))) goto LAB_0045fae0;
          fStack_38 = SQRT(fStack_18 - (fStack_b4 - fStack_a8) * (fStack_b4 - fStack_a8));
          fStack_34 = fStack_b0 + fStack_38;
          fStack_38 = fStack_b0 - fStack_38;
          if (((fStack_c8 <= fStack_34) && (fStack_34 <= fStack_bc)) ||
             ((fStack_c8 <= fStack_38 && (fStack_38 <= fStack_bc)))) goto LAB_0045fae0;
          fStack_44 = SQRT(fStack_18 - (fStack_c0 - fStack_a8) * (fStack_c0 - fStack_a8));
          fStack_2c = fStack_b0 + fStack_44;
          fStack_44 = fStack_b0 - fStack_44;
          if (((fStack_c8 <= fStack_2c) && (fStack_2c <= fStack_bc)) ||
             ((fStack_c8 <= fStack_44 && (fStack_44 <= fStack_bc)))) goto LAB_0045fae0;
        }
      }
      iStack_24 = iStack_24 + 1;
      iStack_20 = iStack_20 + 4;
    }
    if (iStack_5c != 0) {
LAB_0045fae0:
      *(uint *)(param_1 + 0x20) = uStack_8c;
      *(uint *)(param_1 + 0x24) = uStack_88;
      *(uint *)(param_1 + 0x28) = uStack_84;
      *(float *)(param_1 + 0xb08) = fStack_58;
      FUN_0045f030(param_1);
      return;
    }
  }
  return;
}
