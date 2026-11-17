// Name: core_sound.cpp_CSound_shutdown_FUN_0055a360
// Address: 0055a360
// Address Range: [[0055a360, 0055a3ab]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_shutdown_FUN_0055a360(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_shutdown_FUN_0055a360(CSound *this_ptr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  g_SoundAudioInitialized = 0;
  do {
    puVar1 = (uint *)((int)&g_TrainNoiseArray[0].sfx_handle + iVar2);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_00551050(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_00551050(g_TrainRailNoiseHandle);
  sound_sndmain_cpp_killSfx_FUN_00551050(g_TrainExteriorAmbientHandle);
  sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
  return;
}
