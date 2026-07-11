// Name: FUN_0048fd50
// Address: 0048fd50
// Address Range: [[0048fd50, 0048fe02]]
// Convention: unknown
// Signature: undefined4 FUN_0048fd50(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0048fd50(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  if (*param_2 < _DAT_01c00c58) {
    if (*param_4 < _DAT_01c00c58) {
      return 1;
    }
    *param_1 = *param_1 + (_DAT_01c00c58 - *param_2);
    *param_2 = _DAT_01c00c58;
  }
  if (_DAT_01c00c60 < *param_4) {
    if (_DAT_01c00c60 < *param_2) {
      return 1;
    }
    *param_4 = _DAT_01c00c60;
  }
  if (*param_3 < _DAT_01c00c5c) {
    if (*param_5 < _DAT_01c00c5c) {
      return 1;
    }
    *param_1 = *param_1 + (_DAT_01c00c5c - *param_3) * param_6;
    *param_3 = _DAT_01c00c5c;
  }
  if (_DAT_01c00c64 < *param_5) {
    if (_DAT_01c00c64 < *param_3) {
      return 1;
    }
    *param_5 = _DAT_01c00c64;
  }
  return 0;
}
