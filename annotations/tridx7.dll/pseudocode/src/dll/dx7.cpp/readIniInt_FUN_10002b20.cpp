// Name: dll_dx7.cpp_readIniInt_FUN_10002b20
// Address: 10002b20
// Address Range: [[10002b20, 10002b40]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_readIniInt_FUN_10002b20(char *section,char *key,uint *value_inout)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_readIniInt_FUN_10002b20(char *section,char *key,uint *value_inout)

{
  UINT UVar1;
  
  UVar1 = GetPrivateProfileIntA(section,key,*value_inout,".\\system\\render.ini");
  *value_inout = UVar1;
  return;
}
