// Name: engine_ini.cpp_CIni_writeProfileString_FUN_004d8530
// Address: 004d8530
// Address Range: [[004d8530, 004d87f9]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004d8530(CIni *this_ptr,char *section,char *key,char *value,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004d8530(CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  char cVar1;
  int iVar2;
  _FILE *stream;
  _FILE *p_Var3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  char local_314 [254];
  char acStack_216 [258];
  char local_114 [256];
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  iVar2 = engine_ini_cpp_FUN_004d8360(this_ptr,section,key,filename,value);
  if (this_ptr->initialized == 0) {
    return 1;
  }
  stream = _fopen(filename,&DAT_005dabda);
  if (stream == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\engine\\ini.cpp";
    _DAT_01d046a4 = 0x18b;
    core_main_c_FUN_004e4500("cIni::writeProfileString: Unable to open input");
  }
  pcVar4 = acStack_216;
  pcVar6 = filename;
  do {
    pcVar4 = pcVar4 + 2;
    cVar1 = *pcVar6;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar4[1] = cVar1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar4 = filename;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  acStack_216[~uVar5] = 'x';
  p_Var3 = _fopen(acStack_216 + 2,&DAT_005dac1e);
  if (p_Var3 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\engine\\ini.cpp";
    _DAT_01d046a4 = 399;
    core_main_c_FUN_004e4500("cIni::writeProfileString: Unable to open output");
  }
  if (iVar2 == 0) {
    _sprintf(local_114,"[%s]\n");
    bVar7 = (byte)stream->_flag;
    while (((bVar7 & 0x10) == 0 &&
           (pcVar4 = _fgets(local_314,0xff,stream), pcVar4 != (char *)0x0)))
    {
      FUN_005b8010(p_Var3,local_314);
      iVar2 = _strcmp(local_114,local_314);
      if (iVar2 == 0) {
        FUN_005b8010(p_Var3,"%s=%s\n",key,value);
        local_14 = 1;
      }
      bVar7 = (byte)stream->_flag;
    }
    if (local_14 == 0) {
      FUN_005b8010(p_Var3,local_114);
      FUN_005b8010(p_Var3,"%s=%s\n",key,value);
    }
  }
  else {
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      _fgets(local_314,0xff,stream);
      FUN_005b8010(p_Var3,local_314);
    }
    FUN_005b8010(p_Var3,"%s=%s\n",key,value);
    _fgets(local_314,0xff,stream);
    bVar7 = (byte)stream->_flag;
    while (((bVar7 & 0x10) == 0 &&
           (pcVar4 = _fgets(local_314,0xff,stream), pcVar4 != (char *)0x0)))
    {
      FUN_005b8010(p_Var3,local_314);
      bVar7 = (byte)stream->_flag;
    }
  }
  _fclose(stream);
  _fclose(p_Var3);
  FUN_005ba1e0(filename);
  _rename(acStack_216 + 2,filename);
  return 1;
}
