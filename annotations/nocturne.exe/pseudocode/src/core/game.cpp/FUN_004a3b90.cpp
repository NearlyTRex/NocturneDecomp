// Name: core_game.cpp_FUN_004a3b90
// Address: 004a3b90
// Address Range: [[004a3b90, 004a4163]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004a3b90(CGame *this_ptr,char *save_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004a3b90(CGame *this_ptr,char *save_filename)

{
  char cVar1;
  SIZE_T buffer_size;
  int iVar2;
  _FILE *file_handle;
  char *pcVar3;
  char *pcVar4;
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
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Unable to save during cinematic")
    ;
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,pcVar4);
    return;
  }
  remove("save\\$$SAVE$$.TMP");
  splitpath(&DAT_01c78598,(char *)0x0,(char *)0x0,(char *)0x0,local_24c);
  iVar2 = _stricmp(local_24c,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_24c,".noc"), iVar2 == 0)) {
    pcVar4 = local_558;
    pcVar3 = &DAT_01c78598;
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
    local_558[0] = '\0';
  }
  pcVar3 = local_558;
  output_buffer = local_558;
  pcVar4 = local_558;
  if (save_filename == (char *)0x0) {
    flags = 1;
    file_extension = "noc";
    directory_path = "save";
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Save game");
    iVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0
                      (0x01BCD074,pcVar3,directory_path,file_extension,output_buffer,flags);
    if (iVar2 == 0) {
      return;
    }
    splitpath(local_558,(char *)0x0,(char *)0x0,local_454,(char *)0x0);
    _sprintf();
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
  DAT_00763e90 = (_FILE *)0x1;
  local_14 = 1;
  file_handle = _fopen("save\\$$SAVE$$.TMP","wt");
  if (file_handle == (_FILE *)0x0) {
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,pcVar4);
    DAT_00763e90 = file_handle;
    return;
  }
  _fprintf(file_handle,"// .NOC file version\n");
  _fprintf();
  core_mission_cpp_FUN_004d8720(0x01CC9450,file_handle);
  _fprintf(file_handle,"// Hero count, local hero index, hero list\n");
  _fprintf(file_handle,"%d, %d\n",_DAT_01cae0d4,_DAT_01cae0e8);
  iVar2 = 0;
  if (0 < _DAT_01cae0d4) {
    do {
      iVar2 = iVar2 + 1;
      _fprintf();
    } while (iVar2 < _DAT_01cae0d4);
  }
  core_event_cpp_CEventList_saveState_FUN_00481330(0x01C03A10,file_handle);
  core_script_cpp_FUN_005055f0(0x01E56DA0,file_handle);
  core_fire_cpp_CFireEffect_save_FUN_0048c850(0x01C08D04,file_handle);
  _fprintf(file_handle,"Light state\n");
  core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0050e860(0x01E57284,(int *)&DAT_01c7869c);
  iVar2 = 1;
  _fprintf();
  if (0 < _DAT_01c7869c) {
    do {
      iVar2 = iVar2 + 1;
      _fprintf();
    } while (iVar2 <= _DAT_01c7869c);
  }
  _fprintf(file_handle,"Game stats\n");
  _fprintf(file_handle,"%f,%f,%d,%d\n",(double)this_ptr->total_play_time,
             (double)this_ptr->total_game_time,this_ptr->damageable_enemy_count,
             this_ptr->total_kill_count);
  core_set_cpp_CDemonSet_saveStateInfo_FUN_0050e8a0(0x01E57284,file_handle);
  _fclose(file_handle);
  DAT_00763e90 = (_FILE *)0x0;
  if (local_14 != 0) {
    local_18 = engine_dosio_cpp_getFileSize_FUN_004568c0
                         (&CHAR_00h_00583c06,"save\\$$SAVE$$.TMP");
    crt_fstream_cpp_ifstream_ctor_FUN_005652fe(local_14c,0);
    crt_fstream_cpp_ofstream_ctor_FUN_0056536a(local_cc,0);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Warning!  Your game didn't save.")
    ;
    buffer_size = 0x000001A4;
    crt_fstream_cpp_openFile_FUN_00565eb5(local_14c,"save\\$$SAVE$$.TMP",0x121,0x000001A4);
    if (local_108._ios.__enabled_exceptions != 0) {
      shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,pcVar3);
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_cc,0);
      crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_14c,0);
      return;
    }
    _sprintf(local_350,"%s\\%s","save",local_558);
    crt_fstream_cpp_openFile_FUN_00565eb5(local_cc,local_350,0x112,buffer_size);
    if (local_88._ios.__enabled_exceptions != 0) {
      shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,pcVar3);
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_cc,0);
      crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_14c,0);
      return;
    }
    crt_fstream_cpp_ostream_write_FUN_00565a13(&local_88,&DAT_005b9384,4);
    support_codec_cpp_CLZWCompress_ctor_FUN_00439830(&local_50,0x8000,8);
    support_codec_cpp_CLZWCompress_init_FUN_00439880(&local_50);
    support_codec_cpp_CLZWCompress_process_FUN_004398c0(&local_50,&local_108,&local_18,&local_88);
    support_codec_cpp_CLZWCompress_finalize_FUN_004399a0(&local_50,&local_88);
    _fflush(local_14c);
    _fflush(local_cc);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(&local_50.dictionary,0);
    support_codec_cpp_CCodec_dtor_FUN_00438f30(&local_50.base,1);
    crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_cc,0);
    crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_14c,0);
  }
  remove("save\\$$SAVE$$.TMP");
  pcVar3 = &DAT_01c78598;
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
