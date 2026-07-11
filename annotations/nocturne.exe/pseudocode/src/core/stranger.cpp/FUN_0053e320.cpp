// Name: FUN_0053e320
// Address: 0053e320
// Address Range: [[0053e320, 0053e85e]]
// Convention: unknown
// Signature: void FUN_0053e320(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053e320(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float fStack_bc;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float local_9c;
  float fStack_98;
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
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)(param_1 + 0x1fa94) == 0) {
    _DAT_01cc4800 = "$@..\\core\\stranger.cpp" + 2;
    _DAT_01cc4804 = 0x10b4;
    FUN_004c8440("CStranger::aimLeftPistol - no weapon?");
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa94) + 0x14c) + 0xd8))
            (*(int *)(param_1 + 0x1fa94),&local_9c);
  uVar3 = _DAT_02dc9f5c;
  fStack_24 = -1.3089969;
  fStack_2c = 0.5235988;
  FUN_0040a240(*(uint *)(param_1 + 0x1fa94),&fStack_a8,&local_9c);
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0x447a0000;
  FUN_0040a200(*(uint *)(param_1 + 0x1fa94),&fStack_84,&uStack_3c);
  fStack_90 = fStack_a8 + fStack_84;
  fStack_8c = fStack_a4 + fStack_80;
  fStack_88 = fStack_a0 + fStack_7c;
  FUN_00511840(0x01E57284,1,0xff,0,0);
  FUN_00511780(0x01E57284,*(uint *)(param_1 + 0x1fa94));
  FUN_00511780(0x01E57284,param_1);
  fStack_bc = (float)FUN_0050fb00(0x01E57284,&fStack_a8,&fStack_90);
  fStack_14 = fStack_bc;
  FUN_00511750(0x01E57284);
  if ((fStack_bc < 0.0) || (1.0 < fStack_bc)) {
    fStack_bc = 1.0;
  }
  fStack_48 = fStack_84 * fStack_bc;
  fStack_44 = fStack_80 * fStack_bc;
  fStack_40 = fStack_7c * fStack_bc;
  fStack_b4 = fStack_a8 + fStack_48;
  fStack_b0 = fStack_a4 + fStack_44;
  fStack_ac = fStack_a0 + fStack_40;
  if (&fStack_90 != &fStack_b4) {
    fStack_90 = fStack_b4;
    fStack_8c = fStack_b0;
    fStack_88 = fStack_ac;
  }
  FUN_0051d2a0(param_1 + 0x150,&fStack_6c,uVar3);
  FUN_0040a290(param_1,&fStack_60,&fStack_90);
  fStack_78 = fStack_60 - fStack_6c;
  fStack_74 = fStack_5c - fStack_68;
  fStack_70 = fStack_58 - fStack_64;
  FUN_0054e4a0(&fStack_54,&fStack_78);
  fVar2 = SQRT(fStack_70 * fStack_70 + fStack_78 * fStack_78 + fStack_74 * fStack_74);
  if ((float)_DAT_00595d37 < fVar2) {
    fStack_20 = -local_9c;
    if ((((float)_DAT_00595d37 <= fVar2) &&
        (fVar1 = SQRT(fVar2 * fVar2 - fStack_20 * fStack_20) / fVar2, fVar1 < 1.0)) &&
       (0.0 <= fVar1)) {
      fVar4 = (float10)fVar1;
      FUN_00565ca4();
      fStack_28 = (float)fVar4;
      if (0.0 <= fStack_20) {
        fStack_50 = fStack_50 + fStack_28;
      }
      else {
        fStack_50 = fStack_50 - fStack_28;
      }
      fStack_50 = (float)FUN_0040df00(fStack_50);
      fStack_14 = fStack_50;
    }
    if ((((float)_DAT_00595d37 <= fVar2) &&
        (fVar2 = SQRT(fVar2 * fVar2 - fStack_98 * fStack_98) / fVar2, fVar2 < 1.0)) &&
       (0.0 <= fVar2)) {
      fVar4 = (float10)fVar2;
      FUN_00565ca4();
      fStack_30 = (float)fVar4;
      if (0.0 <= fStack_98) {
        fStack_54 = fStack_54 + fStack_30;
      }
      else {
        fStack_54 = fStack_54 - fStack_30;
      }
      fStack_54 = (float)FUN_0040df00(fStack_54);
    }
  }
  fStack_18 = fStack_50;
  fStack_1c = fStack_54;
  if (fStack_54 < 0xBF860A92) {
    fStack_1c = 0xBF860A92;
  }
  if (0x3F9C61AA < fStack_1c) {
    fStack_1c = 0x3F9C61AA;
  }
  if (fStack_50 < fStack_24) {
    fStack_18 = fStack_24;
  }
  if (fStack_2c < fStack_18) {
    fStack_18 = fStack_2c;
  }
  *(uint *)(param_1 + 0x1fa84) = 0x3f800000;
  *(float *)(param_1 + 0x1fa7c) = fStack_18;
  *(float *)(param_1 + 0x1fa78) = fStack_1c;
  *(float *)(param_1 + 0x1fa74) = fStack_18;
  *(float *)(param_1 + 0x1fa70) = fStack_1c;
  return;
}
