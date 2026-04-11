// Name: engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
// Address: 004fbcd0
// MANUAL RECONSTRUCTION
// Address Range: [[004fbcd0, 004fbd26]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile *this_ptr,char *key,float *output)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile *this_ptr,char *key,float *output)

{
  char local_68 [100];
  
  _sprintf(local_68,"%g",(double)*output);
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20(this_ptr,key,local_68,100);
  sscanf(local_68,"%f",output);
  return;
}
