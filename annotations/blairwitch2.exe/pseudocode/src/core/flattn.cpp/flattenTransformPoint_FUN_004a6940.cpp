// Name: core_flattn.cpp_flattenTransformPoint_FUN_004a6940
// Address: 004a6940
// Address Range: [[004a6940, 004a69bc]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_flattenTransformPoint_FUN_004a6940(CVector3f *point_out,CVector3f *point_in)

#include "nocturne.h"

void __cdecl core_flattn_cpp_flattenTransformPoint_FUN_004a6940(CVector3f *point_out,CVector3f *point_in)

{
  point_out->x = point_in->z * g_FLOAT_01caf5c4 +
                 point_in->x * g_FLOAT_01caf5bc + point_in->y * g_FLOAT_01caf5c0 + g_FLOAT_01caf5e0;
  point_out->y = point_in->z * g_FLOAT_01caf5d0 +
                 point_in->x * g_FLOAT_01caf5c8 + point_in->y * g_FLOAT_01caf5cc + g_FLOAT_01caf5e4;
  point_out->z = point_in->z * g_FLOAT_01caf5dc +
                 point_in->x * g_FLOAT_01caf5d4 + point_in->y * g_FLOAT_01caf5d8 + g_FLOAT_01caf5e8;
  return;
}
