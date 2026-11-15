// Name: engine_ini.cpp_CIniFile_setInteger_FUN_004f4d70
// Address: 004f4d70
// Address Range: [[004f4d70, 004f4dac]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70(CIniFile *this_ptr,char *key,int value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70(CIniFile *this_ptr,char *key,int value)

{
  char local_68 [100];
  
  _sprintf(local_68,&DAT_005e58ee);
  (**(code **)((int)this_ptr->vtable + 8))(this_ptr,key,local_68);
  return;
}
