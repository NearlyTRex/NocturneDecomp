// Name: engine_special.cpp_FUN_00582b70
// Address: 00582b70
// Address Range: [[00582b70, 00582b82]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00582b70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00582b70(void)

{
  int iVar1;
  
  if (_DAT_02c8341c == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_02c8341c)();
  return iVar1;
}
