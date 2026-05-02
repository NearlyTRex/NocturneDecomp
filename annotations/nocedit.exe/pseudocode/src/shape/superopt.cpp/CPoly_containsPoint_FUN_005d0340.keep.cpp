// Name: shape_superopt.cpp_CPoly_containsPoint_FUN_005d0340
// Address: 005d0340
// MANUAL RECONSTRUCTION
// Address Range: [[005d0340, 005d0cd2]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_containsPoint_FUN_005d0340(CPoly *this_ptr,CVector3d *point)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_containsPoint_FUN_005d0340(CPoly *this_ptr,CVector3d *point)

{
  int iVar2;
  CVert *pCVar2;
  CVert *pCVar3;
  double dVar4;
  double dVar3;
  double local_1d8;
  double local_1d0;
  double local_1b0;
  CVector2d local_1a8;
  CVector2d local_198;
  CVector2d local_188;
  CVector2d local_178;
  int iVar1;
  
  if (0.0 <= (this_ptr->normal).impl.x) {
    local_1d0 = (this_ptr->normal).impl.x;
  }
  else {
    local_1d0 = -(this_ptr->normal).impl.x;
  }
  if ((this_ptr->normal).impl.y < 0.0) {
    local_1d8 = -(this_ptr->normal).impl.y;
  }
  else {
    local_1d8 = (this_ptr->normal).impl.y;
  }
  if ((this_ptr->normal).impl.z < 0.0) {
    local_1b0 = -(this_ptr->normal).impl.z;
  }
  else {
    local_1b0 = (this_ptr->normal).impl.z;
  }
  pCVar3 = this_ptr->parent_obj->vertex_data;
  if ((local_1d0 < local_1d8) || (local_1d0 < local_1b0)) {
    if ((local_1d8 < local_1d0) || (local_1d8 < local_1b0)) {
      if (0.0 <= (this_ptr->normal).impl.z) {
        iVar2 = this_ptr->vertex_idx_0;
        local_1a8.x = pCVar3[iVar2].position.x;
        local_1a8.y = pCVar3[iVar2].position.y;
        iVar2 = this_ptr->vertex_idx_1;
        local_178.x = pCVar3[iVar2].position.x;
        local_178.y = pCVar3[iVar2].position.y;
        iVar2 = this_ptr->vertex_idx_2;
        local_198.x = pCVar3[iVar2].position.x;
        local_198.y = pCVar3[iVar2].position.y;
      }
      else {
        iVar2 = this_ptr->vertex_idx_0;
        local_198.x = pCVar3[iVar2].position.x;
        local_198.y = pCVar3[iVar2].position.y;
        iVar2 = this_ptr->vertex_idx_1;
        local_178.x = pCVar3[iVar2].position.x;
        local_178.y = pCVar3[iVar2].position.y;
        pCVar3 = pCVar3 + this_ptr->vertex_idx_2;
        local_1a8.x = (pCVar3->position).x;
        local_1a8.y = (pCVar3->position).y;
      }
      local_188.x = point->x;
      local_188.y = point->y;
    }
    else {
      if ((this_ptr->normal).impl.y <= 0.0) {
        iVar2 = this_ptr->vertex_idx_0;
        local_1a8.x = pCVar3[iVar2].position.x;
        local_1a8.y = pCVar3[iVar2].position.z;
        iVar2 = this_ptr->vertex_idx_1;
        local_178.x = pCVar3[iVar2].position.x;
        local_178.y = pCVar3[iVar2].position.z;
        pCVar3 = pCVar3 + this_ptr->vertex_idx_2;
        local_198.x = (pCVar3->position).x;
        local_198.y = (pCVar3->position).z;
      }
      else {
        iVar2 = this_ptr->vertex_idx_0;
        local_198.x = pCVar3[iVar2].position.x;
        local_198.y = pCVar3[iVar2].position.z;
        iVar2 = this_ptr->vertex_idx_1;
        local_178.x = pCVar3[iVar2].position.x;
        local_178.y = pCVar3[iVar2].position.z;
        pCVar2 = pCVar3 + this_ptr->vertex_idx_2;
        local_1a8.x = (pCVar2->position).x;
        local_1a8.y = (pCVar2->position).z;
      }
      local_188.x = point->x;
      local_188.y = point->z;
    }
  }
  else {
    if (0.0 <= (this_ptr->normal).impl.x) {
      iVar2 = this_ptr->vertex_idx_0;
      local_1a8.x = pCVar3[iVar2].position.y;
      local_1a8.y = pCVar3[iVar2].position.z;
      iVar2 = this_ptr->vertex_idx_1;
      local_178.x = pCVar3[iVar2].position.y;
      local_178.y = pCVar3[iVar2].position.z;
      iVar2 = this_ptr->vertex_idx_2;
      local_198.x = pCVar3[iVar2].position.y;
      local_198.y = pCVar3[iVar2].position.z;
    }
    else {
      iVar1 = this_ptr->vertex_idx_0;
      local_198.x = pCVar3[iVar1].position.y;
      local_198.y = pCVar3[iVar1].position.z;
      iVar2 = this_ptr->vertex_idx_1;
      local_178.x = pCVar3[iVar2].position.y;
      local_178.y = pCVar3[iVar2].position.z;
      iVar2 = this_ptr->vertex_idx_2;
      local_1a8.x = pCVar3[iVar2].position.y;
      local_1a8.y = pCVar3[iVar2].position.z;
    }
    local_188.x = point->y;
    local_188.y = point->z;
  }
  dVar4 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640(&local_198,&local_178,&local_188);
  if (dVar4 <= 0.0) {
    dVar4 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                      (&local_178,&local_1a8,&local_188);
    if (dVar4 <= 0.0) {
      dVar3 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                        (&local_1a8,&local_198,&local_188);
      if (dVar3 <= 0.0) {
        return 1;
      }
    }
  }
  return 0;
}
