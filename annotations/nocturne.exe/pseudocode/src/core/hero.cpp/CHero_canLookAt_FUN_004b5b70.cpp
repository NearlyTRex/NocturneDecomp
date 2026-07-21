// Name: core_hero.cpp_CHero_canLookAt_FUN_004b5b70
// Address: 004b5b70
// Address Range: [[004b5b70, 004b5c2b]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_CHero_canLookAt_FUN_004b5b70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_hero_cpp_CHero_canLookAt_FUN_004b5b70(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if ((((((*(int *)(param_1 + 0xbc94) != 0) || (*(int *)(param_1 + 0xbc98) != 0)) ||
          (*(int *)(param_1 + 0xbca0) != 0)) ||
         ((*(int *)(param_1 + 0xbca4) != 0 || (*(int *)(param_1 + 0xbca8) != 0)))) ||
        ((*(int *)(param_1 + 0xbcac) != 0 ||
         ((*(int *)(param_1 + 0xbcb0) != 0 ||
          ((float)_DAT_005858e3 < ABS(*(float *)(param_1 + 0xbcb4)))))))) ||
       (((float)_DAT_005858e3 < ABS(*(float *)(param_1 + 0xbcb8)) ||
        (((float)_DAT_005858e3 < ABS(*(float *)(param_1 + 0xbcbc)) ||
         (*(int *)(param_1 + 0x2408) == 0)))))) {
      return 1;
    }
  }
  return 0;
}
