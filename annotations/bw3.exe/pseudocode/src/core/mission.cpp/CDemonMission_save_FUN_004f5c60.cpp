// Name: core_mission.cpp_CDemonMission_save_FUN_004f5c60
// Address: 004f5c60
// Address Range: [[004f5c60, 004f5cbf]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_save_FUN_004f5c60(CDemonMission *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_save_FUN_004f5c60(CDemonMission *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_getFile_FUN_004659c0("world",filename,(char *)0x5c83d2);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xbd;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_CDemonMission_writeFile_FUN_004f6410(this_ptr,file_handle);
  _fclose(file_handle);
  return;
}
