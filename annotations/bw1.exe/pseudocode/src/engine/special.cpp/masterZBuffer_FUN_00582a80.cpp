// Name: engine_special.cpp_masterZBuffer_FUN_00582a80
// Address: 00582a80
// Address Range: [[00582a80, 00582a9a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_masterZBuffer_FUN_00582a80(int slot)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_masterZBuffer_FUN_00582a80(int slot)

{
  int iVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c83408)(slot);
  return iVar1;
}
