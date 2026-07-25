// Name: core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40
// Address: 004fcd40
// Address Range: [[004fcd40, 004fcd66]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(int param_1)

#include "nocturne.h"

uint __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(int param_1)

{
  if (((*(int *)(param_1 + 0x1fa3c) != 0) && (*(int *)(param_1 + 0x1fa50) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x1fa50) + 0x2d8) == 8)) {
    return 1;
  }
  return 0;
}
