// Name: core_mission.cpp_FUN_004f5c60
// Address: 004f5c60
// Address Range: [[004f5c60, 004f5cbf]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f5c60(CDemonMission *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004f5c60(CDemonMission *param_1,char *param_2)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_FUN_004659c0("world",param_2,(char *)0x5c83d2);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xbd;
    core_main_c_FUN_004e4330("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_CDemonMission_writeFile_FUN_004f6410(param_1,file_handle);
  _fclose(file_handle);
  return;
}
