// Name: engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
// Address: 004fbc30
// Address Range: [[004fbc30, 004fbc83]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile *this_ptr,char *key_name,int *value_ptr)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile *this_ptr,char *key_name,int *value_ptr)

{
  char local_6c [100];
  
  _sprintf(local_6c,"%d",*value_ptr);
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20(this_ptr,key_name,local_6c,100);
  sscanf(local_6c,"%d",value_ptr);
  return;
}
