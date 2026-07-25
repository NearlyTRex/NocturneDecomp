// Name: core_mission.cpp_CDemonMission_run_FUN_004d9440
// Address: 004d9440
// Address Range: [[004d9440, 004d9643]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_run_FUN_004d9440(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_run_FUN_004d9440(uint param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  while( true ) {
    if (_DAT_01cae0d4 < 1) {
      _DAT_01cc4800 = "..\\core\\mission.cpp";
      _DAT_01cc4804 = 0x4c7;
      FUN_004c8440("CDemonMission::run - hero list empty");
    }
    if (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) == 0) {
      _DAT_01cc4800 = "..\\core\\mission.cpp";
      _DAT_01cc4804 = 0x4c8;
      FUN_004c8440("CDemonMission::run - no gLocalHero");
    }
    core_mission_cpp_CDemonMission_loadSet_FUN_004d9020
              (param_1,*(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c));
    DAT_01ccbbf0 = '\0';
    core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(param_1);
    iVar1 = core_game_cpp_CGame_runGameSession_FUN_0049da10(0x01C775EC);
    iVar2 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    FUN_004d8cd0(param_1,iVar2);
    (**(code **)(*(int *)(iVar2 + 0x14c) + 0x144))(iVar2);
    FUN_004d7ea0(param_1);
    if ((iVar1 == 0) || (DAT_01ccbbf0 == '\0')) break;
    iVar1 = _stricmp(0x01E57284 + 0x14cd08,"hq.geo");
    bVar3 = iVar1 != 0;
    if (bVar3) {
      core_game_cpp_CGame_displayActStats_FUN_004a6680(0x01C775EC);
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = 1;
    }
    core_level_cpp_CLevelLoader_show_FUN_004c5640(INT_005baca0,9,bVar3,uVar4);
    core_mission_cpp_CDemonMission_load_FUN_004d7ee0(param_1,&DAT_01ccbbf0,0);
    iVar2 = core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(param_1,iVar2);
    if (iVar2 == 0) goto LAB_004d950e;
    iVar2 = core_mission_cpp_CDemonMission_startMission_FUN_004d9780(param_1);
    if (iVar2 == 0) goto LAB_004d950e;
    if (bVar3) {
      uVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("Press any key to continue...");
      iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b9900,0x58,0xf8,0,uVar4);
      engine_font_cpp_CBitFont_drawTextRight_FUN_00490be0(_DAT_014b9900,0x27f,0x1db - iVar2);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
    }
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(param_1,iVar2,1);
LAB_004d950e:
  if (*(int *)(0x01C775EC + 600) == 0) {
    return;
  }
  core_game_cpp_CGame_finishAct_FUN_004a6a10(0x01C775EC);
  return;
}
