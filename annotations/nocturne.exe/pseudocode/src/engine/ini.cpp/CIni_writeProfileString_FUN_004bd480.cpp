// Name: engine_ini.cpp_CIni_writeProfileString_FUN_004bd480
// Address: 004bd480
// Address Range: [[004bd480, 004bd749]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004bd480(CIni *this_ptr,char *section,char *key,char *value,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004bd480(CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  char cVar1;
  int iVar2;
  _FILE *stream;
  _FILE *file;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  char local_314 [254];
  char acStack_216 [258];
  char local_114 [256];
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  iVar2 = engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0
                    (this_ptr,section,key,filename,value);
  if (this_ptr->initialized == 0) {
    return 1;
  }
  stream = _fopen(filename,"rt");
  if (stream == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 386;
    core_main_c_displayErrorAndQuit_FUN_004c8440("cIni::writeProfileString: Unable to open input");
  }
  pcVar3 = acStack_216;
  pcVar5 = filename;
  do {
    pcVar3 = pcVar3 + 2;
    cVar1 = *pcVar5;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar3[1] = cVar1;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  pcVar3 = filename;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  acStack_216[~uVar4] = 'x';
  file = _fopen(acStack_216 + 2,"wt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 390;
    core_main_c_displayErrorAndQuit_FUN_004c8440("cIni::writeProfileString: Unable to open output");
  }
  if (iVar2 == 0) {
    _sprintf(local_114,"[%s]\n",section);
    bVar6 = (byte)stream->_flag;
    while (((bVar6 & 0x10) == 0 &&
           (pcVar3 = _fgets(local_314,0xff,stream), pcVar3 != (char *)0x0)))
    {
      _fprintf(file,local_314);
      iVar2 = _strcmp(local_114,local_314);
      if (iVar2 == 0) {
        _fprintf(file,"%s=%s\n",key,value);
        local_14 = 1;
      }
      bVar6 = (byte)stream->_flag;
    }
    if (local_14 == 0) {
      _fprintf(file,local_114);
      _fprintf(file,"%s=%s\n",key,value);
    }
  }
  else {
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      _fgets(local_314,0xff,stream);
      _fprintf(file,local_314);
    }
    _fprintf(file,"%s=%s\n",key,value);
    _fgets(local_314,0xff,stream);
    bVar6 = (byte)stream->_flag;
    while (((bVar6 & 0x10) == 0 &&
           (pcVar3 = _fgets(local_314,0xff,stream), pcVar3 != (char *)0x0)))
    {
      _fprintf(file,local_314);
      bVar6 = (byte)stream->_flag;
    }
  }
  _fclose(stream);
  _fclose(file);
  remove(filename);
  rename(acStack_216 + 2,filename);
  return 1;
}
