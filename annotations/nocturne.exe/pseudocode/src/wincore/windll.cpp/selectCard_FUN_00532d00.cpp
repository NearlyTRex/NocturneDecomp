// Name: wincore_windll.cpp_selectCard_FUN_00532d00
// Address: 00532d00
// Address Range: [[00532d00, 00532d1a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl wincore_windll_cpp_selectCard_FUN_00532d00(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl wincore_windll_cpp_selectCard_FUN_00532d00(uint param_1)

{
  uint uVar1;
  
  if (_DAT_02dc9e04 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9df4)(param_1);
  return uVar1;
}
