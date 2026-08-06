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
  if (DAT_005c5010 == (void *)0x0) {
    if (_DAT_02ddf560 == (void *)0x0) {
      return;
    }
  }
  else {
    free(DAT_005c5010);
    DAT_005c5010 = (void *)0x0;
    if (_DAT_02ddf560 == (void *)0x0) {
      return;
    }
  }
  free(_DAT_02ddf560);
  DAT_006af62c = 0;
  return;
}
