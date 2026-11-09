// Name: core_door.cpp_FUN_00460800
// Address: 00460800
// Address Range: [[00460800, 00460834]]
// Convention: __cdecl
// Signature: uint __cdecl core_door_cpp_FUN_00460800(CDoor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_door_cpp_FUN_00460800(CDoor *this_ptr)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_FUN_00550b70(_DAT_01b4d330);
  if (uVar1 != 0) {
    return uVar1;
  }
  _DAT_01b4d330 =
       (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,&this_ptr->field_0xa88);
  return _DAT_01b4d330;
}
