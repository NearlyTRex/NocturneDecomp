// Name: core_game.cpp_CGame_saveGame_FUN_004d6420
// Address: 004d6420
// Address Range: [[004d6420, 004d698d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveGame_FUN_004d6420(CGame *this_ptr,char *save_filename)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveGame_FUN_004d6420(CGame *this_ptr,char *save_filename)

{
  char cVar1;
  int iVar2;
  _FILE *file;
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
  
  _remove("save\\$$SAVE$$.TMP");
  splitpath
            (g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_188);
  iVar2 = _stricmp(local_188,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_188,".noc"), iVar2 == 0)) {
    pcVar4 = local_494;
    pcVar3 = g_CurrentSaveFile;
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
    file_extension = "noc";
    directory_path = "save";
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
  g_IncludeCommentsWhenWriting = 1;
  file = _fopen("save\\$$SAVE$$.TMP","wt");
  if (file == (_FILE *)0x0) {
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(g_CEditorToolsPtr,pcVar4);
    g_IncludeCommentsWhenWriting = (int)file;
    return;
  }
  _fprintf(file,"// .NOC file version\n");
  _fprintf(file,"%d\n");
  core_mission_cpp_CDemonMission_writeFile_FUN_0051ac40(g_CDemonMission_PTR_0061f650,file);
  _fprintf(file,"// Hero count, local hero index, hero list\n");
  _fprintf(file,"%d, %d\n");
  iVar2 = 0;
  if (0 < g_HeroCount) {
    do {
      iVar2 = iVar2 + 1;
      _fprintf(file,"%s\n");
    } while (iVar2 < g_HeroCount);
  }
  core_event_cpp_CEventList_saveState_FUN_004aa9d0(g_CEventListPtr,file);
  core_script_cpp_CScript_saveState_FUN_0054b710(g_CScriptPtr,file);
  core_fire_cpp_CFireEffect_save_FUN_004b73f0(g_CFireEffectPtr,file);
  _fprintf(file,"Light state\n");
  core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0
            (g_CDemonSetPtr,g_MasterLightStateSaveBuffer);
  iVar2 = 1;
  _fprintf(file,"%d\n");
  if (0 < g_MasterLightStateSaveBuffer[0]) {
    do {
      iVar2 = iVar2 + 1;
      _fprintf(file,"%d\n");
    } while (iVar2 <= g_MasterLightStateSaveBuffer[0]);
  }
  _fprintf(file,"Game stats\n");
  _fprintf(file,"%f,%f,%d,%d\n");
  core_set_cpp_CDemonSet_saveStateInfo_FUN_00555d20(g_CDemonSetPtr,file);
  core_fldnotes_cpp_CFieldNotes_saveState_FUN_004bf1c0(g_CFieldNotesPtr,file);
  _fclose(file);
  g_IncludeCommentsWhenWriting = 0;
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
    iVar2 = support_trstream_cpp_COutStreamFile_open_FUN_005a19e0(&local_1c,local_390,"wb")
    ;
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(g_CEditorToolsPtr,pcVar3);
      support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_1c,0);
      support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_48,0);
      return;
    }
    support_trstream_cpp_COutStreamFile_write_FUN_005a18f0(&local_1c,"EFD",4);
    support_codec_cpp_CLZWCompress_ctor_FUN_00443490(&local_88,0x8000,8);
    support_codec_cpp_CLZWCompress_init_FUN_004434e0(&local_88);
    support_codec_cpp_CLZWCompress_process_FUN_00443530(&local_88,&local_48,&local_1c);
    support_codec_cpp_CLZWCompress_finalize_FUN_00443630(&local_88,&local_1c.base);
    support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_48);
    support_trstream_cpp_COutStreamFile_close_FUN_005a19b0(&local_1c);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00442f90(&local_88.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_00442bb0(&local_88.base,1);
    support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_1c,0);
    support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_48,0);
  }
  _remove("save\\$$SAVE$$.TMP");
  pcVar3 = g_CurrentSaveFile;
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
