// Name: FUN_005378e0
// Address: 005378e0
// Address Range: [[005378e0, 005379d1]]
// Convention: unknown
// Signature: void FUN_005378e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005378e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    if (param_2 < _DAT_01c4f008) {
      param_4 = param_4 + (_DAT_01c4f008 - param_2);
      param_2 = _DAT_01c4f008;
    }
    if (param_3 < _DAT_01c4f00c) {
      param_5 = param_5 + (_DAT_01c4f00c - param_3);
      param_3 = _DAT_01c4f00c;
    }
    if (_DAT_01c4f010 < (param_6 + param_2) - param_4) {
      param_6 = (_DAT_01c4f010 - param_2) + param_4;
    }
    if (_DAT_01c4f014 < (param_3 + param_7) - param_5) {
      param_7 = (_DAT_01c4f014 - param_3) + param_5;
    }
    if ((((param_4 <= param_6) && (param_5 <= param_7)) && (0 < param_6)) &&
       (((0 < param_7 && (param_4 < *(int *)(param_1 + 0x18))) &&
        (param_5 < *(int *)(param_1 + 0x1c))))) {
      if (param_4 < 0) {
        param_2 = param_2 - param_4;
        param_4 = 0;
      }
      if (param_5 < 0) {
        param_3 = param_3 - param_5;
        param_5 = 0;
      }
      if (*(int *)(param_1 + 0x18) <= param_6) {
        param_6 = *(int *)(param_1 + 0x18) + -1;
      }
      if (*(int *)(param_1 + 0x1c) <= param_7) {
        param_7 = *(int *)(param_1 + 0x1c) + -1;
      }
      FUN_00537760(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return;
}
