// Name: shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10
// Address: 005d6c10
// Address Range: [[005d6c10, 005d6f80]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d *point,CVector3d *segStart,CVector3d *segEnd)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d *point,CVector3d *segStart,CVector3d *segEnd)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
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
  
  if (((point->x == segStart->x) && (point->y == segStart->y)) && (point->z == segStart->z)) {
    return 1;
  }
  if (((point->x == segEnd->x) && (point->y == segEnd->y)) && (point->z == segEnd->z)) {
    return 1;
  }
  if (segStart->x < segEnd->x) {
    local_b0 = *(uint *)&segStart->x;
    uVar1 = *(uint *)((int)&segStart->x + 4);
  }
  else {
    local_b0 = *(uint *)&segEnd->x;
    uVar1 = *(uint *)((int)&segEnd->x + 4);
  }
  if (segEnd->y <= segStart->y) {
    local_c0 = *(uint *)&segEnd->y;
    uVar2 = *(uint *)((int)&segEnd->y + 4);
  }
  else {
    local_c0 = *(uint *)&segStart->y;
    uVar2 = *(uint *)((int)&segStart->y + 4);
  }
  if (segEnd->z <= segStart->z) {
    local_f8 = *(uint *)&segEnd->z;
    uVar3 = *(uint *)((int)&segEnd->z + 4);
  }
  else {
    local_f8 = *(uint *)&segStart->z;
    uVar3 = *(uint *)((int)&segStart->z + 4);
  }
  if (segStart->x <= segEnd->x) {
    local_a8 = *(uint *)&segEnd->x;
    uVar4 = *(uint *)((int)&segEnd->x + 4);
  }
  else {
    local_a8 = *(uint *)&segStart->x;
    uVar4 = *(uint *)((int)&segStart->x + 4);
  }
  if (segStart->y <= segEnd->y) {
    local_f0 = *(uint *)&segEnd->y;
    uVar5 = *(uint *)((int)&segEnd->y + 4);
  }
  else {
    local_f0 = *(uint *)&segStart->y;
    uVar5 = *(uint *)((int)&segStart->y + 4);
  }
  if (segStart->z <= segEnd->z) {
    local_b8 = *(uint *)&segEnd->z;
    uVar6 = *(uint *)((int)&segEnd->z + 4);
  }
  else {
    local_b8 = *(uint *)&segStart->z;
    uVar6 = *(uint *)((int)&segStart->z + 4);
  }
  if ((((double)CONCAT44(uVar1,local_b0) + -0.0001 <= point->x) &&
      (point->x <= (double)CONCAT44(uVar4,local_a8) + 0.0001)) &&
     (((double)CONCAT44(uVar2,local_c0) + -0.0001 <= point->y &&
      (((point->y <= (double)CONCAT44(uVar5,local_f0) + 0.0001 &&
        ((double)CONCAT44(uVar3,local_f8) + -0.0001 <= point->z)) &&
       (point->z <= (double)CONCAT44(uVar6,local_b8) + 0.0001)))))) {
    local_a0 = point->x - segStart->x;
    local_98 = point->y - segStart->y;
    local_90 = point->z - segStart->z;
    pdVar8 = &local_a0;
    puVar9 = local_58;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(uint *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      puVar9 = puVar9 + 1;
    }
    local_88.x._0_4_ = local_58[0];
    local_88.x._4_4_ = local_58[1];
    local_88.y._0_4_ = local_58[2];
    local_88.y._4_4_ = local_58[3];
    local_88.z._0_4_ = local_48;
    local_88.z._4_4_ = local_44;
    local_40 = point->x - segEnd->x;
    local_38 = point->y - segEnd->y;
    local_30 = point->z - segEnd->z;
    pdVar8 = &local_40;
    puVar9 = local_70;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
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
    iVar7 = shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(&local_88,&local_28);
    return iVar7;
  }
  return 0;
}
