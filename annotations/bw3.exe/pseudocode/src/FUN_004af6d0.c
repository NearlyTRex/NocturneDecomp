// Name: FUN_004af6d0
// Address: 004af6d0
// Address Range: [[004af6d0, 004af782]]
// Convention: unknown
// Signature: undefined4 FUN_004af6d0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004af6d0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  if (*param_2 < _DAT_01c6b5a8) {
    if (*param_4 < _DAT_01c6b5a8) {
      return 1;
    }
    *param_1 = *param_1 + (_DAT_01c6b5a8 - *param_2);
    *param_2 = _DAT_01c6b5a8;
  }
  if (_DAT_01c6b5b0 < *param_4) {
    if (_DAT_01c6b5b0 < *param_2) {
      return 1;
    }
    *param_4 = _DAT_01c6b5b0;
  }
  if (*param_3 < _DAT_01c6b5ac) {
    if (*param_5 < _DAT_01c6b5ac) {
      return 1;
    }
    *param_1 = *param_1 + (_DAT_01c6b5ac - *param_3) * param_6;
    *param_3 = _DAT_01c6b5ac;
  }
  if (_DAT_01c6b5b4 < *param_5) {
    if (_DAT_01c6b5b4 < *param_3) {
      return 1;
    }
    *param_5 = _DAT_01c6b5b4;
  }
  return 0;
}
