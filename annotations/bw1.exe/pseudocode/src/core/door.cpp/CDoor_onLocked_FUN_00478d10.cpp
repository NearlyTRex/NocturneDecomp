// Name: core_door.cpp_CDoor_onLocked_FUN_00478d10
// Address: 00478d10
// Address Range: [[00478d10, 00478d44]]
// Convention: __cdecl
// Signature: uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00478d10(CDoor *this_ptr)

#include "nocturne.h"

uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00478d10(CDoor *this_ptr)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(g_UINT_01b688ec);
  if (uVar1 != 0) {
    return uVar1;
  }
  g_UINT_01b688ec =
       (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->locked_sound);
  return g_UINT_01b688ec;
}
