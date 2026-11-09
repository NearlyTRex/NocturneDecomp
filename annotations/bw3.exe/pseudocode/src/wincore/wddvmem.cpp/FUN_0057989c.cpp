// Name: wincore_wddvmem.cpp_FUN_0057989c
// Address: 0057989c
// Address Range: [[0057989c, 005798ec]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_0057989c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_wddvmem_cpp_FUN_0057989c(void)

{
  if (DAT_0060b010 == 0) {
    if (_DAT_02d0bcf0 == 0) {
      return;
    }
  }
  else {
    FUN_005a3770(DAT_0060b010);
    DAT_0060b010 = 0;
    if (_DAT_02d0bcf0 == 0) {
      return;
    }
  }
  FUN_005a3770(_DAT_02d0bcf0);
  DAT_0072ffac = 0;
  return;
}
