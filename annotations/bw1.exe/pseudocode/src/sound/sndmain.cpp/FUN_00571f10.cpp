// Name: FUN_00571f10
// Address: 00571f10
// Address Range: [[00571f10, 00571f93]]
// Convention: unknown
// Signature: void FUN_00571f10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571f10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    if (_DAT_02c80650 != (int *)0x0) {
      if (*(int *)(param_1 + 0x68) == 0) {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xcf9;
        FUN_005030e0("SfxSlot::pollHwHandle - no sample?");
      }
      iVar1 = (**(code **)(*_DAT_02c80650 + 0x54))(_DAT_02c80650,param_1);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_00572680(*(uint *)(param_1 + 0x68));
      if (iVar1 != 0) {
        FUN_005773f0("Killing looped sfx %s, which died??\n",*(uint *)(param_1 + 0x68));
      }
    }
    FUN_00571d70(param_1);
  }
  return;
}
