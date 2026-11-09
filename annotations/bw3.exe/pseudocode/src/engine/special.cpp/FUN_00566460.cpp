// Name: engine_special.cpp_FUN_00566460
// Address: 00566460
// Address Range: [[00566460, 00566472]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00566460(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00566460(void)

{
  int iVar1;
  
  if (_DAT_02cf607c == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf607c)();
  return iVar1;
}
