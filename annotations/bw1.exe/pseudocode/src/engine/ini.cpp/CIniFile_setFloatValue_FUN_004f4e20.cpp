// Name: engine_ini.cpp_CIniFile_setFloatValue_FUN_004f4e20
// Address: 004f4e20
// Address Range: [[004f4e20, 004f4e61]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004f4e20(CIniFile *this_ptr,char *key,float value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004f4e20(CIniFile *this_ptr,char *key,float value)

{
  char local_68 [100];
  
  _sprintf(local_68,"%g");
  (**(code **)((int)this_ptr->vtable + 8))(this_ptr,key,local_68);
  return;
}
