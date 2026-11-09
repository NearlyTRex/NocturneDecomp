// Name: cockpit_pkbitmap.cpp_FUN_00516200
// Address: 00516200
// Address Range: [[00516200, 0051622f]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_00516200(CPackedBitmap *param_1)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_00516200(CPackedBitmap *param_1)

{
  if (*(int *)&param_1->field_0x14 != 0) {
    FUN_005b86a0(*(int *)&param_1->field_0x14);
  }
  FUN_005b7fce(*(void **)&param_1->field_0x20);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_005161d0(param_1);
  return;
}
