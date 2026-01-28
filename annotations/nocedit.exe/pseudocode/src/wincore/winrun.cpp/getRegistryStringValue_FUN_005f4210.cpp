// Name: wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210
// Address: 005f4210
// Address Range: [[005f4210, 005f4285]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_005f4210 (char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

#include "nocturne.h"

void __cdecl
wincore_winrun_cpp_getRegistryStringValue_FUN_005f4210
          (char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

{
  LSTATUS LVar1;
  LPCSTR in_stack_00000004;
  HKEY pHStack_10;
  char *pcStack_c;
  DWORD DStack_8;
  
  *value_name = '\0';
  LVar1 = (*g_RegOpenKeyExAFunc)((HKEY)&DAT_80000002,in_stack_00000004,0,1,&pHStack_10);
  if (LVar1 != 0) {
    return;
  }
  pcStack_c = output_buffer;
  DStack_8 = 1;
  (*g_RegQueryValueExAFunc)
            (pHStack_10,key_path,(LPDWORD)0x0,&DStack_8,(LPBYTE)value_name,(LPDWORD)&pcStack_c);
  (*g_RegCloseKeyFunc)(pHStack_10);
  return;
}
