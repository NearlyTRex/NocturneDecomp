// Name: core_flattn.cpp_flattenTransformPoint_FUN_004ad660
// Address: 004ad660
// Address Range: [[004ad660, 004ad6dc]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_flattenTransformPoint_FUN_004ad660(CVector3f *point_out,CVector3f *point_in)

#include "nocturne.h"

void __cdecl core_flattn_cpp_flattenTransformPoint_FUN_004ad660(CVector3f *point_out,CVector3f *point_in)

{
  point_out->x = point_in->z * g_FLOAT_01d1a0b4 +
                 point_in->x * g_FLOAT_01d1a0ac + point_in->y * g_FLOAT_01d1a0b0 + g_FLOAT_01d1a0d0;
  point_out->y = point_in->z * g_FLOAT_01d1a0c0 +
                 point_in->x * g_FLOAT_01d1a0b8 + point_in->y * g_FLOAT_01d1a0bc + g_FLOAT_01d1a0d4;
  point_out->z = point_in->z * g_FLOAT_01d1a0cc +
                 point_in->x * g_FLOAT_01d1a0c4 + point_in->y * g_FLOAT_01d1a0c8 + g_FLOAT_01d1a0d8;
  return;
}
