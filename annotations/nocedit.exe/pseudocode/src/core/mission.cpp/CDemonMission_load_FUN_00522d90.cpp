// Name: core_mission.cpp_CDemonMission_load_FUN_00522d90
// Address: 00522d90
// Address Range: [[00522d90, 00522e2c]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_load_FUN_00522d90 (CDemonMission *this_ptr,char *mission_filename,int load_flags)

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_load_FUN_00522d90
          (CDemonMission *this_ptr,char *mission_filename,int load_flags)

{
  _FILE *file_ptr;
  char *text;
  int clear_screen;
  
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("world",mission_filename,"rt");
  if (file_ptr == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x9c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - Unable to open file");
  }
  clear_screen = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading mission");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,text,clear_screen);
  core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0(this_ptr);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\mission.cpp",0x9f);
  core_mission_cpp_FUN_00524c20();
  return;
}
