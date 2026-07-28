// Name: cockpit_pkbitmap.cpp_FUN_004f3f50
// Address: 004f3f50
// Address Range: [[004f3f50, 004f3f7f]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_004f3f50(CPackedBitmap *param_1)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_004f3f50(CPackedBitmap *param_1)

{
  if (param_1->packed_data != (ushort *)0x0) {
    FUN_005638d0(param_1->packed_data);
  }
  shape_memdbg_cpp_free_FUN_00564486(param_1->row_offsets);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_004f3f20(param_1);
  return;
}
