// Name: core_door.cpp_CDoor_onOpened_FUN_00463d10
// Address: 00463d10
// Address Range: [[00463d10, 00463d29]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_onOpened_FUN_00463d10(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_onOpened_FUN_00463d10(CDoor *this_ptr)

{
  core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,&this_ptr->field_0x2e8);
  return;
}
