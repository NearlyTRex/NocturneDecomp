// Name: core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
// Address: 0049b180
// Address Range: [[0049b180, 0049b2ec]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180(CVector3f *vertex1,CVector3f *vertex2,float rayRadius,float *outHeight)

#include "nocturne.h"

int __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180(CVector3f *vertex1,CVector3f *vertex2,float rayRadius,float *outHeight)

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
            ((vertex1->x * vertex1->x + vertex1->z * vertex1->z) - rayRadius * rayRadius);
    if (0.0 <= fVar3) {
      fVar4 = (-fVar1 - SQRT(fVar3)) / (fVar2 * (float)2);
      iVar5 = 0;
      if (((0.0 <= fVar4) && (fVar4 <= 1.0)) &&
         (fVar4 = (vertex2->y - vertex1->y) * fVar4 + vertex1->y, *outHeight < fVar4)) {
        iVar5 = 1;
        *outHeight = fVar4;
      }
      fVar1 = (SQRT(fVar3) - fVar1) / (fVar2 * (float)2);
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) &&
         (fVar1 = (vertex2->y - vertex1->y) * fVar1 + vertex1->y, *outHeight < fVar1)) {
        iVar5 = 1;
        *outHeight = fVar1;
      }
      return iVar5;
    }
  }
  return 0;
}
