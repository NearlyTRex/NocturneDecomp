// Name: engine_special.cpp_FUN_00560140
// Address: 00560140
// Address Range: [[00560140, 00560152]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00560140(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00560140(void)

{
  int iVar1;
  
  if (_DAT_0264bc50 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc50)();
  return iVar1;
}
