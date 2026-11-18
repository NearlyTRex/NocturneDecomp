// Name: engine_ini.cpp_CIniFile_setDoubleValue_FUN_004f4ee0
// Address: 004f4ee0
// Address Range: [[004f4ee0, 004f4f23]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setDoubleValue_FUN_004f4ee0(CIniFile *this_ptr,char *key,double value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setDoubleValue_FUN_004f4ee0(CIniFile *this_ptr,char *key,double value)

{
  char acStack_6c [100];
  
  _sprintf(acStack_6c,"%lg");
  (**(code **)((int)this_ptr->vtable + 8))(this_ptr,key,acStack_6c);
  return;
}
