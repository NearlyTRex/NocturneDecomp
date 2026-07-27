// Name: core_mission.cpp_CDemonMission_load_FUN_004d7ee0
// Address: 004d7ee0
// Address Range: [[004d7ee0, 004d7f72]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_load_FUN_004d7ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_load_FUN_004d7ee0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("world",param_2,"rt");
  if (iVar1 == 0) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0x9c;
    core_main_c_FUN_004c8440("CDemonMission::load - Unable to open file");
  }
  uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Loading mission",0);
  core_level_cpp_CLevelLoader_update_FUN_004c59e0(INT_005baca0,uVar2);
  core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0(param_1,iVar1,param_3);
  _fclose(iVar1);
  core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20(param_1);
  return;
}
