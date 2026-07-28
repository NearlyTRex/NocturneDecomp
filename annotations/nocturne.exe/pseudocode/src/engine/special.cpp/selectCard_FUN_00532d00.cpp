// Name: engine_special.cpp_selectCard_FUN_00532d00
// Address: 00532d00
// Address Range: [[00532d00, 00532d1a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectCard_FUN_00532d00(int card_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_selectCard_FUN_00532d00(int card_index)

{
  int iVar1;
  
  if (INT_02dc9e04 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9df4)(card_index);
  return iVar1;
}
