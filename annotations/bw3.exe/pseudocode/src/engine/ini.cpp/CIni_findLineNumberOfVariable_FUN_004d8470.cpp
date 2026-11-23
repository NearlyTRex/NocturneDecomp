// Name: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004d8470
// Address: 004d8470
// Address Range: [[004d8470, 004d863e]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004d8470(CIni *this_ptr,char *section,char *key,char *filename,char *value)

#include "nocturne.h"

int __cdecl engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004d8470(CIni *this_ptr,char *section,char *key,char *filename,char *value)

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
  stream = _fopen(filename,"rt");
  if (stream == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 253;
    core_main_c_displayErrorAndQuit_FUN_004e4330("cIni::FindLineNumberOfVariable: Unable to open input");
  }
  _sprintf(local_114,"[%s]\n");
  while (((stream->_flag & 0x10) == 0 &&
         (pcVar5 = _fgets(local_214,0xff,stream), pcVar5 != (char *)0x0))) {
    iVar4 = _strcmp(local_214,local_114);
    if (iVar4 == 0) {
      bVar1 = (byte)stream->_flag;
      bVar2 = false;
      goto LAB_004d84e5;
    }
    iVar6 = iVar6 + 1;
  }
LAB_004d85a0:
  _fclose(stream);
  if (bVar2) {
    return iVar6;
  }
  return 0;
LAB_004d84e5:
  if (((bVar1 & 0x10) != 0) ||
     (pcVar3 = _fgets(local_214,0xff,stream), pcVar5 = local_214,
     pcVar3 == (char *)0x0)) goto LAB_004d85a0;
  do {
    pcVar3 = pcVar5;
    if (*pcVar5 == '\n') goto LAB_004d8522;
    if (*pcVar5 == '\0') break;
    pcVar3 = pcVar5 + 1;
    if (*pcVar3 == '\n') goto LAB_004d8522;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004d8522:
  pcVar5 = local_214;
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
    pcVar5 = local_214;
  }
  do {
    local_14 = pcVar5;
    if (*pcVar5 == '=') goto LAB_004d8545;
    if (*pcVar5 == '\0') break;
    local_14 = pcVar5 + 1;
    if (*local_14 == '=') goto LAB_004d8545;
    pcVar5 = pcVar5 + 2;
  } while (*local_14 != '\0');
  local_14 = (char *)0x0;
LAB_004d8545:
  if (local_14 != (char *)0x0) {
    *local_14 = '\0';
  }
  iVar4 = _strcmp(local_214,key);
  if (iVar4 == 0) {
    bVar2 = true;
    iVar4 = _strcmp(local_14 + 1,value);
    if (iVar4 == 0) {
      this_ptr->initialized = 0;
    }
    goto LAB_004d85a0;
  }
  bVar1 = (byte)stream->_flag;
  iVar6 = iVar6 + 1;
  goto LAB_004d84e5;
}
