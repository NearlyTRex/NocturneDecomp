// Name: FUN_004aeb70
// Address: 004aeb70
// Address Range: [[004aeb70, 004af127]]
// Convention: unknown
// Signature: void FUN_004aeb70(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aeb70(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  float10 fVar3;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
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
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  piVar2 = &local_8c;
  fVar3 = (float10)(float)param_1[9] * (float10)_DAT_005850a8 + (float10)_DAT_005850b0;
  FUN_00563a30();
  local_14 = (int)ROUND(fVar3);
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if (0xf < local_14) {
    *param_1 = 1;
    local_14 = 0xf;
  }
  FUN_00460a00(DAT_005ae704,param_1 + 1);
  if (param_1[4] == 1) {
    _DAT_01c78c88 = 0;
    _DAT_01c78c8c = 0;
    _DAT_01c78c94 = 0;
    _DAT_01c78c90 = 0xffff;
    FUN_00461eb0(DAT_005ae704,&DAT_005b974c + local_14 * 0x18 + param_1[10] * 0x180);
    FUN_00460aa0(DAT_005ae704,param_1 + 6,0);
    local_44 = 0xbf000000;
    local_40 = 0xbf000000;
    local_3c = 0;
    local_74 = (int)ROUND(_DAT_0059e4d4 * -0.5);
    local_70 = (int)ROUND(_DAT_0059e4d4 * -0.5);
    local_6c = (int)ROUND(_DAT_0059e4d4 * 0.0);
    FUN_0053075c(*DAT_005ae704,&local_74);
    local_44 = 0x3f000000;
    local_40 = 0xbf000000;
    local_3c = 0;
    local_50 = (int)ROUND(_DAT_0059e4d4 * 0.5);
    local_4c = (int)ROUND(_DAT_0059e4d4 * -0.5);
    local_48 = (int)ROUND(_DAT_0059e4d4 * 0.0);
    FUN_0053075c(*DAT_005ae704 + 0x30,&local_50);
    local_44 = 0x3f000000;
    local_40 = 0x3f000000;
    local_3c = 0;
    local_20 = (int)ROUND(_DAT_0059e4d4 * 0.5);
    local_1c = (int)ROUND(_DAT_0059e4d4 * 0.5);
    local_18 = (int)ROUND(_DAT_0059e4d4 * 0.0);
    FUN_0053075c(*DAT_005ae704 + 0x60,&local_20);
    local_44 = 0xbf000000;
    local_3c = 0;
    local_40 = 0x3f000000;
    local_8c = (int)ROUND(_DAT_0059e4d4 * -0.5);
    local_88 = (int)ROUND(_DAT_0059e4d4 * 0.5);
    local_84 = (int)ROUND(_DAT_0059e4d4 * 0.0);
  }
  else {
    *param_1 = 1;
    _DAT_01c78c88 = 0;
    _DAT_01c78c90 = 0;
    _DAT_01c78c94 = 0;
    _DAT_01c78c8c = 0xffff;
    FUN_00461eb0(DAT_005ae704,&DAT_005b96ec + param_1[10] * 0x18);
    local_68 = 0xbf000000;
    local_64 = 0;
    local_60 = 0xbf000000;
    local_5c = (int)ROUND(_DAT_0059e4d4 * -0.5);
    local_58 = (int)ROUND(_DAT_0059e4d4 * 0.0);
    local_54 = (int)ROUND(_DAT_0059e4d4 * -0.5);
    FUN_0053075c(*DAT_005ae704,&local_5c);
    local_68 = 0x3f000000;
    local_64 = 0;
    local_60 = 0xbf000000;
    local_38 = (int)ROUND(_DAT_0059e4d4 * 0.5);
    local_34 = (int)ROUND(_DAT_0059e4d4 * 0.0);
    local_30 = (int)ROUND(_DAT_0059e4d4 * -0.5);
    FUN_0053075c(*DAT_005ae704 + 0x30,&local_38);
    local_68 = 0x3f000000;
    local_64 = 0;
    local_60 = 0x3f000000;
    local_2c = (int)ROUND(_DAT_0059e4d4 * 0.5);
    local_28 = (int)ROUND(_DAT_0059e4d4 * 0.0);
    local_24 = (int)ROUND(_DAT_0059e4d4 * 0.5);
    FUN_0053075c(*DAT_005ae704 + 0x60,&local_2c);
    local_68 = 0xbf000000;
    local_64 = 0;
    local_60 = 0x3f000000;
    local_80 = (int)ROUND(_DAT_0059e4d4 * -0.5);
    local_7c = (int)ROUND(_DAT_0059e4d4 * 0.0);
    local_78 = (int)ROUND(_DAT_0059e4d4 * 0.5);
    piVar2 = &local_80;
  }
  FUN_0053075c(*DAT_005ae704 + 0x90,piVar2);
  uVar1 = param_1[5];
  if (uVar1 == 0) {
LAB_004aedaf:
    DAT_005c5034 = 0x2000;
    DAT_005c5038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5038 = 0x7f80;
    DAT_005c5034 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004aedaf;
    DAT_005c5038 = 0;
    DAT_005c5034 = 0;
  }
  DAT_005c503c = 0;
  uVar1 = param_1[5];
  if (uVar1 == 0) {
LAB_004aeddc:
    DAT_005c5064 = 0x2000;
    DAT_005c5068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5068 = 0x7f80;
    DAT_005c5064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004aeddc;
    DAT_005c5068 = 0;
    DAT_005c5064 = 0;
  }
  DAT_005c506c = 0;
  uVar1 = param_1[5];
  if (uVar1 == 0) {
LAB_004aee09:
    DAT_005c5094 = 0x2000;
    DAT_005c5098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5098 = 0x7f80;
    DAT_005c5094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004aee09;
    DAT_005c5098 = 0;
    DAT_005c5094 = 0;
  }
  DAT_005c509c = 0;
  uVar1 = param_1[5];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_005c50c8 = 0x7f80;
      DAT_005c50c4 = 0;
      goto LAB_004aee48;
    }
    if (uVar1 == 2) {
      DAT_005c50c8 = 0;
      DAT_005c50c4 = 0;
      goto LAB_004aee48;
    }
  }
  DAT_005c50c4 = 0x2000;
  DAT_005c50c8 = 0;
LAB_004aee48:
  DAT_005c50cc = 0;
  FUN_004602a0(DAT_005ae704,0x1c78c80);
  if (param_1[4] == 1) {
    thunk_FUN_004cdbc0(DAT_005ae704);
    return;
  }
  return;
}
