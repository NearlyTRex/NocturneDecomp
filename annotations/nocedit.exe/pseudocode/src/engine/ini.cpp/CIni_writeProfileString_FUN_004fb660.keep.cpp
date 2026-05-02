// Name: engine_ini.cpp_CIni_writeProfileString_FUN_004fb660
// Address: 004fb660
// MANUAL RECONSTRUCTION
// Address Range: [[004fb660, 004fb955]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004fb660(CIni *this_ptr,char *section,char *key,char *value,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004fb660(CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  byte bVar3;
  bool bVar4;
  int iVar2;
  _FILE *stream;
  _FILE *file;
  int iVar5;
  char *pcVar7;
  char local_314 [254];
  char acStack_216 [258];
  char local_114 [256];
  char *pcVar6;
  int line_number;

  bVar4 = false;
  iVar2 = engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470
                    (this_ptr,section,key,filename,value);
  if (this_ptr->initialized == 0) {
    return 1;
  }
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\engine\\ini.cpp",0x182);
  if (stream == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x183;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::writeProfileString: Unable to open input");
  }
  strcpy(acStack_216 + 2,filename);
  line_number = 0x186;
  pcVar7 = "..\\engine\\ini.cpp";
  pcVar6 = "wt";
  acStack_216[strlen(filename) + 1] = 'x';
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (acStack_216 + 2,(char *)0x0,pcVar6,pcVar7,line_number);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x187;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::writeProfileString: Unable to open output");
  }
  if (iVar2 == 0) {
    _sprintf(local_114,"[%s]\n",section);
    bVar3 = (byte)stream->_flag;
    while (((bVar3 & 0x10) == 0 &&
           (pcVar7 = _fgets(local_314,0xff,stream), pcVar7 != (char *)0x0)))
    {
      _fprintf(file,local_314);
      iVar5 = _strcmp(local_114,local_314);
      if (iVar5 == 0) {
        _fprintf(file,"%s=%s\n",key,value);
        bVar4 = true;
      }
      bVar3 = (byte)stream->_flag;
    }
    if (!bVar4) {
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
    bVar3 = (byte)stream->_flag;
    while (((bVar3 & 0x10) == 0 &&
           (pcVar7 = _fgets(local_314,0xff,stream), pcVar7 != (char *)0x0)))
    {
      _fprintf(file,local_314);
      bVar3 = (byte)stream->_flag;
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",0x1e8);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\ini.cpp",0x1e9);
  remove(filename);
  rename(acStack_216 + 2,filename);
  return 1;
}
