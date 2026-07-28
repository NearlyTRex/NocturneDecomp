// Name: core_mission.cpp_CDemonMission_run_FUN_004d9440
// Address: 004d9440
// Address Range: [[004d9440, 004d9643]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_run_FUN_004d9440(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_run_FUN_004d9440(CDemonMission *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  char *text;
  CDemonActor *unaff_EBP;
  float unaff_ESI;
  float unaff_EDI;
  float color_value;
  bool bVar2;
  
  while( true ) {
    if (_DAT_01cae0d4 < 1) {
      PTR_01cc4800 = "..\\core\\mission.cpp";
      INT_01cc4804 = 0x4c7;
      core_main_c_FUN_004c8440("CDemonMission::run - hero list empty");
    }
    if (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) == 0) {
      PTR_01cc4800 = "..\\core\\mission.cpp";
      INT_01cc4804 = 0x4c8;
      core_main_c_FUN_004c8440("CDemonMission::run - no gLocalHero");
    }
    core_mission_cpp_CDemonMission_loadSet_FUN_004d9020
              (this_ptr,*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c));
    DAT_01ccbbf0 = '\0';
    core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(this_ptr);
    iVar1 = core_game_cpp_CGame_runGameSession_FUN_0049da10(0x01C775EC);
    this_ptr_00 = *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    core_mission_cpp_FUN_004d8cd0(this_ptr,this_ptr_00);
    (*(((this_ptr_00->base).vtable._uc)->_uc).setWalkTarget)
              (this_ptr_00,unaff_EBP,unaff_EDI,unaff_ESI);
    core_mission_cpp_FUN_004d7ea0(this_ptr);
    if ((iVar1 == 0) || (DAT_01ccbbf0 == '\0')) break;
    iVar1 = _stricmp((char *)(0x01E57284 + 0x14cd08),"hq.geo");
    bVar2 = iVar1 != 0;
    if (bVar2) {
      core_game_cpp_CGame_displayActStats_FUN_004a6680(0x01C775EC);
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
    color_value = (float)(uint)!bVar2;
    core_level_cpp_CLevelLoader_show_FUN_004c5640((CLevelLoader *)INT_005baca0,9,(uint)bVar2,iVar1);
    unaff_EBP = (CDemonActor *)0x4d9591;
    core_mission_cpp_CDemonMission_load_FUN_004d7ee0(this_ptr,&DAT_01ccbbf0,0);
    unaff_EDI = 7.125002e-39;
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(this_ptr,this_ptr_00);
    if (iVar1 == 0) goto LAB_004d950e;
    unaff_ESI = 7.125025e-39;
    iVar1 = core_mission_cpp_CDemonMission_startMission_FUN_004d9780(this_ptr);
    if (iVar1 == 0) goto LAB_004d950e;
    if (color_value == 0.0) {
      text = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press any key to continue...")
      ;
      unaff_EDI = 3.47522e-43;
      iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b9900,0x58);
      unaff_EBP = (CDemonActor *)(0x1db - iVar1);
      engine_font_cpp_CBitFont_drawTextRight_FUN_00490be0
                (_DAT_014b9900,0x27f,(int)unaff_EBP,(int)unaff_EDI,(int)color_value,text);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
      unaff_ESI = color_value;
    }
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(this_ptr,&this_ptr_00->base,1);
LAB_004d950e:
  if (0x01C775EC->act_completion_state == 0) {
    return;
  }
  core_game_cpp_CGame_finishAct_FUN_004a6a10(0x01C775EC);
  return;
}
