// Name: engine_ini.cpp_CIniFile_setInteger_FUN_004d8c90
// Address: 004d8c90
// Address Range: [[004d8c90, 004d8ccc]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004d8c90(CIniFile *this_ptr,char *key,int value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004d8c90(CIniFile *this_ptr,char *key,int value)

{
  char local_68 [100];
  
  _sprintf(local_68,&DAT_005c58b4);
  (**(code **)((int)this_ptr->vtable + 8))(this_ptr,key,local_68);
  return;
}
