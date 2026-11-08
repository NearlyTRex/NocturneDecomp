// Name: FUN_004642f0
// Address: 004642f0
// Address Range: [[004642f0, 00464a59]]
// Convention: unknown
// Signature: void FUN_004642f0(int param_1,float param_2)

#include "nocturne.h"

void FUN_004642f0(int param_1,float param_2)

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
  fStack_58 = *(float *)(param_1 + 0x9ac);
  if (1 < *(int *)(param_1 + 0x9c8)) {
    return;
  }
  switch(*(uint *)(param_1 + 0x2e0)) {
  case 0:
    iVar3 = FUN_00491aa0(0x01C6E360,param_1 + 0x2e8);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x2e0) = 1;
      if (*(char *)(param_1 + 0x864) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x864);
      }
      FUN_0053eea0(0x01ED78C8,param_1);
    }
    *(uint *)(param_1 + 0x9ac) = 0;
    break;
  case 1:
    *(float *)(param_1 + 0x9ac) =
         (param_2 * *(float *)(param_1 + 0x9b0)) / *(float *)(param_1 + 0x9b4) + fStack_58;
    if (*(float *)(param_1 + 0x9b0) <= 0.0) {
      if (*(float *)(param_1 + 0x9ac) < *(float *)(param_1 + 0x9b0)) {
        *(uint *)(param_1 + 0x2e0) = 2;
        *(uint *)(param_1 + 0x9ac) = *(uint *)(param_1 + 0x9b0);
        if (*(int *)(param_1 + 0x9c8) != 0) {
          *(uint *)(param_1 + 0x9c8) = 2;
        }
      }
    }
    else if (*(float *)(param_1 + 0x9b0) < *(float *)(param_1 + 0x9ac)) {
      *(uint *)(param_1 + 0x2e0) = 2;
      *(uint *)(param_1 + 0x9ac) = *(uint *)(param_1 + 0x9b0);
      if (*(int *)(param_1 + 0x9c8) != 0) {
        *(uint *)(param_1 + 0x9c8) = 2;
      }
    }
    break;
  case 2:
    iVar3 = FUN_00491aa0(0x01C6E360,param_1 + 0x34c);
    if ((iVar3 != 0) && (*(uint *)(param_1 + 0x2e0) = 3, *(char *)(param_1 + 0x8c8) != '\0'))
    {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x8c8);
    }
    *(uint *)(param_1 + 0x9ac) = *(uint *)(param_1 + 0x9b0);
    break;
  case 3:
    *(float *)(param_1 + 0x9ac) =
         fStack_58 - (param_2 * *(float *)(param_1 + 0x9b0)) / *(float *)(param_1 + 0x9b8);
    if (*(float *)(param_1 + 0x9b0) <= 0.0) {
      if (0.0 < *(float *)(param_1 + 0x9ac)) {
        *(uint *)(param_1 + 0x2e0) = 0;
        *(uint *)(param_1 + 0x9ac) = 0;
        if (*(int *)(param_1 + 0x9c8) != 0) {
          *(uint *)(param_1 + 0x9c8) = 2;
        }
        FUN_0053ee00(0x01ED78C8,param_1);
      }
    }
    else if (*(float *)(param_1 + 0x9ac) < 0.0) {
      *(uint *)(param_1 + 0x2e0) = 0;
      *(uint *)(param_1 + 0x9ac) = 0;
      if (*(int *)(param_1 + 0x9c8) != 0) {
        *(uint *)(param_1 + 0x9c8) = 2;
      }
      FUN_0053ee00(0x01ED78C8,param_1);
    }
  }
  if (*(int *)(param_1 + 0x2e0) == 0) {
    if (*(char *)(param_1 + 0x414) == '\0') goto LAB_004643c7;
    iVar3 = param_1 + 0x414;
  }
  else {
    if ((*(int *)(param_1 + 0x2e0) != 2) || (*(char *)(param_1 + 0x3b0) == '\0')) goto LAB_004643c7;
    iVar3 = param_1 + 0x3b0;
  }
  FUN_0048c150(0x01C6E360,iVar3);
LAB_004643c7:
  FUN_00463d80(param_1);
  if ((*(float *)(param_1 + 0x9ac) != fStack_58) && (*(int *)(param_1 + 0x2d8) != 3)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
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
      if (*(int *)(0x01ED78C8 + 0x14f0a8) <= iStack_24) break;
      iVar3 = *(int *)(0x01ED78C8 + iStack_20 + 0x14f0ac);
      FUN_0053ed80(auStack_108);
      iVar2 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x3c))(iVar3,auStack_108);
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
        FUN_0045b870(iVar1,pfVar4);
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
             ((fStack_c0 <= fStack_4c && (fStack_14 <= fStack_b4)))) goto LAB_00464830;
          fStack_18 = fStack_ec * fStack_ec;
          fStack_30 = SQRT(fStack_18 - (fStack_bc - fStack_b0) * (fStack_bc - fStack_b0));
          fStack_40 = fStack_a8 + fStack_30;
          fStack_30 = fStack_a8 - fStack_30;
          if (((fStack_c0 <= fStack_40) && (fStack_40 <= fStack_b4)) ||
             ((fStack_c0 <= fStack_30 && (fStack_30 <= fStack_b4)))) goto LAB_00464830;
          fStack_3c = SQRT(fStack_18 - (fStack_c8 - fStack_b0) * (fStack_c8 - fStack_b0));
          fStack_28 = fStack_a8 + fStack_3c;
          fStack_3c = fStack_a8 - fStack_3c;
          if (((fStack_c0 <= fStack_28) && (fStack_28 <= fStack_b4)) ||
             ((fStack_c0 <= fStack_3c && (fStack_3c <= fStack_b4)))) goto LAB_00464830;
          fStack_38 = SQRT(fStack_18 - (fStack_b4 - fStack_a8) * (fStack_b4 - fStack_a8));
          fStack_34 = fStack_b0 + fStack_38;
          fStack_38 = fStack_b0 - fStack_38;
          if (((fStack_c8 <= fStack_34) && (fStack_34 <= fStack_bc)) ||
             ((fStack_c8 <= fStack_38 && (fStack_38 <= fStack_bc)))) goto LAB_00464830;
          fStack_44 = SQRT(fStack_18 - (fStack_c0 - fStack_a8) * (fStack_c0 - fStack_a8));
          fStack_2c = fStack_b0 + fStack_44;
          fStack_44 = fStack_b0 - fStack_44;
          if (((fStack_c8 <= fStack_2c) && (fStack_2c <= fStack_bc)) ||
             ((fStack_c8 <= fStack_44 && (fStack_44 <= fStack_bc)))) goto LAB_00464830;
        }
      }
      iStack_24 = iStack_24 + 1;
      iStack_20 = iStack_20 + 4;
    }
    if (iStack_5c != 0) {
LAB_00464830:
      *(uint *)(param_1 + 0x20) = uStack_8c;
      *(uint *)(param_1 + 0x24) = uStack_88;
      *(uint *)(param_1 + 0x28) = uStack_84;
      *(float *)(param_1 + 0x9ac) = fStack_58;
      FUN_00463d80(param_1);
      return;
    }
  }
  return;
}
