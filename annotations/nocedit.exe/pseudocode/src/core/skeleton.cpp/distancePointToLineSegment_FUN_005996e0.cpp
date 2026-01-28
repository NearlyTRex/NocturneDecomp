// Name: core_skeleton.cpp_distancePointToLineSegment_FUN_005996e0
// Address: 005996e0
// Address Range: [[005996e0, 0059987d]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_distancePointToLineSegment_FUN_005996e0 (CVector3f *line_start,CVector3f *line_end,CVector3f *test_point)

#include "nocturne.h"

float __cdecl
core_skeleton_cpp_distancePointToLineSegment_FUN_005996e0
          (CVector3f *line_start,CVector3f *line_end,CVector3f *test_point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = line_end->x - line_start->x;
  fVar2 = line_end->y - line_start->y;
  fVar4 = line_end->z - line_start->z;
  fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
  if (0.0 < fVar3) {
    fVar5 = 1.0 / fVar3;
    fVar1 = fVar1 * fVar5;
    fVar2 = fVar2 * fVar5;
    fVar4 = fVar4 * fVar5;
    fVar5 = (test_point->z * fVar4 + test_point->x * fVar1 + test_point->y * fVar2) -
            (line_start->z * fVar4 + line_start->x * fVar1 + line_start->y * fVar2);
    if (0.0 < fVar5) {
      if (fVar5 < fVar3) {
        fVar1 = test_point->x - (line_start->x + fVar1 * fVar5);
        fVar3 = test_point->y - (line_start->y + fVar2 * fVar5);
        fVar2 = test_point->z - (line_start->z + fVar4 * fVar5);
        return SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      }
      fVar1 = test_point->x - line_end->x;
      fVar2 = test_point->y - line_end->y;
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
      fVar2 = test_point->z - line_end->z;
      goto LAB_005997d5;
    }
  }
  fVar1 = test_point->x - line_start->x;
  fVar2 = test_point->y - line_start->y;
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar2 = test_point->z - line_start->z;
LAB_005997d5:
  return SQRT(fVar2 * fVar2 + fVar1);
}
