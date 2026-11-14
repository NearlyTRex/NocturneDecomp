// Name: core_mission.cpp_CDemonMission_save_FUN_0051a490
// Address: 0051a490
// Address Range: [[0051a490, 0051a4ef]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_save_FUN_0051a490(CDemonMission *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_save_FUN_0051a490(CDemonMission *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_FUN_00479180("world",filename,"wt");
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xbd;
    core_main_c_FUN_005030e0("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_CDemonMission_writeFile_FUN_0051ac40(this_ptr,file_handle);
  _fclose(file_handle);
  return;
}
