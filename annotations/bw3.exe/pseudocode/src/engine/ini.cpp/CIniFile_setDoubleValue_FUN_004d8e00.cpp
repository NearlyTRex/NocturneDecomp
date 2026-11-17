// Name: engine_ini.cpp_CIniFile_setDoubleValue_FUN_004d8e00
// Address: 004d8e00
// Address Range: [[004d8e00, 004d8e43]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setDoubleValue_FUN_004d8e00(CIniFile *this_ptr,char *key,double value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setDoubleValue_FUN_004d8e00(CIniFile *this_ptr,char *key,double value)

{
  char acStack_6c [100];
  
  _sprintf(acStack_6c,"%lg");
  (**(code **)((int)this_ptr->vtable + 8))(this_ptr,key,acStack_6c);
  return;
}
