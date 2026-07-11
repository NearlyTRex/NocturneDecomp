// Name: FUN_0056e608
// Address: 0056e608
// Address Range: [[0056e608, 0056e663]]
// Convention: unknown
// Signature: undefined4 FUN_0056e608(undefined4 param_1)

#include "nocturne.h"

uint FUN_0056e608(uint param_1)

{
  LPVOID lpTlsValue;
  int iVar1;
  uint uVar2;
  
  if (DAT_005c1ab8 == -1) {
    return 0;
  }
  lpTlsValue = (LPVOID)FUN_0056e56c(param_1);
  uVar2 = 0;
  if (lpTlsValue != (LPVOID)0x0) {
    iVar1 = FUN_00571280(*(uint *)((int)lpTlsValue + 0xda),lpTlsValue);
    if (iVar1 == 0) {
      FUN_005638d0(lpTlsValue);
      return 0;
    }
    TlsSetValue(DAT_005c1ab8,lpTlsValue);
    uVar2 = 1;
  }
  return uVar2;
}
