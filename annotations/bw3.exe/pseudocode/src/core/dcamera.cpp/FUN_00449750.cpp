// Name: FUN_00449750
// Address: 00449750
// Address Range: [[00449750, 00449831]]
// Convention: unknown
// Signature: void FUN_00449750(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449750(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x3f2;
    FUN_004e4330("CDemonCamera::endScene - Scene not open!");
  }
  else {
    *(uint *)(param_1 + 0x11e4) = 0;
  }
  if (_DAT_02cf5fcc != 0) {
    FUN_005658d0();
  }
  if ((*(int *)(param_1 + 0x168) == 0) && (param_2 == 0)) {
    if (_DAT_01c6cee8 != 0) {
      FUN_00566350(0);
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      do {
        iVar1 = iVar1 + 1;
        FUN_00495f68(*(int *)(param_1 + 0x144) << 2);
      } while (iVar1 < *(int *)(param_1 + 0x148));
    }
  }
  thunk_FUN_004e6c50(DAT_005f2afc);
  FUN_00448fd0(param_1);
  return;
}
