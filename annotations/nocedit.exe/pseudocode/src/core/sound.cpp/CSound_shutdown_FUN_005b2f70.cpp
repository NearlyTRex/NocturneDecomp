// Name: core_sound.cpp_CSound_shutdown_FUN_005b2f70
// Address: 005b2f70
// Address Range: [[005b2f70, 005b2fbb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_shutdown_FUN_005b2f70(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_shutdown_FUN_005b2f70(CSound *this_ptr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  g_SoundAudioInitialized = 0;
  do {
    puVar1 = (uint *)((int)&g_TrainNoiseArray[0].sound_handle + iVar2);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainRailNoiseHandle);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  return;
}
