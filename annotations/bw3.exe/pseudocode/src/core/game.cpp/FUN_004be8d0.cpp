// Name: core_game.cpp_FUN_004be8d0
// Address: 004be8d0
// Address Range: [[004be8d0, 004beb7c]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004be8d0(CGame *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004be8d0(CGame *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  _FILE *p_Var3;
  int iVar4;
  int load_flags;
  char *pcVar5;
  char *pcVar6;
  CIniFile local_320;
  char local_11c [260];
  uint local_18;
  uint local_14;
  
  p_Var3 = engine_dosio_cpp_FUN_004659c0(&DAT_005c37de,"blairhero.pod",&DAT_005c37cd);
  if (p_Var3 != (_FILE *)0x0) {
    _fclose(p_Var3);
  }
  param_1->damageable_enemy_count = 0;
  param_1->total_kill_count = 0;
  param_1->total_game_time = 0.0;
  param_1->total_play_time = 0.0;
  param_1->end_timer = -1.0;
  core_game_cpp_FUN_004c4d10(param_1);
  uVar2 = _DAT_01c5b0e0;
  _DAT_01c5b0e0 = _DAT_01549aa8;
  param_1->is_loading = 0;
  p_Var3 = _fopen("pod.ini",&DAT_005c37df);
  if (p_Var3 != (_FILE *)0x0) {
    _fclose(p_Var3);
  }
  engine_ini_cpp_FUN_004d8a20(&local_320,"system\\bw3.ini",&DAT_005c37ea);
  local_18 = 0;
  engine_ini_cpp_FUN_004d8c30(&local_320,"Act1Code",&local_18);
  support_newmsg_cpp_getLocalizedString_FUN_00508960("The Rustin Parr Investigation");
  local_14 = 0xffffffff;
  if (param_2 == 1 || p_Var3 != (_FILE *)0x0) {
    iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0047db70
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",local_11c,0);
    if (iVar4 == 0) goto LAB_004beb21;
    DAT_01d229f0 = 0;
    _DAT_01d22af4 = 0;
    _DAT_01d22af0 = 0;
  }
  else {
    pcVar6 = "town_act1.msn";
    pcVar5 = local_11c;
    do {
      cVar1 = *pcVar6;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(g_CFieldNotesPtr);
  core_event_cpp_FUN_00494880(0x01C6E360);
  load_flags = 1;
  iVar4 = _stricmp(&DAT_01d225c8,local_11c);
  if (iVar4 != 0) {
    pcVar5 = local_11c;
    pcVar6 = &DAT_01d225c8;
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
  core_level_cpp_FUN_004dfc50(0x01D70AB8,10,0,local_14);
  core_mission_cpp_CDemonMission_load_FUN_004f5bc0(0x01D81080,local_11c,load_flags);
  iVar4 = core_mission_cpp_CDemonMission_createHeros_FUN_004f7880(0x01D81080,(CCharacter *)0x0);
  if (iVar4 != 0) {
    core_mission_cpp_FUN_004f7590(0x01D81080);
    core_mission_cpp_CDemonMission_run_FUN_004f72a0(0x01D81080);
    if (param_1->need_chapter_reload != 0) {
      param_1->need_chapter_reload = 0;
      core_game_cpp_FUN_004bdfb0(param_1,param_1->chapter_reload_filename,1);
    }
  }
LAB_004beb21:
  _DAT_01c5b0e0 = uVar2;
  engine_ini_cpp_CIniFile_dtor_FUN_004d8a50(&local_320,0);
  return;
}
