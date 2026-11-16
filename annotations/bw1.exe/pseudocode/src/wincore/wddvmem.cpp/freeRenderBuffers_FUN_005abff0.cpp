// Name: wincore_wddvmem.cpp_freeRenderBuffers_FUN_005abff0
// Address: 005abff0
// Address Range: [[005abff0, 005ac03c]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_005abff0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_005abff0(void)

{
  if (DAT_00629010 == (void *)0x0) {
    if (_DAT_02c99310 == (void *)0x0) {
      return;
    }
  }
  else {
    debugFree(DAT_00629010);
    DAT_00629010 = (void *)0x0;
    if (_DAT_02c99310 == (void *)0x0) {
      return;
    }
  }
  debugFree(_DAT_02c99310);
  DAT_0071362c = 0;
  return;
}
