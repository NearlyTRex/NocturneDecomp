// Name: core_sound.cpp_FUN_0057d9c0
// Address: 0057d9c0
// Address Range: [[0057d9c0, 0057d9cd]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_FUN_0057d9c0(CSound *this_ptr,uint sfx_handle)

#include "nocturne.h"

int __cdecl core_sound_cpp_FUN_0057d9c0(CSound *this_ptr,uint sfx_handle)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_FUN_005735a0(sfx_handle);
  return iVar1;
}
