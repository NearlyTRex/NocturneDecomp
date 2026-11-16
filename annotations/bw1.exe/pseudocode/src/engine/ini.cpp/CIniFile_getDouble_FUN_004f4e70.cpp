// Name: engine_ini.cpp_CIniFile_getDouble_FUN_004f4e70
// Address: 004f4e70
// Address Range: [[004f4e70, 004f4ed3]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getDouble_FUN_004f4e70(CIniFile *this_ptr,char *key,double *output)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getDouble_FUN_004f4e70(CIniFile *this_ptr,char *key,double *output)

{
  char acStack_70 [100];
  
  _sprintf(acStack_70,(char *)0x5e58fa);
  (**(code **)((int)this_ptr->vtable + 4))(this_ptr,key,acStack_70,100);
  sscanf(acStack_70,(char *)0x5e58fe);
  return;
}
