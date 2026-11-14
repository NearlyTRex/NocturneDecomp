// Name: engine_special.cpp_FUN_00582bf0
// Address: 00582bf0
// Address Range: [[00582bf0, 00582c0a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00582bf0(int texture_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00582bf0(int texture_size)

{
  int iVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c8342c)(texture_size);
  return iVar1;
}
