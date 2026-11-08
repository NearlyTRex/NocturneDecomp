// Name: FUN_004e5180
// Address: 004e5180
// Address Range: [[004e5180, 004e553e]]
// Convention: unknown
// Signature: void FUN_004e5180(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5180(uint *param_1,int param_2)

{
  uint uVar1;
  float10 fVar2;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  fVar2 = (float10)(float)param_1[6] * (float10)_DAT_005e40bd;
  FUN_005c03a0();
  local_14 = (int)ROUND(fVar2);
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if ((0x1c < local_14) && (local_14 = 0x1c, param_2 != 0)) {
    *param_1 = 1;
  }
  FUN_004837b0(DAT_00612560,param_1 + 1);
  FUN_00484f00(DAT_00612560,&DAT_0061e32c + local_14 * 0x18 + param_1[5] * 0x2b8);
  local_38 = 0xbfaa9fbe;
  local_30 = 0xbfaa9fbe;
  local_34 = 0;
  local_20 = (int)ROUND(_DAT_006016a8 * -1.333);
  local_1c = (int)ROUND(_DAT_006016a8 * 0.0);
  local_18 = (int)ROUND(_DAT_006016a8 * -1.333);
  FUN_00580173(*DAT_00612560,&local_20);
  local_38 = 0x3faa9fbe;
  local_34 = 0;
  local_30 = 0xbfaa9fbe;
  local_44 = (int)ROUND(_DAT_006016a8 * 1.333);
  local_40 = (int)ROUND(_DAT_006016a8 * 0.0);
  local_3c = (int)ROUND(_DAT_006016a8 * -1.333);
  FUN_00580173(*DAT_00612560 + 0x30,&local_44);
  local_38 = 0x3faa9fbe;
  local_30 = 0x3faa9fbe;
  local_34 = 0;
  local_2c = (int)ROUND(_DAT_006016a8 * 1.333);
  local_28 = (int)ROUND(_DAT_006016a8 * 0.0);
  local_24 = (int)ROUND(_DAT_006016a8 * 1.333);
  FUN_00580173(*DAT_00612560 + 0x60,&local_2c);
  local_38 = 0xbfaa9fbe;
  local_34 = 0;
  local_30 = 0x3faa9fbe;
  local_50 = (int)ROUND(_DAT_006016a8 * -1.333);
  local_4c = (int)ROUND(_DAT_006016a8 * 0.0);
  local_48 = (int)ROUND(_DAT_006016a8 * 1.333);
  FUN_00580173(*DAT_00612560 + 0x90,&local_50);
  uVar1 = param_1[4];
  if (uVar1 == 0) {
LAB_004e5379:
    DAT_00629034 = 0x2000;
    DAT_00629038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629034 = 0;
    DAT_00629038 = 0x7f80;
  }
  else {
    if (uVar1 != 2) goto LAB_004e5379;
    DAT_00629038 = 0;
    DAT_00629034 = 0;
  }
  DAT_0062903c = 0;
  uVar1 = param_1[4];
  if (uVar1 == 0) {
LAB_004e53a6:
    DAT_00629064 = 0x2000;
    DAT_00629068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629068 = 0x7f80;
    DAT_00629064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e53a6;
    DAT_00629068 = 0;
    DAT_00629064 = 0;
  }
  DAT_0062906c = 0;
  uVar1 = param_1[4];
  if (uVar1 == 0) {
LAB_004e53d3:
    DAT_00629094 = 0x2000;
    DAT_00629098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629098 = 0x7f80;
    DAT_00629094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e53d3;
    DAT_00629098 = 0;
    DAT_00629094 = 0;
  }
  DAT_0062909c = 0;
  uVar1 = param_1[4];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_006290c8 = 0x7f80;
      DAT_006290c4 = 0;
      goto LAB_004e5423;
    }
    if (uVar1 == 2) {
      DAT_006290c8 = 0;
      DAT_006290c4 = 0;
      goto LAB_004e5423;
    }
  }
  DAT_006290c4 = 0x2000;
  DAT_006290c8 = 0;
LAB_004e5423:
  DAT_006290cc = 0;
  FUN_00483050(DAT_00612560,0x1cd0e40);
  return;
}
