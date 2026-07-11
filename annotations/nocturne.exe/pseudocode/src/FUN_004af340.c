// Name: FUN_004af340
// Address: 004af340
// Address Range: [[004af340, 004af6f7]]
// Convention: unknown
// Signature: void FUN_004af340(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004af340(uint *param_1)

{
  uint uVar1;
  float10 fVar2;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  fVar2 = (float10)(float)param_1[6] * (float10)_DAT_00585128;
  FUN_00563a30();
  local_14 = (int)ROUND(fVar2);
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if (0x1c < local_14) {
    *param_1 = 1;
    local_14 = 0x1c;
  }
  FUN_00460a00(DAT_005ae704,param_1 + 1);
  FUN_00461eb0(DAT_005ae704,&DAT_005b9d4c + local_14 * 0x18 + param_1[5] * 0x2b8);
  local_2c = 0xbfaa9fbe;
  local_24 = 0xbfaa9fbe;
  local_28 = 0;
  local_20 = (int)ROUND(_DAT_0059e4d4 * -1.333);
  local_1c = (int)ROUND(_DAT_0059e4d4 * 0.0);
  local_18 = (int)ROUND(_DAT_0059e4d4 * -1.333);
  FUN_0053075c(*DAT_005ae704,&local_20);
  local_2c = 0x3faa9fbe;
  local_28 = 0;
  local_24 = 0xbfaa9fbe;
  local_50 = (int)ROUND(_DAT_0059e4d4 * 1.333);
  local_4c = (int)ROUND(_DAT_0059e4d4 * 0.0);
  local_48 = (int)ROUND(_DAT_0059e4d4 * -1.333);
  FUN_0053075c(*DAT_005ae704 + 0x30,&local_50);
  local_2c = 0x3faa9fbe;
  local_24 = 0x3faa9fbe;
  local_28 = 0;
  local_44 = (int)ROUND(_DAT_0059e4d4 * 1.333);
  local_40 = (int)ROUND(_DAT_0059e4d4 * 0.0);
  local_3c = (int)ROUND(_DAT_0059e4d4 * 1.333);
  FUN_0053075c(*DAT_005ae704 + 0x60,&local_44);
  local_2c = 0xbfaa9fbe;
  local_28 = 0;
  local_24 = 0x3faa9fbe;
  local_38 = (int)ROUND(_DAT_0059e4d4 * -1.333);
  local_34 = (int)ROUND(_DAT_0059e4d4 * 0.0);
  local_30 = (int)ROUND(_DAT_0059e4d4 * 1.333);
  FUN_0053075c(*DAT_005ae704 + 0x90,&local_38);
  uVar1 = param_1[4];
  if (uVar1 == 0) {
LAB_004af532:
    DAT_005c5034 = 0x2000;
    DAT_005c5038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5034 = 0;
    DAT_005c5038 = 0x7f80;
  }
  else {
    if (uVar1 != 2) goto LAB_004af532;
    DAT_005c5038 = 0;
    DAT_005c5034 = 0;
  }
  DAT_005c503c = 0;
  uVar1 = param_1[4];
  if (uVar1 == 0) {
LAB_004af55f:
    DAT_005c5064 = 0x2000;
    DAT_005c5068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5068 = 0x7f80;
    DAT_005c5064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004af55f;
    DAT_005c5068 = 0;
    DAT_005c5064 = 0;
  }
  DAT_005c506c = 0;
  uVar1 = param_1[4];
  if (uVar1 == 0) {
LAB_004af58c:
    DAT_005c5094 = 0x2000;
    DAT_005c5098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5098 = 0x7f80;
    DAT_005c5094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004af58c;
    DAT_005c5098 = 0;
    DAT_005c5094 = 0;
  }
  DAT_005c509c = 0;
  uVar1 = param_1[4];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_005c50c8 = 0x7f80;
      DAT_005c50c4 = 0;
      goto LAB_004af5dc;
    }
    if (uVar1 == 2) {
      DAT_005c50c8 = 0;
      DAT_005c50c4 = 0;
      goto LAB_004af5dc;
    }
  }
  DAT_005c50c4 = 0x2000;
  DAT_005c50c8 = 0;
LAB_004af5dc:
  DAT_005c50cc = 0;
  FUN_004602a0(DAT_005ae704,0x1c78c80);
  return;
}
