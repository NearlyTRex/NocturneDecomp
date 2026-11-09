// Name: engine_special.cpp_FUN_005663e0
// Address: 005663e0
// Address Range: [[005663e0, 005663ff]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_005663e0(int card_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_005663e0(int card_index)

{
  int iVar1;
  
  if (_DAT_02cf6108 == 0) {
    return 0;
  }
  _DAT_02cf5fd0 = card_index;
  iVar1 = (*_DAT_02cf6070)(card_index);
  return iVar1;
}
