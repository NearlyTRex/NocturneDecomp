// Name: crt_watcom.c__mkdir_FUN_00565e40
// Address: 00565e40
// Address Range: [[00565e40, 00565e58]]
// Convention: __cdecl
// Signature: undefined4 __cdecl crt_watcom_c__mkdir_FUN_00565e40(LPCSTR param_1)

#include "nocturne.h"

uint __cdecl _mkdir(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  
  BVar1 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  uVar3 = FUN_0056c6d0(DVar2);
  return uVar3;
}
