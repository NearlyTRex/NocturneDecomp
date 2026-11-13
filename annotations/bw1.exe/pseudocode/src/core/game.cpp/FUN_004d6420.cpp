// Name: core_game.cpp_FUN_004d6420
// Address: 004d6420
// Address Range: [[004d6420, 004d698d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d6420(CGame *this_ptr,char *save_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004d6420(CGame *this_ptr,char *save_filename)

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
  
  FUN_005c25c0("save\\$$SAVE$$.TMP");
  splitpath(&DAT_01cd05c0,(char *)0x0,(char *)0x0,(char *)0x0,local_188);
  iVar2 = _stricmp(local_188,&DAT_005e2eac);
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_188,&DAT_005e2eb0), iVar2 == 0)) {
    pcVar4 = local_494;
    pcVar3 = &DAT_01cd05c0;
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
    file_extension = &DAT_005e2eb5;
    directory_path = &DAT_005e2eb9;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Save game");
    iVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_004958d0
                      (g_CEditorToolsPtr,pcVar3,directory_path,file_extension,output_buffer,flags);
    if (iVar2 == 0) {
      return;
    }
    splitpath(local_494,(char *)0x0,(char *)0x0,local_28c,(char *)0x0);
    _sprintf(local_494,"%s.noc");
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
  _mkdir("save");
  local_14 = 1;
  DAT_007c3040 = (_FILE *)0x1;
  file_handle = _fopen("save\\$$SAVE$$.TMP","wt");
  if (file_handle == (_FILE *)0x0) {
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(g_CEditorToolsPtr,pcVar4);
    DAT_007c3040 = file_handle;
    return;
  }
  FUN_005c03c0(file_handle,"// .NOC file version\n");
  FUN_005c03c0();
  core_mission_cpp_CDemonMission_writeFile_FUN_0051ac40(0x01D2C900,file_handle);
  FUN_005c03c0(file_handle,"// Hero count, local hero index, hero list\n");
  FUN_005c03c0(file_handle,"%d, %d\n",_DAT_01d06aa0,_DAT_01d06ab4);
  iVar2 = 0;
  if (0 < _DAT_01d06aa0) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005c03c0();
    } while (iVar2 < _DAT_01d06aa0);
  }
  core_event_cpp_CEventList_saveState_FUN_004aa9d0(0x01C51D80,file_handle);
  core_script_cpp_CScript_saveState_FUN_0054b710(g_CScriptPtr,file_handle);
  core_fire_cpp_CFireEffect_save_FUN_004b73f0(0x01C57074,file_handle);
  FUN_005c03c0(file_handle,"Light state\n");
  core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0(g_CDemonSetPtr,(int *)&DAT_01cd06c4);
  iVar2 = 1;
  FUN_005c03c0();
  if (0 < _DAT_01cd06c4) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005c03c0();
    } while (iVar2 <= _DAT_01cd06c4);
  }
  FUN_005c03c0(file_handle,"Game stats\n");
  FUN_005c03c0
            (file_handle,"%f,%f,%d,%d\n",(double)this_ptr->total_play_time,
             (double)this_ptr->total_game_time,this_ptr->damageable_enemy_count,
             this_ptr->total_kill_count);
  core_set_cpp_FUN_00555d20(g_CDemonSetPtr,file_handle);
  core_fldnotes_cpp_CFieldNotes_saveState_FUN_004bf1c0(g_CFieldNotesPtr,file_handle);
  _fclose(file_handle);
  DAT_007c3040 = (_FILE *)0x0;
  if (local_14 != 0) {
    support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_48);
    support_trstream_cpp_COutStreamFile_ctor_FUN_005a17d0(&local_1c);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Warning!  Your game didn't save.")
    ;
    iVar2 = support_trstream_cpp_CInStreamFile_open_FUN_005a0f60
                      (&local_48,"save\\$$SAVE$$.TMP",1);
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(g_CEditorToolsPtr,pcVar3);
      support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_1c,0);
      support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_48,0);
      return;
    }
    _sprintf(local_390,"%s\\%s");
    iVar2 = support_trstream_cpp_COutStreamFile_open_FUN_005a19e0(&local_1c,local_390,&DAT_005e2fac)
    ;
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(g_CEditorToolsPtr,pcVar3);
      support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_1c,0);
      support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_48,0);
      return;
    }
    support_trstream_cpp_COutStreamFile_write_FUN_005a18f0(&local_1c,&DAT_0061d98c,4);
    support_codec_cpp_CLZWCompress_ctor_FUN_00443490(&local_88,0x8000,8);
    support_codec_cpp_CLZWCompress_init_FUN_004434e0(&local_88);
    support_codec_cpp_FUN_00443530();
    support_codec_cpp_FUN_00443630(&local_88,&local_1c);
    support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_48);
    support_trstream_cpp_COutStreamFile_close_FUN_005a19b0(&local_1c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00442f90(&local_88.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_00442bb0(&local_88.base,1);
    support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_1c,0);
    support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_48,0);
  }
  FUN_005c25c0("save\\$$SAVE$$.TMP");
  pcVar3 = &DAT_01cd05c0;
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
