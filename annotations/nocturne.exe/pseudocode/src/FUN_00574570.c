// Name: FUN_00574570
// Address: 00574570
// Address Range: [[00574570, 00574671]]
// Convention: unknown
// Signature: BOOL FUN_00574570(LPCWSTR param_1,LPCWSTR param_2)

#include "nocturne.h"

BOOL FUN_00574570(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  int iVar2;
  LPCSTR lpName;
  LPCSTR lpValue;
  int iVar3;
  
  if (DAT_005c1d11 < 0x8000) {
    BVar1 = SetEnvironmentVariableW(param_1,param_2);
    return BVar1;
  }
  iVar2 = FUN_005713e0(param_1);
  iVar2 = iVar2 * 2 + 1;
  lpName = (LPCSTR)malloc(iVar2);
  BVar1 = 0;
  if (lpName != (LPCSTR)0x0) {
    lpValue = (LPCSTR)0x0;
    if (param_2 != (LPCWSTR)0x0) {
      iVar2 = FUN_005713e0(param_2);
      iVar2 = iVar2 * 2 + 1;
      lpValue = (LPCSTR)malloc(iVar2);
      if (lpValue == (LPCSTR)0x0) {
        FUN_005638d0(lpName);
        return 0;
      }
    }
    iVar3 = FUN_00570bd0(lpName,param_1,iVar2);
    if (iVar3 == -1) {
      FUN_005638d0(lpName);
      if (lpValue != (LPCSTR)0x0) {
        FUN_005638d0(lpValue);
      }
      return 0;
    }
    if ((lpValue != (LPCSTR)0x0) && (iVar2 = FUN_00570bd0(lpValue,param_2,iVar2), iVar2 == -1)) {
      FUN_005638d0(lpValue);
      return 0;
    }
    BVar1 = SetEnvironmentVariableA(lpName,lpValue);
    FUN_005638d0(lpName);
    if (lpValue != (LPCSTR)0x0) {
      FUN_005638d0(lpValue);
    }
  }
  return BVar1;
}
