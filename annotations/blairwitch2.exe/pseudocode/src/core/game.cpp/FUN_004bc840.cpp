// Name: core_game.cpp_FUN_004bc840
// Address: 004bc840
// Address Range: [[004bc840, 004bcb4a]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004bc840(CGame *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004bc840(CGame *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  _FILE *p_Var3;
  int iVar4;
  int load_flags;
  char *pcVar5;
  char *pcVar6;
  CIniFile local_324;
  char local_120 [260];
  uint local_1c;
  char *local_18;
  uint local_14;
  
  p_Var3 = engine_dosio_cpp_FUN_00460c70(&DAT_005d8690,"blairhero.pod",&DAT_005d867f);
  if (p_Var3 != (_FILE *)0x0) {
    _fclose(p_Var3);
  }
  param_1->damageable_enemy_count = 0;
  param_1->total_kill_count = 0;
  param_1->total_game_time = 0.0;
  uVar2 = _DAT_01c25590;
  param_1->total_play_time = 0.0;
  _DAT_01c25590 = _DAT_01511cc0;
  param_1->is_loading = 0;
  p_Var3 = _fopen("pod.ini",&DAT_005d8691);
  if (p_Var3 != (_FILE *)0x0) {
    _fclose(p_Var3);
  }
  engine_ini_cpp_FUN_004d8910(&local_324,"system\\nocturne.ini",&DAT_005d869c);
  local_1c = 0;
  engine_ini_cpp_FUN_004d8b20(&local_324,"Act1Code",&local_1c);
  local_18 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Coffin Rock");
  local_14 = 0xffffffff;
  if (param_2 == 1 || p_Var3 != (_FILE *)0x0) {
    iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0047c970
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",local_120,0);
    if (iVar4 == 0) goto LAB_004bca85;
    DAT_01cb7f78 = 0;
    _DAT_01cb8078 = 0;
  }
  else {
    pcVar5 = local_120;
    local_14 = 0;
    pcVar6 = PTR_s_awakening_msn_005d8aee_006165a8;
    do {
      cVar1 = *pcVar6;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    p_Var3 = engine_dosio_cpp_FUN_00460c70("world",local_120,&DAT_005d86ca);
    if (p_Var3 == (_FILE *)0x0) goto LAB_004bca85;
    pcVar6 = &DAT_01cb7f78;
    _fclose(p_Var3);
    _DAT_01cb8078 = 0x00000795;
    pcVar5 = local_18;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  _DAT_01cb807c = 0;
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(g_CFieldNotesPtr);
  core_event_cpp_FUN_004910b0(0x01C38BC0);
  load_flags = 1;
  iVar4 = _stricmp(&DAT_01cb7b50,local_120);
  if (iVar4 != 0) {
    pcVar5 = local_120;
    pcVar6 = &DAT_01cb7b50;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    load_flags = 0;
  }
  core_level_cpp_FUN_004e1480(0x01D03000,10,0,local_14);
  core_mission_cpp_CDemonMission_load_FUN_004fb490(0x01D182F0,local_120,load_flags);
  iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_004fd0e0(0x01D182F0,(CCharacter *)0x0);
  if (iVar4 != 0) {
    core_mission_cpp_FUN_004fce00(0x01D182F0);
    core_mission_cpp_CDemonMission_run_FUN_004fcb00(0x01D182F0);
    if (param_1->need_chapter_reload != 0) {
      param_1->need_chapter_reload = 0;
      core_game_cpp_FUN_004bbf70(param_1,param_1->chapter_reload_filename,1);
    }
  }
LAB_004bca85:
  _DAT_01c25590 = uVar2;
  engine_ini_cpp_CIniFile_dtor_FUN_004d8940(&local_324,0);
  return;
}
