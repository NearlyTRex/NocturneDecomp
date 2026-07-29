// Name: engine_special.cpp_unlockHoldBuffer_FUN_005b7e10
// Address: 005b7e10
// Address Range: [[005b7e10, 005b7e22]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_005b7e10(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_005b7e10(void)

{
  int iVar1;
  
  if (g_APIDLL_unlockHoldBuffer == (APIDLL_unlockHoldBuffer *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_unlockHoldBuffer)();
  return iVar1;
}
