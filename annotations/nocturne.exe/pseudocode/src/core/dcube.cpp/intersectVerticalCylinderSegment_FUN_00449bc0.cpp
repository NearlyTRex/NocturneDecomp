// Name: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0
// Address: 00449bc0
// Address Range: [[00449bc0, 00449d2c]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00449bc0(CVector3f *segment_start,CVector3f *segment_end,float radius,float *out_height)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00449bc0(CVector3f *segment_start,CVector3f *segment_end,float radius,float *out_height)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  fVar3 = segment_end->x - segment_start->x;
  fVar1 = segment_end->z - segment_start->z;
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if (0.0 < fVar2) {
    fVar1 = (segment_start->x * fVar3 + segment_start->z * fVar1) * (float)2;
    fVar3 = fVar1 * fVar1 -
            fVar2 * (float)4 *
            ((segment_start->x * segment_start->x + segment_start->z * segment_start->z) -
            radius * radius);
    if (0.0 <= fVar3) {
      fVar4 = (-fVar1 - SQRT(fVar3)) / (fVar2 * (float)2);
      uVar5 = 0;
      if (((0.0 <= fVar4) && (fVar4 <= 1.0)) &&
         (fVar4 = (segment_end->y - segment_start->y) * fVar4 + segment_start->y,
         *out_height < fVar4)) {
        uVar5 = 1;
        *out_height = fVar4;
      }
      fVar1 = (SQRT(fVar3) - fVar1) / (fVar2 * (float)2);
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) &&
         (fVar1 = (segment_end->y - segment_start->y) * fVar1 + segment_start->y,
         *out_height < fVar1)) {
        uVar5 = 1;
        *out_height = fVar1;
      }
      return uVar5;
    }
  }
  return 0;
}
