// Name: core_mission.cpp_CDemonMission_changeSetName_FUN_004f6cd0
// Address: 004f6cd0
// Address Range: [[004f6cd0, 004f6d66]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_changeSetName_FUN_004f6cd0(CDemonMission *this_ptr,int param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_changeSetName_FUN_004f6cd0(CDemonMission *this_ptr,int param_2,char *param_3)

{
  char cVar1;
  char (*pacVar2) [256];
  
  if ((param_2 < 0) || (this_ptr->num_sets <= param_2)) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x3be;
    core_main_c_FUN_004e4330("CDemonMission::changeSetName - invalid index: %d, count = %d",param_2,this_ptr->num_sets);
  }
  pacVar2 = this_ptr->set_names + param_2;
  do {
    cVar1 = *param_3;
    (*pacVar2)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    (*pacVar2)[1] = cVar1;
    pacVar2 = (char (*) [256])(*pacVar2 + 2);
  } while (cVar1 != '\0');
  if (param_2 != this_ptr->current_set_index) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\mission.cpp";
  _DAT_01d71de4 = 0x3c8;
  core_main_c_FUN_004e4330("Tried to change the set file for the set we are currently in.  Let's not allow this, OK?");
  return;
}
