// Name: core_game.cpp_CGame_showChapterSelect_FUN_004d7250
// Address: 004d7250
// Address Range: [[004d7250, 004d7726]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showChapterSelect_FUN_004d7250(CGame *this_ptr,int select_mode)

#include "nocturne.h"

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
  CBitFont *local_18;
  int local_14;
  
  p_Var2 = engine_dosio_cpp_getFile_FUN_00479180
                     (&g_CHAR_005e3115,"blairhero.pod","rb");
  if (p_Var2 != (_FILE *)0x0) {
    _fclose(p_Var2);
  }
  this_ptr->damageable_enemy_count = 0;
  this_ptr->total_kill_count = 0;
  this_ptr->total_game_time = 0.0;
  this_ptr->total_play_time = 0.0;
  this_ptr->is_loading = 0;
  local_18 = g_CBitFont_PTR_01c3eb50;
  g_CBitFont_PTR_01c3eb50 = g_ThemeFont;
  p_Var2 = _fopen("pod.ini","rt");
  if (p_Var2 != (_FILE *)0x0) {
    _fclose(p_Var2);
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004f4b00
            (&local_338,"system\\nocturne.ini","Game");
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
    g_ChapterDisplayName[0] = '\0';
    g_ChapterDisplayYear = 0;
    g_OverlayDisplayTimer = 0.0;
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
        g_CBitFont_PTR_01c3eb50 = local_18;
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
    pcVar4 = PTR_s_hq_bw1_msn_005e36ab_0061da58;
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
    pcVar4 = g_ChapterDisplayName;
    g_ChapterDisplayYear = g_INT_ARRAY_0061db5c[local_14];
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
    g_OverlayDisplayTimer = 8.0;
  }
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(g_CFieldNotesPtr);
  core_event_cpp_CEventList_resetGameFlags_FUN_004a9a00(g_CEventListPtr);
  iVar5 = 1;
  iVar3 = _stricmp(g_CurrentSaveFile,local_134);
  if (iVar3 != 0) {
    pcVar6 = local_134;
    pcVar4 = g_CurrentSaveFile;
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
  core_mission_cpp_CDemonMission_load_FUN_0051a3f0(g_CDemonMission_PTR_0061f650,local_134,iVar5);
  iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0
                    (g_CDemonMission_PTR_0061f650,(CCharacter *)0x0);
  if (iVar3 != 0) {
    core_mission_cpp_CDemonMission_startMission_FUN_0051bdc0(g_CDemonMission_PTR_0061f650);
    core_mission_cpp_CDemonMission_run_FUN_0051bad0(g_CDemonMission_PTR_0061f650);
    if (this_ptr->need_chapter_reload != 0) {
      this_ptr->need_chapter_reload = 0;
      core_game_cpp_CGame_loadGame_FUN_004d6990(this_ptr,this_ptr->chapter_reload_filename,1);
    }
  }
LAB_004d757b:
  g_CBitFont_PTR_01c3eb50 = local_18;
LAB_004d7589:
  engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&local_338,0);
  return;
}
