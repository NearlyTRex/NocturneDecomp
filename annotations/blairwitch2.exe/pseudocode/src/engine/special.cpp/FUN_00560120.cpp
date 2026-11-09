// Name: engine_special.cpp_FUN_00560120
// Address: 00560120
// Address Range: [[00560120, 00560132]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00560120(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00560120(void)

{
  int iVar1;
  
  if (_DAT_0264bc4c == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc4c)();
  return iVar1;
}
