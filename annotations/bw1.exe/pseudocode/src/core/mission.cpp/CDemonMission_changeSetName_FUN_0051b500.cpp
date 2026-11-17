// Name: core_mission.cpp_CDemonMission_changeSetName_FUN_0051b500
// Address: 0051b500
// Address Range: [[0051b500, 0051b596]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_changeSetName_FUN_0051b500(CDemonMission *this_ptr,int set_index,char *set_name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_changeSetName_FUN_0051b500(CDemonMission *this_ptr,int set_index,char *set_name)

{
  char cVar1;
  char (*pacVar2) [256];
  
  if ((set_index < 0) || (this_ptr->num_sets <= set_index)) {
    g_CHAR_PTR_01d1d400 = "..\\core\\mission.cpp";
    g_INT_01d1d404 = 0x3be;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonMission::changeSetName - invalid index: %d, count = %d");
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
  g_CHAR_PTR_01d1d400 = "..\\core\\mission.cpp";
  g_INT_01d1d404 = 0x3c8;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Tried to change the set file for the set we are currently in.  Let's not allow this, OK?");
  return;
}
