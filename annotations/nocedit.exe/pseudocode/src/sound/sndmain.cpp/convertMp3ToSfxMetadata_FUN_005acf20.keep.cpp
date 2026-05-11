// Name: sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20
// Address: 005acf20
// MANUAL RECONSTRUCTION
// Address Range: [[005acf20, 005ad3a1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(char *mp3_filename)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(char *mp3_filename)

{
  int iVar2;
  _FILE *p_Var3;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar4;
  int iVar1;
  int iVar5;
  CMP3Decoder *ptr;
  _FILE *p_Var2;
  char *pcVar6;
  char *pcVar3;
  int iVar4;
  char *pcVar8;
  char *pcVar5;
  short local_85c [512];
  char local_45c [300];
  char local_330 [260];
  char local_22c [256];
  char local_12c [256];
  CStrList local_2c;
  int local_1c;
  char local_14 [4];

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
  this_ptr = (CMP3Decoder *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                       (0x8630,"..\\sound\\sndmain.cpp",0x1773);
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
  iVar1 = (int)(0x200 / (ulonglong)(uint)pCVar4->num_channels);
  local_1c = 0;
  do {
    iVar5 = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60(pCVar4,local_85c,iVar1);
    local_1c = local_1c + iVar5;
  } while (iVar5 == iVar1);
  g_CurrentDebugFilename = "..\\sound\\sndmain.cpp";
  g_CurrentDebugLine = 0x1784;
  ptr = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(pCVar4,0);
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  splitpath(mp3_filename,local_14,local_12c,local_22c,(char *)0x0);
  makepath(local_330,local_14,local_12c,local_22c,"sfx");
  p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_330,(char *)0x0,"rt","..\\sound\\sndmain.cpp",0x1791);
  iVar1 = -1;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_2c);
  if (p_Var2 != (_FILE *)0x0) {
    while (pcVar6 = _fgets(local_45c,300,p_Var2), pcVar6 != (char *)0x0) {
      pcVar8 = strchr(local_45c,'\n');
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2c,local_45c);
      pcVar5 = strstr(local_45c,"//");
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      pcVar5 = local_45c + strlen(local_45c);
      while ((local_45c < pcVar5 &&
             ((g_CharacterClassificationTable[(byte)(pcVar5[-1] + 1)] & 2) != 0))) {
        pcVar5 = pcVar5 + -1;
      }
      *pcVar5 = '\0';
      while ((g_CharacterClassificationTable[(byte)(local_45c[0] + 1)] & 2) != 0) {
        memmove(local_45c,local_45c + 1,strlen(local_45c));
      }
      iVar4 = _strnicmp(local_45c,"length",5);
      if (iVar4 == 0) {
        if (-1 < iVar1) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x179d;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Multiple 'length' statements found in %s",local_330);
        }
        iVar1 = local_2c.item_count + -1;
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\sound\\sndmain.cpp",0x17a2);
  }
  _sprintf(local_45c,"length = %d",local_1c);
  if (iVar1 < 0) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2c,local_45c);
  }
  else {
    shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(&local_2c,iVar1,local_45c);
  }
  p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_330,(char *)0x0,"wt","..\\sound\\sndmain.cpp",0x17ac);
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x17ad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",local_330);
  }
  iVar1 = 0;
  if (0 < local_2c.item_count) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_2c,iVar1);
      _fprintf(p_Var2,"%s\n",pcVar3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_2c.item_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\sound\\sndmain.cpp",0x17b1);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_2c,0);
  return;
}
