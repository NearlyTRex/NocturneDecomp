// Name: engine_ini.cpp_CIniFile_setInteger_FUN_004d8b80
// Address: 004d8b80
// Address Range: [[004d8b80, 004d8bbc]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004d8b80(CIniFile *this_ptr,char *key,int value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004d8b80(CIniFile *this_ptr,char *key,int value)

{
  char local_68 [100];
  
  _sprintf(local_68,"%d");
  (**(code **)((int)this_ptr->vtable + 8))(this_ptr,key,local_68);
  return;
}
