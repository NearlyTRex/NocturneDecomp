// Name: shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0
// Address: 005d64a0
// Address Range: [[005d64a0, 005d64f7]]
// Convention: __cdecl
// Signature: double shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d * segStart, CVector3d * segEnd, CVector3d * point)

#include "nocturne.h"

double __cdecl
shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0
          (CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

{
  BADSPACEBASE *in_ESP;
  uint *puVar1;
  byte bVar2;
  CVector3d *in_stack_00000004;
  uint auStackY_1820 [1523];
  uint uStack_44;
  uint local_38;
  ulonglong uStack_34;
  double dStack_2c;
  
  bVar2 = 0;
  shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020(in_stack_00000004,segStart,segEnd);
  local_38 = uStack_44;
  puVar1 = (uint *)((int)&uStack_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 4);
  *(uint *)(&uStack_34 + -(uint)bVar2) = *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8);
  *puVar1 = *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  uStack_34 = segEnd->x - uStack_34;
  dStack_2c = segEnd->y - dStack_2c;
  return SQRT(dStack_2c * dStack_2c + uStack_34 * uStack_34);
}
