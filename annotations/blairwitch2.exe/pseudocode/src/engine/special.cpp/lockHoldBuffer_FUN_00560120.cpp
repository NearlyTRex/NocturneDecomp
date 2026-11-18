// Name: engine_special.cpp_lockHoldBuffer_FUN_00560120
// Address: 00560120
// Address Range: [[00560120, 00560132]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00560120(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00560120(void)

{
  int iVar1;
  
  if (g_PTR_0264bc4c == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc4c)();
  return iVar1;
}
