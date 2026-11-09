// Name: core_sound.cpp_CSound_shutdown_FUN_0055fee0
// Address: 0055fee0
// Address Range: [[0055fee0, 0055ff2b]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_shutdown_FUN_0055fee0(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_shutdown_FUN_0055fee0(CSound *this_ptr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_02cf5ec4 = 0;
  do {
    puVar1 = (uint *)(iVar2 + 0x2cf5ee0);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_00556be0(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_00556be0(_DAT_02cf5f88);
  sound_sndmain_cpp_killSfx_FUN_00556be0(_DAT_02cf5f8c);
  sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
  return;
}
