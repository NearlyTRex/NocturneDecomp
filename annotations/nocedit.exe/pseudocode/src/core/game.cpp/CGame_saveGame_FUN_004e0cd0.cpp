// Name: core_game.cpp_CGame_saveGame_FUN_004e0cd0
// Address: 004e0cd0
// Address Range: [[004e0cd0, 004e12af]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_saveGame_FUN_004e0cd0(CGame * this_ptr, char * save_filename)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame *this_ptr,char *save_filename)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FILE *file;
  undefined3 extraout_var;
  int iVar5;
  byte show_directory;
  char *pcVar6;
  char *pcVar7;
  char *filename_buffer;
  char *buffer_size;
  uint in_stack_fffffaa8;
  uint in_stack_fffffaac;
  uint in_stack_fffffab0;
  char local_454 [260];
  char local_350 [260];
  char local_24c [256];
  byte local_14c [100];
  int local_e8;
  byte local_cc [96];
  int local_6c;
  CLZWCompress local_50;
  int local_18;
  int local_14;
  
  if (this_ptr->letterbox_mode != 0) {
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Unable to save during cinematic")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar7);
    return;
  }
  crt_io_c_deleteFile_FUN_005ff9d0("save\\$$SAVE$$.TMP");
  crt_string_c_splitpath_FUN_005ff178
            (&g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_24c);
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(local_24c,"noc");
  if ((iVar4 == 0) ||
     (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(local_24c,".noc"), iVar4 == 0)) {
    pcVar7 = &stack0xfffffaa8;
    pcVar6 = &g_CurrentSaveFile;
    do {
      cVar2 = *pcVar6;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
  }
  else {
    in_stack_fffffaa8 = in_stack_fffffaa8 & 0xffffff00;
  }
  pcVar6 = &stack0xfffffaa8;
  show_directory = SUB41 /* extract 2-byte value */(&stack0xfffffaa8,0);
  pcVar7 = &stack0xfffffaa8;
  if (save_filename == (char *)0x0) {
    buffer_size = "noc";
    filename_buffer = "save";
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Save game");
    bVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,pcVar6,filename_buffer,(int)buffer_size,
                       (bool)show_directory);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) == 0) {
      return;
    }
    crt_string_c_splitpath_FUN_005ff178
              (&stack0xfffffaa8,(char *)0x0,(char *)0x0,local_454,(char *)0x0);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffaa8,"%s.noc",local_454);
  }
  else {
    do {
      cVar2 = *save_filename;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = save_filename[1];
      save_filename = save_filename + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
  }
  crt_file_c_create_directory_FUN_00600e10("save");
  local_14 = 0;
  file = engine_dosio_c_getFile_FUN_00481a50("save",&stack0xfffffaa8,"wt");
  if (file == (FILE *)0x0) {
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar7);
    g_IncludeCommentsWhenWriting = 0;
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// .NOC file version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",9);
  core_mission_cpp_CDemonMission_writeFile_FUN_00523600(g_CDemonMissionPtr);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// Hero count, local hero index, hero list\n");
  iVar4 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d, %d\n",g_HeroCount,g_LocalHeroIndex);
  if (0 < g_HeroCount) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)((int)g_HeroActors + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n",*puVar1);
    } while (iVar4 < g_HeroCount);
  }
  core_event_cpp_CEventList_saveState_FUN_004b1380(g_CEventListPtr,file);
  core_script_cpp_CScript_WriteScriptFile_FUN_00560b50();
  core_fire_cpp_CFireEffect_save_FUN_004c9380(g_CFireEffectPtr,file);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Light state\n");
  core_set_cpp_CDemonSet_FUN_00571170(g_CDemonSetPtr);
  iVar4 = 1;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",DAT_02d82d84);
  if (0 < DAT_02d82d84) {
    iVar5 = 4;
    do {
      puVar1 = (uint *)((int)&DAT_02d82d84 + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",*puVar1);
    } while (iVar4 <= DAT_02d82d84);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Game stats\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f,%f,%d,%d\n",(double)this_ptr->player_rotation,
             (double)this_ptr->player_pos_y,this_ptr->player_pos_x,this_ptr->game_state_flags);
  core_set_cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(g_CDemonSetPtr);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\game.cpp",0xd50);
  g_IncludeCommentsWhenWriting = 0;
  if (local_14 != 0) {
    local_18 = engine_dosio_c_getFileSize_FUN_00481880(&DAT_0062ca5b,"save\\$$SAVE$$.TMP");
    crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0((ifstream *)local_14c,0);
    crt_fstream_cpp_ofstream_ctor_FUN_005ff95c((ofstream *)local_cc,0);
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Warning!  Your game didn't save.")
    ;
    iVar4 = g_DefaultStreamBufferSize;
    crt_fstream_cpp_openFile_FUN_00600e85
              ((ifstream *)local_14c,"save\\$$SAVE$$.TMP",0x121,g_DefaultStreamBufferSize);
    if (local_e8 != 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                ((ofstream *)local_cc,0,in_stack_fffffaa8,in_stack_fffffaac,in_stack_fffffab0);
      crt_fstream_cpp_ifstream_dtor_FUN_005ff856
                ((ifstream *)local_14c,0,in_stack_fffffaa8,in_stack_fffffaac,in_stack_fffffab0);
      return;
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_350,"%s\\%s","save",&stack0xfffffaa8);
    crt_fstream_cpp_openFile_FUN_00600e85((ifstream *)local_cc,local_350,0x112,iVar4);
    if (local_6c != 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                ((ofstream *)local_cc,0,in_stack_fffffaa8,in_stack_fffffaac,in_stack_fffffab0);
      crt_fstream_cpp_ifstream_dtor_FUN_005ff856
                ((ifstream *)local_14c,0,in_stack_fffffaa8,in_stack_fffffaac,in_stack_fffffab0);
      return;
    }
    crt_stdio_c_stream_write_internal_FUN_005ffcb3((FILE *)(local_cc + 0x44),&g_MagicNumEFD,4);
    support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(&local_50);
    support_codec_cpp_CLZWCompress_init_FUN_0043f320(&local_50);
    support_codec_cpp_CLZWCompress_process_FUN_0043f360
              (&local_50,(FILE *)(local_14c + 0x44),(int)&local_18,(FILE *)(local_cc + 0x44));
    support_codec_cpp_CLZWCompress_finalize_FUN_0043f440(&local_50,(FILE *)(local_cc + 0x44));
    crt_stdio_c_fflush_FUN_00600e29((FILE *)local_14c);
    crt_stdio_c_fflush_FUN_00600e29((FILE *)local_cc);
    support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&local_50.dictionary);
    support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&local_50.base_codec,1);
    crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
              ((ofstream *)local_cc,0,in_stack_fffffaa8,in_stack_fffffaac,in_stack_fffffab0);
    crt_fstream_cpp_ifstream_dtor_FUN_005ff856
              ((ifstream *)local_14c,0,in_stack_fffffaa8,in_stack_fffffaac,in_stack_fffffab0);
  }
  crt_io_c_deleteFile_FUN_005ff9d0("save\\$$SAVE$$.TMP");
  pcVar6 = &g_CurrentSaveFile;
  do {
    cVar2 = *pcVar7;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  return;
}
