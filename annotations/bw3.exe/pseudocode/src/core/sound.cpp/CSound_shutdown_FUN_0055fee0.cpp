// Name: core_sound.cpp_CSound_shutdown_FUN_0055fee0
// Address: 0055fee0
// Address Range: [[0055fee0, 0055ff2b]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_shutdown_FUN_0055fee0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_shutdown_FUN_0055fee0(CSound *this_ptr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  g_INT_02cf5ec4 = 0;
  do {
    puVar1 = (uint *)((int)&g_STrainNoise_ARRAY_02cf5ed4[0].sfx_handle + iVar2);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_00556be0(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_00556be0(g_UINT_02cf5f88);
  sound_sndmain_cpp_killSfx_FUN_00556be0(g_UINT_02cf5f8c);
  sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
  return;
}
