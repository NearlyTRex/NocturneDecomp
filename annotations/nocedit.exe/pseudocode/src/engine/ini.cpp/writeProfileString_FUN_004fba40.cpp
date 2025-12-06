// Name: engine_ini.cpp_writeProfileString_FUN_004fba40
// Address: 004fba40
// Address Range: [[004fba40, 004fba65]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_writeProfileString_FUN_004fba40(char * section, char * key, char * value, char * filename)

#include "nocturne.h"

void __cdecl
engine_ini_cpp_writeProfileString_FUN_004fba40(char *section,char *key,char *value,char *filename)

{
  engine_ini_cpp_CIni_writeProfileString_FUN_004fb660(&g_CIniInstance,section,key,value,filename);
  return;
}
