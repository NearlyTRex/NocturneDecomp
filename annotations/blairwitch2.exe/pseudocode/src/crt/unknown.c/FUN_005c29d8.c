// Name: crt_unknown.c_FUN_005c29d8
// Address: 005c29d8
// Address Range: [[005c29d8, 005c2a33]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c29d8(undefined4 param_1)

#include "nocturne.h"

uint FUN_005c29d8(uint param_1)

{
  LPVOID lpTlsValue;
  int iVar1;
  uint uVar2;
  
  if (DAT_0061f2a0 == -1) {
    return 0;
  }
  lpTlsValue = (LPVOID)FUN_005c293c(param_1);
  uVar2 = 0;
  if (lpTlsValue != (LPVOID)0x0) {
    iVar1 = FUN_005c4b60(*(uint *)((int)lpTlsValue + 0xda),lpTlsValue);
    if (iVar1 == 0) {
      FUN_005b86a0(lpTlsValue);
      return 0;
    }
    TlsSetValue(DAT_0061f2a0,lpTlsValue);
    uVar2 = 1;
  }
  return uVar2;
}
