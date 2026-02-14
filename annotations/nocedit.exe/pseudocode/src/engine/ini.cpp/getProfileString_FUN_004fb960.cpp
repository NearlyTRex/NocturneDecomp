// Name: engine_ini.cpp_getProfileString_FUN_004fb960
// Address: 004fb960
// Address Range: [[004fb960, 004fb993]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_getProfileString_FUN_004fb960(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

#include "nocturne.h"

void __cdecl engine_ini_cpp_getProfileString_FUN_004fb960(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

{
  engine_ini_cpp_CIni_getProfileString_FUN_004fb250
            (&g_CIniInstance,section,key,default_value,output_buffer,buffer_size,filename);
  return;
}
