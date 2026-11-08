// Name: FUN_0044d610
// Address: 0044d610
// Address Range: [[0044d610, 0044d6f1]]
// Convention: unknown
// Signature: void FUN_0044d610(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d610(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x3f2;
    FUN_005030e0("CDemonCamera::endScene - Scene not open!");
  }
  else {
    *(uint *)(param_1 + 0x11e4) = 0;
  }
  if (_DAT_02c83370 != 0) {
    FUN_00582000();
  }
  if ((*(int *)(param_1 + 0x168) == 0) && (param_2 == 0)) {
    if (_DAT_01c50948 != 0) {
      FUN_00582a80(0);
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      do {
        iVar1 = iVar1 + 1;
        FUN_004ab0c8(*(int *)(param_1 + 0x144) << 2);
      } while (iVar1 < *(int *)(param_1 + 0x148));
    }
  }
  thunk_FUN_00509210(DAT_00612560);
  FUN_0044ce90(param_1);
  return;
}
