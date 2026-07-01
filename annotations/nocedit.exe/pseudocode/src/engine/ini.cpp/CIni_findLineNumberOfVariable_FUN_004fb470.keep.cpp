// Name: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
// Address: 004fb470
// MANUAL RECONSTRUCTION
// Address Range: [[004fb470, 004fb653]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470(CIni *this_ptr,char *section,char *key,char *value,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470(CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  _FILE *stream;
  char *pcVar3;
  int iVar4;
  int iVar1;
  char *pcVar5;
  int iVar6;
  char *pcVar2;
  char local_214 [256];
  char local_114 [256];
  byte bVar1;
  bool bVar2;

  iVar6 = 0;
  bVar2 = false;
  this_ptr->initialized = 1;
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (value,(char *)0x0,"rt","..\\engine\\ini.cpp",244);
  if (stream == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 245;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::FindLineNumberOfVariable: Unable to open input");
  }
  _sprintf(local_114,"[%s]\n",section);
  while (((stream->_flag & 0x10) == 0 &&
         (pcVar5 = _fgets(local_214,0xff,stream), pcVar5 != (char *)0x0))) {
    iVar1 = _strcmp(local_214,local_114);
    if (iVar1 == 0) {
      bVar1 = (byte)stream->_flag;
      bVar2 = false;
      goto LAB_004fb4f0;
    }
    iVar6 = iVar6 + 1;
  }
LAB_004fb5ab:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",340);
  if (bVar2) {
    return iVar6;
  }
  return 0;
LAB_004fb4f0:
  if (((bVar1 & 0x10) != 0) ||
     (pcVar3 = _fgets(local_214,0xff,stream),
     pcVar3 == (char *)0x0)) goto LAB_004fb5ab;
  pcVar2 = strchr(local_214,'\n');
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  pcVar2 = strchr(local_214,'=');
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  iVar4 = _strcmp(local_214,key);
  if (iVar4 == 0) {
    bVar2 = true;
    iVar1 = _strcmp(pcVar2 + 1,filename);
    if (iVar1 == 0) {
      this_ptr->initialized = 0;
    }
    goto LAB_004fb5ab;
  }
  bVar1 = (byte)stream->_flag;
  iVar6 = iVar6 + 1;
  goto LAB_004fb4f0;
}
