// Name: core_sound.cpp_FUN_00560af0
// Address: 00560af0
// Address Range: [[00560af0, 00560afd]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_FUN_00560af0(CSound *this_ptr,uint sfx_handle)

#include "nocturne.h"

int __cdecl core_sound_cpp_FUN_00560af0(CSound *this_ptr,uint sfx_handle)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_FUN_00556700(sfx_handle);
  return iVar1;
}
