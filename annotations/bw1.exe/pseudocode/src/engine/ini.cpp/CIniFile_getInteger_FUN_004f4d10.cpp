// Name: engine_ini.cpp_CIniFile_getInteger_FUN_004f4d10
// Address: 004f4d10
// Address Range: [[004f4d10, 004f4d6b]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004f4d10(CIniFile *this_ptr,char *key_name,int *value_ptr)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004f4d10(CIniFile *this_ptr,char *key_name,int *value_ptr)

{
  char local_6c [100];
  
  _sprintf(local_6c,"%d");
  (**(code **)((int)this_ptr->vtable + 4))(this_ptr,key_name,local_6c,100);
  sscanf(local_6c,"%d");
  return;
}
