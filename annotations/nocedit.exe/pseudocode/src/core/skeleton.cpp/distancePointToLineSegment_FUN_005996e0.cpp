// Name: core_skeleton.cpp_distancePointToLineSegment_FUN_005996e0
// Address: 005996e0
// Address Range: [[005996e0, 0059987d]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_distancePointToLineSegment_FUN_005996e0(CVector3f *line_start,CVector3f *line_end,CVector3f *test_point)

#include "nocturne.h"

float __cdecl core_skeleton_cpp_distancePointToLineSegment_FUN_005996e0(CVector3f *line_start,CVector3f *line_end,CVector3f *test_point)

{
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar5;
  float fVar1;
  float fVar4;
  float fVar2;
  float fVar3;
  
  fVar1 = line_end->x - line_start->x;
  fVar2 = line_end->y - line_start->y;
  fVar4 = line_end->z - line_start->z;
  fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
  if (0.0 < fVar3) {
    fVar5 = 1.0 / fVar3;
    fVar6 = fVar1 * fVar5;
    fVar7 = fVar2 * fVar5;
    fVar8 = fVar4 * fVar5;
    fVar9 = (test_point->z * fVar8 + test_point->x * fVar6 + test_point->y * fVar7) -
            (line_start->z * fVar8 + line_start->x * fVar6 + line_start->y * fVar7);
    if (0.0 < fVar9) {
      if (fVar9 < fVar3) {
        fVar6 = test_point->x - (line_start->x + fVar6 * fVar9);
        fVar10 = test_point->y - (line_start->y + fVar7 * fVar9);
        fVar7 = test_point->z - (line_start->z + fVar8 * fVar9);
        return SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar6 * fVar6);
      }
      fVar6 = test_point->x - line_end->x;
      fVar7 = test_point->y - line_end->y;
      fVar6 = fVar7 * fVar7 + fVar6 * fVar6;
      fVar7 = test_point->z - line_end->z;
      goto LAB_005997d5;
    }
  }
  fVar6 = test_point->x - line_start->x;
  fVar7 = test_point->y - line_start->y;
  fVar6 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar7 = test_point->z - line_start->z;
LAB_005997d5:
  return SQRT(fVar7 * fVar7 + fVar6);
}
