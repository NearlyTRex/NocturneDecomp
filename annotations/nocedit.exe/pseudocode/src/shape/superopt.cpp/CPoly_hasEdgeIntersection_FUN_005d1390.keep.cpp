// Name: shape_superopt.cpp_CPoly_hasEdgeIntersection_FUN_005d1390
// Address: 005d1390
// MANUAL RECONSTRUCTION
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
  CVector2d local_190;
  CVector2d local_180;
  CVector2d local_170;
  CVector2d local_160;
  CVector2d local_150;
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
      local_180.x = (pCVar4->position).x;
      local_180.y = (pCVar4->position).y;
      local_1a0.x = (pCVar6->position).x;
      local_1a0.y = (pCVar6->position).y;
      local_190.x = (pCVar7->position).x;
      local_190.y = (pCVar7->position).y;
      local_150.x = (pCVar1->position).x;
      local_150.y = (pCVar1->position).y;
      local_170.x = (pCVar2->position).x;
      local_170.y = (pCVar2->position).y;
      local_160.x = (pCVar5->position).x;
      local_160.y = (pCVar5->position).y;
    }
    else {
      local_180.x = (pCVar4->position).x;
      local_180.y = (pCVar4->position).z;
      local_1a0.x = (pCVar6->position).x;
      local_1a0.y = (pCVar6->position).z;
      local_190.x = (pCVar7->position).x;
      local_190.y = (pCVar7->position).z;
      local_150.x = (pCVar1->position).x;
      local_150.y = (pCVar1->position).z;
      local_170.x = (pCVar2->position).x;
      local_170.y = (pCVar2->position).z;
      local_160.x = (pCVar5->position).x;
      local_160.y = (pCVar5->position).z;
    }
  }
  else {
    local_180.x = (pCVar4->position).y;
    local_180.y = (pCVar4->position).z;
    local_1a0.x = (pCVar6->position).y;
    local_1a0.y = (pCVar6->position).z;
    local_190.x = (pCVar7->position).y;
    local_190.y = (pCVar7->position).z;
    local_150.x = (pCVar1->position).y;
    local_150.y = (pCVar1->position).z;
    local_170.x = (pCVar2->position).y;
    local_170.y = (pCVar2->position).z;
    local_160.x = (pCVar5->position).y;
    local_160.y = (pCVar5->position).z;
  }
  if (((((((local_180.x ==
            local_170.x) &&
          (local_180.y ==
           local_170.y)) ||
         ((local_1a0.x ==
           local_150.x &&
          (local_1a0.y ==
           local_150.y)))) ||
        (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                           (&local_180,&local_1a0,&local_150,&local_170), iVar4 == 0)) &&
       (((local_180.x ==
          local_160.x &&
         (local_180.y ==
          local_160.y)) ||
        (((local_1a0.x ==
           local_170.x &&
          (local_1a0.y ==
           local_170.y)) ||
         (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                            (&local_180,&local_1a0,&local_170,&local_160), iVar9 == 0)))
        ))) && ((((((local_180.x ==
                     local_150.x &&
                    (local_180.y ==
                     local_150.y)) ||
                   ((local_1a0.x ==
                     local_160.x &&
                    (local_1a0.y ==
                     local_160.y)))) ||
                  (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                     (&local_180,&local_1a0,&local_160,&local_150),
                  iVar9 == 0)) &&
                 ((((local_1a0.x ==
                     local_160.x &&
                    (local_1a0.y ==
                     local_160.y)) ||
                   (((local_190.x ==
                      local_170.x &&
                     (local_190.y ==
                      local_170.y)) ||
                    (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                       (&local_1a0,&local_190,&local_170,
                                        &local_160), iVar9 == 0)))) &&
                  (((((local_1a0.x ==
                       local_150.x &&
                      (local_1a0.y ==
                       local_150.y)) ||
                     ((local_190.x ==
                       local_160.x &&
                      (local_190.y ==
                       local_160.y)))) ||
                    (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                       (&local_1a0,&local_190,&local_160,
                                        &local_150), iVar9 == 0)) &&
                   (((((local_1a0.x ==
                        local_170.x &&
                       (local_1a0.y ==
                        local_170.y)) ||
                      ((local_190.x ==
                        local_150.x &&
                       (local_190.y ==
                        local_150.y)))) ||
                     (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                        (&local_1a0,&local_190,&local_150,&local_170),
                     iVar9 == 0)) &&
                    ((((local_190.x ==
                        local_150.x &&
                       (local_190.y ==
                        local_150.y)) ||
                      ((local_180.x ==
                        local_160.x &&
                       (local_180.y ==
                        local_160.y)))) ||
                     (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                        (&local_190,&local_180,&local_160,
                                         &local_150), iVar9 == 0)))))))))) &&
                (((local_190.x ==
                   local_170.x &&
                  (local_190.y ==
                   local_170.y)) ||
                 (((local_180.x ==
                    local_150.x &&
                   (local_180.y ==
                    local_150.y)) ||
                  (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                     (&local_190,&local_180,&local_150,&local_170),
                  iVar9 == 0)))))))) &&
     ((((local_190.x == local_160.x
        && (local_190.y == local_160.y)) ||
       ((local_180.x ==
         local_170.x &&
        (local_180.y ==
         local_170.y)))) ||
      (iVar9 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                         (&local_190,&local_180,&local_170,&local_160),
      iVar9 == 0)))) {
    return 0;
  }
  return 1;
}
