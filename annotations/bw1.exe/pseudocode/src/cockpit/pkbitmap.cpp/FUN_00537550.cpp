// Name: cockpit_pkbitmap.cpp_FUN_00537550
// Address: 00537550
// Address Range: [[00537550, 0053757f]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_00537550(CPackedBitmap *param_1)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_00537550(CPackedBitmap *param_1)

{
  if (*(int *)&param_1->field_0x14 != 0) {
    FUN_005c09f0(*(int *)&param_1->field_0x14);
  }
  FUN_005c0336(*(void **)&param_1->field_0x20);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_00537520(param_1);
  return;
}
