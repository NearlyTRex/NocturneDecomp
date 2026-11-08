// Name: FUN_004a7ab0
// Address: 004a7ab0
// Address Range: [[004a7ab0, 004a7b62]]
// Convention: unknown
// Signature: undefined4 FUN_004a7ab0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a7ab0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  if (*param_2 < _DAT_01c35e48) {
    if (*param_4 < _DAT_01c35e48) {
      return 1;
    }
    *param_1 = *param_1 + (_DAT_01c35e48 - *param_2);
    *param_2 = _DAT_01c35e48;
  }
  if (_DAT_01c35e50 < *param_4) {
    if (_DAT_01c35e50 < *param_2) {
      return 1;
    }
    *param_4 = _DAT_01c35e50;
  }
  if (*param_3 < _DAT_01c35e4c) {
    if (*param_5 < _DAT_01c35e4c) {
      return 1;
    }
    *param_1 = *param_1 + (_DAT_01c35e4c - *param_3) * param_6;
    *param_3 = _DAT_01c35e4c;
  }
  if (_DAT_01c35e54 < *param_5) {
    if (_DAT_01c35e54 < *param_3) {
      return 1;
    }
    *param_5 = _DAT_01c35e54;
  }
  return 0;
}
