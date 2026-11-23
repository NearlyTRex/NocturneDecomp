// Name: core_mission.cpp_CDemonMission_load_FUN_0051a3f0
// Address: 0051a3f0
// Address Range: [[0051a3f0, 0051a482]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_load_FUN_0051a3f0(CDemonMission *this_ptr,char *mission_filename,int load_flags)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_load_FUN_0051a3f0(CDemonMission *this_ptr,char *mission_filename,int load_flags)

{
  _FILE *file_handle;
  char *text;
  int clear_screen;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00479180
                          ("world",mission_filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 163;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonMission::load - Unable to open file");
  }
  clear_screen = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading mission");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(g_CLevelLoaderPtr,text,clear_screen);
  core_mission_cpp_CDemonMission_readMissionFile_FUN_0051a4f0(this_ptr,file_handle,load_flags);
  _fclose(file_handle);
  core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_0051c240(this_ptr);
  return;
}
