// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0
// Address: 004f3fa0
// Address Range: [[004f3fa0, 004f3fbe]]
// Convention: unknown
// Signature: int cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0(int param_1)

#include "nocturne.h"

int cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x1c) + 1) * 4 +
         *(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4);
}
