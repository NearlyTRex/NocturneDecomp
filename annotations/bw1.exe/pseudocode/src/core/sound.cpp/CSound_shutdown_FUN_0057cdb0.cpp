// Name: core_sound.cpp_CSound_shutdown_FUN_0057cdb0
// Address: 0057cdb0
// Address Range: [[0057cdb0, 0057cdfb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_shutdown_FUN_0057cdb0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_shutdown_FUN_0057cdb0(CSound *this_ptr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  g_SoundAudioInitialized = 0;
  do {
    puVar1 = (uint *)((int)&g_TrainNoiseArray[0].sfx_handle + iVar2);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_00573a80(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_00573a80(g_TrainRailNoiseHandle);
  sound_sndmain_cpp_killSfx_FUN_00573a80(g_TrainExteriorAmbientHandle);
  sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
  return;
}
