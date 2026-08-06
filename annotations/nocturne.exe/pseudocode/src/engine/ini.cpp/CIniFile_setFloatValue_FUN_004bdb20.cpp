// Name: engine_ini.cpp_CIniFile_setFloatValue_FUN_004bdb20
// Address: 004bdb20
// Address Range: [[004bdb20, 004bdb57]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(CIniFile *this_ptr,char *key,float value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(CIniFile *this_ptr,char *key,float value)

{
  char local_64 [100];
  
  _sprintf(local_64,"%g",(double)value);
  engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(this_ptr,key,local_64);
  return;
}
