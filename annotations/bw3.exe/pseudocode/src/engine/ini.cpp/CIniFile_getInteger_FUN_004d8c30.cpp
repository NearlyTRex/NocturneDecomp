// Name: engine_ini.cpp_CIniFile_getInteger_FUN_004d8c30
// Address: 004d8c30
// Address Range: [[004d8c30, 004d8c8b]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004d8c30(CIniFile *this_ptr,char *key_name,int *value_ptr)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004d8c30(CIniFile *this_ptr,char *key_name,int *value_ptr)

{
  char local_6c [100];
  
  _sprintf(local_6c,&DAT_005c58ae);
  (**(code **)((int)this_ptr->vtable + 4))(this_ptr,key_name,local_6c,100);
  sscanf(local_6c,&DAT_005c58b1);
  return;
}
