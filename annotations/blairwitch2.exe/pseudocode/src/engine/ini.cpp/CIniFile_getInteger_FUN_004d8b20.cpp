// Name: engine_ini.cpp_CIniFile_getInteger_FUN_004d8b20
// Address: 004d8b20
// Address Range: [[004d8b20, 004d8b7b]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004d8b20(CIniFile *this_ptr,char *key_name,int *value_ptr)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004d8b20(CIniFile *this_ptr,char *key_name,int *value_ptr)

{
  char local_6c [100];
  
  _sprintf(local_6c,"%d");
  (**(code **)((int)this_ptr->vtable + 4))(this_ptr,key_name,local_6c,100);
  sscanf(local_6c,"%d");
  return;
}
