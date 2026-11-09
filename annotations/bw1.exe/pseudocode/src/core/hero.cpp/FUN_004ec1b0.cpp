// Name: core_hero.cpp_FUN_004ec1b0
// Address: 004ec1b0
// Address Range: [[004ec1b0, 004ec278]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004ec1b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_hero_cpp_FUN_004ec1b0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if (((((*(int *)(param_1 + 0xc1d8) != 0) || (*(int *)(param_1 + 0xc1dc) != 0)) ||
         (*(int *)(param_1 + 0xc1e4) != 0)) ||
        ((((*(int *)(param_1 + 0xc1e8) != 0 || (*(int *)(param_1 + 0xc1ec) != 0)) ||
          ((*(int *)(param_1 + 0xc1f0) != 0 ||
           ((*(int *)(param_1 + 0xc1f4) != 0 || (*(int *)(param_1 + 0xc1f8) != 0)))))) ||
         ((float)_DAT_005e4935 < ABS(*(float *)(param_1 + 0xc1fc)))))) ||
       ((((float)_DAT_005e4935 < ABS(*(float *)(param_1 + 0xc200)) ||
         ((float)_DAT_005e4935 < ABS(*(float *)(param_1 + 0xc204)))) ||
        (*(int *)(param_1 + 0x2500) == 0)))) {
      return 1;
    }
  }
  return 0;
}
