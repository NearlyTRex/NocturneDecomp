// Name: engine_ini.cpp_CIniFile_setDoubleValue_FUN_004d8cf0
// Address: 004d8cf0
// Address Range: [[004d8cf0, 004d8d33]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setDoubleValue_FUN_004d8cf0(CIniFile *this_ptr,char *key,double value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setDoubleValue_FUN_004d8cf0(CIniFile *this_ptr,char *key,double value)

{
  char acStack_6c [100];
  
  _sprintf(acStack_6c,"%lg");
  (**(code **)((int)this_ptr->vtable + 8))(this_ptr,key,acStack_6c);
  return;
}
