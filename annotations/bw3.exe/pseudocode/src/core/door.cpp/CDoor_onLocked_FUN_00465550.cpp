// Name: core_door.cpp_CDoor_onLocked_FUN_00465550
// Address: 00465550
// Address Range: [[00465550, 00465584]]
// Convention: __cdecl
// Signature: uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00465550(CDoor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00465550(CDoor *this_ptr)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(_DAT_01b8513c);
  if (uVar1 != 0) {
    return uVar1;
  }
  _DAT_01b8513c =
       (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->locked_sound);
  return _DAT_01b8513c;
}
