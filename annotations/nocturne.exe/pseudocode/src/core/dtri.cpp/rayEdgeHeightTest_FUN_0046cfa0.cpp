// Name: core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0
// Address: 0046cfa0
// Address Range: [[0046cfa0, 0046d10c]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0(CVector3f *vertex1,CVector3f *vertex2,float ray_radius,float *out_height)

#include "nocturne.h"

int __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0(CVector3f *vertex1,CVector3f *vertex2,float ray_radius,float *out_height)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar3 = vertex2->x - vertex1->x;
  fVar1 = vertex2->z - vertex1->z;
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if (0.0 < fVar2) {
    fVar1 = (vertex1->x * fVar3 + vertex1->z * fVar1) * (float)2;
    fVar3 = fVar1 * fVar1 -
            fVar2 * (float)4 *
            ((vertex1->x * vertex1->x + vertex1->z * vertex1->z) - ray_radius * ray_radius);
    if (0.0 <= fVar3) {
      fVar4 = (-fVar1 - SQRT(fVar3)) / (fVar2 * (float)2);
      iVar5 = 0;
      if (((0.0 <= fVar4) && (fVar4 <= 1.0)) &&
         (fVar4 = (vertex2->y - vertex1->y) * fVar4 + vertex1->y, *out_height < fVar4)) {
        iVar5 = 1;
        *out_height = fVar4;
      }
      fVar1 = (SQRT(fVar3) - fVar1) / (fVar2 * (float)2);
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) &&
         (fVar1 = (vertex2->y - vertex1->y) * fVar1 + vertex1->y, *out_height < fVar1)) {
        iVar5 = 1;
        *out_height = fVar1;
      }
      return iVar5;
    }
  }
  return 0;
}
