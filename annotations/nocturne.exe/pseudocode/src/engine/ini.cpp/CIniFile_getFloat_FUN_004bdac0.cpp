// Name: engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0
// Address: 004bdac0
// Address Range: [[004bdac0, 004bdb16]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(CIniFile *this_ptr,char *key,float *output)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(CIniFile *this_ptr,char *key,float *output)

{
  byte local_68 [100];
  
  _sprintf(local_68,"%g",(double)*output);
  engine_ini_cpp_CIniFile_getString_FUN_004bd910(this_ptr,key,local_68,100);
  sscanf(local_68,"%f",output);
  return;
}
