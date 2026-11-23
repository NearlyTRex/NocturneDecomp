// Name: core_mission.cpp_CDemonMission_load_FUN_004f5bc0
// Address: 004f5bc0
// Address Range: [[004f5bc0, 004f5c52]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_load_FUN_004f5bc0(CDemonMission *this_ptr,char *mission_filename,int load_flags)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_load_FUN_004f5bc0(CDemonMission *this_ptr,char *mission_filename,int load_flags)

{
  _FILE *file_handle;
  char *text;
  int clear_screen;
  
  file_handle = engine_dosio_cpp_getFile_FUN_004659c0
                          ("world",mission_filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 163;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonMission::load - Unable to open file");
  }
  clear_screen = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading mission");
  core_level_cpp_CLevelLoader_update_FUN_004e0000(g_CLevelLoaderPtr,text,clear_screen);
  core_mission_cpp_CDemonMission_readMissionFile_FUN_004f5cc0(this_ptr,file_handle,load_flags);
  _fclose(file_handle);
  core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_004f7a20(this_ptr);
  return;
}
