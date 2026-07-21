// Name: FUN_004f3f50
// Address: 004f3f50
// Address Range: [[004f3f50, 004f3f7f]]
// Convention: unknown
// Signature: void FUN_004f3f50(int param_1)

#include "nocturne.h"

void FUN_004f3f50(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x14));
  }
  shape_memdbg_cpp_free_FUN_00564486(*(uint *)(param_1 + 0x20));
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_004f3f20(param_1);
  return;
}
