// Name: cockpit_pkbitmap.cpp_FUN_0050f230
// Address: 0050f230
// Address Range: [[0050f230, 0050f25f]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_0050f230(CPackedBitmap *param_1)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_0050f230(CPackedBitmap *param_1)

{
  if (param_1->packed_data != (ushort *)0x0) {
    FUN_005a3770(param_1->packed_data);
  }
  FUN_005a30b6(param_1->row_offsets);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0050f200(param_1);
  return;
}
