// Name: FUN_005518e0
// Address: 005518e0
// Address Range: [[005518e0, 00551959]]
// Convention: unknown
// Signature: void FUN_005518e0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005518e0(uint param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x1cb4) != 0) {
    if (0 < _DAT_01fe55bc) {
      iVar1 = 0;
      do {
        if (param_2 == *(int *)(iVar1 + 0x1fe55c0)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < _DAT_01fe55bc * 4);
    }
    if (3 < _DAT_01fe55bc) {
      _DAT_01d1d400 = "..\\core\\set.cpp";
      _DAT_01d1d404 = 0x9ad;
      FUN_005030e0("Too many dynamic lights!");
    }
    _DAT_01fe55bc = _DAT_01fe55bc + 1;
    *(int *)(&DAT_01fe55bc + _DAT_01fe55bc * 4) = param_2;
  }
  return;
}
