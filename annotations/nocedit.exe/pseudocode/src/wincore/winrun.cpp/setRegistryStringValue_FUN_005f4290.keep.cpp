// Name: wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290
// Address: 005f4290
// MANUAL RECONSTRUCTION
// Address Range: [[005f4290, 005f4304]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290(char *key_path,char *value_name,char *value_data)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290(char *key_path,char *value_name,char *value_data)

{
  LSTATUS LVar2;
  HKEY local_c;
  DWORD local_8;

  LVar2 = (*g_RegCreateKeyExAFunc)
                    (HKEY_LOCAL_MACHINE,key_path,0,"suck",0,0x20006,
                     (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_8);
  if (LVar2 != 0) {
    return;
  }
  (*g_RegSetValueExAFunc)(local_c,value_name,0,1,(BYTE *)value_data,strlen(value_data) + 1);
  (*g_RegCloseKeyFunc)(local_c);
  return;
}
