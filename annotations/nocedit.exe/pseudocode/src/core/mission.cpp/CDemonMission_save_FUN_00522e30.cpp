// Name: core_mission.cpp_CDemonMission_save_FUN_00522e30
// Address: 00522e30
// Address Range: [[00522e30, 00522eab]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_save_FUN_00522e30(CDemonMission *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_save_FUN_00522e30(CDemonMission *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  shape_memdbg_cpp_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",176);
  file_handle = engine_dosio_cpp_getFile_FUN_00481a50("world",filename,"wt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 182;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_CDemonMission_writeFile_FUN_00523600(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\mission.cpp",184);
  return;
}
