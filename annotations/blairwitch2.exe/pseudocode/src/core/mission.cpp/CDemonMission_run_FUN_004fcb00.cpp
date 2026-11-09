// Name: core_mission.cpp_CDemonMission_run_FUN_004fcb00
// Address: 004fcb00
// Address Range: [[004fcb00, 004fccc2]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_run_FUN_004fcb00(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_run_FUN_004fcb00(CDemonMission *this_ptr)

{
  CCharacter *existing_hero;
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  while( true ) {
    if (_DAT_01cedee0 < 1) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x511;
      core_main_c_FUN_004e4500("CDemonMission::run - hero list empty");
    }
    if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) == 0) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x512;
      core_main_c_FUN_004e4500("CDemonMission::run - no gLocalHero");
    }
    core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0
              (this_ptr,*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2c));
    DAT_01d1c630 = '\0';
    core_mission_cpp_FUN_004fc820(this_ptr);
    iVar1 = core_game_cpp_FUN_004b6170(g_CGamePtr);
    existing_hero = *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4);
    core_mission_cpp_FUN_004fc270(this_ptr,existing_hero);
    (**(code **)(*(int *)&existing_hero->field_0x2b0 + 0x158))(existing_hero);
    core_mission_cpp_FUN_004fb450(this_ptr);
    if ((iVar1 == 0) || (DAT_01d1c630 == '\0')) break;
    iVar1 = _stricmp(&g_CDemonSetPtr->field_0x14d0f0,"hq.geo");
    bVar2 = iVar1 != 0;
    if (bVar2) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 1;
    }
    core_level_cpp_FUN_004e1480(0x01D03000,9,bVar2,uVar3);
    core_mission_cpp_CDemonMission_load_FUN_004fb490(this_ptr,&DAT_01d1c630,0);
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_004fd0e0(this_ptr,existing_hero);
    if (iVar1 == 0) goto LAB_004fcbce;
    iVar1 = core_mission_cpp_FUN_004fce00(this_ptr);
    if (iVar1 == 0) goto LAB_004fcbce;
    if (bVar2) {
      wincore_wddvmem_cpp_FUN_00589560();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_004fc570(this_ptr,(CDemonActor *)existing_hero,1);
LAB_004fcbce:
  if (*(int *)&g_CGamePtr->field_0x278 == 0) {
    core_fldnotes_cpp_FUN_004a50b0(g_CFieldNotesPtr);
    return;
  }
  core_game_cpp_FUN_004bdfb0(g_CGamePtr);
  core_fldnotes_cpp_FUN_004a50b0(g_CFieldNotesPtr);
  return;
}
