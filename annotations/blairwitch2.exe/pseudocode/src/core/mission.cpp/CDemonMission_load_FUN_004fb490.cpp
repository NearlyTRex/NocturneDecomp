// Name: core_mission.cpp_CDemonMission_load_FUN_004fb490
// Address: 004fb490
// Address Range: [[004fb490, 004fb522]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_load_FUN_004fb490(CDemonMission *this_ptr,char *mission_filename,int load_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_load_FUN_004fb490(CDemonMission *this_ptr,char *mission_filename,int load_flags)

{
  _FILE *file_handle;
  char *text;
  int clear_screen;
  
  file_handle = engine_dosio_cpp_FUN_00460c70("world",mission_filename,&DAT_005de036);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("CDemonMission::load - Unable to open file");
  }
  clear_screen = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Loading mission");
  core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,text,clear_screen);
  core_mission_cpp_CDemonMission_readMissionFile_FUN_004fb590(this_ptr,file_handle,load_flags);
  _fclose(file_handle);
  core_mission_cpp_FUN_004fd280(this_ptr);
  return;
}
