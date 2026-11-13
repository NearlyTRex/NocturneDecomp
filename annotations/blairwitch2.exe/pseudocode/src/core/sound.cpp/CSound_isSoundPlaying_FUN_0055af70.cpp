// Name: core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70
// Address: 0055af70
// Address Range: [[0055af70, 0055af7d]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(CSound *this_ptr,uint sfx_handle)

#include "nocturne.h"

int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(CSound *this_ptr,uint sfx_handle)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(sfx_handle);
  return iVar1;
}
