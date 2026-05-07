// Name: sound_sndmain.cpp_freeSampleByName_FUN_005aa360
// Address: 005aa360
// MANUAL RECONSTRUCTION
// Address Range: [[005aa360, 005aa3bd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_005aa360(char *sample_name,int kill_active_slots)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_005aa360(char *sample_name,int kill_active_slots)

{
  int iVar1;
  int i;

  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (kill_active_slots != 0) {
    sound_sndmain_cpp_killSfxByName_FUN_005aa2f0(sample_name);
  }
  for (i = 0; i < 64; i = i + 1) {
    if (g_SfxSamples[i].ref_count == 0) {
      iVar1 = _stricmp(g_SfxSamples[i].sample_info.name,sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(&g_SfxSamples[i]);
      }
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}
