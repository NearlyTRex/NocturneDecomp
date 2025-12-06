// Name: engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30
// Address: 004fbd30
// Address Range: [[004fbd30, 004fbd67]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30(CIniFile * this, char * key, float value)

#include "nocturne.h"

void __cdecl
engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(CIniFile *this,char *key,float value)

{
  BADSPACEBASE *in_ESP;
  char local_60;
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff9c,"%g",(double)value);
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0((CIniFile *)key,(char *)value,&local_60);
  return;
}
