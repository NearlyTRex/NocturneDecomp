// Name: engine_ini.cpp_CIniFile_setInteger_FUN_004bda80
// Address: 004bda80
// Address Range: [[004bda80, 004bdab4]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(CIniFile *this_ptr,char *key,int value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(CIniFile *this_ptr,char *key,int value)

{
  char local_68 [100];
  
  _sprintf(local_68,"%d",value);
  engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(this_ptr,key,local_68);
  return;
}
