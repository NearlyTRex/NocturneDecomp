// Name: engine_special.cpp_FUN_00582b10
// Address: 00582b10
// Address Range: [[00582b10, 00582b2f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00582b10(int card_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00582b10(int card_index)

{
  int iVar1;
  
  if (_DAT_02c834ac == 0) {
    return 0;
  }
  _DAT_02c83374 = card_index;
  iVar1 = (*_DAT_02c83414)(card_index);
  return iVar1;
}
