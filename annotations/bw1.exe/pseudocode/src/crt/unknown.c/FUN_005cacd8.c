// Name: crt_unknown.c_FUN_005cacd8
// Address: 005cacd8
// Address Range: [[005cacd8, 005cad33]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cacd8(undefined4 param_1)

#include "nocturne.h"

uint FUN_005cacd8(uint param_1)

{
  void *lpTlsValue;
  int iVar1;
  uint uVar2;
  
  if (g_INT_006265f8 == -1) {
    return 0;
  }
  lpTlsValue = (void *)FUN_005cac3c(param_1);
  uVar2 = 0;
  if (lpTlsValue != (void *)0x0) {
    iVar1 = FUN_005cce60(*(uint *)((int)lpTlsValue + 0xda),lpTlsValue);
    if (iVar1 == 0) {
      debugFree(lpTlsValue);
      return 0;
    }
    TlsSetValue(g_INT_006265f8,lpTlsValue);
    uVar2 = 1;
  }
  return uVar2;
}
