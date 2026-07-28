// Name: wincore_winrun.cpp_setRegistryStringValue_FUN_00559da0
// Address: 00559da0
// Address Range: [[00559da0, 00559e14]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_00559da0(char *key_path,char *value_name,char *value_data)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_00559da0(char *key_path,char *value_name,char *value_data)

{
  char cVar1;
  LSTATUS LVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  HKEY local_c;
  DWORD local_8;
  
  bVar5 = 0;
  LVar2 = RegCreateKeyExA((HKEY)&DAT_80000002,key_path,0,"suck",0,0x20006,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_8);
  if (LVar2 != 0) {
    return;
  }
  uVar3 = 0xffffffff;
  pcVar4 = value_data;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_c,value_name,0,1,(BYTE *)value_data,~uVar3);
  RegCloseKey(local_c);
  return;
}
