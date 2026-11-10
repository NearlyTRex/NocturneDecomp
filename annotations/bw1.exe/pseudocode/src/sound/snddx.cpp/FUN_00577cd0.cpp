// Name: sound_snddx.cpp_FUN_00577cd0
// Address: 00577cd0
// Address Range: [[00577cd0, 00577dbb]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_00577cd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_00577cd0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char acStack_328 [400];
  char acStack_198 [400];
  
  uVar4 = 1;
  if (_DAT_02c81d9c != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_02c81d9c + 0x48))(_DAT_02c81d9c);
    if (uVar2 != 0) {
      sound_snddx_cpp_FUN_00577500(uVar2);
      _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)");
      uVar4 = 0;
      sound_sndmain_cpp_FUN_005773f0(acStack_198);
    }
  }
  if (_DAT_02c81d98 != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_02c81d98 + 0x48))(_DAT_02c81d98);
    if (uVar2 != 0) {
      sound_snddx_cpp_FUN_00577500(uVar2);
      _sprintf(acStack_328,"DirectSux: Unable to %s.  (%s)");
      uVar4 = 0;
      sound_sndmain_cpp_FUN_005773f0(acStack_328);
    }
  }
  iVar3 = 0;
  do {
    iVar1 = sound_snddx_cpp_FUN_00577880(iVar3);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1f);
  iVar3 = sound_sndmain_cpp_killSoundThread_FUN_00575ca0();
  if (iVar3 != 0) {
    return uVar4;
  }
  return 0;
}
