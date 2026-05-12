// Name: sound_sndmain.cpp_killSfxByName_FUN_005aa2f0
// Address: 005aa2f0
// MANUAL RECONSTRUCTION
// Address Range: [[005aa2f0, 005aa33c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killSfxByName_FUN_005aa2f0(char *sample_name)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killSfxByName_FUN_005aa2f0(char *sample_name)

{
  CSfxSample *sample;
  int iVar1;
  int iVar2;

  sound_sndmain_cpp_lockSound_FUN_005abd30();
  for (iVar2 = 0; iVar2 < 64; iVar2 = iVar2 + 1) {
    sample = g_SfxSlots[iVar2].sample;
    if (sample != (CSfxSample *)0x0) {
      iVar1 = _stricmp((sample->sample_info).name,sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(&g_SfxSlots[iVar2]);
      }
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}
