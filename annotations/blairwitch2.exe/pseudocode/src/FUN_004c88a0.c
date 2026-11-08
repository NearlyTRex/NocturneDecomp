// Name: FUN_004c88a0
// Address: 004c88a0
// Address Range: [[004c88a0, 004c8cdc]]
// Convention: unknown
// Signature: void FUN_004c88a0(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c88a0(uint *param_1,int param_2)

{
  uint uVar1;
  float10 fVar2;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  fVar2 = (float10)(float)param_1[6] * (float10)_DAT_005d94da;
  FUN_005b7ff0();
  local_14 = (int)ROUND(fVar2);
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if ((0x1c < local_14) && (local_14 = 0x1c, param_2 != 0)) {
    *param_1 = 1;
  }
  FUN_0046b2b0(DAT_0060b280,param_1 + 1);
  FUN_0046ca00(DAT_0060b280,&DAT_00616e68 + local_14 * 0x18 + param_1[5] * 0x2b8);
  local_44 = 0xbfaa9fbe;
  local_3c = 0xbfaa9fbe;
  local_40 = 0;
  local_50 = (int)ROUND(_DAT_005f7ba8 * -1.333);
  local_4c = (int)ROUND(_DAT_005f7ba8 * 0.0);
  local_48 = (int)ROUND(_DAT_005f7ba8 * -1.333);
  FUN_0055d723(*DAT_0060b280,&local_50);
  local_44 = 0x3faa9fbe;
  local_40 = 0;
  local_3c = 0xbfaa9fbe;
  local_5c = (int)ROUND(_DAT_005f7ba8 * 1.333);
  local_58 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  local_54 = (int)ROUND(_DAT_005f7ba8 * -1.333);
  FUN_0055d723(*DAT_0060b280 + 0x30,&local_5c);
  local_44 = 0x3faa9fbe;
  local_3c = 0x3faa9fbe;
  local_40 = 0;
  local_38 = (int)ROUND(_DAT_005f7ba8 * 1.333);
  local_34 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  local_30 = (int)ROUND(_DAT_005f7ba8 * 1.333);
  FUN_0055d723(*DAT_0060b280 + 0x60,&local_38);
  local_44 = 0xbfaa9fbe;
  local_40 = 0;
  local_3c = 0x3faa9fbe;
  local_2c = (int)ROUND(_DAT_005f7ba8 * -1.333);
  local_28 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  local_24 = (int)ROUND(_DAT_005f7ba8 * 1.333);
  FUN_0055d723(*DAT_0060b280 + 0x90,&local_2c);
  uVar1 = param_1[4];
  local_20 = &DAT_00622038;
  FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c8aac:
    DAT_00622034 = 0x2000;
    *local_20 = 0;
    DAT_0062203c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622038 = 0x9a80;
    DAT_0062203c = 0xb100;
    DAT_00622034 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c8aac;
    DAT_00622038 = 0;
    DAT_0062203c = 0;
    DAT_00622034 = 0;
  }
  uVar1 = param_1[4];
  local_18 = &DAT_0062206c;
  FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c8af1:
    DAT_00622064 = 0x2000;
    DAT_00622068 = 0;
    *local_18 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622068 = 0x9a80;
    DAT_0062206c = 0xb100;
    DAT_00622064 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c8af1;
    DAT_00622068 = 0;
    DAT_0062206c = 0;
    DAT_00622064 = 0;
  }
  uVar1 = param_1[4];
  local_1c = &DAT_00622098;
  FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c8b36:
    DAT_00622094 = 0x2000;
    *local_1c = 0;
    DAT_0062209c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622098 = 0x9a80;
    DAT_0062209c = 0xb100;
    DAT_00622094 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c8b36;
    DAT_00622098 = 0;
    DAT_0062209c = 0;
    DAT_00622094 = 0;
  }
  uVar1 = param_1[4];
  FUN_0040cfc0(0x40,0xc0);
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_006220c8 = 0x9a80;
      DAT_006220cc = 0xb100;
      DAT_006220c4 = 0x9000;
      goto LAB_004c8b9a;
    }
    if (uVar1 == 2) {
      DAT_006220c8 = 0;
      DAT_006220cc = 0;
      DAT_006220c4 = 0;
      goto LAB_004c8b9a;
    }
  }
  DAT_006220c4 = 0x2000;
  DAT_006220c8 = 0;
  DAT_006220cc = 0;
LAB_004c8b9a:
  FUN_0046ab50(DAT_0060b280,0x1cb8288);
  return;
}
