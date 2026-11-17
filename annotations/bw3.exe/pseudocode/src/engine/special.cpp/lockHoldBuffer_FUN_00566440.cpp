// Name: engine_special.cpp_lockHoldBuffer_FUN_00566440
// Address: 00566440
// Address Range: [[00566440, 00566452]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00566440(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00566440(void)

{
  int iVar1;
  
  if (g_PTR_02cf6078 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02cf6078)();
  return iVar1;
}
