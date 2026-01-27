// Name: core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
// Address: 00522d30
// Address Range: [[00522d30, 00522d8c]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission *this_ptr)

{
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x84);
  core_mission_cpp_CDemonMission_FUN_00523f50(this_ptr);
  this_ptr->set_list = (void *)0x0;
  this_ptr->unk2[0x38] = '\0';
  this_ptr->unk2[0] = '\0';
  this_ptr->unk2[1] = '\0';
  this_ptr->unk2[2] = '\0';
  this_ptr->unk2[3] = '\0';
  this_ptr->unk4[0x33c] = '\0';
  this_ptr->unk4[0x33d] = '\0';
  this_ptr->unk4[0x33e] = '\0';
  this_ptr->unk4[0x33f] = '\0';
  this_ptr->actorCountMaybe = 0;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x8f);
  return;
}
