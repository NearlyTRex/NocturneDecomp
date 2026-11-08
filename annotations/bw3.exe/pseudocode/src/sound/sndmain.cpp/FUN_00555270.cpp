// Name: FUN_00555270
// Address: 00555270
// Address Range: [[00555270, 00555400]]
// Convention: unknown
// Signature: void FUN_00555270(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555270(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xca5;
    FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    pcVar3 = "[NULLsamplePtr]";
    if (*(char **)(param_1 + 0x68) != (char *)0x0) {
      pcVar3 = *(char **)(param_1 + 0x68);
    }
    FUN_00441ff0(PTR_DAT_005f1690,"Killing sfx %s\n",pcVar3);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    if (_DAT_02cf3280 != (int *)0x0) {
      (**(code **)(*_DAT_02cf3280 + 0x50))(_DAT_02cf3280,param_1);
    }
    *(uint *)(param_1 + 0x60) = 0;
  }
  *(uint *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x68) + 0x154) < 1) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0xcc4;
      FUN_004e4330("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x68) + 0x154);
    *piVar1 = *piVar1 + -1;
    iVar2 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = 0;
    if (-1 < *(int *)(iVar2 + 0x160)) {
      if (*(int *)(iVar2 + 0x154) != 0) {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xcd3;
        FUN_004e4330("refCount for streaming Sfx %s > 1",iVar2);
      }
      if ((param_1 + -0x2ce721c) / 0x11c != *(int *)(iVar2 + 0x160)) {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xcd4;
        FUN_004e4330("streaming sample sfx index mismatch on %s",iVar2);
      }
      FUN_00553520(iVar2);
    }
    FUN_005514c0(0);
    *(uint *)(iVar2 + 0x160) = 0xffffffff;
  }
  *(uint *)(param_1 + 0x118) = 0;
  return;
}
