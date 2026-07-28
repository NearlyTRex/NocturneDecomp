// Name: core_door.cpp_CDoor_onOpened_FUN_00455270
// Address: 00455270
// Address Range: [[00455270, 00455289]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_onOpened_FUN_00455270(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_onOpened_FUN_00455270(CDoor *this_ptr)

{
  core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->open_condition);
  return;
}
