// Name: core_door.cpp_CDoor_updateCollisionData_FUN_00481020
// Address: 00481020
// Address Range: [[00481020, 00481055]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00481020(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00481020(CDoor *this_ptr)

{
  if ((g_CDemonMissionPtr->is_in_editor == 0) && (this_ptr->door_state == 0)) {
    core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574440(g_CDemonSetPtr);
    return;
  }
  return;
}
