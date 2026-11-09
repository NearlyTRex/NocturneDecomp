// Name: core_sound.cpp_CSound_shutdown_FUN_0055a360
// Address: 0055a360
// Address Range: [[0055a360, 0055a3ab]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_shutdown_FUN_0055a360(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_shutdown_FUN_0055a360(CSound *this_ptr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_0264bad4 = 0;
  do {
    puVar1 = (uint *)(iVar2 + 0x264baf0);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_00551050(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_00551050(_DAT_0264bb98);
  sound_sndmain_cpp_killSfx_FUN_00551050(_DAT_0264bb9c);
  sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
  return;
}
