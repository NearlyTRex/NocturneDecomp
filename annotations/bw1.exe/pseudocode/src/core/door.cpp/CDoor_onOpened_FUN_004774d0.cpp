// Name: core_door.cpp_CDoor_onOpened_FUN_004774d0
// Address: 004774d0
// Address Range: [[004774d0, 004774e9]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_onOpened_FUN_004774d0(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_onOpened_FUN_004774d0(CDoor *this_ptr)

{
  core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,this_ptr->open_condition);
  return;
}
