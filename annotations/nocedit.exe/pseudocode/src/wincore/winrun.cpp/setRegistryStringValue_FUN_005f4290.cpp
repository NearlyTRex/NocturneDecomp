// Name: wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290
// Address: 005f4290
// Address Range: [[005f4290, 005f4304]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290(char *key_path,char *value_name,char *value_data)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290(char *key_path,char *value_name,char *value_data)

{
  LSTATUS LVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  HKEY local_c;
  DWORD local_8;
  char cVar1;
  
  bVar5 = 0;
  LVar2 = (*g_RegCreateKeyExAFunc)
                    ((HKEY)&DAT_80000002,key_path,0,"suck",0,0x20006,
                     (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_8);
  if (LVar2 != 0) {
    return;
  }
  uVar3 = 0xffffffff;
  pcVar4 = value_data;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4;
  } while (cVar1 != '\0');
  (*g_RegSetValueExAFunc)(local_c,value_name,0,1,(BYTE *)value_data,~uVar3);
  (*g_RegCloseKeyFunc)(local_c);
  return;
}
