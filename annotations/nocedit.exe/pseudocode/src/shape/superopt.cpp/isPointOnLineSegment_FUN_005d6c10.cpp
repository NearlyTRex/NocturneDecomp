// Name: shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10
// Address: 005d6c10
// Address Range: [[005d6c10, 005d6f80]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d *point,CVector3d *seg_start,CVector3d *seg_end)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d *point,CVector3d *seg_start,CVector3d *seg_end)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar1;
  double *pdVar2;
  double *pdVar8;
  uint *puVar3;
  uint *puVar9;
  uint local_f8;
  uint local_f0;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  double local_a0;
  double local_98;
  double local_90;
  CVector3d local_88;
  uint local_70 [4];
  uint local_60;
  uint local_5c;
  uint local_58 [4];
  uint local_48;
  uint local_44;
  double local_40;
  double local_38;
  double local_30;
  CVector3d local_28;
  
  if (((point->x == seg_start->x) && (point->y == seg_start->y)) && (point->z == seg_start->z)) {
    return 1;
  }
  if (((point->x == seg_end->x) && (point->y == seg_end->y)) && (point->z == seg_end->z)) {
    return 1;
  }
  if (seg_start->x < seg_end->x) {
    local_b0 = *(uint *)&seg_start->x;
    uVar1 = *(uint *)((int)&seg_start->x + 4);
  }
  else {
    local_b0 = *(uint *)&seg_end->x;
    uVar1 = *(uint *)((int)&seg_end->x + 4);
  }
  if (seg_end->y <= seg_start->y) {
    local_c0 = *(uint *)&seg_end->y;
    uVar2 = *(uint *)((int)&seg_end->y + 4);
  }
  else {
    local_c0 = *(uint *)&seg_start->y;
    uVar2 = *(uint *)((int)&seg_start->y + 4);
  }
  if (seg_end->z <= seg_start->z) {
    local_f8 = *(uint *)&seg_end->z;
    uVar3 = *(uint *)((int)&seg_end->z + 4);
  }
  else {
    local_f8 = *(uint *)&seg_start->z;
    uVar3 = *(uint *)((int)&seg_start->z + 4);
  }
  if (seg_start->x <= seg_end->x) {
    local_a8 = *(uint *)&seg_end->x;
    uVar4 = *(uint *)((int)&seg_end->x + 4);
  }
  else {
    local_a8 = *(uint *)&seg_start->x;
    uVar4 = *(uint *)((int)&seg_start->x + 4);
  }
  if (seg_start->y <= seg_end->y) {
    local_f0 = *(uint *)&seg_end->y;
    uVar5 = *(uint *)((int)&seg_end->y + 4);
  }
  else {
    local_f0 = *(uint *)&seg_start->y;
    uVar5 = *(uint *)((int)&seg_start->y + 4);
  }
  if (seg_start->z <= seg_end->z) {
    local_b8 = *(uint *)&seg_end->z;
    uVar6 = *(uint *)((int)&seg_end->z + 4);
  }
  else {
    local_b8 = *(uint *)&seg_start->z;
    uVar6 = *(uint *)((int)&seg_start->z + 4);
  }
  if (((__BITCAST_DOUBLE(CONCAT44(uVar1,local_b0)) + -0.0001 <= point->x) &&
      (point->x <= __BITCAST_DOUBLE(CONCAT44(uVar4,local_a8)) + 0.0001)) &&
     ((__BITCAST_DOUBLE(CONCAT44(uVar2,local_c0)) + -0.0001 <= point->y &&
      (((point->y <= __BITCAST_DOUBLE(CONCAT44(uVar5,local_f0)) + 0.0001 &&
        (__BITCAST_DOUBLE(CONCAT44(uVar3,local_f8)) + -0.0001 <= point->z)) &&
       (point->z <= __BITCAST_DOUBLE(CONCAT44(uVar6,local_b8)) + 0.0001)))))) {
    local_a0 = point->x - seg_start->x;
    local_98 = point->y - seg_start->y;
    local_90 = point->z - seg_start->z;
    pdVar2 = &local_a0;
    puVar3 = local_58;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar3 = *(uint *)pdVar2;
      pdVar2 = (double *)((int)pdVar2 + 4);
      puVar3 = puVar3 + 1;
    }
    local_88.x._0_4_ = local_58[0];
    local_88.x._4_4_ = local_58[1];
    local_88.y._0_4_ = local_58[2];
    local_88.y._4_4_ = local_58[3];
    local_88.z._0_4_ = local_48;
    local_88.z._4_4_ = local_44;
    local_40 = point->x - seg_end->x;
    local_38 = point->y - seg_end->y;
    local_30 = point->z - seg_end->z;
    pdVar8 = &local_40;
    puVar9 = local_70;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar9 = *(uint *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      puVar9 = puVar9 + 1;
    }
    local_28.x._0_4_ = local_70[0];
    local_28.x._4_4_ = local_70[1];
    local_28.y._0_4_ = local_70[2];
    local_28.y._4_4_ = local_70[3];
    local_28.z._0_4_ = local_60;
    local_28.z._4_4_ = local_5c;
    iVar1 = shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(&local_88,&local_28);
    return iVar1;
  }
  return 0;
}
