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
  char *pcVar3;
  int iVar4;
  uint uVar5;
  byte auStack_328 [400];
  byte auStack_198 [400];
  
  uVar5 = 1;
  if (_DAT_02cf49cc != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_02cf49cc + 0x48))(_DAT_02cf49cc);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_FUN_0055a670(uVar2);
      FUN_005a28c0
                (auStack_198,"DirectSux: Unable to %s.  (%s)",
                 "?Stop secondary sound buffer" + 1,pcVar3);
      uVar5 = 0;
      sound_sndmain_cpp_FUN_0055a560(auStack_198);
    }
  }
  if (_DAT_02cf49c8 != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_02cf49c8 + 0x48))(_DAT_02cf49c8);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_FUN_0055a670(uVar2);
      FUN_005a28c0
                (auStack_328,"DirectSux: Unable to %s.  (%s)","Stop primary sound buffer",
                 pcVar3);
      uVar5 = 0;
      sound_sndmain_cpp_FUN_0055a560(auStack_328);
    }
  }
  iVar4 = 0;
  do {
    iVar1 = sound_snddx_cpp_FUN_0055a9f0(iVar4);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1f);
  iVar4 = sound_sndmain_cpp_killSoundThread_FUN_00558e10();
  if (iVar4 != 0) {
    return uVar5;
  }
  return 0;
}
