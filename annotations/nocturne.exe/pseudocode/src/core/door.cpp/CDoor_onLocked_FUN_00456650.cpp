// Name: core_door.cpp_CDoor_onLocked_FUN_00456650
// Address: 00456650
// Address Range: [[00456650, 00456684]]
// Convention: __cdecl
// Signature: uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00456650(CDoor *this_ptr)

#include "nocturne.h"

uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00456650(CDoor *this_ptr)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(g_UINT_01af4e98);
  if (uVar1 != 0) {
    return uVar1;
  }
  g_UINT_01af4e98 =
       (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->locked_sound);
  return g_UINT_01af4e98;
}
