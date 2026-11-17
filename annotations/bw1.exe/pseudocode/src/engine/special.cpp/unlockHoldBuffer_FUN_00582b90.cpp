// Name: engine_special.cpp_unlockHoldBuffer_FUN_00582b90
// Address: 00582b90
// Address Range: [[00582b90, 00582ba2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00582b90(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00582b90(void)

{
  int iVar1;
  
  if (g_PTR_02c83420 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c83420)();
  return iVar1;
}
