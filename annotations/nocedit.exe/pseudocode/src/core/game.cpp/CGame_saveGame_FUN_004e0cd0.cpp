// Name: core_game.cpp_CGame_saveGame_FUN_004e0cd0
// Address: 004e0cd0
// Address Range: [[004e0cd0, 004e12af]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame *this_ptr,char *save_filename)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame *this_ptr,char *save_filename)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  _FILE *file;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *directory_path;
  char *file_extension;
  char *output_buffer;
  uint flags;
  char local_558 [260];
  char local_454 [260];
  char local_350 [260];
  char local_24c [256];
  _FILE local_14c [2];
  _istream local_108;
  _FILE local_cc [2];
  _ostream local_88;
  CLZWCompress local_50;
  int local_18;
  int local_14;
  
  if (this_ptr->letterbox_mode != 0) {
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Unable to save during cinematic")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
    return;
  }
  remove("save\\$$SAVE$$.TMP");
  splitpath
            (g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_24c);
  iVar3 = _stricmp(local_24c,"noc");
  if ((iVar3 == 0) ||
     (iVar3 = _stricmp(local_24c,".noc"), iVar3 == 0)) {
    pcVar6 = local_558;
    pcVar5 = g_CurrentSaveFile;
    do {
      cVar2 = *pcVar5;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
  }
  else {
    local_558[0] = '\0';
  }
  pcVar5 = local_558;
  output_buffer = local_558;
  pcVar6 = local_558;
  if (save_filename == (char *)0x0) {
    flags = 1;
    file_extension = "noc";
    directory_path = "save";
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Save game");
    iVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,pcVar5,directory_path,file_extension,output_buffer,flags);
    if (iVar3 == 0) {
      return;
    }
    splitpath(local_558,(char *)0x0,(char *)0x0,local_454,(char *)0x0);
    _sprintf(local_558,"%s.noc",local_454);
  }
  else {
    do {
      cVar2 = *save_filename;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = save_filename[1];
      save_filename = save_filename + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
  }
  _mkdir("save");
  local_14 = 0;
  file = engine_dosio_c_getFile_FUN_00481a50("save",local_558,"wt");
  if (file == (_FILE *)0x0) {
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
    g_IncludeCommentsWhenWriting = 0;
    return;
  }
  _fprintf(file,"// .NOC file version\n");
  _fprintf(file,"%d\n",9);
  core_mission_cpp_CDemonMission_writeFile_FUN_00523600(g_CDemonMissionPtr,file);
  _fprintf(file,"// Hero count, local hero index, hero list\n");
  iVar3 = 0;
  _fprintf(file,"%d, %d\n",g_HeroCount,g_LocalHeroIndex);
  if (0 < g_HeroCount) {
    iVar4 = 0;
    do {
      puVar1 = (uint *)((int)g_HeroActors + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      _fprintf(file,"%s\n",*puVar1);
    } while (iVar3 < g_HeroCount);
  }
  core_event_cpp_CEventList_saveState_FUN_004b1380(g_CEventListPtr,file);
  core_script_cpp_CScript_saveState_FUN_00560b50(g_CScriptPtr,file);
  core_fire_cpp_CFireEffect_save_FUN_004c9380(g_CFireEffectPtr,file);
  _fprintf(file,"Light state\n");
  core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00571170
            (g_CDemonSetPtr,g_MasterLightStateSaveBuffer);
  iVar3 = 1;
  _fprintf(file,"%d\n",g_MasterLightStateSaveBuffer[0]);
  if (0 < g_MasterLightStateSaveBuffer[0]) {
    iVar4 = 4;
    do {
      puVar1 = (uint *)((int)g_MasterLightStateSaveBuffer + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      _fprintf(file,"%d\n",*puVar1);
    } while (iVar3 <= g_MasterLightStateSaveBuffer[0]);
  }
  _fprintf(file,"Game stats\n");
  _fprintf(file,"%f,%f,%d,%d\n",(double)this_ptr->total_play_time,(double)this_ptr->game_stat_1
             ,this_ptr->damageable_enemy_count,this_ptr->game_state_flags);
  core_set_cpp_CDemonSet_saveStateInfo_FUN_005711b0(g_CDemonSetPtr,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\game.cpp",0xd50);
  g_IncludeCommentsWhenWriting = 0;
  if (local_14 != 0) {
    local_18 = engine_dosio_c_getFileSize_FUN_00481880
                         (&s_EmptyChar_0062ca5b,"save\\$$SAVE$$.TMP");
    crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(local_14c,0);
    crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(local_cc,0);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Warning!  Your game didn't save.")
    ;
    iVar3 = g_DefaultStreamBufferSize;
    crt_fstream_cpp_openFile_FUN_00600e85
              (local_14c,"save\\$$SAVE$$.TMP",0x121,g_DefaultStreamBufferSize);
    if (local_108._ios.__enabled_exceptions != 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5);
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(local_cc,0);
      crt_fstream_cpp_ifstream_dtor_FUN_005ff856(local_14c,0);
      return;
    }
    _sprintf(local_350,"%s\\%s","save",local_558);
    crt_fstream_cpp_openFile_FUN_00600e85(local_cc,local_350,0x112,iVar3);
    if (local_88._ios.__enabled_exceptions != 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5);
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(local_cc,0);
      crt_fstream_cpp_ifstream_dtor_FUN_005ff856(local_14c,0);
      return;
    }
    crt_fstream_cpp_ostream_write_FUN_005ffcb3(&local_88,&g_MagicNumEFD,4);
    support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(&local_50,0x8000,8);
    support_codec_cpp_CLZWCompress_init_FUN_0043f320(&local_50);
    support_codec_cpp_CLZWCompress_process_FUN_0043f360
              (&local_50,&local_108,(int)&local_18,&local_88);
    support_codec_cpp_CLZWCompress_finalize_FUN_0043f440(&local_50,&local_88);
    _fflush(local_14c);
    _fflush(local_cc);
    support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&local_50.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&local_50.base,1);
    crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(local_cc,0);
    crt_fstream_cpp_ifstream_dtor_FUN_005ff856(local_14c,0);
  }
  remove("save\\$$SAVE$$.TMP");
  pcVar5 = g_CurrentSaveFile;
  do {
    cVar2 = *pcVar6;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  return;
}
