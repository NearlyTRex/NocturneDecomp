// Name: engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
// Address: 004fbc90
// Address Range: [[004fbc90, 004fbcc4]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile *this_ptr,char *key,int value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile *this_ptr,char *key,int value)

{
  char local_68 [12];
  char local_5c;
  
  _sprintf(local_68,"%d",value);
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(this_ptr,key,local_68);
  return;
}
