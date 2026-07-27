// Name: core_mission.cpp_FUN_004d7f80
// Address: 004d7f80
// Address Range: [[004d7f80, 004d7fdf]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004d7f80(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_004d7f80(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("world",param_2,"wt");
  if (iVar1 == 0) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0xb6;
    core_main_c_FUN_004c8440("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_FUN_004d8720(param_1,iVar1);
  _fclose(iVar1);
  return;
}
