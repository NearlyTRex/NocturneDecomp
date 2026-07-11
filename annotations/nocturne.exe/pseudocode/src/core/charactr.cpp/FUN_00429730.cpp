// Name: FUN_00429730
// Address: 00429730
// Address Range: [[00429730, 00429e52]]
// Convention: unknown
// Signature: void FUN_00429730(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429730(int param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  byte auStack_e0 [12];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  byte auStack_bc [12];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  byte auStack_98 [12];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  byte auStack_80 [12];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  byte auStack_68 [12];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  byte auStack_38 [20];
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (iVar1 != 0) {
    param_3 = 1;
  }
  iStack_20 = 0;
  iVar1 = iStack_20;
  if ((param_3 == 0) && (iVar1 = *(int *)(param_1 + 0x25cc), *(int *)(param_1 + 0x25cc) == 0)) {
    if (*(float *)(param_1 + 0x25e0) <= 0.0) {
      uStack_a4 = 0;
      uStack_9c = 0;
      uStack_a0 = 0x40b00000;
      FUN_0040a240(param_1,&fStack_5c,&uStack_a4);
      iStack_18 = 0;
      for (iVar1 = 0; iVar1 < *(int *)(0x01E57284 + 0x14ecb0); iVar1 = iVar1 + 1) {
        iVar3 = *(int *)(0x01E57284 + iStack_18 + 0x14ecb4);
        if ((iVar3 != param_1) &&
           (iVar2 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x68))(iVar3), iVar2 == 0)) {
          iStack_1c = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
          if ((iStack_1c == 0) || (*(char *)(iVar3 + 0x23b0) == '\0')) {
            if (&fStack_ec != (float *)(iVar3 + 0x20)) {
              fStack_ec = *(float *)(iVar3 + 0x20);
              fStack_e8 = *(float *)(iVar3 + 0x24);
              fStack_e4 = *(float *)(iVar3 + 0x28);
            }
            fStack_e8 = fStack_e8 + _DAT_0057a2d2;
          }
          else {
            uVar5 = FUN_0051d380(iVar3 + 0x150,auStack_80,0);
            pfVar4 = (float *)FUN_0040a240(iVar3,auStack_68,uVar5);
            if (&fStack_ec != pfVar4) {
              fStack_ec = *pfVar4;
              fStack_e8 = pfVar4[1];
              fStack_e4 = pfVar4[2];
            }
          }
          fStack_b0 = fStack_ec - fStack_5c;
          fStack_ac = fStack_e8 - fStack_58;
          fStack_a8 = fStack_e4 - fStack_54;
          FUN_0040a220(param_1,&fStack_50,&fStack_b0);
          if ((((0.0 <= fStack_48) &&
               (fVar6 = fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c,
               fStack_24 = fVar6, (int)fVar6 < 0x44610001)) &&
              (FUN_0054e4a0(&fStack_44,&fStack_50), ABS(fStack_40) <= (float)_DAT_0057a2da)) &&
             (ABS(fStack_44) <= (float)_DAT_0057a2e2)) {
            fStack_100 = 10.0;
            iVar2 = FUN_0040d890(iVar3,_DAT_01bcdef4);
            if (((iVar2 != 0) && (iStack_1c == 0)) &&
               (fStack_100 = 30.0, param_1 == *(int *)(iVar2 + 0xbca4))) {
              fStack_100 = 40.0;
            }
            if ((fStack_100 < (float)_DAT_0057a2fa) &&
               (iVar2 = FUN_0040d7e0(iVar3,"CHero"), iVar2 != 0)) {
              fStack_100 = 15.0;
            }
            if ((fStack_100 < (float)_DAT_0057a302) && (0 < iStack_1c)) {
              fStack_100 = 15.0;
            }
            fStack_100 = ((float)_DAT_0057a30a / (SQRT(fVar6) + (float)_DAT_0057a30a)) * fStack_100;
            if (iVar3 == *(int *)(param_1 + 0x25c8)) {
              fStack_100 = fStack_100 * (float)_DAT_0057a2ca;
            }
            if (_DAT_0057a312 <= fStack_100) {
              FUN_00511750(0x01E57284);
              FUN_00511780(0x01E57284,param_1);
              FUN_00511780(0x01E57284,iVar3);
              FUN_00511800(0x01E57284,2);
              iVar2 = FUN_0050fa30(0x01E57284,&fStack_5c,&fStack_ec);
              if ((iVar2 == 0) && (iStack_20 = iVar3, &fStack_d4 != &fStack_44)) {
                fStack_d4 = fStack_44;
                fStack_d0 = fStack_40;
                fStack_cc = fStack_3c;
              }
            }
          }
        }
        iStack_18 = iStack_18 + 4;
      }
      FUN_00511750(0x01E57284);
      fStack_14 = (float)FUN_0040dda0(0x3f800000,0x40000000);
      *(float *)(param_1 + 0x25e0) = fStack_14;
    }
    else {
      iStack_20 = *(int *)(param_1 + 0x25c8);
      *(float *)(param_1 + 0x25e0) = *(float *)(param_1 + 0x25e0) - param_2;
    }
  }
  else {
    iStack_20 = iVar1;
    *(uint *)(param_1 + 0x25e0) = 0;
  }
  *(int *)(param_1 + 0x25c8) = iStack_20;
  if (iStack_20 != 0) {
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_c4 = 0x40b00000;
    FUN_0040a240(param_1,&fStack_8c,&uStack_c8);
    iVar1 = FUN_0040d890(*(uint *)(param_1 + 0x25c8),DAT_00765a98);
    if (iVar1 == 0) {
      _DAT_01cc4800 = "..\\core\\charactr.cpp";
      _DAT_01cc4804 = 0xdb4;
      FUN_004c8440("CCharacter::findSomethingToLookAt - Should be a character");
    }
    iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x104))(iVar1);
    if ((iVar3 == 0) || (*(char *)(iVar1 + 0x23b0) == '\0')) {
      if (&fStack_74 != (float *)(iVar1 + 0x20)) {
        fStack_74 = *(float *)(iVar1 + 0x20);
        fStack_70 = *(float *)(iVar1 + 0x24);
        fStack_6c = *(float *)(iVar1 + 0x28);
      }
      fStack_70 = fStack_70 + _DAT_0057a2d2;
    }
    else {
      uVar5 = FUN_0051d380(iVar1 + 0x150,auStack_38,0);
      pfVar4 = (float *)FUN_0040a240(iVar1,auStack_98,uVar5);
      if (&fStack_74 != pfVar4) {
        fStack_74 = *pfVar4;
        fStack_70 = pfVar4[1];
        fStack_6c = pfVar4[2];
      }
    }
    fStack_f8 = fStack_74 - fStack_8c;
    fStack_f4 = fStack_70 - fStack_88;
    fStack_f0 = fStack_6c - fStack_84;
    FUN_0040a220(param_1,auStack_e0,&fStack_f8);
    pfVar4 = (float *)FUN_0054e4a0(auStack_bc,auStack_e0);
    if (&fStack_d4 != pfVar4) {
      fStack_d4 = *pfVar4;
      fStack_d0 = pfVar4[1];
      fStack_cc = pfVar4[2];
    }
    if ((float)_DAT_0057a2da < ABS(fStack_d0)) {
      *(uint *)(param_1 + 0x25c8) = 0;
    }
    if ((float)_DAT_0057a2e2 < ABS(fStack_d4)) {
      *(uint *)(param_1 + 0x25c8) = 0;
      goto LAB_00429793;
    }
  }
  if (*(int *)(param_1 + 0x25c8) != 0) {
    fVar6 = param_2 / _DAT_0057a2ea + *(float *)(param_1 + 0x25d8);
    *(float *)(param_1 + 0x25d8) = fVar6;
    if (1.0 < fVar6) {
      *(uint *)(param_1 + 0x25d8) = 0x3f800000;
    }
    fStack_14 = (float)FUN_0040df00(fStack_d0 - *(float *)(param_1 + 0x25d0));
    *(float *)(param_1 + 0x25d0) = fStack_14 * (float)_DAT_0057a2f2 + *(float *)(param_1 + 0x25d0);
    fVar6 = (float)FUN_0040df00(fStack_d4 - *(float *)(param_1 + 0x25d4));
    *(float *)(param_1 + 0x25d4) = fVar6 * (float)_DAT_0057a2f2 + *(float *)(param_1 + 0x25d4);
    return;
  }
LAB_00429793:
  fVar6 = *(float *)(param_1 + 0x25d8) - param_2 / _DAT_0057a2ea;
  *(float *)(param_1 + 0x25d8) = fVar6;
  if (fVar6 < 0.0) {
    *(uint *)(param_1 + 0x25d4) = 0;
    *(uint *)(param_1 + 0x25d8) = 0;
    *(uint *)(param_1 + 0x25d0) = 0;
    return;
  }
  return;
}
