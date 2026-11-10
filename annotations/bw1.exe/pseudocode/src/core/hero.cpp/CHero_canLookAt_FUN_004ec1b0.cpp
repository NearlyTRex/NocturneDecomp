// Name: core_hero.cpp_CHero_canLookAt_FUN_004ec1b0
// Address: 004ec1b0
// Address Range: [[004ec1b0, 004ec278]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canLookAt_FUN_004ec1b0(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_canLookAt_FUN_004ec1b0(CHero *this_ptr)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(this_ptr + 0x154) + 0x10c))(this_ptr);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if (((((*(int *)(this_ptr + 0xc1d8) != 0) || (*(int *)(this_ptr + 0xc1dc) != 0)) ||
         (*(int *)(this_ptr + 0xc1e4) != 0)) ||
        ((((*(int *)(this_ptr + 0xc1e8) != 0 || (*(int *)(this_ptr + 0xc1ec) != 0)) ||
          ((*(int *)(this_ptr + 0xc1f0) != 0 ||
           ((*(int *)(this_ptr + 0xc1f4) != 0 || (*(int *)(this_ptr + 0xc1f8) != 0)))))) ||
         ((float)_DAT_005e4935 < ABS(*(float *)(this_ptr + 0xc1fc)))))) ||
       ((((float)_DAT_005e4935 < ABS(*(float *)(this_ptr + 0xc200)) ||
         ((float)_DAT_005e4935 < ABS(*(float *)(this_ptr + 0xc204)))) ||
        (*(int *)(this_ptr + 0x2500) == 0)))) {
      return 1;
    }
  }
  return 0;
}
