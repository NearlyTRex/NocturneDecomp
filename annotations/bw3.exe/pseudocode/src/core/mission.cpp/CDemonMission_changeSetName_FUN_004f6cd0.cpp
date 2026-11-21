// Name: core_mission.cpp_CDemonMission_changeSetName_FUN_004f6cd0
// Address: 004f6cd0
// Address Range: [[004f6cd0, 004f6d66]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_changeSetName_FUN_004f6cd0(CDemonMission *this_ptr,int set_index,char *set_name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_changeSetName_FUN_004f6cd0(CDemonMission *this_ptr,int set_index,char *set_name)

{
  char cVar1;
  char (*pacVar2) [256];
  
  if ((set_index < 0) || (this_ptr->num_sets <= set_index)) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 958;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonMission::changeSetName - invalid index: %d, count = %d");
  }
  pacVar2 = this_ptr->set_names + set_index;
  do {
    cVar1 = *set_name;
    (*pacVar2)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = set_name[1];
    set_name = set_name + 2;
    (*pacVar2)[1] = cVar1;
    pacVar2 = (char (*) [256])(*pacVar2 + 2);
  } while (cVar1 != '\0');
  if (set_index != this_ptr->current_set_index) {
    return;
  }
  g_CurrentFilename = "..\\core\\mission.cpp";
  g_CurrentLineNumber = 968;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Tried to change the set file for the set we are currently in.  Let's not allow this, OK?");
  return;
}
