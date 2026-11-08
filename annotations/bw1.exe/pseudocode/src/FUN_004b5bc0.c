// Name: FUN_004b5bc0
// Address: 004b5bc0
// Address Range: [[004b5bc0, 004b5d46]]
// Convention: unknown
// Signature: void FUN_004b5bc0(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5bc0(uint param_1,float *param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  byte bVar2;
  float afStackY_1034 [1003];
  byte local_74 [40];
  float local_4c;
  float afStack_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [4];
  float afStack_18 [2];
  
  bVar2 = 0;
  bVar1 = false;
  switch(param_5) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 8:
    bVar1 = true;
    break;
  case 3:
  case 4:
  case 7:
  case 9:
  case 10:
    bVar1 = false;
    break;
  case 6:
    goto switchD_004b5bd9_caseD_6;
  }
  FUN_0045f3e0(local_74,param_3);
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  local_28[2] = 0.7;
  FUN_0045f690(local_74,afStack_48 + 8);
  local_34 = local_4c;
  afStack_48[(uint)bVar2 * -2 + 6] = afStack_48[(uint)bVar2 * -2];
  afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  afStack_48[2] = *param_2 - local_34;
  afStack_48[3] = param_2[1] - local_30;
  local_38 = param_2[2] - local_2c;
  local_28[3] = *param_2 - local_34;
  afStack_18[(uint)bVar2 * -2] = afStack_48[(uint)bVar2 * -2 + 3];
  afStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  if (bVar1) {
    FUN_004acb60(_DAT_01c726ac * 0x260 + 0x1c726b0,afStack_48 + 0xb,param_3,param_4);
  }
  else {
    FUN_0057d940(0x02C82A60,param_1,"a-wood?.wav",afStack_48 + 0xb,0x3e6b851f);
    FUN_004acaf0(_DAT_01c726ac * 0x260 + 0x1c726b0,afStack_48 + 0xb,param_3);
  }
  _DAT_01c726ac = _DAT_01c726ac + 1;
  if (0xff < _DAT_01c726ac) {
    _DAT_01c726ac = 0;
  }
  if (_DAT_01c726a8 < 0x100) {
    _DAT_01c726a8 = _DAT_01c726a8 + 1;
    return;
  }
switchD_004b5bd9_caseD_6:
  return;
}
