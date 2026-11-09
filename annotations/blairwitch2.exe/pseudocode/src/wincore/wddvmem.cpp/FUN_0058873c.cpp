// Name: wincore_wddvmem.cpp_FUN_0058873c
// Address: 0058873c
// Address Range: [[0058873c, 0058878c]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_0058873c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_wddvmem_cpp_FUN_0058873c(void)

{
  if (DAT_00622010 == 0) {
    if (_DAT_02661af0 == 0) {
      return;
    }
  }
  else {
    FUN_005b86a0(DAT_00622010);
    DAT_00622010 = 0;
    if (_DAT_02661af0 == 0) {
      return;
    }
  }
  FUN_005b86a0(_DAT_02661af0);
  DAT_0070c62c = 0;
  return;
}
