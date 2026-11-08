// Name: FUN_0043bf50
// Address: 0043bf50
// Address Range: [[0043bf50, 0043c031]]
// Convention: unknown
// Signature: void FUN_0043bf50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bf50(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x3ee;
    FUN_004e4500("CDemonCamera::endScene - Scene not open!");
  }
  else {
    *(uint *)(param_1 + 0x11e4) = 0;
  }
  if (_DAT_0264bba0 != 0) {
    FUN_0055f5b0();
  }
  if ((*(int *)(param_1 + 0x168) == 0) && (param_2 == 0)) {
    if (_DAT_01c37788 != 0) {
      FUN_00560030(0);
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      do {
        iVar1 = iVar1 + 1;
        FUN_00492718(*(int *)(param_1 + 0x144) << 2);
      } while (iVar1 < *(int *)(param_1 + 0x148));
    }
  }
  thunk_FUN_004ea570(DAT_0060b280);
  FUN_0043b7d0(param_1);
  return;
}
