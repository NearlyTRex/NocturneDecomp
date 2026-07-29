// Name: wincore_winrun.cpp_getRegistryStringValue_FUN_00559d20
// Address: 00559d20
// Address Range: [[00559d20, 00559d95]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_00559d20(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_00559d20(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

{
  LSTATUS LVar1;
  HKEY local_10;
  uint *local_c;
  DWORD local_8;
  
  *output_buffer = '\0';
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000002,key_path,0,1,&local_10);
  if (LVar1 != 0) {
    return;
  }
  local_c = buffer_size;
  local_8 = 1;
  RegQueryValueExA(local_10,value_name,(LPDWORD)0x0,&local_8,(LPBYTE)output_buffer,(LPDWORD)&local_c
                  );
  RegCloseKey(local_10);
  return;
}
