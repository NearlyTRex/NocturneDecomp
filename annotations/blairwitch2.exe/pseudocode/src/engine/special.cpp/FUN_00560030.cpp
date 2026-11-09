// Name: engine_special.cpp_FUN_00560030
// Address: 00560030
// Address Range: [[00560030, 0056004a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00560030(int slot)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00560030(int slot)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc38)(slot);
  return iVar1;
}
