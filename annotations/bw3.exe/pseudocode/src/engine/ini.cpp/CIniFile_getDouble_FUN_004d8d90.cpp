// Name: engine_ini.cpp_CIniFile_getDouble_FUN_004d8d90
// Address: 004d8d90
// Address Range: [[004d8d90, 004d8df3]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getDouble_FUN_004d8d90(CIniFile *this_ptr,char *key,double *output)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getDouble_FUN_004d8d90(CIniFile *this_ptr,char *key,double *output)

{
  char acStack_70 [100];
  
  _sprintf(acStack_70,(char *)0x5c58c0);
  (**(code **)((int)this_ptr->vtable + 4))(this_ptr,key,acStack_70,100);
  sscanf(acStack_70,(char *)0x5c58c4);
  return;
}
