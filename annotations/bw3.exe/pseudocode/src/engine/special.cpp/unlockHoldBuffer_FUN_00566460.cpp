// Name: engine_special.cpp_unlockHoldBuffer_FUN_00566460
// Address: 00566460
// Address Range: [[00566460, 00566472]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00566460(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00566460(void)

{
  int iVar1;
  
  if (g_APIDLL_unlockHoldBuffer == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_unlockHoldBuffer)();
  return iVar1;
}
