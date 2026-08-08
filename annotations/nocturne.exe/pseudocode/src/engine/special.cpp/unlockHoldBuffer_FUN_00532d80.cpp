// Name: engine_special.cpp_unlockHoldBuffer_FUN_00532d80
// Address: 00532d80
// Address Range: [[00532d80, 00532d92]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00532d80(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00532d80(void)

{
  int iVar1;
  
  if (g_APIDLL_unlockHoldBuffer == (APIDLL_unlockHoldBuffer *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_unlockHoldBuffer)();
  return iVar1;
}
