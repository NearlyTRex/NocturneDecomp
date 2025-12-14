// Name: sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20
// Address: 005acf20
// Address Range: [[005acf20, 005ad3a1]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20(char * mp3_filename)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(char *mp3_filename)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  CMP3Decoder *this_ptr;
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
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\sndmain.cpp",0x1773);
  pCVar4 = (CMP3Decoder *)0x0;
  if (this_ptr != (CMP3Decoder *)0x0) {
    pCVar4 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(this_ptr);
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
