// Name: core_game.cpp_CGame_showChapterSelect_FUN_004d7250
// Address: 004d7250
// Address Range: [[004d7250, 004d7726]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showChapterSelect_FUN_004d7250(CGame *this_ptr,int select_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_showChapterSelect_FUN_004d7250(CGame *this_ptr,int select_mode)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  CPickList local_6f8;
  CIniFile local_338;
  char local_134 [260];
  char *local_30 [5];
  int local_1c;
  uint local_18;
  int local_14;
  
  p_Var2 = engine_dosio_cpp_getFile_FUN_00479180
                     (&DAT_005e3115,"blairhero.pod",&DAT_005e3104);
  if (p_Var2 != (_FILE *)0x0) {
    _fclose(p_Var2);
  }
  this_ptr->damageable_enemy_count = 0;
  this_ptr->total_kill_count = 0;
  this_ptr->total_game_time = 0.0;
  this_ptr->total_play_time = 0.0;
  this_ptr->is_loading = 0;
  local_18 = _DAT_01c3eb50;
  _DAT_01c3eb50 = _DAT_0152d244;
  p_Var2 = _fopen("pod.ini",&DAT_005e3116);
  if (p_Var2 != (_FILE *)0x0) {
    _fclose(p_Var2);
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004f4b00(&local_338,"system\\nocturne.ini",&DAT_005e3121)
  ;
  local_1c = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004f4d10(&local_338,"Act1Code",&local_1c);
  local_30[0] = support_newmsg_cpp_getLocalizedString_FUN_00531090
                          ("The Rustin Parr Investigation");
  iVar3 = -1;
  local_14 = -1;
  if (select_mode == 1 || p_Var2 != (_FILE *)0x0) {
    iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",local_134,0);
    if (iVar3 == 0) goto LAB_004d757b;
    DAT_01cd09e8 = 0;
    _DAT_01cd0ae8 = 0;
    _DAT_01cd0aec = 0;
  }
  else {
    while (iVar3 < 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_6f8);
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("The Rustin Parr Investigation");
      shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_6f8.base,pcVar6);
      uVar7 = 0;
      iVar5 = -1;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Choose a story to play")
      ;
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                        (&local_6f8,pcVar6,iVar5,uVar7);
      local_14 = iVar5;
      if (iVar5 < 0) {
        _DAT_01c3eb50 = local_18;
        shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_6f8,0);
        goto LAB_004d7589;
      }
      shape_edittool_cpp_CPickList_clear_FUN_0049c370(&local_6f8);
      if (iVar5 == 0) {
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("Normal Puzzles, Normal Combat");
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_6f8.base,pcVar6);
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("Normal Puzzles, Hard Combat");
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_6f8.base,pcVar6);
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("Hard Puzzles, Normal Combat");
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_6f8.base,pcVar6);
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("Hard Puzzles, Hard Combat");
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_6f8.base,pcVar6);
        uVar7 = 0;
        iVar3 = -1;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("'The Rustin Parr Investigation'");
        iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                          (&local_6f8,pcVar6,iVar3,uVar7);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_6f8,0);
    }
    pcVar6 = local_134;
    pcVar4 = PTR_DAT_0061da58;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      this_ptr->combat_difficulty_mode = 0;
      this_ptr->puzzle_difficulty_mode = 0;
    }
    if (iVar3 == 1) {
      this_ptr->puzzle_difficulty_mode = 0;
      this_ptr->combat_difficulty_mode = 1;
    }
    if (iVar3 == 2) {
      this_ptr->combat_difficulty_mode = 0;
      this_ptr->puzzle_difficulty_mode = 1;
    }
    if (iVar3 == 3) {
      this_ptr->combat_difficulty_mode = 1;
      this_ptr->puzzle_difficulty_mode = 1;
    }
    p_Var2 = engine_dosio_cpp_getFile_FUN_00479180("world",local_134,"rt");
    if (p_Var2 == (_FILE *)0x0) goto LAB_004d757b;
    _fclose(p_Var2);
    pcVar4 = &DAT_01cd09e8;
    _DAT_01cd0ae8 = *(uint *)(&DAT_0061db5c + local_14 * 4);
    pcVar6 = local_30[local_14];
    do {
      cVar1 = *pcVar6;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    _DAT_01cd0aec = 0x41000000;
  }
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(g_CFieldNotesPtr);
  core_event_cpp_CEventList_resetGameFlags_FUN_004a9a00(0x01C51D80);
  iVar5 = 1;
  iVar3 = _stricmp(&DAT_01cd05c0,local_134);
  if (iVar3 != 0) {
    pcVar6 = local_134;
    pcVar4 = &DAT_01cd05c0;
    do {
      cVar1 = *pcVar6;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    iVar5 = 0;
  }
  core_level_cpp_CLevelLoader_show_FUN_004fe840(g_CLevelLoaderPtr,10,0,local_14);
  core_mission_cpp_CDemonMission_load_FUN_0051a3f0(0x01D2C900,local_134,iVar5);
  iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0(0x01D2C900,(CCharacter *)0x0);
  if (iVar3 != 0) {
    core_mission_cpp_CDemonMission_startMission_FUN_0051bdc0(0x01D2C900);
    core_mission_cpp_CDemonMission_run_FUN_0051bad0(0x01D2C900);
    if (this_ptr->need_chapter_reload != 0) {
      this_ptr->need_chapter_reload = 0;
      core_game_cpp_CGame_loadGame_FUN_004d6990(this_ptr,this_ptr->chapter_reload_filename,1);
    }
  }
LAB_004d757b:
  _DAT_01c3eb50 = local_18;
LAB_004d7589:
  engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&local_338,0);
  return;
}
