// Name: core_sound.cpp_CSound_shutdown_FUN_0052df90
// Address: 0052df90
// Address Range: [[0052df90, 0052dfdb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_shutdown_FUN_0052df90(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_shutdown_FUN_0052df90(CSound *this_ptr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_02dc9c94 = 0;
  do {
    puVar1 = (uint *)((int)&g_STrainNoise_ARRAY_02dc9ca4[0].sfx_handle + iVar2);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_00527230(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_00527230(_DAT_02dc9d58);
  sound_sndmain_cpp_killSfx_FUN_00527230(_DAT_02dc9d5c);
  sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
  return;
}
