// Name: FUN_0054daf0
// Address: 0054daf0
// Address Range: [[0054daf0, 0054dbee]]
// Convention: unknown
// Signature: int FUN_0054daf0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054daf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x89a;
    FUN_004e4500("SfxSample::lock - already locked!");
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x164) < param_2 + param_3)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x89f;
    FUN_004e4500("SfxSample::lock - invalid region");
  }
  if (*(int *)(param_1 + 0x158) == 0) {
    if (*(int *)(param_1 + 0x120) == 0) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x8a6;
      FUN_004e4500("SfxSample::lock - nothing allocated!");
    }
    iVar1 = FUN_0054fd90(param_1,param_2);
    iVar1 = iVar1 + *(int *)(param_1 + 0x120);
  }
  else {
    if (_DAT_02648e80 == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*_DAT_02648e80 + 0x38))
                      (_DAT_02648e80,*(uint *)(param_1 + 0x158),param_2,param_3);
  }
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x1a8) = param_3;
    *(int *)(param_1 + 0x1a4) = param_2;
  }
  return iVar1;
}
