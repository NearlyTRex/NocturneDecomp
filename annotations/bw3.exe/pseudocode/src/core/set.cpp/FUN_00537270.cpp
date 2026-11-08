// Name: FUN_00537270
// Address: 00537270
// Address Range: [[00537270, 005372e9]]
// Convention: unknown
// Signature: void FUN_00537270(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537270(uint param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x1cb4) != 0) {
    if (0 < _DAT_0203ad1c) {
      iVar1 = 0;
      do {
        if (param_2 == *(int *)(iVar1 + 0x203ad20)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < _DAT_0203ad1c * 4);
    }
    if (3 < _DAT_0203ad1c) {
      _DAT_01d71de0 = "..\\core\\set.cpp";
      _DAT_01d71de4 = 0x9c5;
      FUN_004e4330("Too many dynamic lights!");
    }
    _DAT_0203ad1c = _DAT_0203ad1c + 1;
    *(int *)(&DAT_0203ad1c + _DAT_0203ad1c * 4) = param_2;
  }
  return;
}
