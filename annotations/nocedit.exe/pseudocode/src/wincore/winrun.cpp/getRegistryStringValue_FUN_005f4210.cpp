// Name: wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210
// Address: 005f4210
// Address Range: [[005f4210, 005f4285]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_005f4210(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_005f4210(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

{
  LSTATUS LVar1;
  HKEY pHStack_10;
  uint *puStack_c;
  DWORD DStack_8;
  
  *output_buffer = '\0';
  LVar1 = (*g_RegOpenKeyExAFunc)(HKEY_LOCAL_MACHINE,key_path,0,1,&pHStack_10);
  if (LVar1 != 0) {
    return;
  }
  puStack_c = buffer_size;
  DStack_8 = 1;
  (*g_RegQueryValueExAFunc)
            (pHStack_10,value_name,(LPDWORD)0x0,&DStack_8,(LPBYTE)output_buffer,(LPDWORD)&puStack_c)
  ;
  (*g_RegCloseKeyFunc)(pHStack_10);
  return;
}
