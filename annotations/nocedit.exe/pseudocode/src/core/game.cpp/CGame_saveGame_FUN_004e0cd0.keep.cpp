// Name: core_game.cpp_CGame_saveGame_FUN_004e0cd0
// Address: 004e0cd0
// MANUAL RECONSTRUCTION
// Address Range: [[004e0cd0, 004e12af]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame *this_ptr,char *save_filename)

#include "nocturne.h"
#include "core/stream_compat.h"

void __cdecl core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame *this_ptr,char *save_filename)

{
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
    strcpy(local_558, g_CurrentSaveFile);
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
    strcpy(local_558, save_filename);
  }
  _mkdir("save");
#if NOCTURNE_AUTHENTIC_SAVE
  local_14 = 1;
  file = engine_dosio_cpp_getFile_FUN_00481a50("save","$$SAVE$$.TMP","wt");
#else
  local_14 = 0;
  file = engine_dosio_cpp_getFile_FUN_00481a50("save",local_558,"wt");
#endif
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
      iVar3 = iVar3 + 1;
      _fprintf(file,"%s\n",((CDemonActor *)g_HeroActors[iVar4])->actor_name);
      iVar4 = iVar4 + 1;
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
    int *pLightState = &g_MasterLightStateSaveBuffer[1];
    do {
      iVar3 = iVar3 + 1;
      _fprintf(file,"%d\n",*pLightState);
      pLightState = pLightState + 1;
    } while (iVar3 <= g_MasterLightStateSaveBuffer[0]);
  }
  _fprintf(file,"Game stats\n");
  _fprintf(file,"%f,%f,%d,%d\n",(double)this_ptr->total_play_time,
             (double)this_ptr->total_game_time,this_ptr->damageable_enemy_count,
             this_ptr->total_kill_count);
  core_set_cpp_CDemonSet_saveStateInfo_FUN_005711b0(g_CDemonSetPtr,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\game.cpp",3408);
  g_IncludeCommentsWhenWriting = 0;
  if (local_14 != 0) {
    local_18 = engine_dosio_cpp_getFileSize_FUN_00481880
                         (&s_EmptyChar_0062ca5b,"save\\$$SAVE$$.TMP");
    {
      std::ifstream ifs;
      std::ofstream ofs;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Warning!  Your game didn't save.")
      ;
      watcom_stream_open(ifs, "save\\$$SAVE$$.TMP", std::ios::in | std::ios::binary);
      if (ifs.fail()) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5);
        return;
      }
      _sprintf(local_350,"%s\\%s","save",local_558);
      watcom_stream_open(ofs, local_350, std::ios::out | std::ios::binary | std::ios::trunc);
      if (ofs.fail()) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5);
        return;
      }
      ofs.write("EFD", 4);
      support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(&local_50,0x8000,8);
      support_codec_cpp_CLZWCompress_init_FUN_0043f320(&local_50);
      support_codec_cpp_CLZWCompress_process_FUN_0043f360
                (&local_50,watcom_istream_from(ifs),&local_18,watcom_ostream_from(ofs));
      support_codec_cpp_CLZWCompress_finalize_FUN_0043f440(&local_50,watcom_ostream_from(ofs));
      ifs.sync();
      ofs.flush();
      support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&local_50.dictionary,0);
      support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&local_50.base,1);
    }
  }
  remove("save\\$$SAVE$$.TMP");
  strcpy(g_CurrentSaveFile, local_558);
  return;
}
