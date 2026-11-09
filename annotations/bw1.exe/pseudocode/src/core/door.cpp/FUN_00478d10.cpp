// Name: core_door.cpp_FUN_00478d10
// Address: 00478d10
// Address Range: [[00478d10, 00478d44]]
// Convention: __cdecl
// Signature: uint __cdecl core_door_cpp_FUN_00478d10(CDoor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_door_cpp_FUN_00478d10(CDoor *this_ptr)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_FUN_005735a0(_DAT_01b688ec);
  if (uVar1 != 0) {
    return uVar1;
  }
  _DAT_01b688ec =
       (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,&this_ptr->field_0x92c);
  return _DAT_01b688ec;
}
