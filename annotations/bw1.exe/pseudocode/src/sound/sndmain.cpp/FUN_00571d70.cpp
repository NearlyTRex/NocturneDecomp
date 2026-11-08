// Name: FUN_00571d70
// Address: 00571d70
// Address Range: [[00571d70, 00571f00]]
// Convention: unknown
// Signature: void FUN_00571d70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571d70(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xca3;
    FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    pcVar3 = "[NULLsamplePtr]";
    if (*(char **)(param_1 + 0x68) != (char *)0x0) {
      pcVar3 = *(char **)(param_1 + 0x68);
    }
    FUN_00445430(PTR_DAT_00611100,"Killing sfx %s\n",pcVar3);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    if (_DAT_02c80650 != (int *)0x0) {
      (**(code **)(*_DAT_02c80650 + 0x50))(_DAT_02c80650,param_1);
    }
    *(uint *)(param_1 + 0x60) = 0;
  }
  *(uint *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x68) + 0x154) < 1) {
      _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
      _DAT_01d1d404 = 0xcc2;
      FUN_005030e0("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x68) + 0x154);
    *piVar1 = *piVar1 + -1;
    iVar2 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = 0;
    if (-1 < *(int *)(iVar2 + 0x160)) {
      if (*(int *)(iVar2 + 0x154) != 0) {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xcd1;
        FUN_005030e0("refCount for streaming Sfx %s > 1",iVar2);
      }
      if ((param_1 + -0x2c745ec) / 0x11c != *(int *)(iVar2 + 0x160)) {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xcd2;
        FUN_005030e0("streaming sample sfx index mismatch on %s",iVar2);
      }
      FUN_00570020(iVar2);
    }
    FUN_0056dfd0(0);
    *(uint *)(iVar2 + 0x160) = 0xffffffff;
  }
  *(uint *)(param_1 + 0x118) = 0;
  return;
}
