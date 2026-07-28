// Name: engine_special.cpp_lockHoldBuffer_FUN_00532d60
// Address: 00532d60
// Address Range: [[00532d60, 00532d72]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00532d60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00532d60(void)

{
  int iVar1;
  
  if (_DAT_02dc9dfc == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9dfc)();
  return iVar1;
}
