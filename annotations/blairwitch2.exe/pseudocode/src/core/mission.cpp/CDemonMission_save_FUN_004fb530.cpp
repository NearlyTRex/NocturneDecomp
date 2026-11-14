// Name: core_mission.cpp_CDemonMission_save_FUN_004fb530
// Address: 004fb530
// Address Range: [[004fb530, 004fb58f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_save_FUN_004fb530(CDemonMission *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_save_FUN_004fb530(CDemonMission *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_FUN_00460c70("world",filename,(char *)0x5de08d);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xba;
    core_main_c_FUN_004e4500("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_CDemonMission_writeFile_FUN_004fbce0(this_ptr,file_handle);
  _fclose(file_handle);
  return;
}
