// Name: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005abd80
// Address: 005abd80
// Address Range: [[005abd80, 005abdd8]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005abd80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005abd80(void)

{
  if (_DAT_02c9930c != (int *)0x0) {
    (**(code **)(*_DAT_02c9930c + 8))(_DAT_02c9930c);
    _DAT_02c9930c = (int *)0x0;
  }
  if (_DAT_02c99308 != (int *)0x0) {
    (**(code **)(*_DAT_02c99308 + 8))(_DAT_02c99308);
    _DAT_02c99308 = (int *)0x0;
  }
  if (_DAT_02c99304 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c99304 + 8))(_DAT_02c99304);
  _DAT_02c99304 = (int *)0x0;
  return;
}
