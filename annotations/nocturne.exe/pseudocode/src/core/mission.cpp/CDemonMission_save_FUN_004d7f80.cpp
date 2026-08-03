// Name: core_mission.cpp_CDemonMission_save_FUN_004d7f80
// Address: 004d7f80
// Address Range: [[004d7f80, 004d7fdf]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_save_FUN_004d7f80(CDemonMission *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_save_FUN_004d7f80(CDemonMission *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("world",filename,"wt");
  if (file_handle == (_FILE *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\mission.cpp";
    g_INT_01cc4804 = 0xb6;
    core_main_c_FUN_004c8440("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_FUN_004d8720(this_ptr,file_handle);
  _fclose(file_handle);
  return;
}
