// Name: core_mission.cpp_FUN_004fb530
// Address: 004fb530
// Address Range: [[004fb530, 004fb58f]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004fb530(CDemonMission *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004fb530(CDemonMission *param_1,char *param_2)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_FUN_00460c70("world",param_2,(char *)0x5de08d);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xba;
    core_main_c_FUN_004e4500("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_FUN_004fbce0(param_1,file_handle);
  _fclose(file_handle);
  return;
}
