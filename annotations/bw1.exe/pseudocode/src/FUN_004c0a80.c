// Name: FUN_004c0a80
// Address: 004c0a80
// Address Range: [[004c0a80, 004c0b32]]
// Convention: unknown
// Signature: undefined4 FUN_004c0a80(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c0a80(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  if (*param_2 < _DAT_01c4f008) {
    if (*param_4 < _DAT_01c4f008) {
      return 1;
    }
    *param_1 = *param_1 + (_DAT_01c4f008 - *param_2);
    *param_2 = _DAT_01c4f008;
  }
  if (_DAT_01c4f010 < *param_4) {
    if (_DAT_01c4f010 < *param_2) {
      return 1;
    }
    *param_4 = _DAT_01c4f010;
  }
  if (*param_3 < _DAT_01c4f00c) {
    if (*param_5 < _DAT_01c4f00c) {
      return 1;
    }
    *param_1 = *param_1 + (_DAT_01c4f00c - *param_3) * param_6;
    *param_3 = _DAT_01c4f00c;
  }
  if (_DAT_01c4f014 < *param_5) {
    if (_DAT_01c4f014 < *param_3) {
      return 1;
    }
    *param_5 = _DAT_01c4f014;
  }
  return 0;
}
