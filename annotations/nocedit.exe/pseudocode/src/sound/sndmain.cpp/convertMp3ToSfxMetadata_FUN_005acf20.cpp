// Name: sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20
// Address: 005acf20
// Address Range: [[005acf20, 005ad3a1]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20(char * mp3_filename)
// Cross-references:
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd8c7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_0064f583
//   TerminatedCString s_sound_sndmain_cpp_006510af
//   TerminatedCString s_Can_t_open_s_006510c4
//   TerminatedCString s_sound_sndmain_cpp_006510d2
//   TerminatedCString s_rb_006510e7
//   TerminatedCString s_sound_sndmain_cpp_006510ea
//   TerminatedCString s_Can_t_open_s_006510ff
//   TerminatedCString s_sound_sndmain_cpp_0065110d
//   TerminatedCString s_sound_sndmain_cpp_00651122
//   TerminatedCString s_Out_of_memory_00651137
//   TerminatedCString s_sound_sndmain_cpp_00651146
//   TerminatedCString s_sfx_0065115b
//   TerminatedCString s_sound_sndmain_cpp_0065115f
//   TerminatedCString s_rt_00651174
//   TerminatedCString s_length_00651177
//   TerminatedCString s_sound_sndmain_cpp_0065117e
//   TerminatedCString s_Multiple_length_statemen_00651193
//   TerminatedCString s_sound_sndmain_cpp_006511bc
//   TerminatedCString s_length_d_006511d1
//   TerminatedCString s_sound_sndmain_cpp_006511dd
//   TerminatedCString s_wt_006511f2
//   TerminatedCString s_sound_sndmain_cpp_006511f5
//   TerminatedCString s_Can_t_create_s_0065120a
//   TerminatedCString s_s_0065121a
//   TerminatedCString s_sound_sndmain_cpp_0065121e
//   char* g_CurrentDebugFilename = 0067d200
//   char[256] g_CharacterClassificationTable
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_file.c_makepath_FUN_005febfc
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_splitpath_FUN_005ff178
//   crt_string.c_strnicmp_FUN_005ff070
//   crt_string.c_strstr_FUN_005fedd0
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
//   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
//   sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(char *mp3_filename)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  CMP3Decoder *pCVar4;
  int iVar5;
  CStrList_vtable *pCVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  byte bVar11;
  char **in_stack_00000018;
  CStrList_vtable *pCStack0000001c;
  FILE *in_stack_00000020;
  uint in_stack_fffff7f0;
  char acStack_428 [292];
  char acStack_304 [4];
  char acStack_300 [16];
  char acStack_2f0 [236];
  char acStack_204 [4];
  char acStack_200 [252];
  char acStack_104 [4];
  char acStack_100 [240];
  
  bVar11 = 0;
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880((char *)0x0,mp3_filename);
  if (iVar2 < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x176c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",mp3_filename);
  }
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (mp3_filename,(char *)0x0,"rb","..\\sound\\sndmain.cpp",0x176e);
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 5999;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",mp3_filename);
  }
  pCVar4 = (CMP3Decoder *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\sndmain.cpp",0x1773);
  if (pCVar4 != (CMP3Decoder *)0x0) {
    pCVar4 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar4);
  }
  if (pCVar4 == (CMP3Decoder *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1774;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630(pCVar4,pFVar3,iVar2);
  iVar2 = (int)(0x200 / (ulonglong)(uint)pCVar4->num_channels);
  do {
    iVar5 = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60(pCVar4,(short *)&stack0xfffff7c0,iVar2);
  } while (iVar5 == iVar2);
  g_CurrentDebugFilename = "..\\sound\\sndmain.cpp";
  g_CurrentDebugLine = 0x1784;
  pCVar4 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(pCVar4);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar4);
  crt_string_c_splitpath_FUN_005ff178
            (mp3_filename,&stack0x00000014,acStack_104,acStack_204,(char *)0x0);
  crt_file_c_makepath_FUN_005febfc
            (acStack_304,(char *)&stack0x00000018,acStack_100,acStack_200,"sfx");
  pCVar6 = (CStrList_vtable *)
           shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_300,(char *)0x0,"rt","..\\sound\\sndmain.cpp",0x1791);
  iVar2 = -1;
  pCStack0000001c = pCVar6;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0x00000008);
  if (pCVar6 != (CStrList_vtable *)0x0) {
    while (pcVar7 = crt_stdio_c_fgets_FUN_005fefd0(acStack_428 + 4,300,in_stack_00000020),
          pcVar7 != (char *)0x0) {
      pcVar7 = acStack_428;
      do {
        pcVar10 = pcVar7;
        if (*pcVar7 == '\n') goto LAB_005ad262;
        if (*pcVar7 == '\0') break;
        pcVar10 = pcVar7 + 1;
        if (*pcVar10 == '\n') goto LAB_005ad262;
        pcVar7 = pcVar7 + 2;
      } while (*pcVar10 != '\0');
      pcVar10 = (char *)0x0;
LAB_005ad262:
      if (pcVar10 != (char *)0x0) {
        pcVar7 = acStack_428;
        do {
          pcVar10 = pcVar7;
          if (*pcVar7 == '\n') goto LAB_005ad285;
          if (*pcVar7 == '\0') break;
          pcVar10 = pcVar7 + 1;
          if (*pcVar10 == '\n') goto LAB_005ad285;
          pcVar7 = pcVar7 + 2;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
LAB_005ad285:
        *pcVar10 = '\0';
      }
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0x00000008,acStack_428);
      pcVar7 = acStack_428 + 4;
      pcVar8 = crt_string_c_strstr_FUN_005fedd0(pcVar7,"//");
      pcVar10 = pcVar7;
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      do {
        pcVar8 = pcVar10;
        if (*pcVar10 == '\0') goto joined_r0x005ad2dc;
        if (*pcVar10 == '\0') break;
        pcVar8 = pcVar10 + 1;
        if (*pcVar8 == '\0') goto joined_r0x005ad2dc;
        pcVar10 = pcVar10 + 2;
      } while (*pcVar8 != '\0');
      pcVar8 = (char *)0x0;
joined_r0x005ad2dc:
      while ((pcVar7 < pcVar8 &&
             ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U) != 0))) {
        pcVar8 = pcVar8 + -1;
      }
      *pcVar8 = '\0';
      while ((g_CharacterClassificationTable[(byte)(acStack_428[4] + 1)] & 2U) != 0) {
        uVar9 = 0xffffffff;
        pcVar10 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
        } while (cVar1 != '\0');
        crt_string_c_memmove_FUN_005fe5e0(pcVar7,acStack_428 + 5,~uVar9 - 1);
      }
      iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_428 + 8,"length",5);
      if (iVar5 == 0) {
        if (-1 < iVar2) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x179d;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Multiple 'length' statements found in %s");
        }
        iVar2 = (int)in_stack_00000018 + -1;
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)pCStack0000001c,"..\\sound\\sndmain.cpp",0x17a2);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_428 + 4,"length = %d");
  if (iVar2 < 0) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0x00000010,acStack_428 + 8);
  }
  else {
    shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
              ((CStrList *)&stack0x00000010,iVar2,acStack_428 + 8);
  }
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_2f0,(char *)0x0,"wt","..\\sound\\sndmain.cpp",0x17ac);
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x17ad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s");
  }
  iVar2 = 0;
  if (0 < (int)pCStack0000001c) {
    do {
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0x0000001c,iVar2);
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar3,"%s\n");
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)pCStack0000001c);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\sound\\sndmain.cpp",0x17b1);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0x00000020,0,in_stack_fffff7f0);
  return;
}


// Assembly code:
// 005acf20: PUSH EBX
//   Label: sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20
// 005acf21: PUSH ESI
// 005acf22: PUSH EDI
// 005acf23: PUSH EBP
// 005acf24: SUB ESP,0x84c
// 005acf2a: MOV EBP,dword ptr [ESP + 0x860]
//   XREF to: Stack[0x4] (READ)
// 005acf31: PUSH EBP
// 005acf32: PUSH 0x0
// 005acf34: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005acf39: ADD ESP,0x8
// 005acf3c: MOV EDI,EAX
// 005acf3e: TEST EAX,EAX
// 005acf40: JLE 0x005ad1f0
//   XREF to: 005ad1f0 (CONDITIONAL_JUMP)
// 005acf46: PUSH 0x176e
//   Label: LAB_005acf46
// 005acf4b: PUSH 0x6510d2
//   XREF to: 006510d2 (DATA)
// 005acf50: PUSH 0x6510e7
//   XREF to: 006510e7 (DATA)
// 005acf55: PUSH 0x0
// 005acf57: PUSH EBP
// 005acf58: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005acf5d: ADD ESP,0x14
// 005acf60: MOV EBX,EAX
// 005acf62: TEST EAX,EAX
// 005acf64: JNZ 0x005acf89
//   XREF to: 005acf89 (CONDITIONAL_JUMP)
// 005acf66: PUSH EBP
// 005acf67: MOV ESI,0x6510ea
//   XREF to: 006510ea (DATA)
// 005acf6c: MOV EAX,0x176f
// 005acf71: PUSH 0x6510ff
//   XREF to: 006510ff (DATA)
// 005acf76: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005acf7c: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005acf81: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005acf86: ADD ESP,0x8
// 005acf89: PUSH 0x1773
//   Label: LAB_005acf89
// 005acf8e: PUSH 0x65110d
//   XREF to: 0065110d (DATA)
// 005acf93: PUSH 0x8630
// 005acf98: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005acf9d: ADD ESP,0xc
// 005acfa0: TEST EAX,EAX
// 005acfa2: JZ 0x005acfad
//   XREF to: 005acfad (CONDITIONAL_JUMP)
// 005acfa4: PUSH EAX
// 005acfa5: CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   XREF to: 005344f0 (UNCONDITIONAL_CALL)
// 005acfaa: ADD ESP,0x4
// 005acfad: MOV ESI,EAX
//   Label: LAB_005acfad
// 005acfaf: TEST EAX,EAX
// 005acfb1: JZ 0x005ad219
//   XREF to: 005ad219 (CONDITIONAL_JUMP)
// 005acfb7: PUSH EDI
//   Label: LAB_005acfb7
// 005acfb8: PUSH EBX
// 005acfb9: PUSH ESI
// 005acfba: CALL sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
//   XREF to: 00534630 (UNCONDITIONAL_CALL)
// 005acfbf: MOV EAX,0x200
// 005acfc4: MOV ECX,dword ptr [ESI + 0x104]
// 005acfca: XOR EDX,EDX
// 005acfcc: DIV ECX
// 005acfce: XOR EBX,EBX
// 005acfd0: ADD ESP,0xc
// 005acfd3: MOV dword ptr [ESP + 0x840],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005acfda: MOV EBX,EAX
// 005acfdc: PUSH EBX
//   Label: LAB_005acfdc
// 005acfdd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x85c] (DATA)
// 005acfe1: PUSH EAX
// 005acfe2: PUSH ESI
// 005acfe3: CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
//   XREF to: 00534a60 (UNCONDITIONAL_CALL)
// 005acfe8: ADD ESP,0xc
// 005acfeb: ADD dword ptr [ESP + 0x840],EAX
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 005acff2: CMP EAX,EBX
// 005acff4: JZ 0x005acfdc
//   XREF to: 005acfdc (CONDITIONAL_JUMP)
// 005acff6: PUSH 0x0
// 005acff8: MOV EAX,0x651146
//   XREF to: 00651146 (PARAM)
// 005acffd: MOV EDX,0x1784
// 005ad002: PUSH ESI
// 005ad003: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 005ad008: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 005ad00e: CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
//   XREF to: 00534530 (UNCONDITIONAL_CALL)
// 005ad013: ADD ESP,0x8
// 005ad016: PUSH EAX
// 005ad017: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005ad01c: ADD ESP,0x4
// 005ad01f: PUSH 0x0
// 005ad021: LEA EAX,[ESP + 0x634]
//   XREF to: Stack[-0x22c] (DATA)
// 005ad028: PUSH EAX
// 005ad029: LEA EAX,[ESP + 0x738]
//   XREF to: Stack[-0x12c] (DATA)
// 005ad030: PUSH EAX
// 005ad031: LEA EAX,[ESP + 0x854]
//   XREF to: Stack[-0x14] (DATA)
// 005ad038: PUSH EAX
// 005ad039: PUSH EBP
// 005ad03a: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 005ad03f: ADD ESP,0x14
// 005ad042: PUSH 0x65115b
//   XREF to: 0065115b (DATA)
// 005ad047: LEA EAX,[ESP + 0x634]
//   XREF to: Stack[-0x22c] (DATA)
// 005ad04e: PUSH EAX
// 005ad04f: LEA EAX,[ESP + 0x738]
//   XREF to: Stack[-0x12c] (DATA)
// 005ad056: PUSH EAX
// 005ad057: LEA EAX,[ESP + 0x854]
//   XREF to: Stack[-0x14] (DATA)
// 005ad05e: PUSH EAX
// 005ad05f: LEA EAX,[ESP + 0x53c]
//   XREF to: Stack[-0x330] (DATA)
// 005ad066: PUSH EAX
// 005ad067: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 005ad06c: ADD ESP,0x14
// 005ad06f: PUSH 0x1791
// 005ad074: PUSH 0x65115f
//   XREF to: 0065115f (DATA)
// 005ad079: PUSH 0x651174
//   XREF to: 00651174 (DATA)
// 005ad07e: PUSH 0x0
// 005ad080: LEA EAX,[ESP + 0x53c]
//   XREF to: Stack[-0x330] (DATA)
// 005ad087: PUSH EAX
// 005ad088: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005ad08d: ADD ESP,0x14
// 005ad090: MOV EBX,EAX
// 005ad092: MOV dword ptr [ESP + 0x844],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ad099: LEA EAX,[ESP + 0x830]
//   XREF to: Stack[-0x2c] (DATA)
// 005ad0a0: PUSH EAX
// 005ad0a1: MOV EBP,0xffffffff
// 005ad0a6: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 005ad0ab: ADD ESP,0x4
// 005ad0ae: TEST EBX,EBX
// 005ad0b0: JZ 0x005ad0f1
//   XREF to: 005ad0f1 (CONDITIONAL_JUMP)
// 005ad0b2: MOV ECX,dword ptr [ESP + 0x844]
//   Label: LAB_005ad0b2
//   XREF to: Stack[-0x18] (READ)
// 005ad0b9: PUSH ECX
// 005ad0ba: PUSH 0x12c
// 005ad0bf: LEA EAX,[ESP + 0x408]
//   XREF to: Stack[-0x45c] (DATA)
// 005ad0c6: PUSH EAX
// 005ad0c7: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005ad0cc: ADD ESP,0xc
// 005ad0cf: TEST EAX,EAX
// 005ad0d1: JNZ 0x005ad241
//   XREF to: 005ad241 (CONDITIONAL_JUMP)
// 005ad0d7: PUSH 0x17a2
// 005ad0dc: PUSH 0x6511bc
//   XREF to: 006511bc (DATA)
// 005ad0e1: MOV EBX,dword ptr [ESP + 0x84c]
//   XREF to: Stack[-0x18] (READ)
// 005ad0e8: PUSH EBX
// 005ad0e9: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005ad0ee: ADD ESP,0xc
// 005ad0f1: MOV EAX,dword ptr [ESP + 0x840]
//   Label: LAB_005ad0f1
//   XREF to: Stack[-0x1c] (READ)
// 005ad0f8: PUSH EAX
// 005ad0f9: PUSH 0x6511d1
//   XREF to: 006511d1 (DATA)
// 005ad0fe: LEA EAX,[ESP + 0x408]
//   XREF to: Stack[-0x45c] (DATA)
// 005ad105: PUSH EAX
// 005ad106: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ad10b: ADD ESP,0xc
// 005ad10e: TEST EBP,EBP
// 005ad110: JL 0x005ad385
//   XREF to: 005ad385 (CONDITIONAL_JUMP)
// 005ad116: LEA EAX,[ESP + 0x400]
//   XREF to: Stack[-0x45c] (DATA)
// 005ad11d: PUSH EAX
// 005ad11e: PUSH EBP
// 005ad11f: LEA EAX,[ESP + 0x838]
//   XREF to: Stack[-0x2c] (DATA)
// 005ad126: PUSH EAX
// 005ad127: CALL shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
//   XREF to: 004a3120 (UNCONDITIONAL_CALL)
// 005ad12c: ADD ESP,0xc
// 005ad12f: PUSH 0x17ac
//   Label: LAB_005ad12f
// 005ad134: PUSH 0x6511dd
//   XREF to: 006511dd (DATA)
// 005ad139: PUSH 0x6511f2
//   XREF to: 006511f2 (DATA)
// 005ad13e: PUSH 0x0
// 005ad140: LEA EAX,[ESP + 0x53c]
//   XREF to: Stack[-0x330] (DATA)
// 005ad147: PUSH EAX
// 005ad148: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005ad14d: ADD ESP,0x14
// 005ad150: MOV ESI,EAX
// 005ad152: TEST EAX,EAX
// 005ad154: JNZ 0x005ad181
//   XREF to: 005ad181 (CONDITIONAL_JUMP)
// 005ad156: LEA EAX,[ESP + 0x52c]
//   XREF to: Stack[-0x330] (DATA)
// 005ad15d: PUSH EAX
// 005ad15e: MOV EDX,0x6511f5
//   XREF to: 006511f5 (PARAM)
// 005ad163: MOV ECX,0x17ad
// 005ad168: PUSH 0x65120a
//   XREF to: 0065120a (DATA)
// 005ad16d: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005ad173: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005ad179: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ad17e: ADD ESP,0x8
// 005ad181: MOV EDI,dword ptr [ESP + 0x830]
//   Label: LAB_005ad181
//   XREF to: Stack[-0x2c] (READ)
// 005ad188: XOR EBX,EBX
// 005ad18a: TEST EDI,EDI
// 005ad18c: JLE 0x005ad1c0
//   XREF to: 005ad1c0 (CONDITIONAL_JUMP)
// 005ad18e: PUSH EBX
//   Label: LAB_005ad18e
// 005ad18f: LEA EAX,[ESP + 0x834]
//   XREF to: Stack[-0x2c] (DATA)
// 005ad196: PUSH EAX
// 005ad197: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005ad19c: ADD ESP,0x8
// 005ad19f: PUSH EAX
// 005ad1a0: PUSH 0x65121a
//   XREF to: 0065121a (DATA)
// 005ad1a5: PUSH ESI
// 005ad1a6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005ad1ab: ADD ESP,0xc
// 005ad1ae: INC EBX
// 005ad1af: CMP EBX,dword ptr [ESP + 0x830]
//   XREF to: Stack[-0x2c] (READ)
// 005ad1b6: JL 0x005ad18e
//   XREF to: 005ad18e (CONDITIONAL_JUMP)
// 005ad1b8: LEA EAX,[EAX]
// 005ad1be: MOV EDX,EDX
//   XREF to: 006511f5 (PARAM)
// 005ad1c0: PUSH 0x17b1
//   Label: LAB_005ad1c0
// 005ad1c5: PUSH 0x65121e
//   XREF to: 0065121e (DATA)
// 005ad1ca: PUSH ESI
// 005ad1cb: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005ad1d0: ADD ESP,0xc
// 005ad1d3: PUSH 0x0
// 005ad1d5: LEA EAX,[ESP + 0x834]
//   XREF to: Stack[-0x2c] (DATA)
// 005ad1dc: PUSH EAX
// 005ad1dd: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 005ad1e2: ADD ESP,0x8
// 005ad1e5: ADD ESP,0x84c
// 005ad1eb: POP EBP
// 005ad1ec: POP EDI
// 005ad1ed: POP ESI
// 005ad1ee: POP EBX
// 005ad1ef: RET
// 005ad1f0: PUSH EBP
//   Label: LAB_005ad1f0
// 005ad1f1: MOV EDX,0x6510af
//   XREF to: 006510af (PARAM)
// 005ad1f6: MOV ECX,0x176c
// 005ad1fb: PUSH 0x6510c4
//   XREF to: 006510c4 (DATA)
// 005ad200: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005ad206: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005ad20c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ad211: ADD ESP,0x8
// 005ad214: JMP 0x005acf46
//   XREF to: 005acf46 (UNCONDITIONAL_JUMP)
// 005ad219: MOV EDX,0x651122
//   Label: LAB_005ad219
//   XREF to: 00651122 (PARAM)
// 005ad21e: MOV ECX,0x1774
// 005ad223: PUSH 0x651137
//   XREF to: 00651137 (DATA)
// 005ad228: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005ad22e: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005ad234: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ad239: ADD ESP,0x4
// 005ad23c: JMP 0x005acfb7
//   XREF to: 005acfb7 (UNCONDITIONAL_JUMP)
// 005ad241: MOV DL,0xa
//   Label: LAB_005ad241
// 005ad243: LEA ESI,[ESP + 0x400]
//   XREF to: Stack[-0x45c] (DATA)
// 005ad24a: MOV AL,byte ptr [ESI]
//   Label: LAB_005ad24a
//   XREF to: Stack[-0x45c] (DATA)
// 005ad24c: CMP AL,DL
// 005ad24e: JZ 0x005ad262
//   XREF to: 005ad262 (CONDITIONAL_JUMP)
// 005ad250: CMP AL,0x0
// 005ad252: JZ 0x005ad260
//   XREF to: 005ad260 (CONDITIONAL_JUMP)
// 005ad254: INC ESI
// 005ad255: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x45b] (DATA)
// 005ad257: CMP AL,DL
// 005ad259: JZ 0x005ad262
//   XREF to: 005ad262 (CONDITIONAL_JUMP)
// 005ad25b: INC ESI
// 005ad25c: CMP AL,0x0
// 005ad25e: JNZ 0x005ad24a
//   XREF to: 005ad24a (CONDITIONAL_JUMP)
// 005ad260: SUB ESI,ESI
//   Label: LAB_005ad260
// 005ad262: TEST ESI,ESI
//   Label: LAB_005ad262
// 005ad264: JZ 0x005ad288
//   XREF to: 005ad288 (CONDITIONAL_JUMP)
// 005ad266: LEA ESI,[ESP + 0x400]
//   XREF to: Stack[-0x45c] (DATA)
// 005ad26d: MOV AL,byte ptr [ESI]
//   Label: LAB_005ad26d
//   XREF to: Stack[-0x45c] (DATA)
// 005ad26f: CMP AL,DL
// 005ad271: JZ 0x005ad285
//   XREF to: 005ad285 (CONDITIONAL_JUMP)
// 005ad273: CMP AL,0x0
// 005ad275: JZ 0x005ad283
//   XREF to: 005ad283 (CONDITIONAL_JUMP)
// 005ad277: INC ESI
// 005ad278: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x45b] (DATA)
// 005ad27a: CMP AL,DL
// 005ad27c: JZ 0x005ad285
//   XREF to: 005ad285 (CONDITIONAL_JUMP)
// 005ad27e: INC ESI
// 005ad27f: CMP AL,0x0
// 005ad281: JNZ 0x005ad26d
//   XREF to: 005ad26d (CONDITIONAL_JUMP)
// 005ad283: SUB ESI,ESI
//   Label: LAB_005ad283
// 005ad285: MOV byte ptr [ESI],0x0
//   Label: LAB_005ad285
//   XREF to: Stack[-0x45b] (DATA)
// 005ad288: LEA EAX,[ESP + 0x400]
//   Label: LAB_005ad288
//   XREF to: Stack[-0x45c] (DATA)
// 005ad28f: PUSH EAX
// 005ad290: LEA EAX,[ESP + 0x834]
//   XREF to: Stack[-0x2c] (DATA)
// 005ad297: PUSH EAX
// 005ad298: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005ad29d: ADD ESP,0x8
// 005ad2a0: PUSH 0x64f583
//   XREF to: 0064f583 (DATA)
// 005ad2a5: LEA EBX,[ESP + 0x404]
//   XREF to: Stack[-0x45c] (DATA)
// 005ad2ac: PUSH EBX
// 005ad2ad: CALL crt_string.c_strstr_FUN_005fedd0
//   XREF to: 005fedd0 (UNCONDITIONAL_CALL)
// 005ad2b2: ADD ESP,0x8
// 005ad2b5: TEST EAX,EAX
// 005ad2b7: JZ 0x005ad2bc
//   XREF to: 005ad2bc (CONDITIONAL_JUMP)
// 005ad2b9: MOV byte ptr [EAX],0x0
// 005ad2bc: MOV ESI,EBX
//   Label: LAB_005ad2bc
// 005ad2be: XOR DL,DL
// 005ad2c0: MOV AL,byte ptr [ESI]
//   Label: LAB_005ad2c0
//   XREF to: Stack[-0x45c] (DATA)
// 005ad2c2: CMP AL,DL
// 005ad2c4: JZ 0x005ad2d8
//   XREF to: 005ad2d8 (CONDITIONAL_JUMP)
// 005ad2c6: CMP AL,0x0
// 005ad2c8: JZ 0x005ad2d6
//   XREF to: 005ad2d6 (CONDITIONAL_JUMP)
// 005ad2ca: INC ESI
// 005ad2cb: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x45b] (DATA)
// 005ad2cd: CMP AL,DL
// 005ad2cf: JZ 0x005ad2d8
//   XREF to: 005ad2d8 (CONDITIONAL_JUMP)
// 005ad2d1: INC ESI
// 005ad2d2: CMP AL,0x0
// 005ad2d4: JNZ 0x005ad2c0
//   XREF to: 005ad2c0 (CONDITIONAL_JUMP)
// 005ad2d6: SUB ESI,ESI
//   Label: LAB_005ad2d6
// 005ad2d8: MOV EAX,ESI
//   Label: LAB_005ad2d8
// 005ad2da: CMP ESI,EBX
// 005ad2dc: JBE 0x005ad2f2
//   XREF to: 005ad2f2 (CONDITIONAL_JUMP)
// 005ad2de: MOV CL,byte ptr [EAX + -0x1]
//   Label: LAB_005ad2de
//   XREF to: Stack[-0x45a] (READ)
// 005ad2e1: INC CL
// 005ad2e3: AND ECX,0xff
// 005ad2e9: TEST byte ptr [ECX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005ad2f0: JNZ 0x005ad323
//   XREF to: 005ad323 (CONDITIONAL_JUMP)
// 005ad2f2: LEA ESI,[EBX + 0x1]
//   Label: LAB_005ad2f2
//   XREF to: Stack[-0x45b] (DATA)
// 005ad2f5: MOV byte ptr [EAX],0x0
//   XREF to: Stack[-0x459] (DATA)
// 005ad2f8: MOV AL,byte ptr [EBX]
//   Label: LAB_005ad2f8
//   XREF to: Stack[-0x45c] (DATA)
// 005ad2fa: INC AL
// 005ad2fc: AND EAX,0xff
// 005ad301: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005ad308: JZ 0x005ad32a
//   XREF to: 005ad32a (CONDITIONAL_JUMP)
// 005ad30a: MOV EDI,EBX
// 005ad30c: SUB ECX,ECX
// 005ad30e: DEC ECX
// 005ad30f: XOR EAX,EAX
// 005ad311: SCASB.REPNE ES:EDI
// 005ad313: NOT ECX
// 005ad315: DEC ECX
// 005ad316: PUSH ECX
// 005ad317: PUSH ESI
// 005ad318: PUSH EBX
// 005ad319: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005ad31e: ADD ESP,0xc
// 005ad321: JMP 0x005ad2f8
//   XREF to: 005ad2f8 (UNCONDITIONAL_JUMP)
// 005ad323: DEC EAX
//   Label: LAB_005ad323
// 005ad324: CMP EAX,EBX
// 005ad326: JA 0x005ad2de
//   XREF to: 005ad2de (CONDITIONAL_JUMP)
// 005ad328: JMP 0x005ad2f2
//   XREF to: 005ad2f2 (UNCONDITIONAL_JUMP)
// 005ad32a: PUSH 0x5
//   Label: LAB_005ad32a
// 005ad32c: PUSH 0x651177
//   XREF to: 00651177 (DATA)
// 005ad331: LEA EAX,[ESP + 0x408]
//   XREF to: Stack[-0x45c] (DATA)
// 005ad338: PUSH EAX
// 005ad339: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005ad33e: ADD ESP,0xc
// 005ad341: TEST EAX,EAX
// 005ad343: JNZ 0x005ad0b2
//   XREF to: 005ad0b2 (CONDITIONAL_JUMP)
// 005ad349: TEST EBP,EBP
// 005ad34b: JL 0x005ad378
//   XREF to: 005ad378 (CONDITIONAL_JUMP)
// 005ad34d: LEA EAX,[ESP + 0x52c]
//   XREF to: Stack[-0x330] (DATA)
// 005ad354: PUSH EAX
// 005ad355: MOV ESI,0x65117e
//   XREF to: 0065117e (DATA)
// 005ad35a: MOV EDI,0x179d
// 005ad35f: PUSH 0x651193
//   XREF to: 00651193 (DATA)
// 005ad364: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005ad36a: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005ad370: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ad375: ADD ESP,0x8
// 005ad378: MOV EBP,dword ptr [ESP + 0x830]
//   Label: LAB_005ad378
//   XREF to: Stack[-0x2c] (READ)
// 005ad37f: DEC EBP
// 005ad380: JMP 0x005ad0b2
//   XREF to: 005ad0b2 (UNCONDITIONAL_JUMP)
// 005ad385: LEA EAX,[ESP + 0x400]
//   Label: LAB_005ad385
//   XREF to: Stack[-0x45c] (DATA)
// 005ad38c: PUSH EAX
// 005ad38d: LEA EAX,[ESP + 0x834]
//   XREF to: Stack[-0x2c] (DATA)
// 005ad394: PUSH EAX
// 005ad395: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005ad39a: ADD ESP,0x8
// 005ad39d: JMP 0x005ad12f
//   XREF to: 005ad12f (UNCONDITIONAL_JUMP)
