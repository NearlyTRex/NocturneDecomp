// Name: crt_unknown.c_FUN_005adb48
// Address: 005adb48
// Address Range: [[005adb48, 005adba3]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005adb48(undefined4 param_1)

#include "nocturne.h"

uint FUN_005adb48(uint param_1)

{
  void *lpTlsValue;
  int iVar1;
  uint uVar2;
  
  if (g_INT_0060799c == -1) {
    return 0;
  }
  lpTlsValue = (void *)FUN_005adaac(param_1);
  uVar2 = 0;
  if (lpTlsValue != (void *)0x0) {
    iVar1 = FUN_005afbf0(*(uint *)((int)lpTlsValue + 0xda),lpTlsValue);
    if (iVar1 == 0) {
      debugFree(lpTlsValue);
      return 0;
    }
    TlsSetValue(g_INT_0060799c,lpTlsValue);
    uVar2 = 1;
  }
  return uVar2;
}
