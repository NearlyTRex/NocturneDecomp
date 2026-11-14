// Name: engine_ini.cpp_getProfileString_FUN_004d8800
// Address: 004d8800
// Address Range: [[004d8800, 004d8833]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_getProfileString_FUN_004d8800(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

#include "nocturne.h"

void __cdecl engine_ini_cpp_getProfileString_FUN_004d8800(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

{
  engine_ini_cpp_CIni_getProfileString_FUN_004d8180
            ((CIni *)0x1cee1a4,section,key,default_value,output_buffer,buffer_size,filename);
  return;
}
