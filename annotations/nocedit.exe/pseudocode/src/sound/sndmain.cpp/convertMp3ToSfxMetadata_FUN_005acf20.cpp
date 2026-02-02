// Name: sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20
// Address: 005acf20
// Address Range: [[005acf20, 005ad3a1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(char *mp3_filename)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(char *mp3_filename)

{
  char cVar1;
  int iVar2;
  _FILE *p_Var3;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  uint in_stack_fffff7a4;
  char local_45c [300];
  char local_330 [260];
  char local_22c [256];
  char local_12c [256];
  CStrList local_2c;
  int local_1c;
  _FILE *local_18;
  char local_14 [4];
  
  bVar9 = 0;
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880((char *)0x0,mp3_filename);
  if (iVar2 < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x176c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",mp3_filename);
  }
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (mp3_filename,(char *)0x0,"rb","..\\sound\\sndmain.cpp",0x176e);
  if (p_Var3 == (_FILE *)0x0) {
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
  sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630(pCVar4,p_Var3,iVar2);
  iVar2 = (int)(0x200 / (ulonglong)(uint)pCVar4->num_channels);
  local_1c = 0;
  do {
    iVar5 = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60(pCVar4,(short *)&stack0xfffff7a4,iVar2);
    local_1c = local_1c + iVar5;
  } while (iVar5 == iVar2);
  g_CurrentDebugFilename = "..\\sound\\sndmain.cpp";
  g_CurrentDebugLine = 0x1784;
  pCVar4 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(pCVar4);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar4);
  splitpath(mp3_filename,local_14,local_12c,local_22c,(char *)0x0);
  makepath(local_330,local_14,local_12c,local_22c,"sfx");
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_330,(char *)0x0,"rt","..\\sound\\sndmain.cpp",0x1791);
  iVar2 = -1;
  local_18 = p_Var3;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_2c);
  if (p_Var3 != (_FILE *)0x0) {
    while (pcVar6 = _fgets(local_45c,300,local_18), pcVar6 != (char *)0x0) {
      pcVar6 = local_45c;
      do {
        pcVar8 = pcVar6;
        if (*pcVar6 == '\n') goto LAB_005ad262;
        if (*pcVar6 == '\0') break;
        pcVar8 = pcVar6 + 1;
        if (*pcVar8 == '\n') goto LAB_005ad262;
        pcVar6 = pcVar6 + 2;
      } while (*pcVar8 != '\0');
      pcVar8 = (char *)0x0;
LAB_005ad262:
      if (pcVar8 != (char *)0x0) {
        pcVar6 = local_45c;
        do {
          pcVar8 = pcVar6;
          if (*pcVar6 == '\n') goto LAB_005ad285;
          if (*pcVar6 == '\0') break;
          pcVar8 = pcVar6 + 1;
          if (*pcVar8 == '\n') goto LAB_005ad285;
          pcVar6 = pcVar6 + 2;
        } while (*pcVar8 != '\0');
        pcVar8 = (char *)0x0;
LAB_005ad285:
        *pcVar8 = '\0';
      }
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2c,local_45c);
      pcVar8 = strstr(local_45c,"//");
      pcVar6 = local_45c;
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      do {
        pcVar8 = pcVar6;
        if (*pcVar6 == '\0') goto joined_r0x005ad2dc;
        if (*pcVar6 == '\0') break;
        pcVar8 = pcVar6 + 1;
        if (*pcVar8 == '\0') goto joined_r0x005ad2dc;
        pcVar6 = pcVar6 + 2;
      } while (*pcVar8 != '\0');
      pcVar8 = (char *)0x0;
joined_r0x005ad2dc:
      while ((local_45c < pcVar8 &&
             ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2) != 0))) {
        pcVar8 = pcVar8 + -1;
      }
      *pcVar8 = '\0';
      while ((g_CharacterClassificationTable[(byte)(local_45c[0] + 1)] & 2) != 0) {
        uVar7 = 0xffffffff;
        pcVar6 = local_45c;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(local_45c,local_45c + 1,~uVar7 - 1);
      }
      iVar5 = strnicmp(local_45c,"length",5);
      if (iVar5 == 0) {
        if (-1 < iVar2) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x179d;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Multiple 'length' statements found in %s",local_330);
        }
        iVar2 = local_2c.item_count + -1;
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\sound\\sndmain.cpp",0x17a2);
  }
  sprintf(local_45c,"length = %d",local_1c);
  if (iVar2 < 0) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2c,local_45c);
  }
  else {
    shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(&local_2c,iVar2,local_45c);
  }
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_330,(char *)0x0,"wt","..\\sound\\sndmain.cpp",0x17ac);
  if (p_Var3 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x17ad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",local_330);
  }
  iVar2 = 0;
  if (0 < local_2c.item_count) {
    do {
      pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_2c,iVar2);
      _fprintf(p_Var3,"%s\n",pcVar6);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_2c.item_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\sound\\sndmain.cpp",0x17b1);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_2c,0,in_stack_fffff7a4);
  return;
}
