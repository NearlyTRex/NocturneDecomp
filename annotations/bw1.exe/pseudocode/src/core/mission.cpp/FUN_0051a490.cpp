// Name: core_mission.cpp_FUN_0051a490
// Address: 0051a490
// Address Range: [[0051a490, 0051a4ef]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_0051a490(CDemonMission *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_0051a490(CDemonMission *param_1,char *param_2)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_FUN_00479180("world",param_2,"wt");
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xbd;
    core_main_c_FUN_005030e0("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_CDemonMission_writeFile_FUN_0051ac40(param_1,file_handle);
  _fclose(file_handle);
  return;
}
