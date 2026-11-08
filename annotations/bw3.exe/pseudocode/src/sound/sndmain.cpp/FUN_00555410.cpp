// Name: FUN_00555410
// Address: 00555410
// Address Range: [[00555410, 00555493]]
// Convention: unknown
// Signature: void FUN_00555410(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555410(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    if (_DAT_02cf3280 != (int *)0x0) {
      if (*(int *)(param_1 + 0x68) == 0) {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xcfb;
        FUN_004e4330("SfxSlot::pollHwHandle - no sample?");
      }
      iVar1 = (**(code **)(*_DAT_02cf3280 + 0x54))(_DAT_02cf3280,param_1);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_00555b80(*(uint *)(param_1 + 0x68));
      if (iVar1 != 0) {
        FUN_0055a560("Killing looped sfx %s, which died??\n",*(uint *)(param_1 + 0x68));
      }
    }
    FUN_00555270(param_1);
  }
  return;
}
