// Name: dll_dx7.cpp_readIniInt_FUN_10001440
// Address: 10001440
// Address Range: [[10001440, 10001460]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_readIniInt_FUN_10001440(char *section,char *key,uint *value_inout)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_readIniInt_FUN_10001440(char *section,char *key,uint *value_inout)

{
  UINT UVar1;
  
  UVar1 = GetPrivateProfileIntA(section,key,*value_inout,".\\system\\render.ini");
  *value_inout = UVar1;
  return;
}
