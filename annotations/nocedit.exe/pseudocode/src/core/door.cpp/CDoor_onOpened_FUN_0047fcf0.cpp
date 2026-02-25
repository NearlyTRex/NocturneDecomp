// Name: core_door.cpp_CDoor_onOpened_FUN_0047fcf0
// Address: 0047fcf0
// Address Range: [[0047fcf0, 0047fd09]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_onOpened_FUN_0047fcf0(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_onOpened_FUN_0047fcf0(CDoor *this_ptr)

{
  core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->open_condition);
  return;
}
