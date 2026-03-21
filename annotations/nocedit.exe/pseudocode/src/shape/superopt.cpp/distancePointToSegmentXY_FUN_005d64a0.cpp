// Name: shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0
// Address: 005d64a0
// Address Range: [[005d64a0, 005d64f7]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

{
  double dVar1;
  double dVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1824 [1524];
  CVector2d local_48;
  uint local_38;
  uint uStack_34;
  double local_30 [4];
  
  bVar4 = 0;
  shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020(segStart,segEnd,point,&local_48);
  local_38 = local_48.x._0_4_;
  puVar3 = (uint *)((int)&local_48 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)local_30 + (uint)bVar4 * -8 + -4) =
       *(uint *)((int)&local_48 + (uint)bVar4 * -8 + 4);
  *(uint *)(local_30 + (-(uint)bVar4 - (uint)bVar4)) = *puVar3;
  *(uint *)((int)(local_30 + (-(uint)bVar4 - (uint)bVar4)) + ((uint)bVar4 * -2 + 1) * 4) =
       puVar3[(uint)bVar4 * -2 + 1];
  dVar1 = point->x - __BITCAST_DOUBLE(CONCAT44(uStack_34,local_38));
  dVar2 = point->y - local_30[0];
  return SQRT(dVar2 * dVar2 + dVar1 * dVar1);
}
