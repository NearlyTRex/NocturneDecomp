// Name: core_game.cpp_CGame_saveGame_FUN_004e0cd0
// Address: 004e0cd0
// Address Range: [[004e0cd0, 004e12af]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_saveGame_FUN_004e0cd0(CGame * this_ptr, char * save_filename)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame *this_ptr,char *save_filename)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  FILE *file;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  CCodec in_stack_00000040;
  byte *buffer_size;
  uint in_stack_fffffb14;
  uint in_stack_fffffb18;
  uint in_stack_fffffb1c;
  uint in_stack_fffffb20;
  uint in_stack_fffffb24;
  uint in_stack_fffffb28;
  uint in_stack_fffffb3c;
  uint in_stack_fffffb40;
  uint in_stack_fffffb44;
  uint in_stack_fffffb48;
  char acStack_43c [340];
  char acStack_2e8 [4];
  char acStack_2e4 [156];
  char acStack_248 [4];
  char acStack_244 [4];
  char acStack_240 [332];
  byte auStack_f4 [24];
  byte auStack_dc [20];
  byte auStack_c8 [60];
  FILE FStack_8c;
  byte auStack_70 [16];
  byte auStack_60 [8];
  byte auStack_58 [20];
  byte auStack_44 [44];
  uint local_18 [2];
  
  if (this_ptr->letterbox_mode != 0) {
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Unable to save during cinematic")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5);
    return;
  }
  crt_io_c_deleteFile_FUN_005ff9d0("save\\$$SAVE$$.TMP");
  crt_string_c_splitpath_FUN_005ff178
            (&g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,acStack_248);
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_244,"noc");
  if ((iVar3 == 0) ||
     (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_240,".noc"), iVar3 == 0)) {
    pcVar5 = &stack0xfffffab8;
    pcVar4 = &g_CurrentSaveFile;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  pcVar5 = &stack0xfffffab8;
  buffer_size = &stack0xfffffab8;
  if (save_filename == (char *)0x0) {
    bVar2 = true;
    pcVar4 = "noc";
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Save game");
    bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,pcVar5,pcVar4,(int)buffer_size,bVar2);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
      return;
    }
    crt_string_c_splitpath_FUN_005ff178
              (&stack0xfffffac0,(char *)0x0,(char *)0x0,acStack_43c,(char *)0x0);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffac4,"%s.noc");
  }
  else {
    do {
      cVar1 = *save_filename;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = save_filename[1];
      save_filename = save_filename + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  crt_file_c_create_directory_FUN_00600e10("save");
  file = engine_dosio_c_getFile_FUN_00481a50("save",&stack0xfffffabc,"wt");
  if (file == (FILE *)0x0) {
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5);
    g_IncludeCommentsWhenWriting = 0;
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// .NOC file version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  core_mission_cpp_CDemonMission_writeFile_FUN_00523600(g_CDemonMissionPtr);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// Hero count, local hero index, hero list\n");
  iVar3 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d, %d\n");
  if (0 < g_HeroCount) {
    do {
      iVar3 = iVar3 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n");
    } while (iVar3 < g_HeroCount);
  }
  core_event_cpp_CEventList_saveState_FUN_004b1380(g_CEventListPtr,file);
  core_script_cpp_CScript_WriteScriptFile_FUN_00560b50();
  core_fire_cpp_CFireEffect_save_FUN_004c9380(g_CFireEffectPtr,file);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Light state\n");
  core_set_cpp_CDemonSet_FUN_00571170(g_CDemonSetPtr);
  iVar3 = 1;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  if (0 < DAT_02d82d84) {
    do {
      iVar3 = iVar3 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
    } while (iVar3 <= DAT_02d82d84);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Game stats\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%f,%f,%d,%d\n");
  core_set_cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(g_CDemonSetPtr);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\game.cpp",0xd50);
  g_IncludeCommentsWhenWriting = 0;
  if (in_stack_00000040.vtable != (CCodec_vtable *)0x0) {
    in_stack_00000040.vtable =
         (CCodec_vtable *)
         engine_dosio_c_getFileSize_FUN_00481880(&DAT_0062ca5b,"save\\$$SAVE$$.TMP");
    crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0((ifstream *)auStack_f4,0);
    crt_fstream_cpp_ofstream_ctor_FUN_005ff95c((ofstream *)auStack_70,0);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Warning!  Your game didn't save.")
    ;
    iVar3 = g_DefaultStreamBufferSize;
    crt_fstream_cpp_openFile_FUN_00600e85
              ((ifstream *)(auStack_f4 + 0xc),"save\\$$SAVE$$.TMP",0x121,
               g_DefaultStreamBufferSize);
    if (FStack_8c._flag != 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5);
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                ((ofstream *)auStack_60,0,in_stack_fffffb14,in_stack_fffffb18,in_stack_fffffb1c);
      crt_fstream_cpp_ifstream_dtor_FUN_005ff856
                ((ifstream *)auStack_dc,0,in_stack_fffffb18,in_stack_fffffb1c,in_stack_fffffb20);
      return;
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2e8,"%s\\%s");
    crt_fstream_cpp_openFile_FUN_00600e85((ifstream *)auStack_60,acStack_2e4,0x112,iVar3);
    if (this_ptr != (CGame *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5);
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                ((ofstream *)((int)auStack_60 + 8),0,in_stack_fffffb1c,in_stack_fffffb20,
                 in_stack_fffffb24);
      crt_fstream_cpp_ifstream_dtor_FUN_005ff856
                ((ifstream *)(auStack_dc + 8),0,in_stack_fffffb20,in_stack_fffffb24,
                 in_stack_fffffb28);
      return;
    }
    crt_stdio_c_stream_write_internal_FUN_005ffcb3((FILE *)local_18,&g_MagicNumEFD,4);
    support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0((CLZWCompress *)&stack0x00000024);
    support_codec_cpp_CLZWCompress_init_FUN_0043f320((CLZWCompress *)&stack0x00000028);
    support_codec_cpp_CLZWCompress_process_FUN_0043f360
              ((CLZWCompress *)&stack0x0000002c,&FStack_8c,(int)&stack0x00000064,
               (FILE *)&stack0xfffffff4);
    support_codec_cpp_CLZWCompress_finalize_FUN_0043f440
              ((CLZWCompress *)&stack0x00000030,(FILE *)&stack0xfffffff8);
    crt_stdio_c_fflush_FUN_00600e29((FILE *)auStack_c8);
    crt_stdio_c_fflush_FUN_00600e29((FILE *)auStack_44);
    support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0((CLZWDictionary *)&stack0x00000040);
    support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&stack0x00000040,1);
    crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
              ((ofstream *)((int)auStack_44 + 0xc),0,in_stack_fffffb3c,in_stack_fffffb40,
               in_stack_fffffb44);
    crt_fstream_cpp_ifstream_dtor_FUN_005ff856
              ((ifstream *)(auStack_c8 + 0x14),0,in_stack_fffffb40,in_stack_fffffb44,
               in_stack_fffffb48);
  }
  crt_io_c_deleteFile_FUN_005ff9d0("save\\$$SAVE$$.TMP");
  pcVar5 = &stack0xfffffb48;
  pcVar4 = &g_CurrentSaveFile;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
