// Name: engine_special.cpp_FUN_00582b90
// Address: 00582b90
// Address Range: [[00582b90, 00582ba2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00582b90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00582b90(void)

{
  int iVar1;
  
  if (_DAT_02c83420 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_02c83420)();
  return iVar1;
}
