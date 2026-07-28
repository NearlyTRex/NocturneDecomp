// Name: engine_special.cpp_unlockHoldBuffer_FUN_00532d80
// Address: 00532d80
// Address Range: [[00532d80, 00532d92]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00532d80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00532d80(void)

{
  int iVar1;
  
  if (_DAT_02dc9e00 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9e00)();
  return iVar1;
}
