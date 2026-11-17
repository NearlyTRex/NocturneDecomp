// Name: engine_ini.cpp_CIniFile_getFloat_FUN_004f4db0
// Address: 004f4db0
// Address Range: [[004f4db0, 004f4e10]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004f4db0(CIniFile *this_ptr,char *key,float *output)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004f4db0(CIniFile *this_ptr,char *key,float *output)

{
  char local_6c [100];
  
  _sprintf(local_6c,"%g");
  (**(code **)((int)this_ptr->vtable + 4))(this_ptr,key,local_6c);
  sscanf(local_6c,"%f");
  return;
}
