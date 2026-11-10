// Name: cockpit_pkbitmap.cpp_FUN_00516200
// Address: 00516200
// Address Range: [[00516200, 0051622f]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_00516200(CPackedBitmap *param_1)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_00516200(CPackedBitmap *param_1)

{
  if (param_1->packed_data != (ushort *)0x0) {
    FUN_005b86a0(param_1->packed_data);
  }
  FUN_005b7fce(param_1->row_offsets);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_005161d0(param_1);
  return;
}
