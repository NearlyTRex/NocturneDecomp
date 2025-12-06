// Name: engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
// Address: 004fbc90
// Address Range: [[004fbc90, 004fbcc4]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile *this_ptr,char *key,int value)

{
  BADSPACEBASE *in_ESP;
  char acStack_64 [8];
  char local_5c;
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff98,"%d",value);
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0((CIniFile *)key,(char *)value,acStack_64);
  return;
}
