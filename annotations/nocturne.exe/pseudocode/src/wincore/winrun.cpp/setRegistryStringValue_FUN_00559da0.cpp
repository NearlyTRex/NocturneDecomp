// Name: wincore_winrun.cpp_setRegistryStringValue_FUN_00559da0
// Address: 00559da0
// Address Range: [[00559da0, 00559e14]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_00559da0(LPCSTR param_1,LPCSTR param_2,BYTE *param_3)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_00559da0(LPCSTR param_1,LPCSTR param_2,BYTE *param_3)

{
  BYTE BVar1;
  LSTATUS LVar2;
  uint uVar3;
  BYTE *pBVar4;
  byte bVar5;
  HKEY local_c;
  DWORD local_8;
  
  bVar5 = 0;
  LVar2 = RegCreateKeyExA((HKEY)0x80000002,param_1,0,&DAT_00598151,0,0x20006,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_8);
  if (LVar2 != 0) {
    return;
  }
  uVar3 = 0xffffffff;
  pBVar4 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    BVar1 = *pBVar4;
    pBVar4 = pBVar4 + (uint)bVar5 * -2 + 1;
  } while (BVar1 != '\0');
  RegSetValueExA(local_c,param_2,0,1,param_3,~uVar3);
  RegCloseKey(local_c);
  return;
}
