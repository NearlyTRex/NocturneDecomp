// Name: sound_snddx.cpp_FUN_0055ae40
// Address: 0055ae40
// Address Range: [[0055ae40, 0055af2b]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_0055ae40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_0055ae40(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char acStack_328 [400];
  char acStack_198 [400];
  
  uVar4 = 1;
  if (_DAT_02cf49cc != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_02cf49cc + 0x48))(_DAT_02cf49cc);
    if (uVar2 != 0) {
      sound_snddx_cpp_FUN_0055a670(uVar2);
      _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)");
      uVar4 = 0;
      sound_sndmain_cpp_FUN_0055a560(acStack_198);
    }
  }
  if (_DAT_02cf49c8 != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_02cf49c8 + 0x48))(_DAT_02cf49c8);
    if (uVar2 != 0) {
      sound_snddx_cpp_FUN_0055a670(uVar2);
      _sprintf(acStack_328,"DirectSux: Unable to %s.  (%s)");
      uVar4 = 0;
      sound_sndmain_cpp_FUN_0055a560(acStack_328);
    }
  }
  iVar3 = 0;
  do {
    iVar1 = sound_snddx_cpp_FUN_0055a9f0(iVar3);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1f);
  iVar3 = sound_sndmain_cpp_killSoundThread_FUN_00558e10();
  if (iVar3 != 0) {
    return uVar4;
  }
  return 0;
}
