// Name: core_game.cpp_CGame_saveGame_FUN_004e0cd0
// Address: 004e0cd0
// Address Range: [[004e0cd0, 004e12af]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_saveGame_FUN_004e0cd0(CGame * this_ptr, char * save_filename)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db90d [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd523 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Unable_to_save_during_ci_0062c945
//   TerminatedCString s_noc_0062c965
//   TerminatedCString s_noc_0062c969
//   TerminatedCString s_noc_0062c96e
//   TerminatedCString s_save_0062c972
//   TerminatedCString s_Save_game_0062c977
//   TerminatedCString s_s_noc_0062c981
//   TerminatedCString s_save_0062c988
//   TerminatedCString s_wt_0062c9a1
//   TerminatedCString s_save_0062c9a4
//   TerminatedCString s_Warning_Your_game_didn_t_0062c9a9
//   TerminatedCString s_NOC_file_version_0062c9ca
//   TerminatedCString s_d_0062c9e0
//   TerminatedCString s_Hero_count_local_hero_in_0062c9e4
//   TerminatedCString s_d_d_0062ca10
//   TerminatedCString s_s_0062ca18
//   TerminatedCString s_Light_state_0062ca1c
//   TerminatedCString s_d_0062ca29
//   TerminatedCString s_d_0062ca2d
//   TerminatedCString s_Game_stats_0062ca31
//   TerminatedCString s_f_f_d_d_0062ca3d
//   TerminatedCString s_core_game_cpp_0062ca4a
//   undefined4 DAT_0062ca5b
//   TerminatedCString s_Warning_Your_game_didn_t_0062ca5c
//   TerminatedCString s_save_0062ca7d
//   TerminatedCString s_s_s_0062ca82
//   int g_DefaultStreamBufferSize = 0x1a4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEventList* g_CEventListPtr = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   TerminatedCString s_save_SAVE_TMP_0067b670
//   undefined1 g_MagicNumEFD
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   int g_IncludeCommentsWhenWriting
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02d05310
//   CFireEffect g_CFireEffectInstance
//   char g_CurrentSaveFile
//   undefined1 DAT_02d82c81
//   undefined1 DAT_02d82c82
//   undefined1 DAT_02d82c83
//   undefined4 DAT_02d82d84
//   undefined4 DAT_02d82d88
//   undefined4 DAT_02d82d8c
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   undefined4 DAT_02db87c4
//   int g_LocalHeroIndex
//   CDemonMission g_CDemonMissionInstance
//   CScript g_CScriptInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_event.cpp_WritingEventFile_FUN_004b1380
//   core_fire.cpp_CFireEffect_FUN_004c9380
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600
//   core_script.cpp_CScript_WriteScriptFile_FUN_00560b50
//   core_set.cpp_CDemonSet_FUN_00571170
//   core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0
//   crt_file.c_create_directory_FUN_00600e10
//   crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   crt_fstream.cpp_openFile_FUN_00600e85
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_fflush_FUN_00600e29
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_stream_write_internal_FUN_005ffcb3
//   crt_string.c_splitpath_FUN_005ff178
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
//   support_codec.cpp_CLZWCompress_finalize_FUN_0043f440
//   support_codec.cpp_CLZWCompress_init_FUN_0043f320
//   support_codec.cpp_CLZWCompress_process_FUN_0043f360
//   support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

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
  int iVar5;
  char *pcVar6;
  CCodec in_stack_00000040;
  undefined1 *buffer_size;
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
  undefined1 auStack_f4 [24];
  undefined1 auStack_dc [20];
  undefined1 auStack_c8 [60];
  FILE FStack_8c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [44];
  uint local_18 [2];
  
  if (this_ptr->letterbox_mode != 0) {
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Unable to save during cinematic")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
    return;
  }
  crt_io_c_deleteFile_FUN_005ff9d0("save\\$$SAVE$$.TMP");
  crt_string_c_splitpath_FUN_005ff178
            (&g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,acStack_248);
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_244,"noc");
  if ((iVar3 == 0) ||
     (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_240,".noc"), iVar3 == 0)) {
    pcVar6 = &stack0xfffffab8;
    pcVar4 = &g_CurrentSaveFile;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  pcVar6 = &stack0xfffffab8;
  buffer_size = &stack0xfffffab8;
  if (save_filename == (char *)0x0) {
    bVar2 = true;
    pcVar4 = "noc";
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Save game");
    bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,pcVar6,pcVar4,(int)buffer_size,bVar2);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return;
    }
    crt_string_c_splitpath_FUN_005ff178
              (&stack0xfffffac0,(char *)0x0,(char *)0x0,acStack_43c,(char *)0x0);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffac4,"%s.noc");
  }
  else {
    do {
      cVar1 = *save_filename;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = save_filename[1];
      save_filename = save_filename + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  crt_file_c_create_directory_FUN_00600e10("save");
  file = engine_dosio_c_getFile_FUN_00481a50("save",&stack0xfffffabc,"wt");
  if (file == (FILE *)0x0) {
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Warning!  Your game didn't save.")
    ;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
    g_IncludeCommentsWhenWriting = 0;
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// .NOC file version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  core_mission_cpp_CDemonMission_writeFile_FUN_00523600(g_CDemonMissionPtr);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// Hero count, local hero index, hero list\n");
  iVar5 = 0;
  iVar3 = crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d, %d\n");
  if (0 < g_HeroCount) {
    do {
      iVar5 = iVar5 + 1;
      iVar3 = crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n");
    } while (iVar5 < g_HeroCount);
  }
  core_event_cpp_WritingEventFile_FUN_004b1380(iVar3);
  core_script_cpp_CScript_WriteScriptFile_FUN_00560b50();
  core_fire_cpp_CFireEffect_FUN_004c9380(g_CFireEffectPtr);
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
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Warning!  Your game didn't save.")
    ;
    iVar3 = g_DefaultStreamBufferSize;
    crt_fstream_cpp_openFile_FUN_00600e85
              ((ifstream *)(auStack_f4 + 0xc),"save\\$$SAVE$$.TMP",0x121,
               g_DefaultStreamBufferSize);
    if (FStack_8c._flag != 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                ((ofstream *)auStack_60,0,in_stack_fffffb14,in_stack_fffffb18,in_stack_fffffb1c);
      crt_fstream_cpp_ifstream_dtor_FUN_005ff856
                ((ifstream *)auStack_dc,0,in_stack_fffffb18,in_stack_fffffb1c,in_stack_fffffb20);
      return;
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2e8,"%s\\%s");
    crt_fstream_cpp_openFile_FUN_00600e85((ifstream *)auStack_60,acStack_2e4,0x112,iVar3);
    if (this_ptr != (CGame *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
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
  pcVar6 = &stack0xfffffb48;
  pcVar4 = &g_CurrentSaveFile;
  do {
    cVar1 = *pcVar6;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004e0cd0: PUSH EBX
//   Label: core_game.cpp_CGame_saveGame_FUN_004e0cd0
// 004e0cd1: PUSH ESI
// 004e0cd2: PUSH EDI
// 004e0cd3: PUSH EBP
// 004e0cd4: SUB ESP,0x548
// 004e0cda: MOV EBP,dword ptr [ESP + 0x55c]
//   XREF to: Stack[0x4] (READ)
// 004e0ce1: MOV EBX,dword ptr [ESP + 0x560]
//   XREF to: Stack[0x8] (READ)
// 004e0ce8: CMP dword ptr [EBP + 0x228],0x0
// 004e0cef: JNZ 0x004e114a
//   XREF to: 004e114a (CONDITIONAL_JUMP)
// 004e0cf5: PUSH 0x67b670
//   XREF to: 0067b670 (DATA)
// 004e0cfa: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004e0cff: ADD ESP,0x4
// 004e0d02: LEA EAX,[ESP + 0x30c]
//   XREF to: Stack[-0x24c] (DATA)
// 004e0d09: PUSH EAX
// 004e0d0a: PUSH 0x0
// 004e0d0c: PUSH 0x0
// 004e0d0e: PUSH 0x0
// 004e0d10: PUSH 0x2d82c80
//   XREF to: 02d82c80 (DATA)
// 004e0d15: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 004e0d1a: ADD ESP,0x14
// 004e0d1d: PUSH 0x62c965
//   XREF to: 0062c965 (DATA)
// 004e0d22: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x24c] (DATA)
// 004e0d29: PUSH EAX
// 004e0d2a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004e0d2f: ADD ESP,0x8
// 004e0d32: TEST EAX,EAX
// 004e0d34: JNZ 0x004e1172
//   XREF to: 004e1172 (CONDITIONAL_JUMP)
// 004e0d3a: MOV ESI,0x2d82c80
//   Label: LAB_004e0d3a
//   XREF to: 02d82c80 (DATA)
// 004e0d3f: MOV EDI,ESP
// 004e0d41: PUSH EDI
// 004e0d42: MOV AL,byte ptr [ESI]
//   Label: LAB_004e0d42
//   XREF to: 02d82c80 (READ)
//   XREF to: 02d82c82 (READ)
// 004e0d44: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x558] (DATA)
// 004e0d46: CMP AL,0x0
// 004e0d48: JZ 0x004e0d5a
//   XREF to: 004e0d5a (CONDITIONAL_JUMP)
// 004e0d4a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02d82c81 (READ)
//   XREF to: 02d82c83 (READ)
// 004e0d4d: ADD ESI,0x2
// 004e0d50: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x557] (WRITE)
// 004e0d53: ADD EDI,0x2
// 004e0d56: CMP AL,0x0
// 004e0d58: JNZ 0x004e0d42
//   XREF to: 004e0d42 (CONDITIONAL_JUMP)
// 004e0d5a: POP EDI
//   Label: LAB_004e0d5a
// 004e0d5b: TEST EBX,EBX
//   Label: LAB_004e0d5b
// 004e0d5d: JZ 0x004e1199
//   XREF to: 004e1199 (CONDITIONAL_JUMP)
// 004e0d63: MOV EDI,ESP
// 004e0d65: MOV ESI,EBX
// 004e0d67: PUSH EDI
// 004e0d68: MOV AL,byte ptr [ESI]
//   Label: LAB_004e0d68
// 004e0d6a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x558] (DATA)
// 004e0d6c: CMP AL,0x0
// 004e0d6e: JZ 0x004e0d80
//   XREF to: 004e0d80 (CONDITIONAL_JUMP)
// 004e0d70: MOV AL,byte ptr [ESI + 0x1]
// 004e0d73: ADD ESI,0x2
// 004e0d76: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x557] (WRITE)
// 004e0d79: ADD EDI,0x2
// 004e0d7c: CMP AL,0x0
// 004e0d7e: JNZ 0x004e0d68
//   XREF to: 004e0d68 (CONDITIONAL_JUMP)
// 004e0d80: POP EDI
//   Label: LAB_004e0d80
// 004e0d81: PUSH 0x62c988
//   Label: LAB_004e0d81
//   XREF to: 0062c988 (DATA)
// 004e0d86: CALL crt_file.c_create_directory_FUN_00600e10
//   XREF to: 00600e10 (UNCONDITIONAL_CALL)
// 004e0d8b: ADD ESP,0x4
// 004e0d8e: PUSH 0x62c9a1
//   XREF to: 0062c9a1 (DATA)
// 004e0d93: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x558] (DATA)
// 004e0d97: PUSH EAX
// 004e0d98: XOR EBX,EBX
// 004e0d9a: PUSH 0x62c9a4
//   XREF to: 0062c9a4 (DATA)
// 004e0d9f: MOV dword ptr [ESP + 0x550],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004e0da6: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e0dab: MOV EBX,EAX
// 004e0dad: ADD ESP,0xc
// 004e0db0: MOV EDI,EAX
// 004e0db2: TEST EAX,EAX
// 004e0db4: JZ 0x004e1206
//   XREF to: 004e1206 (CONDITIONAL_JUMP)
// 004e0dba: PUSH 0x62c9ca
//   XREF to: 0062c9ca (DATA)
// 004e0dbf: PUSH EAX
// 004e0dc0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0dc5: ADD ESP,0x8
// 004e0dc8: PUSH 0x9
// 004e0dca: PUSH 0x62c9e0
//   XREF to: 0062c9e0 (DATA)
// 004e0dcf: PUSH EBX
// 004e0dd0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0dd5: ADD ESP,0xc
// 004e0dd8: PUSH EBX
// 004e0dd9: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004e0ddf: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004e0de0: CALL core_mission.cpp_CDemonMission_writeFile_FUN_00523600
//   XREF to: 00523600 (UNCONDITIONAL_CALL)
// 004e0de5: ADD ESP,0x8
// 004e0de8: PUSH 0x62c9e4
//   XREF to: 0062c9e4 (DATA)
// 004e0ded: PUSH EBX
// 004e0dee: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0df3: ADD ESP,0x8
// 004e0df6: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004e0dfb: PUSH EAX
// 004e0dfc: MOV EDX,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004e0e02: PUSH EDX
// 004e0e03: PUSH 0x62ca10
//   XREF to: 0062ca10 (DATA)
// 004e0e08: PUSH EBX
// 004e0e09: XOR ESI,ESI
// 004e0e0b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0e10: MOV ECX,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004e0e16: ADD ESP,0x10
// 004e0e19: TEST ECX,ECX
// 004e0e1b: JLE 0x004e0e50
//   XREF to: 004e0e50 (CONDITIONAL_JUMP)
// 004e0e1d: XOR EBX,EBX
// 004e0e1f: MOV EAX,dword ptr [EBX + 0x2db87c0]
//   Label: LAB_004e0e1f
//   XREF to: 02db87c0 (READ)
//   XREF to: 02db87c4 (READ)
// 004e0e25: PUSH EAX
// 004e0e26: PUSH 0x62ca18
//   XREF to: 0062ca18 (DATA)
// 004e0e2b: PUSH EDI
// 004e0e2c: ADD EBX,0x4
// 004e0e2f: INC ESI
// 004e0e30: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0e35: MOV EDX,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004e0e3b: ADD ESP,0xc
// 004e0e3e: CMP ESI,EDX
// 004e0e40: JL 0x004e0e1f
//   XREF to: 004e0e1f (CONDITIONAL_JUMP)
// 004e0e42: LEA EAX,[EAX]
// 004e0e48: LEA EDX,[EDX]
// 004e0e4e: MOV EAX,EAX
// 004e0e50: PUSH EDI
//   Label: LAB_004e0e50
// 004e0e51: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004e0e57: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004e0e58: CALL core_event.cpp_WritingEventFile_FUN_004b1380
//   XREF to: 004b1380 (UNCONDITIONAL_CALL)
// 004e0e5d: ADD ESP,0x8
// 004e0e60: PUSH EDI
// 004e0e61: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004e0e67: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 004e0e68: CALL core_script.cpp_CScript_WriteScriptFile_FUN_00560b50
//   XREF to: 00560b50 (UNCONDITIONAL_CALL)
// 004e0e6d: ADD ESP,0x8
// 004e0e70: PUSH EDI
// 004e0e71: MOV ESI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004e0e77: PUSH ESI
//   XREF to: 02d12db0 (DATA)
// 004e0e78: CALL core_fire.cpp_CFireEffect_FUN_004c9380
//   XREF to: 004c9380 (UNCONDITIONAL_CALL)
// 004e0e7d: ADD ESP,0x8
// 004e0e80: PUSH 0x62ca1c
//   XREF to: 0062ca1c (DATA)
// 004e0e85: PUSH EDI
// 004e0e86: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0e8b: ADD ESP,0x8
// 004e0e8e: PUSH 0x2d82d84
//   XREF to: 02d82d84 (DATA)
// 004e0e93: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e0e98: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004e0e99: CALL core_set.cpp_CDemonSet_FUN_00571170
//   XREF to: 00571170 (UNCONDITIONAL_CALL)
// 004e0e9e: ADD ESP,0x8
// 004e0ea1: MOV EDX,dword ptr [0x02d82d84]
//   XREF to: 02d82d84 (READ)
// 004e0ea7: PUSH EDX
// 004e0ea8: PUSH 0x62ca29
//   XREF to: 0062ca29 (DATA)
// 004e0ead: PUSH EDI
// 004e0eae: MOV EBX,0x1
// 004e0eb3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0eb8: MOV ECX,dword ptr [0x02d82d84]
//   XREF to: 02d82d84 (READ)
// 004e0ebe: ADD ESP,0xc
// 004e0ec1: CMP ECX,EBX
// 004e0ec3: JL 0x004e0ef0
//   XREF to: 004e0ef0 (CONDITIONAL_JUMP)
// 004e0ec5: MOV ESI,0x4
// 004e0eca: MOV EAX,dword ptr [ESI + 0x2d82d84]
//   Label: LAB_004e0eca
//   XREF to: 02d82d88 (READ)
//   XREF to: 02d82d8c (READ)
// 004e0ed0: PUSH EAX
// 004e0ed1: PUSH 0x62ca2d
//   XREF to: 0062ca2d (DATA)
// 004e0ed6: PUSH EDI
// 004e0ed7: ADD ESI,0x4
// 004e0eda: INC EBX
// 004e0edb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0ee0: MOV EDX,dword ptr [0x02d82d84]
//   XREF to: 02d82d84 (READ)
// 004e0ee6: ADD ESP,0xc
// 004e0ee9: CMP EBX,EDX
// 004e0eeb: JLE 0x004e0eca
//   XREF to: 004e0eca (CONDITIONAL_JUMP)
// 004e0eed: LEA EAX,[EAX]
// 004e0ef0: PUSH 0x62ca31
//   Label: LAB_004e0ef0
//   XREF to: 0062ca31 (DATA)
// 004e0ef5: PUSH EDI
// 004e0ef6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0efb: ADD ESP,0x8
// 004e0efe: MOV ECX,dword ptr [EBP + 0x254]
// 004e0f04: PUSH ECX
// 004e0f05: MOV EBX,dword ptr [EBP + 0x24c]
// 004e0f0b: PUSH EBX
// 004e0f0c: SUB ESP,0x8
// 004e0f0f: FLD float ptr [EBP + 0x248]
// 004e0f15: FSTP double ptr [ESP]
//   XREF to: Stack[-0x568] (DATA)
// 004e0f18: SUB ESP,0x8
// 004e0f1b: FLD float ptr [EBP + 0x250]
// 004e0f21: FSTP double ptr [ESP]
//   XREF to: Stack[-0x570] (DATA)
// 004e0f24: PUSH 0x62ca3d
//   XREF to: 0062ca3d (DATA)
// 004e0f29: PUSH EDI
// 004e0f2a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e0f2f: ADD ESP,0x20
// 004e0f32: PUSH EDI
// 004e0f33: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004e0f39: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004e0f3a: CALL core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0
//   XREF to: 005711b0 (UNCONDITIONAL_CALL)
// 004e0f3f: ADD ESP,0x8
// 004e0f42: PUSH 0xd50
// 004e0f47: PUSH 0x62ca4a
//   XREF to: 0062ca4a (DATA)
// 004e0f4c: PUSH EDI
// 004e0f4d: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e0f52: ADD ESP,0xc
// 004e0f55: XOR EDI,EDI
// 004e0f57: MOV EBP,dword ptr [ESP + 0x544]
//   XREF to: Stack[-0x14] (READ)
// 004e0f5e: MOV dword ptr [0x00822040],EDI
//   XREF to: 00822040 (WRITE)
// 004e0f64: TEST EBP,EBP
// 004e0f66: JZ 0x004e1111
//   XREF to: 004e1111 (CONDITIONAL_JUMP)
// 004e0f6c: PUSH 0x67b670
//   XREF to: 0067b670 (DATA)
// 004e0f71: PUSH 0x62ca5b
//   XREF to: 0062ca5b (DATA)
// 004e0f76: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 004e0f7b: ADD ESP,0x8
// 004e0f7e: PUSH EDI
// 004e0f7f: MOV dword ptr [ESP + 0x544],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004e0f86: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x14c] (DATA)
// 004e0f8d: PUSH EAX
// 004e0f8e: CALL crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
//   XREF to: 005ff8f0 (UNCONDITIONAL_CALL)
// 004e0f93: ADD ESP,0x8
// 004e0f96: PUSH EDI
// 004e0f97: LEA EAX,[ESP + 0x490]
//   XREF to: Stack[-0xcc] (DATA)
// 004e0f9e: PUSH EAX
// 004e0f9f: CALL crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
//   XREF to: 005ff95c (UNCONDITIONAL_CALL)
// 004e0fa4: ADD ESP,0x8
// 004e0fa7: PUSH 0x62ca5c
//   XREF to: 0062ca5c (DATA)
// 004e0fac: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e0fb1: ADD ESP,0x4
// 004e0fb4: MOV ESI,dword ptr [0x00665c50]
//   XREF to: 00665c50 (READ)
// 004e0fba: PUSH ESI
// 004e0fbb: PUSH 0x121
// 004e0fc0: PUSH 0x67b670
//   XREF to: 0067b670 (DATA)
// 004e0fc5: MOV EBX,EAX
// 004e0fc7: LEA EAX,[ESP + 0x418]
//   XREF to: Stack[-0x14c] (DATA)
// 004e0fce: PUSH EAX
// 004e0fcf: CALL crt_fstream.cpp_openFile_FUN_00600e85
//   XREF to: 00600e85 (UNCONDITIONAL_CALL)
// 004e0fd4: ADD ESP,0x10
// 004e0fd7: CMP dword ptr [ESP + 0x470],0x0
//   XREF to: Stack[-0xe8] (READ)
// 004e0fdf: JNZ 0x004e1236
//   XREF to: 004e1236 (CONDITIONAL_JUMP)
// 004e0fe5: MOV EAX,ESP
// 004e0fe7: PUSH EAX
// 004e0fe8: PUSH 0x62ca7d
//   XREF to: 0062ca7d (DATA)
// 004e0fed: PUSH 0x62ca82
//   XREF to: 0062ca82 (DATA)
// 004e0ff2: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x350] (DATA)
// 004e0ff9: PUSH EAX
// 004e0ffa: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004e0fff: ADD ESP,0x10
// 004e1002: PUSH ESI
// 004e1003: PUSH 0x112
// 004e1008: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x350] (DATA)
// 004e100f: PUSH EAX
// 004e1010: LEA EAX,[ESP + 0x498]
//   XREF to: Stack[-0xcc] (DATA)
// 004e1017: PUSH EAX
// 004e1018: CALL crt_fstream.cpp_openFile_FUN_00600e85
//   XREF to: 00600e85 (UNCONDITIONAL_CALL)
// 004e101d: ADD ESP,0x10
// 004e1020: CMP dword ptr [ESP + 0x4ec],0x0
//   XREF to: Stack[-0x6c] (READ)
// 004e1028: JNZ 0x004e1273
//   XREF to: 004e1273 (CONDITIONAL_JUMP)
// 004e102e: PUSH 0x4
// 004e1030: PUSH 0x67b684
//   XREF to: 0067b684 (DATA)
// 004e1035: LEA EAX,[ESP + 0x4d8]
//   XREF to: Stack[-0x88] (DATA)
// 004e103c: PUSH EAX
// 004e103d: CALL crt_stdio.c_stream_write_internal_FUN_005ffcb3
//   XREF to: 005ffcb3 (UNCONDITIONAL_CALL)
// 004e1042: ADD ESP,0xc
// 004e1045: PUSH 0x8
// 004e1047: PUSH 0x8000
// 004e104c: LEA EAX,[ESP + 0x510]
//   XREF to: Stack[-0x50] (DATA)
// 004e1053: PUSH EAX
// 004e1054: CALL support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
//   XREF to: 0043f2d0 (UNCONDITIONAL_CALL)
// 004e1059: ADD ESP,0xc
// 004e105c: LEA EAX,[ESP + 0x508]
//   XREF to: Stack[-0x50] (DATA)
// 004e1063: PUSH EAX
// 004e1064: CALL support_codec.cpp_CLZWCompress_init_FUN_0043f320
//   XREF to: 0043f320 (UNCONDITIONAL_CALL)
// 004e1069: ADD ESP,0x4
// 004e106c: LEA EAX,[ESP + 0x4d0]
//   XREF to: Stack[-0x88] (DATA)
// 004e1073: PUSH EAX
// 004e1074: LEA EAX,[ESP + 0x544]
//   XREF to: Stack[-0x18] (DATA)
// 004e107b: PUSH EAX
// 004e107c: LEA EAX,[ESP + 0x458]
//   XREF to: Stack[-0x108] (DATA)
// 004e1083: PUSH EAX
// 004e1084: LEA EAX,[ESP + 0x514]
//   XREF to: Stack[-0x50] (DATA)
// 004e108b: PUSH EAX
// 004e108c: CALL support_codec.cpp_CLZWCompress_process_FUN_0043f360
//   XREF to: 0043f360 (UNCONDITIONAL_CALL)
// 004e1091: ADD ESP,0x10
// 004e1094: LEA EAX,[ESP + 0x4d0]
//   XREF to: Stack[-0x88] (DATA)
// 004e109b: PUSH EAX
// 004e109c: LEA EAX,[ESP + 0x50c]
//   XREF to: Stack[-0x50] (DATA)
// 004e10a3: PUSH EAX
// 004e10a4: CALL support_codec.cpp_CLZWCompress_finalize_FUN_0043f440
//   XREF to: 0043f440 (UNCONDITIONAL_CALL)
// 004e10a9: ADD ESP,0x8
// 004e10ac: LEA EAX,[ESP + 0x40c]
//   XREF to: Stack[-0x14c] (DATA)
// 004e10b3: PUSH EAX
// 004e10b4: CALL crt_stdio.c_fflush_FUN_00600e29
//   XREF to: 00600e29 (UNCONDITIONAL_CALL)
// 004e10b9: ADD ESP,0x4
// 004e10bc: LEA EAX,[ESP + 0x48c]
//   XREF to: Stack[-0xcc] (DATA)
// 004e10c3: PUSH EAX
// 004e10c4: CALL crt_stdio.c_fflush_FUN_00600e29
//   XREF to: 00600e29 (UNCONDITIONAL_CALL)
// 004e10c9: ADD ESP,0x4
// 004e10cc: PUSH EDI
// 004e10cd: LEA EAX,[ESP + 0x510]
//   XREF to: Stack[-0x4c] (DATA)
// 004e10d4: PUSH EAX
// 004e10d5: CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
//   XREF to: 0043edf0 (UNCONDITIONAL_CALL)
// 004e10da: ADD ESP,0x8
// 004e10dd: PUSH 0x1
// 004e10df: LEA EAX,[ESP + 0x50c]
//   XREF to: Stack[-0x50] (DATA)
// 004e10e6: PUSH EAX
// 004e10e7: CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)
// 004e10ec: ADD ESP,0x8
// 004e10ef: PUSH EDI
// 004e10f0: LEA EAX,[ESP + 0x490]
//   XREF to: Stack[-0xcc] (DATA)
// 004e10f7: PUSH EAX
// 004e10f8: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 004e10fd: ADD ESP,0x8
// 004e1100: PUSH EDI
// 004e1101: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x14c] (DATA)
// 004e1108: PUSH EAX
// 004e1109: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 004e110e: ADD ESP,0x8
// 004e1111: PUSH 0x67b670
//   Label: LAB_004e1111
//   XREF to: 0067b670 (DATA)
// 004e1116: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004e111b: ADD ESP,0x4
// 004e111e: MOV ESI,ESP
// 004e1120: MOV EDI,0x2d82c80
//   XREF to: 02d82c80 (DATA)
// 004e1125: PUSH EDI
//   XREF to: 02d82c80 (DATA)
// 004e1126: MOV AL,byte ptr [ESI]
//   Label: LAB_004e1126
//   XREF to: Stack[-0x558] (DATA)
// 004e1128: MOV byte ptr [EDI],AL
//   XREF to: 02d82c80 (WRITE)
//   XREF to: 02d82c82 (WRITE)
// 004e112a: CMP AL,0x0
// 004e112c: JZ 0x004e113e
//   XREF to: 004e113e (CONDITIONAL_JUMP)
// 004e112e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x557] (READ)
// 004e1131: ADD ESI,0x2
// 004e1134: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d82c81 (WRITE)
//   XREF to: 02d82c83 (WRITE)
// 004e1137: ADD EDI,0x2
// 004e113a: CMP AL,0x0
// 004e113c: JNZ 0x004e1126
//   XREF to: 004e1126 (CONDITIONAL_JUMP)
// 004e113e: POP EDI
//   Label: LAB_004e113e
// 004e113f: ADD ESP,0x548
//   Label: LAB_004e113f
// 004e1145: POP EBP
// 004e1146: POP EDI
// 004e1147: POP ESI
// 004e1148: POP EBX
// 004e1149: RET
// 004e114a: PUSH 0x62c945
//   Label: LAB_004e114a
//   XREF to: 0062c945 (DATA)
// 004e114f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1154: ADD ESP,0x4
// 004e1157: PUSH EAX
// 004e1158: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e115e: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004e115f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e1164: ADD ESP,0x8
// 004e1167: ADD ESP,0x548
// 004e116d: POP EBP
// 004e116e: POP EDI
// 004e116f: POP ESI
// 004e1170: POP EBX
// 004e1171: RET
// 004e1172: PUSH 0x62c969
//   Label: LAB_004e1172
//   XREF to: 0062c969 (DATA)
// 004e1177: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x24c] (DATA)
// 004e117e: PUSH EAX
// 004e117f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004e1184: ADD ESP,0x8
// 004e1187: TEST EAX,EAX
// 004e1189: JZ 0x004e0d3a
//   XREF to: 004e0d3a (CONDITIONAL_JUMP)
// 004e118f: XOR AH,AH
// 004e1191: MOV byte ptr [ESP],AH
//   XREF to: Stack[-0x558] (DATA)
// 004e1194: JMP 0x004e0d5b
//   XREF to: 004e0d5b (UNCONDITIONAL_JUMP)
// 004e1199: PUSH 0x1
//   Label: LAB_004e1199
// 004e119b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x558] (DATA)
// 004e119f: PUSH EAX
// 004e11a0: PUSH 0x62c96e
//   XREF to: 0062c96e (DATA)
// 004e11a5: PUSH 0x62c972
//   XREF to: 0062c972 (DATA)
// 004e11aa: PUSH 0x62c977
//   XREF to: 0062c977 (DATA)
// 004e11af: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e11b4: ADD ESP,0x4
// 004e11b7: PUSH EAX
// 004e11b8: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004e11be: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004e11bf: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 004e11c4: ADD ESP,0x18
// 004e11c7: TEST EAX,EAX
// 004e11c9: JZ 0x004e113f
//   XREF to: 004e113f (CONDITIONAL_JUMP)
// 004e11cf: PUSH EBX
// 004e11d0: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x454] (DATA)
// 004e11d7: PUSH EAX
// 004e11d8: PUSH EBX
// 004e11d9: PUSH EBX
// 004e11da: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x558] (DATA)
// 004e11de: PUSH EAX
// 004e11df: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 004e11e4: ADD ESP,0x14
// 004e11e7: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x454] (DATA)
// 004e11ee: PUSH EAX
// 004e11ef: PUSH 0x62c981
//   XREF to: 0062c981 (DATA)
// 004e11f4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x558] (DATA)
// 004e11f8: PUSH EAX
// 004e11f9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004e11fe: ADD ESP,0xc
// 004e1201: JMP 0x004e0d81
//   XREF to: 004e0d81 (UNCONDITIONAL_JUMP)
// 004e1206: PUSH 0x62c9a9
//   Label: LAB_004e1206
//   XREF to: 0062c9a9 (DATA)
// 004e120b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1210: ADD ESP,0x4
// 004e1213: PUSH EAX
// 004e1214: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e121a: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004e121b: XOR ESI,ESI
// 004e121d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e1222: ADD ESP,0x8
// 004e1225: MOV dword ptr [0x00822040],ESI
//   XREF to: 00822040 (WRITE)
// 004e122b: ADD ESP,0x548
// 004e1231: POP EBP
// 004e1232: POP EDI
// 004e1233: POP ESI
// 004e1234: POP EBX
// 004e1235: RET
// 004e1236: PUSH EBX
//   Label: LAB_004e1236
// 004e1237: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e123d: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004e123e: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e1243: ADD ESP,0x8
// 004e1246: PUSH EDI
// 004e1247: LEA EAX,[ESP + 0x490]
//   XREF to: Stack[-0xcc] (DATA)
// 004e124e: PUSH EAX
// 004e124f: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 004e1254: ADD ESP,0x8
// 004e1257: PUSH EDI
// 004e1258: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x14c] (DATA)
// 004e125f: PUSH EAX
// 004e1260: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 004e1265: ADD ESP,0x8
// 004e1268: ADD ESP,0x548
// 004e126e: POP EBP
// 004e126f: POP EDI
// 004e1270: POP ESI
// 004e1271: POP EBX
// 004e1272: RET
// 004e1273: PUSH EBX
//   Label: LAB_004e1273
// 004e1274: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e127a: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004e127b: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e1280: ADD ESP,0x8
// 004e1283: PUSH EDI
// 004e1284: LEA EAX,[ESP + 0x490]
//   XREF to: Stack[-0xcc] (DATA)
// 004e128b: PUSH EAX
// 004e128c: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 004e1291: ADD ESP,0x8
// 004e1294: PUSH EDI
// 004e1295: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x14c] (DATA)
// 004e129c: PUSH EAX
// 004e129d: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 004e12a2: ADD ESP,0x8
// 004e12a5: ADD ESP,0x548
// 004e12ab: POP EBP
// 004e12ac: POP EDI
// 004e12ad: POP ESI
// 004e12ae: POP EBX
// 004e12af: RET
