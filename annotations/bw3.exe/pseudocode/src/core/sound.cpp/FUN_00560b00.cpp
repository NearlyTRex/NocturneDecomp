// Name: core_sound.cpp_FUN_00560b00
// Address: 00560b00
// Address Range: [[00560b00, 00560b0d]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_00560b00(CSound *this_ptr,uint sfx_handle)

#include "nocturne.h"

void __cdecl core_sound_cpp_FUN_00560b00(CSound *this_ptr,uint sfx_handle)

{
  sound_sndmain_cpp_killSfx_FUN_00556be0(sfx_handle);
  return;
}
