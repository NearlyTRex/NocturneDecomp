// Name: FUN_0056e890
// Address: 0056e890
// Address Range: [[0056e890, 0056e933]]
// Convention: unknown
// Signature: DWORD FUN_0056e890(HMODULE param_1,LPWSTR param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_0056e890(HMODULE param_1,LPWSTR param_2,DWORD param_3)

{
  DWORD DVar1;
  LPSTR lpFilename;
  int iVar2;
  
  DVar1 = GetVersion();
  if ((ushort)(DVar1 >> 0x10) < 0x8000) {
    DVar1 = GetModuleFileNameW(param_1,param_2,param_3);
    return DVar1;
  }
  lpFilename = malloc(0x208);
  DVar1 = 0;
  if (lpFilename != (LPSTR)0x0) {
    DVar1 = GetModuleFileNameA(param_1,lpFilename,0x208);
    if (DVar1 == 0) {
      FUN_005638d0(lpFilename);
      return 0;
    }
    iVar2 = MultiByteToWideChar(1,1,lpFilename,-1,param_2,param_3);
    FUN_005638d0(lpFilename);
    if (iVar2 == 0) {
      return 0;
    }
    param_2[param_3 - 1] = L'\0';
    DVar1 = FUN_005713e0(param_2);
  }
  return DVar1;
}
