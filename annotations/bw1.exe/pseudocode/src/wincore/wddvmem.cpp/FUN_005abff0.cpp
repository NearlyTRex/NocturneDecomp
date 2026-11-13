// Name: wincore_wddvmem.cpp_FUN_005abff0
// Address: 005abff0
// Address Range: [[005abff0, 005ac03c]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_005abff0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_wddvmem_cpp_FUN_005abff0(void)

{
  if (DAT_00629010 == 0) {
    if (_DAT_02c99310 == 0) {
      return;
    }
  }
  else {
    FUN_005c09f0(DAT_00629010);
    DAT_00629010 = 0;
    if (_DAT_02c99310 == 0) {
      return;
    }
  }
  FUN_005c09f0(_DAT_02c99310);
  DAT_0071362c = 0;
  return;
}
