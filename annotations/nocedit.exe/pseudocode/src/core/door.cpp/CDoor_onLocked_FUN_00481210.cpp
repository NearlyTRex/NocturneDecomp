// Name: core_door.cpp_CDoor_onLocked_FUN_00481210
// Address: 00481210
// Address Range: [[00481210, 00481244]]
// Convention: __cdecl
// Signature: uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00481210(CDoor *this_ptr)

#include "nocturne.h"

uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00481210(CDoor *this_ptr)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(UINT_02c14cd8);
  if (uVar1 != 0) {
    return uVar1;
  }
  UINT_02c14cd8 =
       (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->locked_sound);
  return UINT_02c14cd8;
}
