// Name: wincore_wddvmem.cpp_freeRenderBuffers_FUN_00588740
// Address: 00588740
// Address Range: [[00588740, 0058878c]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_00588740(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_00588740(void)

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
