// Name: core_sound.cpp_CSound_shutdown_FUN_0057cdb0
// Address: 0057cdb0
// Address Range: [[0057cdb0, 0057cdfb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_shutdown_FUN_0057cdb0(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_shutdown_FUN_0057cdb0(CSound *this_ptr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_02c832a4 = 0;
  do {
    puVar1 = (uint *)(iVar2 + 0x2c832c0);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_00573a80(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_00573a80(_DAT_02c83368);
  sound_sndmain_cpp_killSfx_FUN_00573a80(_DAT_02c8336c);
  sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
  return;
}
