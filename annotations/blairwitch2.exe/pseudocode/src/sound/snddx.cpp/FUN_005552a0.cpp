// Name: sound_snddx.cpp_FUN_005552a0
// Address: 005552a0
// Address Range: [[005552a0, 0055538b]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_005552a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_005552a0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char acStack_328 [400];
  char acStack_198 [400];
  
  uVar4 = 1;
  if (_DAT_0264a5cc != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_0264a5cc + 0x48))(_DAT_0264a5cc);
    if (uVar2 != 0) {
      sound_snddx_cpp_FUN_00554ad0(uVar2);
      _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)");
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_198);
    }
  }
  if (_DAT_0264a5c8 != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_0264a5c8 + 0x48))(_DAT_0264a5c8);
    if (uVar2 != 0) {
      sound_snddx_cpp_FUN_00554ad0(uVar2);
      _sprintf(acStack_328,"DirectSux: Unable to %s.  (%s)");
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_328);
    }
  }
  iVar3 = 0;
  do {
    iVar1 = sound_snddx_cpp_FUN_00554e50(iVar3);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1f);
  iVar3 = sound_sndmain_cpp_killSoundThread_FUN_00553270();
  if (iVar3 != 0) {
    return uVar4;
  }
  return 0;
}
