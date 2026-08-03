// Name: engine_ini.cpp_CIniFile_getInteger_FUN_004bda20
// Address: 004bda20
// Address Range: [[004bda20, 004bda73]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(CIniFile *this_ptr,char *key_name,int *value_ptr)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(CIniFile *this_ptr,char *key_name,int *value_ptr)

{
  char local_6c [100];
  
  _sprintf(local_6c,"%d");
  engine_ini_cpp_CIniFile_getString_FUN_004bd910(this_ptr,key_name,local_6c,100);
  sscanf(local_6c,"%d");
  return;
}
