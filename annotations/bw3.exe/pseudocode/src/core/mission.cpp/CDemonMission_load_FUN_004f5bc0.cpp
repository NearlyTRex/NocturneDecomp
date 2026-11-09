// Name: core_mission.cpp_CDemonMission_load_FUN_004f5bc0
// Address: 004f5bc0
// Address Range: [[004f5bc0, 004f5c52]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_load_FUN_004f5bc0(CDemonMission *this_ptr,char *mission_filename,int load_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_load_FUN_004f5bc0(CDemonMission *this_ptr,char *mission_filename,int load_flags)

{
  _FILE *file_handle;
  char *pcVar1;
  uint uVar2;
  
  file_handle = engine_dosio_cpp_FUN_004659c0("world",mission_filename,&DAT_005c837b);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xa3;
    core_main_c_FUN_004e4330("CDemonMission::load - Unable to open file");
  }
  uVar2 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading mission");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar2);
  core_mission_cpp_CDemonMission_readMissionFile_FUN_004f5cc0(this_ptr,file_handle,load_flags);
  _fclose(file_handle);
  core_mission_cpp_FUN_004f7a20(this_ptr);
  return;
}
