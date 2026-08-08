// Name: engine_special.cpp_lockHoldBuffer_FUN_00532d60
// Address: 00532d60
// Address Range: [[00532d60, 00532d72]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00532d60(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00532d60(void)

{
  int iVar1;
  
  if (g_APIDLL_lockHoldBuffer == (APIDLL_lockHoldBuffer *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_lockHoldBuffer)();
  return iVar1;
}
