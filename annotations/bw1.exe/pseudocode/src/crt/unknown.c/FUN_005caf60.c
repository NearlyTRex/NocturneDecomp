// Name: crt_unknown.c_FUN_005caf60
// Address: 005caf60
// Address Range: [[005caf60, 005cb003]]
// Convention: unknown
// Signature: DWORD crt_unknown_c_FUN_005caf60(HMODULE param_1,LPWSTR param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005caf60(HMODULE param_1,LPWSTR param_2,DWORD param_3)

{
  DWORD DVar1;
  LPSTR lpFilename;
  int iVar2;
  
  DVar1 = GetVersion();
  if ((ushort)(DVar1 >> 0x10) < 0x8000) {
    DVar1 = GetModuleFileNameW(param_1,param_2,param_3);
    return DVar1;
  }
  lpFilename = FUN_005c08d0(0x208);
  DVar1 = 0;
  if (lpFilename != (LPSTR)0x0) {
    DVar1 = GetModuleFileNameA(param_1,lpFilename,0x208);
    if (DVar1 == 0) {
      FUN_005c09f0(lpFilename);
      return 0;
    }
    iVar2 = MultiByteToWideChar(1,1,lpFilename,-1,param_2,param_3);
    FUN_005c09f0(lpFilename);
    if (iVar2 == 0) {
      return 0;
    }
    param_2[param_3 - 1] = L'\0';
    DVar1 = FUN_005ccfc0(param_2);
  }
  return DVar1;
}
