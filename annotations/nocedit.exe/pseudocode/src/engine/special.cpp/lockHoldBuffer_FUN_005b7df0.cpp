// Name: engine_special.cpp_lockHoldBuffer_FUN_005b7df0
// Address: 005b7df0
// Address Range: [[005b7df0, 005b7e02]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockHoldBuffer_FUN_005b7df0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockHoldBuffer_FUN_005b7df0(void)

{
  int iVar1;
  
  if (g_APIDLL_lockHoldBuffer == (APIDLL_lockHoldBuffer *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_lockHoldBuffer)();
  return iVar1;
}
