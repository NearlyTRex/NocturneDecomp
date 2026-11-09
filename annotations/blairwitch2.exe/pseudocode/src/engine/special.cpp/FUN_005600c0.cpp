// Name: engine_special.cpp_FUN_005600c0
// Address: 005600c0
// Address Range: [[005600c0, 005600df]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_005600c0(int card_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_005600c0(int card_index)

{
  int iVar1;
  
  if (_DAT_0264bcdc == 0) {
    return 0;
  }
  _DAT_0264bba4 = card_index;
  iVar1 = (*_DAT_0264bc44)(card_index);
  return iVar1;
}
