// Name: core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0
// Address: 0052eba0
// Address Range: [[0052eba0, 0052ebad]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(CSound *this_ptr,uint sfx_handle)

#include "nocturne.h"

int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(CSound *this_ptr,uint sfx_handle)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(sfx_handle);
  return iVar1;
}
