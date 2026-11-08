// Name: FUN_00530630
// Address: 00530630
// Address Range: [[00530630, 005306a9]]
// Convention: unknown
// Signature: void FUN_00530630(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00530630(uint param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x1cb4) != 0) {
    if (0 < _DAT_01fc9608) {
      iVar1 = 0;
      do {
        if (param_2 == *(int *)(iVar1 + 0x1fc960c)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < _DAT_01fc9608 * 4);
    }
    if (3 < _DAT_01fc9608) {
      _DAT_01d046a0 = "..\\core\\set.cpp";
      _DAT_01d046a4 = 0x9b1;
      FUN_004e4500("Too many dynamic lights!");
    }
    _DAT_01fc9608 = _DAT_01fc9608 + 1;
    *(int *)(&DAT_01fc9608 + _DAT_01fc9608 * 4) = param_2;
  }
  return;
}
