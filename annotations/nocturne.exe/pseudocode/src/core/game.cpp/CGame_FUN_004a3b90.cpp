// Name: core_game.cpp_CGame_FUN_004a3b90
// Address: 004a3b90
// Address Range: [[004a3b90, 004a4163]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_FUN_004a3b90(CGame *this_ptr,char *save_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_FUN_004a3b90(CGame *this_ptr,char *save_filename)

{
  uint *puVar1;
  char cVar2;
  SIZE_T buffer_size;
  int iVar3;
  _FILE *file;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *directory_path;
  char *file_extension;
  char *output_buffer;
  uint flags;
  char local_558 [260];
  char local_454 [260];
  char local_350 [260];
  char local_24c [256];
  byte local_14c [68];
  _istream local_108;
  byte local_cc [68];
  _ostream local_88;
  CLZWCompress local_50;
  int local_18;
  int local_14;
  
  if (this_ptr->letterbox_mode != 0) {
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Unable to save during cinematic")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,pcVar5);
    return;
  }
  remove("save\\$$SAVE$$.TMP");
  splitpath(&DAT_01c78598,(char *)0x0,(char *)0x0,(char *)0x0,local_24c);
  iVar3 = _stricmp(local_24c,"noc");
  if ((iVar3 == 0) ||
     (iVar3 = _stricmp(local_24c,".noc"), iVar3 == 0)) {
    pcVar5 = local_558;
    pcVar4 = &DAT_01c78598;
    do {
      cVar2 = *pcVar4;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
  }
  else {
    local_558[0] = '\0';
  }
  pcVar4 = local_558;
  output_buffer = local_558;
  pcVar5 = local_558;
  if (save_filename == (char *)0x0) {
    flags = 1;
    file_extension = "noc";
    directory_path = "save";
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Save game");
    iVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0
                      (g_CEditorTools_PTR_005b6d50,pcVar4,directory_path,file_extension,
                       output_buffer,flags);
    if (iVar3 == 0) {
      return;
    }
    splitpath(local_558,(char *)0x0,(char *)0x0,local_454,(char *)0x0);
    _sprintf(local_558,"%s.noc",local_454);
  }
  else {
    do {
      cVar2 = *save_filename;
      *pcVar4 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = save_filename[1];
      save_filename = save_filename + 2;
      pcVar4[1] = cVar2;
      pcVar4 = pcVar4 + 2;
    } while (cVar2 != '\0');
  }
  _mkdir("save");
  DAT_00763e90 = (_FILE *)0x1;
  local_14 = 1;
  file = _fopen("save\\$$SAVE$$.TMP","wt");
  if (file == (_FILE *)0x0) {
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,pcVar5);
    DAT_00763e90 = file;
    return;
  }
  _fprintf(file,"// .NOC file version\n");
  _fprintf(file,"%d\n",9);
  core_mission_cpp_CDemonMission_FUN_004d8720(g_CDemonMission_PTR_005baf90,file);
  _fprintf(file,"// Hero count, local hero index, hero list\n");
  _fprintf(file,"%d, %d\n",_DAT_01cae0d4,g_LocalHeroIndex);
  iVar3 = 0;
  if (0 < _DAT_01cae0d4) {
    iVar6 = 0;
    do {
      puVar1 = (uint *)((int)g_HeroActors + iVar6);
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 1;
      _fprintf(file,"%s\n",*puVar1);
    } while (iVar3 < _DAT_01cae0d4);
  }
  core_event_cpp_CEventList_saveState_FUN_00481330(0x01C03A10,file);
  core_script_cpp_CScript_saveState_FUN_005055f0(0x01E56DA0,file);
  core_fire_cpp_CFireEffect_save_FUN_0048c850(g_CFireEffect_PTR_005b80f0,file);
  _fprintf(file,"Light state\n");
  core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0050e860
            (g_CDemonSet_PTR_005be368,(int *)&DAT_01c7869c);
  iVar3 = 1;
  _fprintf(file,"%d\n",_DAT_01c7869c);
  if (0 < _DAT_01c7869c) {
    iVar6 = 4;
    do {
      puVar1 = (uint *)(&DAT_01c7869c + iVar6);
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 1;
      _fprintf(file,"%d\n",*puVar1);
    } while (iVar3 <= _DAT_01c7869c);
  }
  _fprintf(file,"Game stats\n");
  _fprintf(file,"%f,%f,%d,%d\n",(double)this_ptr->total_play_time,
             (double)this_ptr->total_game_time,this_ptr->damageable_enemy_count,
             this_ptr->total_kill_count);
  core_set_cpp_CDemonSet_saveStateInfo_FUN_0050e8a0(g_CDemonSet_PTR_005be368,file);
  _fclose(file);
  DAT_00763e90 = (_FILE *)0x0;
  if (local_14 != 0) {
    local_18 = engine_dosio_cpp_getFileSize_FUN_004568c0
                         (&CHAR_00h_00583c06,"save\\$$SAVE$$.TMP");
    crt_fstream_cpp_ifstream_ctor_FUN_005652fe(local_14c,0);
    crt_fstream_cpp_ofstream_ctor_FUN_0056536a(local_cc,0);
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Warning!  Your game didn't save.")
    ;
    buffer_size = 0x000001A4;
    crt_fstream_cpp_openFile_FUN_00565eb5(local_14c,"save\\$$SAVE$$.TMP",0x121,0x000001A4);
    if (local_108._ios.__enabled_exceptions != 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,pcVar4);
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_cc,0);
      crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_14c,0);
      return;
    }
    _sprintf(local_350,"%s\\%s","save",local_558);
    crt_fstream_cpp_openFile_FUN_00565eb5(local_cc,local_350,0x112,buffer_size);
    if (local_88._ios.__enabled_exceptions != 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,pcVar4);
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_cc,0);
      crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_14c,0);
      return;
    }
    crt_fstream_cpp_ostream_write_FUN_00565a13(&local_88,&DAT_005b9384,4);
    support_codec_cpp_CLZWCompress_ctor_FUN_00439830(&local_50,0x8000,8);
    support_codec_cpp_CLZWCompress_init_FUN_00439880(&local_50);
    support_codec_cpp_CLZWCompress_process_FUN_004398c0(&local_50,&local_108,&local_18,&local_88);
    support_codec_cpp_CLZWCompress_finalize_FUN_004399a0(&local_50,&local_88);
    crt_iostream_cpp_ostream_flush_FUN_00565e59(local_14c);
    crt_iostream_cpp_ostream_flush_FUN_00565e59(local_cc);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(&local_50.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_00438f30(&local_50.base,1);
    crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_cc,0);
    crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_14c,0);
  }
  remove("save\\$$SAVE$$.TMP");
  pcVar4 = &DAT_01c78598;
  do {
    cVar2 = *pcVar5;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  return;
}
