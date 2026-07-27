// Name: wincore_wddvmem.cpp_FUN_00552af0
// Address: 00552af0
// Address Range: [[00552af0, 00552b3c]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_00552af0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_wddvmem_cpp_FUN_00552af0(void)

{
  if (DAT_005c5010 == 0) {
    if (_DAT_02ddf560 == 0) {
      return;
    }
  }
  else {
    FUN_005638d0(DAT_005c5010);
    DAT_005c5010 = 0;
    if (_DAT_02ddf560 == 0) {
      return;
    }
  }
  FUN_005638d0(_DAT_02ddf560);
  DAT_006af62c = 0;
  return;
}
