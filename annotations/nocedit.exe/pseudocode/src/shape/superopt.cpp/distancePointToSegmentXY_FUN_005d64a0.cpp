// Name: shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0
// Address: 005d64a0
// Address Range: [[005d64a0, 005d64f7]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0 (CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

#include "nocturne.h"

double __cdecl
shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0
          (CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

{
  double dVar1;
  byte bVar2;
  CVector3d *in_stack_00000004;
  uint auStackY_1824 [1524];
  uint local_48;
  uint local_38;
  uint uStack_34;
  double local_30 [4];
  
  bVar2 = 0;
  shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020(in_stack_00000004,segStart,segEnd);
  local_38 = local_48;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8);
  *(uint *)(local_30 + (-(uint)bVar2 - (uint)bVar2)) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)((int)(local_30 + (-(uint)bVar2 - (uint)bVar2)) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  dVar1 = segEnd->x - (double)CONCAT44(uStack_34,local_38);
  local_30[0] = segEnd->y - local_30[0];
  return SQRT(local_30[0] * local_30[0] + dVar1 * dVar1);
}
