// Name: engine_ini.cpp_CIniFile_setFloatValue_FUN_004d8c30
// Address: 004d8c30
// Address Range: [[004d8c30, 004d8c71]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004d8c30(CIniFile *this_ptr,char *key,float value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004d8c30(CIniFile *this_ptr,char *key,float value)

{
  char local_68 [100];
  
  _sprintf(local_68,&DAT_005dad96);
  (**(code **)((int)this_ptr->vtable + 8))(this_ptr,key,local_68);
  return;
}
