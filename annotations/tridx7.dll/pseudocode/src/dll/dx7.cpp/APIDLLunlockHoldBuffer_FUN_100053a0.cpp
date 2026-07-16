// Name: dll_dx7.cpp_APIDLLunlockHoldBuffer_FUN_100053a0
// Address: 100053a0
// Address Range: [[100053a0, 100053ff]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLunlockHoldBuffer_FUN_100053a0(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLunlockHoldBuffer_FUN_100053a0(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
                    /* 0x53a0  36  APIDLLunlockHoldBuffer */
  if (0 < DAT_10014178) {
    puVar2 = &DAT_10225848;
    puVar3 = DAT_10138fb4;
    for (iVar1 = DAT_10014178; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  iVar1 = dll_dx7_cpp_FUN_10002cb0(DAT_100141b8);
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_10014180 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*DAT_10014180 + 0x14))(DAT_10014180,0,DAT_100141b8,0,0,0);
  return 1;
}
