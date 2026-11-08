// Name: FUN_00553660
// Address: 00553660
// Address Range: [[00553660, 0055375e]]
// Convention: unknown
// Signature: int FUN_00553660(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00553660(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x89c;
    FUN_004e4330("SfxSample::lock - already locked!");
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x164) < param_2 + param_3)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x8a1;
    FUN_004e4330("SfxSample::lock - invalid region");
  }
  if (*(int *)(param_1 + 0x158) == 0) {
    if (*(int *)(param_1 + 0x120) == 0) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x8a8;
      FUN_004e4330("SfxSample::lock - nothing allocated!");
    }
    iVar1 = FUN_00555900(param_1,param_2);
    iVar1 = iVar1 + *(int *)(param_1 + 0x120);
  }
  else {
    if (_DAT_02cf3280 == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*_DAT_02cf3280 + 0x38))
                      (_DAT_02cf3280,*(uint *)(param_1 + 0x158),param_2,param_3);
  }
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x1ac) = param_3;
    *(int *)(param_1 + 0x1a8) = param_2;
  }
  return iVar1;
}
