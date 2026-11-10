// Name: cockpit_pkbitmap.cpp_FUN_00537550
// Address: 00537550
// Address Range: [[00537550, 0053757f]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_00537550(CPackedBitmap *param_1)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_00537550(CPackedBitmap *param_1)

{
  if (param_1->packed_data != (ushort *)0x0) {
    FUN_005c09f0(param_1->packed_data);
  }
  FUN_005c0336(param_1->row_offsets);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_00537520(param_1);
  return;
}
