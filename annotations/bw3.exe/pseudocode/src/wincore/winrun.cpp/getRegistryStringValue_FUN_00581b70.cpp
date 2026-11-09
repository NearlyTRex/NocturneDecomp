// Name: wincore_winrun.cpp_getRegistryStringValue_FUN_00581b70
// Address: 00581b70
// Address Range: [[00581b70, 00581be5]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_00581b70(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_00581b70(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

{
  LSTATUS LVar1;
  HKEY pHStack_10;
  uint *puStack_c;
  DWORD DStack_8;
  
  *output_buffer = '\0';
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,key_path,0,1,&pHStack_10);
  if (LVar1 != 0) {
    return;
  }
  puStack_c = buffer_size;
  DStack_8 = 1;
  RegQueryValueExA(pHStack_10,value_name,(LPDWORD)0x0,&DStack_8,(LPBYTE)output_buffer,
                   (LPDWORD)&puStack_c);
  RegCloseKey(pHStack_10);
  return;
}
