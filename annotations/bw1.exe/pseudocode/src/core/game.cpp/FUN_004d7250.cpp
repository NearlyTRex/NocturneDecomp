// Name: core_game.cpp_FUN_004d7250
// Address: 004d7250
// Address Range: [[004d7250, 004d7726]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d7250(CGame *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004d7250(CGame *param_1,int param_2)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  CPickList local_6f8;
  CIniFile local_338;
  char local_134 [260];
  char *local_30 [5];
  uint local_1c;
  uint local_18;
  int local_14;
  
  p_Var2 = engine_dosio_cpp_FUN_00479180(&DAT_005e3115,"blairhero.pod",&DAT_005e3104);
  if (p_Var2 != (_FILE *)0x0) {
    _fclose(p_Var2);
  }
  param_1->damageable_enemy_count = 0;
  param_1->total_kill_count = 0;
  param_1->total_game_time = 0.0;
  param_1->total_play_time = 0.0;
  *(uint *)&param_1->field_0x250 = 0;
  local_18 = _DAT_01c3eb50;
  _DAT_01c3eb50 = _DAT_0152d244;
  iVar3 = _fopen("pod.ini",&DAT_005e3116);
  if (iVar3 != 0) {
    _fclose(iVar3);
  }
  engine_ini_cpp_FUN_004f4b00(&local_338,"system\\nocturne.ini",&DAT_005e3121);
  local_1c = 0;
  engine_ini_cpp_FUN_004f4d10(&local_338,"Act1Code",&local_1c);
  local_30[0] = support_newmsg_cpp_getLocalizedString_FUN_00531090
                          ("The Rustin Parr Investigation");
  iVar4 = -1;
  local_14 = -1;
  if (param_2 == 1 || iVar3 != 0) {
    iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",local_134,0);
    if (iVar3 == 0) goto LAB_004d757b;
    DAT_01cd09e8 = 0;
    _DAT_01cd0ae8 = 0;
    _DAT_01cd0aec = 0;
  }
  else {
    while (iVar4 < 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_6f8);
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("The Rustin Parr Investigation");
      shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_6f8.base,pcVar6);
      uVar7 = 0;
      iVar3 = -1;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Choose a story to play")
      ;
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                        (&local_6f8,pcVar6,iVar3,uVar7);
      local_14 = iVar3;
      if (iVar3 < 0) {
        _DAT_01c3eb50 = local_18;
        shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_6f8,0);
        goto LAB_004d7589;
      }
      shape_edittool_cpp_CPickList_clear_FUN_0049c370(&local_6f8);
      if (iVar3 == 0) {
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
        iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                          (&local_6f8,pcVar6,iVar3,uVar7);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_6f8,0);
    }
    pcVar6 = local_134;
    pcVar5 = PTR_DAT_0061da58;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      *(uint *)&param_1->field_0xe8 = 0;
      *(uint *)&param_1->field_0xe4 = 0;
    }
    if (iVar4 == 1) {
      *(uint *)&param_1->field_0xe4 = 0;
      *(uint *)&param_1->field_0xe8 = 1;
    }
    if (iVar4 == 2) {
      *(uint *)&param_1->field_0xe8 = 0;
      *(uint *)&param_1->field_0xe4 = 1;
    }
    if (iVar4 == 3) {
      *(uint *)&param_1->field_0xe8 = 1;
      *(uint *)&param_1->field_0xe4 = 1;
    }
    p_Var2 = engine_dosio_cpp_FUN_00479180("world",local_134,"rt");
    if (p_Var2 == (_FILE *)0x0) goto LAB_004d757b;
    _fclose(p_Var2);
    pcVar5 = &DAT_01cd09e8;
    _DAT_01cd0ae8 = *(uint *)(&DAT_0061db5c + local_14 * 4);
    pcVar6 = local_30[local_14];
    do {
      cVar1 = *pcVar6;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    _DAT_01cd0aec = 0x41000000;
  }
  core_fldnotes_cpp_FUN_004bdaa0(g_CFieldNotesPtr);
  core_event_cpp_FUN_004a9a00(0x01C51D80);
  iVar4 = 1;
  iVar3 = _stricmp(&DAT_01cd05c0,local_134);
  if (iVar3 != 0) {
    pcVar6 = local_134;
    pcVar5 = &DAT_01cd05c0;
    do {
      cVar1 = *pcVar6;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar4 = 0;
  }
  core_level_cpp_FUN_004fe840(0x01D1BD1C,10,0,local_14);
  core_mission_cpp_CDemonMission_load_FUN_0051a3f0(0x01D2C900,local_134,iVar4);
  iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0(0x01D2C900,(CCharacter *)0x0);
  if (iVar3 != 0) {
    core_mission_cpp_FUN_0051bdc0(0x01D2C900);
    core_mission_cpp_CDemonMission_run_FUN_0051bad0(0x01D2C900);
    if (param_1->need_chapter_reload != 0) {
      param_1->need_chapter_reload = 0;
      core_game_cpp_FUN_004d6990(param_1,param_1->chapter_reload_filename,1);
    }
  }
LAB_004d757b:
  _DAT_01c3eb50 = local_18;
LAB_004d7589:
  engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&local_338,0);
  return;
}
