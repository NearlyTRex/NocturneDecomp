// Name: engine_ini.cpp_CIniFile_getFloat_FUN_004d8bc0
// Address: 004d8bc0
// Address Range: [[004d8bc0, 004d8c20]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004d8bc0(CIniFile *this_ptr,char *key,float *output)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004d8bc0(CIniFile *this_ptr,char *key,float *output)

{
  char local_6c [100];
  
  _sprintf(local_6c,"%g");
  (**(code **)((int)this_ptr->vtable + 4))(this_ptr,key,local_6c);
  sscanf(local_6c,"%f");
  return;
}
