// Name: FUN_0054f700
// Address: 0054f700
// Address Range: [[0054f700, 0054f890]]
// Convention: unknown
// Signature: void FUN_0054f700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054f700(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xca3;
    FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    pcVar3 = "[NULLsamplePtr]";
    if (*(char **)(param_1 + 0x68) != (char *)0x0) {
      pcVar3 = *(char **)(param_1 + 0x68);
    }
    FUN_00436710(PTR_DAT_00609ed0,"Killing sfx %s\n",pcVar3);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    if (_DAT_02648e80 != (int *)0x0) {
      (**(code **)(*_DAT_02648e80 + 0x50))(_DAT_02648e80,param_1);
    }
    *(uint *)(param_1 + 0x60) = 0;
  }
  *(uint *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x68) + 0x154) < 1) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0xcc2;
      FUN_004e4500("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x68) + 0x154);
    *piVar1 = *piVar1 + -1;
    iVar2 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = 0;
    if (-1 < *(int *)(iVar2 + 0x160)) {
      if (*(int *)(iVar2 + 0x154) != 0) {
        _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
        _DAT_01d046a4 = 0xcd1;
        FUN_004e4500("refCount for streaming Sfx %s > 1",iVar2);
      }
      if ((param_1 + -0x263cf1c) / 0x11c != *(int *)(iVar2 + 0x160)) {
        _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
        _DAT_01d046a4 = 0xcd2;
        FUN_004e4500("streaming sample sfx index mismatch on %s",iVar2);
      }
      FUN_0054d9b0(iVar2);
    }
    FUN_0054b960(0);
    *(uint *)(iVar2 + 0x160) = 0xffffffff;
  }
  *(uint *)(param_1 + 0x118) = 0;
  return;
}
