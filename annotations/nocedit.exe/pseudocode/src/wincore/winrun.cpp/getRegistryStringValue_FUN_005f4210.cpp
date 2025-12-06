// Name: wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210
// Address: 005f4210
// Address Range: [[005f4210, 005f4285]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210(char * key_path, char * value_name, char * output_buffer, uint * buffer_size)

#include "nocturne.h"

void __cdecl
wincore_winrun_cpp_getRegistryStringValue_FUN_005f4210
          (char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

{
  LSTATUS LVar1;
  BADSPACEBASE *in_ESP;
  LPCSTR in_stack_00000004;
  LPCSTR in_stack_00000020;
  HKEY in_stack_00000024;
  char *in_stack_00000028;
  
  *value_name = '\0';
  LVar1 = (*PTR_RegOpenKeyExA_00611474)
                    ((HKEY)&DAT_80000002,in_stack_00000004,0,1,(PHKEY)&stack0xfffffff0);
  if (LVar1 != 0) {
    return;
  }
  value_name = in_stack_00000028;
  output_buffer = &DAT_00000001;
  (*PTR_RegQueryValueExA_00611478)
            ((HKEY)key_path,in_stack_00000020,(LPDWORD)0x0,(LPDWORD)&output_buffer,
             (LPBYTE)in_stack_00000024,(LPDWORD)&value_name);
  buffer_size = (uint *)in_stack_00000024;
  output_buffer = (char *)0x5f427e;
  (*RegCloseKey)(in_stack_00000024);
  return;
}
