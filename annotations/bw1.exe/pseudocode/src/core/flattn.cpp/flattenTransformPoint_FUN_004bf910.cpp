// Name: core_flattn.cpp_flattenTransformPoint_FUN_004bf910
// Address: 004bf910
// Address Range: [[004bf910, 004bf98c]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_flattenTransformPoint_FUN_004bf910(CVector3f *point_out,CVector3f *point_in)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flattn_cpp_flattenTransformPoint_FUN_004bf910(CVector3f *point_out,CVector3f *point_in)

{
  point_out->x = point_in->z * _DAT_01cc805c +
                 point_in->x * _DAT_01cc8054 + point_in->y * _DAT_01cc8058 + _DAT_01cc8078;
  point_out->y = point_in->z * _DAT_01cc8068 +
                 point_in->x * _DAT_01cc8060 + point_in->y * _DAT_01cc8064 + _DAT_01cc807c;
  point_out->z = point_in->z * _DAT_01cc8074 +
                 point_in->x * _DAT_01cc806c + point_in->y * _DAT_01cc8070 + _DAT_01cc8080;
  return;
}
