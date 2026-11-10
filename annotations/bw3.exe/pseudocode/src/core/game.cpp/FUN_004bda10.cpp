// Name: core_game.cpp_FUN_004bda10
// Address: 004bda10
// Address Range: [[004bda10, 004bdfa4]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bda10(CGame *this_ptr,char *save_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bda10(CGame *this_ptr,char *save_filename)

{
  char cVar1;
  int iVar2;
  _FILE *file_handle;
  char *pcVar3;
  char *pcVar4;
  char *directory_path;
  char *file_extension;
  char *output_buffer;
  uint flags;
  char local_494 [260];
  char local_390 [260];
  char local_28c [260];
  char local_188 [256];
  CLZWCompress local_88;
  CInStreamFile local_48;
  COutStreamFile local_1c;
  int local_14;
  
  FUN_005a54b0("save\\$$SAVE$$.TMP");
  splitpath(&DAT_01d225c8,(char *)0x0,(char *)0x0,(char *)0x0,local_188);
  iVar2 = _stricmp(local_188,&DAT_005c3558);
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_188,&DAT_005c355c), iVar2 == 0)) {
    pcVar4 = local_494;
    pcVar3 = &DAT_01d225c8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_494[0] = '\0';
  }
  pcVar3 = local_494;
  output_buffer = local_494;
  pcVar4 = local_494;
  if (save_filename == (char *)0x0) {
    flags = 1;
    file_extension = &DAT_005c3561;
    directory_path = &DAT_005c3565;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Save game");
    iVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470
                      (g_CEditorToolsPtr,pcVar3,directory_path,file_extension,output_buffer,flags);
    if (iVar2 == 0) {
      return;
    }
    splitpath(local_494,(char *)0x0,(char *)0x0,local_390,(char *)0x0);
    _sprintf(local_494,"%s.sav");
  }
  else {
    do {
      cVar1 = *save_filename;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = save_filename[1];
      save_filename = save_filename + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  _mkdir(&DAT_005c357b);
  local_14 = 1;
  DAT_007df9c0 = (_FILE *)0x1;
  file_handle = (_FILE *)_fopen("save\\$$SAVE$$.TMP",&DAT_005c3580);
  if (file_handle == (_FILE *)0x0) {
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,pcVar4);
    DAT_007df9c0 = file_handle;
    return;
  }
  FUN_005a3140(file_handle,"// .SAV file version\n");
  FUN_005a3140();
  core_mission_cpp_CDemonMission_writeFile_FUN_004f6410(0x01D81080,file_handle);
  FUN_005a3140(file_handle,"// Hero count, local hero index, hero list\n");
  FUN_005a3140(file_handle,"%d, %d\n",_DAT_01d5ba00,_DAT_01d5ba14);
  iVar2 = 0;
  if (0 < _DAT_01d5ba00) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005a3140();
    } while (iVar2 < _DAT_01d5ba00);
  }
  core_event_cpp_CEventList_saveState_FUN_00495850(0x01C6E360,file_handle);
  core_script_cpp_CScript_saveState_FUN_00530e00(g_CScriptPtr,file_handle);
  core_fire_cpp_CFireEffect_save_FUN_004a40b0(0x01C73654,file_handle);
  FUN_005a3140(file_handle,"Light state\n");
  core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0053b6a0(g_CDemonSetPtr,(int *)&DAT_01d226cc);
  iVar2 = 1;
  FUN_005a3140();
  if (0 < _DAT_01d226cc) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005a3140();
    } while (iVar2 <= _DAT_01d226cc);
  }
  FUN_005a3140(file_handle,"Game stats\n");
  FUN_005a3140
            (file_handle,"%f,%f,%f,%d,%d\n",(double)this_ptr->total_play_time,
             (double)this_ptr->total_game_time,(double)*(float *)&this_ptr->field_0x294,
             this_ptr->damageable_enemy_count,this_ptr->total_kill_count);
  FUN_005a3140();
  core_set_cpp_FUN_0053b6e0(g_CDemonSetPtr,file_handle);
  core_fldnotes_cpp_FUN_004acf00(g_CFieldNotesPtr,file_handle);
  _fclose(file_handle);
  DAT_007df9c0 = (_FILE *)0x0;
  if (local_14 != 0) {
    unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&local_48);
    support_trstream_cpp_COutStreamFile_ctor_FUN_005747c0(&local_1c);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Warning!  Your game didn't save.")
    ;
    iVar2 = support_trstream_cpp_FUN_00573f50();
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,pcVar3);
      support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_1c,0);
      unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_48,0);
      return;
    }
    _sprintf(local_28c,"%s\\%s");
    iVar2 = support_trstream_cpp_FUN_005749d0();
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,pcVar3);
      support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_1c,0);
      unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_48,0);
      return;
    }
    support_trstream_cpp_FUN_005748e0();
    support_codec_cpp_CLZWCompress_ctor_FUN_004410f0(&local_88,0x8000,8);
    support_codec_cpp_CLZWCompress_init_FUN_00441140(&local_88);
    support_codec_cpp_FUN_00441190();
    support_codec_cpp_FUN_00441290(&local_88,&local_1c);
    unkafter_turret_cpp_FUN_00573db0(&local_48);
    support_trstream_cpp_FUN_005749a0(&local_1c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00440bf0(&local_88.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_00440810(&local_88.base,1);
    support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_1c,0);
    unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_48,0);
  }
  FUN_005a54b0("save\\$$SAVE$$.TMP");
  pcVar3 = &DAT_01d225c8;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return;
}
