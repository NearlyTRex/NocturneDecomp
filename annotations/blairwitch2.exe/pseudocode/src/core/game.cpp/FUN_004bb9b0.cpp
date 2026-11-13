// Name: core_game.cpp_FUN_004bb9b0
// Address: 004bb9b0
// Address Range: [[004bb9b0, 004bbf66]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bb9b0(CGame *this_ptr,char *save_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bb9b0(CGame *this_ptr,char *save_filename)

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
  char local_490 [260];
  char local_38c [260];
  char local_288 [260];
  char local_184 [256];
  CLZWCompress local_84;
  CInStreamFile local_44;
  COutStreamFile local_1c;
  int local_14;
  
  if (this_ptr->letterbox_mode != 0) {
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                       ("GUnable to save during cinematic" + 1);
    shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,pcVar4);
    return;
  }
  FUN_005ba1e0("save\\$$SAVE$$.TMP");
  splitpath(&DAT_01cb7b50,(char *)0x0,(char *)0x0,(char *)0x0,local_184);
  iVar2 = _stricmp(local_184,&DAT_005d8427);
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_184,&DAT_005d842b), iVar2 == 0)) {
    pcVar4 = local_490;
    pcVar3 = &DAT_01cb7b50;
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
    local_490[0] = '\0';
  }
  pcVar3 = local_490;
  output_buffer = local_490;
  pcVar4 = local_490;
  if (save_filename == (char *)0x0) {
    flags = 1;
    file_extension = &DAT_005d8430;
    directory_path = &DAT_005d8434;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Save game");
    iVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0047d270
                      (g_CEditorToolsPtr,pcVar3,directory_path,file_extension,output_buffer,flags);
    if (iVar2 == 0) {
      return;
    }
    splitpath(local_490,(char *)0x0,(char *)0x0,local_38c,(char *)0x0);
    _sprintf(local_490,"%s.noc");
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
  _mkdir(&DAT_005d844a);
  DAT_007bc040 = 1;
  local_14 = 1;
  file_handle = _fopen("save\\$$SAVE$$.TMP",&DAT_005d844f);
  if (file_handle == (_FILE *)0x0) {
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,pcVar4);
    DAT_007bc040 = 0;
    return;
  }
  FUN_005b8010(file_handle,"// .NOC file version\n");
  FUN_005b8010();
  core_mission_cpp_CDemonMission_writeFile_FUN_004fbce0(0x01D182F0,file_handle);
  FUN_005b8010(file_handle,"// Hero count, local hero index, hero list\n");
  FUN_005b8010(file_handle,"%d, %d\n",_DAT_01cedee0,_DAT_01cedef4);
  iVar2 = 0;
  if (0 < _DAT_01cedee0) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005b8010();
    } while (iVar2 < _DAT_01cedee0);
  }
  core_event_cpp_CEventList_saveState_FUN_00492060(0x01C38BC0,file_handle);
  core_script_cpp_CScript_saveState_FUN_0052a400(g_CScriptPtr,file_handle);
  core_fire_cpp_CFireEffect_save_FUN_0049eb00(0x01C3DEB4,file_handle);
  FUN_005b8010(file_handle,"Light state\n");
  core_set_cpp_CDemonSet_saveMasterLightStates_FUN_005349d0(g_CDemonSetPtr,(int *)&DAT_01cb7c54);
  iVar2 = 1;
  FUN_005b8010();
  if (0 < _DAT_01cb7c54) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005b8010();
    } while (iVar2 <= _DAT_01cb7c54);
  }
  FUN_005b8010(file_handle,"Game stats\n");
  FUN_005b8010
            (file_handle,"%f,%f,%d,%d\n",(double)this_ptr->total_play_time,
             (double)this_ptr->total_game_time,this_ptr->damageable_enemy_count,
             this_ptr->total_kill_count);
  core_set_cpp_CDemonSet_saveStateInfo_FUN_00534a10(g_CDemonSetPtr,file_handle);
  core_fldnotes_cpp_CFieldNotes_saveState_FUN_004a6470(g_CFieldNotesPtr,file_handle);
  _fclose(file_handle);
  DAT_007bc040 = 0;
  if (local_14 != 0) {
    support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_44);
    support_trstream_cpp_COutStreamFile_ctor_FUN_0057db80(&local_1c);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Warning!  Your game didn't save.")
    ;
    iVar2 = support_trstream_cpp_CInStreamFile_open_FUN_0057d320(&local_44,"save\\$$SAVE$$.TMP")
    ;
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,pcVar3);
      support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_1c,0);
      support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_44,0);
      return;
    }
    _sprintf(local_288,"%s\\%s");
    iVar2 = support_trstream_cpp_COutStreamFile_open_FUN_0057dd90(&local_1c,local_288,&DAT_005d8527)
    ;
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,pcVar3);
      support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_1c,0);
      support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_44,0);
      return;
    }
    support_trstream_cpp_COutStreamFile_write_FUN_0057dca0(&local_1c,&DAT_006164dc,4);
    support_codec_cpp_CLZWCompress_ctor_FUN_00434770(&local_84,0x8000,8);
    support_codec_cpp_CLZWCompress_init_FUN_004347c0(&local_84);
    support_codec_cpp_FUN_00434810();
    support_codec_cpp_FUN_00434910(&local_84,&local_1c);
    support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_44);
    support_trstream_cpp_COutStreamFile_close_FUN_0057dd60(&local_1c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00434270(&local_84.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_00433e90(&local_84.base,1);
    support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_1c,0);
    support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_44,0);
  }
  FUN_005ba1e0("save\\$$SAVE$$.TMP");
  pcVar3 = &DAT_01cb7b50;
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
