// Name: shape_superopt.cpp_CPoly_hasEdgeIntersection_FUN_005d1390
// Address: 005d1390
// Address Range: [[005d1390, 005d1f9a]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_hasEdgeIntersection_FUN_005d1390(CPoly *this_ptr,CPoly *other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_hasEdgeIntersection_FUN_005d1390(CPoly *this_ptr,CPoly *other)

{
  CVert *pCVar4;
  CVert *pCVar6;
  CVert *pCVar7;
  CVert *pCVar8;
  int iVar4;
  int iVar9;
  CVert *pCVar5;
  double local_1d0;
  double local_1c8;
  double local_1b0;
  CVector2d local_1a0;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  CVector2d local_180;
  CVector2d local_170;
  byte local_160 [8];
  int local_158;
  int local_154;
  CVector2d local_150;
  int local_128;
  int local_124;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_c0;
  int local_bc;
  int local_90;
  int local_8c;
  int local_70;
  int local_6c;
  int local_50;
  int local_4c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_20;
  CVert *local_1c;
  CVert *local_18;
  CVert *pCVar3;
  CVert *pCVar2;
  CVert *pCVar1;
  
  if (0.0 <= (this_ptr->normal).impl.x) {
    local_1d0 = (this_ptr->normal).impl.x;
  }
  else {
    local_1d0 = -(this_ptr->normal).impl.x;
  }
  if ((this_ptr->normal).impl.y < 0.0) {
    local_1c8 = -(this_ptr->normal).impl.y;
  }
  else {
    local_1c8 = (this_ptr->normal).impl.y;
  }
  if ((this_ptr->normal).impl.z < 0.0) {
    local_1b0 = -(this_ptr->normal).impl.z;
  }
  else {
    local_1b0 = (this_ptr->normal).impl.z;
  }
  pCVar3 = this_ptr->parent_obj->vertex_data;
  pCVar4 = pCVar3 + this_ptr->vertex_idx_0;
  pCVar6 = pCVar3 + this_ptr->vertex_idx_1;
  pCVar7 = pCVar3 + this_ptr->vertex_idx_2;
  pCVar8 = other->parent_obj->vertex_data;
  pCVar1 = pCVar8 + other->vertex_idx_0;
  pCVar2 = pCVar8 + other->vertex_idx_1;
  pCVar5 = pCVar8 + other->vertex_idx_2;
  if ((local_1d0 < local_1c8) || (local_1d0 < local_1b0)) {
    if ((local_1c8 < local_1d0) || (local_1c8 < local_1b0)) {
      local_180.x._0_4_ = *(uint *)&(pCVar4->position).x;
      local_180.x._4_4_ = *(uint *)((int)&(pCVar4->position).x + 4);
      local_180.y._0_4_ = *(uint *)&(pCVar4->position).y;
      local_180.y._4_4_ = *(uint *)((int)&(pCVar4->position).y + 4);
      local_1a0.x._0_4_ = *(uint *)&(pCVar6->position).x;
      local_1a0.x._4_4_ = *(uint *)((int)&(pCVar6->position).x + 4);
      local_1a0.y._0_4_ = *(uint *)&(pCVar6->position).y;
      local_1a0.y._4_4_ = *(uint *)((int)&(pCVar6->position).y + 4);
      local_190 = *(int *)&(pCVar7->position).x;
      local_18c = *(int *)((int)&(pCVar7->position).x + 4);
      local_188 = *(int *)&(pCVar7->position).y;
      local_184 = *(int *)((int)&(pCVar7->position).y + 4);
      local_150.x._0_4_ = *(uint *)&(pCVar1->position).x;
      local_150.x._4_4_ = *(uint *)((int)&(pCVar1->position).x + 4);
      local_150.y._0_4_ = *(uint *)&(pCVar1->position).y;
      local_150.y._4_4_ = *(uint *)((int)&(pCVar1->position).y + 4);
      local_170.x._0_4_ = *(uint *)&(pCVar2->position).x;
      local_170.x._4_4_ = *(uint *)((int)&(pCVar2->position).x + 4);
      local_170.y._0_4_ = *(uint *)&(pCVar2->position).y;
      local_170.y._4_4_ = *(uint *)((int)&(pCVar2->position).y + 4);
      local_160._0_4_ = *(uint *)&(pCVar5->position).x;
      local_160._4_4_ = *(uint *)((int)&(pCVar5->position).x + 4);
      local_158 = *(int *)&(pCVar5->position).y;
      local_154 = *(int *)((int)&(pCVar5->position).y + 4);
    }
    else {
      local_180.x._0_4_ = *(uint *)&(pCVar4->position).x;
      local_180.x._4_4_ = *(uint *)((int)&(pCVar4->position).x + 4);
      local_180.y._0_4_ = *(uint *)&(pCVar4->position).z;
      local_180.y._4_4_ = *(uint *)((int)&(pCVar4->position).z + 4);
      local_1a0.x._0_4_ = *(uint *)&(pCVar6->position).x;
      local_1a0.x._4_4_ = *(uint *)((int)&(pCVar6->position).x + 4);
      local_1a0.y._0_4_ = *(uint *)&(pCVar6->position).z;
      local_1a0.y._4_4_ = *(uint *)((int)&(pCVar6->position).z + 4);
      local_190 = *(int *)&(pCVar7->position).x;
      local_18c = *(int *)((int)&(pCVar7->position).x + 4);
      local_188 = *(int *)&(pCVar7->position).z;
      local_184 = *(int *)((int)&(pCVar7->position).z + 4);
      local_150.x._0_4_ = *(uint *)&(pCVar1->position).x;
      local_150.x._4_4_ = *(uint *)((int)&(pCVar1->position).x + 4);
      local_150.y._0_4_ = *(uint *)&(pCVar1->position).z;
      local_150.y._4_4_ = *(uint *)((int)&(pCVar1->position).z + 4);
      local_170.x._0_4_ = *(uint *)&(pCVar2->position).x;
      local_170.x._4_4_ = *(uint *)((int)&(pCVar2->position).x + 4);
      local_170.y._0_4_ = *(uint *)&(pCVar2->position).z;
      local_170.y._4_4_ = *(uint *)((int)&(pCVar2->position).z + 4);
      local_160._0_4_ = *(uint *)&(pCVar5->position).x;
      local_160._4_4_ = *(uint *)((int)&(pCVar5->position).x + 4);
      local_158 = *(int *)&(pCVar5->position).z;
      local_154 = *(int *)((int)&(pCVar5->position).z + 4);
    }
  }
  else {
    local_180.x._0_4_ = *(uint *)&(pCVar4->position).y;
    local_180.x._4_4_ = *(uint *)((int)&(pCVar4->position).y + 4);
    local_180.y._0_4_ = *(uint *)&(pCVar4->position).z;
    local_180.y._4_4_ = *(uint *)((int)&(pCVar4->position).z + 4);
    local_1a0.x._0_4_ = *(uint *)&(pCVar6->position).y;
    local_1a0.x._4_4_ = *(uint *)((int)&(pCVar6->position).y + 4);
    local_1a0.y._0_4_ = *(uint *)&(pCVar6->position).z;
    local_1a0.y._4_4_ = *(uint *)((int)&(pCVar6->position).z + 4);
    local_190 = *(int *)&(pCVar7->position).y;
    local_18c = *(int *)((int)&(pCVar7->position).y + 4);
    local_188 = *(int *)&(pCVar7->position).z;
    local_184 = *(int *)((int)&(pCVar7->position).z + 4);
    local_150.x._0_4_ = *(uint *)&(pCVar1->position).y;
    local_150.x._4_4_ = *(uint *)((int)&(pCVar1->position).y + 4);
    local_150.y._0_4_ = *(uint *)&(pCVar1->position).z;
    local_150.y._4_4_ = *(uint *)((int)&(pCVar1->position).z + 4);
    local_170.x._0_4_ = *(uint *)&(pCVar2->position).y;
    local_170.x._4_4_ = *(uint *)((int)&(pCVar2->position).y + 4);
    local_170.y._0_4_ = *(uint *)&(pCVar2->position).z;
    local_170.y._4_4_ = *(uint *)((int)&(pCVar2->position).z + 4);
    local_160._0_4_ = *(uint *)&(pCVar5->position).y;
    local_160._4_4_ = *(uint *)((int)&(pCVar5->position).y + 4);
    local_158 = *(int *)&(pCVar5->position).z;
    local_154 = *(int *)((int)&(pCVar5->position).z + 4);
  }
  if (((((((__BITCAST_DOUBLE(CONCAT44(local_180.x._4_4_,local_180.x._0_4_)) ==
            __BITCAST_DOUBLE(CONCAT44(local_170.x._4_4_,local_170.x._0_4_))) &&
          (__BITCAST_DOUBLE(CONCAT44(local_180.y._4_4_,local_180.y._0_4_)) ==
           __BITCAST_DOUBLE(CONCAT44(local_170.y._4_4_,local_170.y._0_4_)))) ||
         ((__BITCAST_DOUBLE(CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_)) ==
           __BITCAST_DOUBLE(CONCAT44(local_150.x._4_4_,local_150.x._0_4_)) &&
          (__BITCAST_DOUBLE(CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_)) ==
           __BITCAST_DOUBLE(CONCAT44(local_150.y._4_4_,local_150.y._0_4_)))))) ||
        (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                           (&local_180,&local_1a0,&local_150,&local_170), iVar4 == 0)) &&
       (((__BITCAST_DOUBLE(CONCAT44(local_180.x._4_4_,local_180.x._0_4_)) ==
          __BITCAST_DOUBLE(CONCAT44(local_160._4_4_,local_160._0_4_)) &&
         (__BITCAST_DOUBLE(CONCAT44(local_180.y._4_4_,local_180.y._0_4_)) ==
          __BITCAST_DOUBLE(CONCAT44(local_154,local_158)))) ||
        (((__BITCAST_DOUBLE(CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_)) ==
           __BITCAST_DOUBLE(CONCAT44(local_170.x._4_4_,local_170.x._0_4_)) &&
          (__BITCAST_DOUBLE(CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_)) ==
           __BITCAST_DOUBLE(CONCAT44(local_170.y._4_4_,local_170.y._0_4_)))) ||
         (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                            (&local_180,&local_1a0,&local_170,(CVector2d *)local_160), iVar9 == 0)))
        ))) && ((((((__BITCAST_DOUBLE(CONCAT44(local_180.x._4_4_,local_180.x._0_4_)) ==
                     __BITCAST_DOUBLE(CONCAT44(local_150.x._4_4_,local_150.x._0_4_)) &&
                    (__BITCAST_DOUBLE(CONCAT44(local_180.y._4_4_,local_180.y._0_4_)) ==
                     __BITCAST_DOUBLE(CONCAT44(local_150.y._4_4_,local_150.y._0_4_)))) ||
                   ((__BITCAST_DOUBLE(CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_)) ==
                     __BITCAST_DOUBLE(CONCAT44(local_160._4_4_,local_160._0_4_)) &&
                    (__BITCAST_DOUBLE(CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_)) ==
                     __BITCAST_DOUBLE(CONCAT44(local_154,local_158)))))) ||
                  (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                     (&local_180,&local_1a0,(CVector2d *)local_160,&local_150),
                  iVar9 == 0)) &&
                 ((((__BITCAST_DOUBLE(CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_)) ==
                     __BITCAST_DOUBLE(CONCAT44(local_160._4_4_,local_160._0_4_)) &&
                    (__BITCAST_DOUBLE(CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_)) ==
                     __BITCAST_DOUBLE(CONCAT44(local_154,local_158)))) ||
                   (((__BITCAST_DOUBLE(CONCAT44(local_18c,local_190)) ==
                      __BITCAST_DOUBLE(CONCAT44(local_170.x._4_4_,local_170.x._0_4_)) &&
                     (__BITCAST_DOUBLE(CONCAT44(local_184,local_188)) ==
                      __BITCAST_DOUBLE(CONCAT44(local_170.y._4_4_,local_170.y._0_4_)))) ||
                    (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                       (&local_1a0,(CVector2d *)&local_190,&local_170,
                                        (CVector2d *)local_160), iVar9 == 0)))) &&
                  (((((__BITCAST_DOUBLE(CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_)) ==
                       __BITCAST_DOUBLE(CONCAT44(local_150.x._4_4_,local_150.x._0_4_)) &&
                      (__BITCAST_DOUBLE(CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_)) ==
                       __BITCAST_DOUBLE(CONCAT44(local_150.y._4_4_,local_150.y._0_4_)))) ||
                     ((__BITCAST_DOUBLE(CONCAT44(local_18c,local_190)) ==
                       __BITCAST_DOUBLE(CONCAT44(local_160._4_4_,local_160._0_4_)) &&
                      (__BITCAST_DOUBLE(CONCAT44(local_184,local_188)) ==
                       __BITCAST_DOUBLE(CONCAT44(local_154,local_158)))))) ||
                    (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                       (&local_1a0,(CVector2d *)&local_190,(CVector2d *)local_160,
                                        &local_150), iVar9 == 0)) &&
                   (((((__BITCAST_DOUBLE(CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_)) ==
                        __BITCAST_DOUBLE(CONCAT44(local_170.x._4_4_,local_170.x._0_4_)) &&
                       (__BITCAST_DOUBLE(CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_)) ==
                        __BITCAST_DOUBLE(CONCAT44(local_170.y._4_4_,local_170.y._0_4_)))) ||
                      ((__BITCAST_DOUBLE(CONCAT44(local_18c,local_190)) ==
                        __BITCAST_DOUBLE(CONCAT44(local_150.x._4_4_,local_150.x._0_4_)) &&
                       (__BITCAST_DOUBLE(CONCAT44(local_184,local_188)) ==
                        __BITCAST_DOUBLE(CONCAT44(local_150.y._4_4_,local_150.y._0_4_)))))) ||
                     (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                        (&local_1a0,(CVector2d *)&local_190,&local_150,&local_170),
                     iVar9 == 0)) &&
                    ((((__BITCAST_DOUBLE(CONCAT44(local_18c,local_190)) ==
                        __BITCAST_DOUBLE(CONCAT44(local_150.x._4_4_,local_150.x._0_4_)) &&
                       (__BITCAST_DOUBLE(CONCAT44(local_184,local_188)) ==
                        __BITCAST_DOUBLE(CONCAT44(local_150.y._4_4_,local_150.y._0_4_)))) ||
                      ((__BITCAST_DOUBLE(CONCAT44(local_180.x._4_4_,local_180.x._0_4_)) ==
                        __BITCAST_DOUBLE(CONCAT44(local_160._4_4_,local_160._0_4_)) &&
                       (__BITCAST_DOUBLE(CONCAT44(local_180.y._4_4_,local_180.y._0_4_)) ==
                        __BITCAST_DOUBLE(CONCAT44(local_154,local_158)))))) ||
                     (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                        ((CVector2d *)&local_190,&local_180,(CVector2d *)local_160,
                                         &local_150), iVar9 == 0)))))))))) &&
                (((__BITCAST_DOUBLE(CONCAT44(local_18c,local_190)) ==
                   __BITCAST_DOUBLE(CONCAT44(local_170.x._4_4_,local_170.x._0_4_)) &&
                  (__BITCAST_DOUBLE(CONCAT44(local_184,local_188)) ==
                   __BITCAST_DOUBLE(CONCAT44(local_170.y._4_4_,local_170.y._0_4_)))) ||
                 (((__BITCAST_DOUBLE(CONCAT44(local_180.x._4_4_,local_180.x._0_4_)) ==
                    __BITCAST_DOUBLE(CONCAT44(local_150.x._4_4_,local_150.x._0_4_)) &&
                   (__BITCAST_DOUBLE(CONCAT44(local_180.y._4_4_,local_180.y._0_4_)) ==
                    __BITCAST_DOUBLE(CONCAT44(local_150.y._4_4_,local_150.y._0_4_)))) ||
                  (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                     ((CVector2d *)&local_190,&local_180,&local_150,&local_170),
                  iVar9 == 0)))))))) &&
     ((((__BITCAST_DOUBLE(CONCAT44(local_18c,local_190)) == __BITCAST_DOUBLE(CONCAT44(local_160._4_4_,local_160._0_4_))
        && (__BITCAST_DOUBLE(CONCAT44(local_184,local_188)) == __BITCAST_DOUBLE(CONCAT44(local_154,local_158)))) ||
       ((__BITCAST_DOUBLE(CONCAT44(local_180.x._4_4_,local_180.x._0_4_)) ==
         __BITCAST_DOUBLE(CONCAT44(local_170.x._4_4_,local_170.x._0_4_)) &&
        (__BITCAST_DOUBLE(CONCAT44(local_180.y._4_4_,local_180.y._0_4_)) ==
         __BITCAST_DOUBLE(CONCAT44(local_170.y._4_4_,local_170.y._0_4_)))))) ||
      (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                         ((CVector2d *)&local_190,&local_180,&local_170,(CVector2d *)local_160),
      iVar9 == 0)))) {
    return 0;
  }
  return 1;
}
