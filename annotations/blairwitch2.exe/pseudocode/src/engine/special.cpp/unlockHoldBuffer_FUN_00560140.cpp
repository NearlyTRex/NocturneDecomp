// Name: engine_special.cpp_unlockHoldBuffer_FUN_00560140
// Address: 00560140
// Address Range: [[00560140, 00560152]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00560140(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00560140(void)

{
  int iVar1;
  
  if (g_PTR_0264bc50 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc50)();
  return iVar1;
}
