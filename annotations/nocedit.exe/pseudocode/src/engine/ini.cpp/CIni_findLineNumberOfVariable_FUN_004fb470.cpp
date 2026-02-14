// Name: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
// Address: 004fb470
// Address Range: [[004fb470, 004fb653]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470(CIni *this_ptr,char *section,char *key,char *value,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470(CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  byte bVar1;
  bool bVar2;
  _FILE *stream;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char local_214 [256];
  char local_114 [256];
  char *local_14;
  
  iVar6 = 0;
  bVar2 = false;
  this_ptr->initialized = 1;
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (value,(char *)0x0,"rt","..\\engine\\ini.cpp",0xf4);
  if (stream == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0xf5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::FindLineNumberOfVariable: Unable to open input");
  }
  _sprintf(local_114,"[%s]\n",section);
  while (((stream->_flag & 0x10) == 0 &&
         (pcVar5 = _fgets(local_214,0xff,stream), pcVar5 != (char *)0x0))) {
    iVar4 = strcmp(local_214,local_114);
    if (iVar4 == 0) {
      bVar1 = (byte)stream->_flag;
      bVar2 = false;
      goto LAB_004fb4f0;
    }
    iVar6 = iVar6 + 1;
  }
LAB_004fb5ab:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",0x154);
  if (bVar2) {
    return iVar6;
  }
  return 0;
LAB_004fb4f0:
  if (((bVar1 & 0x10) != 0) ||
     (pcVar3 = _fgets(local_214,0xff,stream), pcVar5 = local_214,
     pcVar3 == (char *)0x0)) goto LAB_004fb5ab;
  do {
    pcVar3 = pcVar5;
    if (*pcVar5 == '\n') goto LAB_004fb52d;
    if (*pcVar5 == '\0') break;
    pcVar3 = pcVar5 + 1;
    if (*pcVar3 == '\n') goto LAB_004fb52d;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004fb52d:
  pcVar5 = local_214;
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
    pcVar5 = local_214;
  }
  do {
    local_14 = pcVar5;
    if (*pcVar5 == '=') goto LAB_004fb550;
    if (*pcVar5 == '\0') break;
    local_14 = pcVar5 + 1;
    if (*local_14 == '=') goto LAB_004fb550;
    pcVar5 = pcVar5 + 2;
  } while (*local_14 != '\0');
  local_14 = (char *)0x0;
LAB_004fb550:
  if (local_14 != (char *)0x0) {
    *local_14 = '\0';
  }
  iVar4 = strcmp(local_214,key);
  if (iVar4 == 0) {
    bVar2 = true;
    iVar4 = strcmp(local_14 + 1,filename);
    if (iVar4 == 0) {
      this_ptr->initialized = 0;
    }
    goto LAB_004fb5ab;
  }
  bVar1 = (byte)stream->_flag;
  iVar6 = iVar6 + 1;
  goto LAB_004fb4f0;
}
