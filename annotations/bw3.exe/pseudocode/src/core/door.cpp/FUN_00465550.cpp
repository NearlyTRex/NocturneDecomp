// Name: core_door.cpp_FUN_00465550
// Address: 00465550
// Address Range: [[00465550, 00465584]]
// Convention: __cdecl
// Signature: uint __cdecl core_door_cpp_FUN_00465550(CDoor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_door_cpp_FUN_00465550(CDoor *this_ptr)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_FUN_00556700(_DAT_01b8513c);
  if (uVar1 != 0) {
    return uVar1;
  }
  _DAT_01b8513c =
       (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,&this_ptr->field_0x92c);
  return _DAT_01b8513c;
}
