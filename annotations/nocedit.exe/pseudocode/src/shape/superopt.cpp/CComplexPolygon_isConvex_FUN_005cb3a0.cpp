// Name: shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0
// Address: 005cb3a0
// Address Range: [[005cb3a0, 005cbb36]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  bool bVar1;
  bool bVar2;
  SExpandedEdge *pSVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar3;
  int local_180;
  double local_170;
  double local_168;
  double local_160;
  int local_148;
  CVector3d local_140;
  CVector2d local_128;
  CVector2d local_118;
  CVector2d local_108;
  CVector2d local_f8;
  double local_40;
  SExpandedEdge *local_20;
  int local_1c;
  int local_18;
  
  shape_superopt_cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40
            (this_ptr,&local_140,edges,edge_count);
  if (local_140.z * (this_ptr->normal).z +
      local_140.x * (this_ptr->normal).x + local_140.y * (this_ptr->normal).y < 0.0) {
    return 0;
  }
  if (0.0 <= (this_ptr->normal).x) {
    local_160 = (this_ptr->normal).x;
  }
  else {
    local_160 = -(this_ptr->normal).x;
  }
  if ((this_ptr->normal).y < 0.0) {
    local_170 = -(this_ptr->normal).y;
  }
  else {
    local_170 = (this_ptr->normal).y;
  }
  if ((this_ptr->normal).z < 0.0) {
    local_168 = -(this_ptr->normal).z;
  }
  else {
    local_168 = (this_ptr->normal).z;
  }
  if ((local_160 < local_170) || (local_160 < local_168)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((local_170 < local_160) || (local_170 < local_168)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = 0;
  if (edge_count != 0) {
    local_20 = edges;
    do {
      if (bVar2) {
        local_128.x._0_4_ = *(uint *)&(local_20->start_pos).y;
        local_128.x._4_4_ = *(uint *)((int)&(local_20->start_pos).y + 4);
        local_128.y._0_4_ = *(uint *)&(local_20->start_pos).z;
        local_128.y._4_4_ = *(uint *)((int)&(local_20->start_pos).z + 4);
        local_108.x._0_4_ = *(uint *)&(local_20->end_pos).y;
        local_108.x._4_4_ = *(uint *)((int)&(local_20->end_pos).y + 4);
        local_108.y._0_4_ = *(uint *)&(local_20->end_pos).z;
        local_108.y._4_4_ = *(uint *)((int)&(local_20->end_pos).z + 4);
      }
      else if (bVar1) {
        local_128.x._0_4_ = *(uint *)&(local_20->start_pos).x;
        local_128.x._4_4_ = *(uint *)((int)&(local_20->start_pos).x + 4);
        local_128.y._0_4_ = *(uint *)&(local_20->start_pos).z;
        local_128.y._4_4_ = *(uint *)((int)&(local_20->start_pos).z + 4);
        local_108.x._0_4_ = *(uint *)&(local_20->end_pos).x;
        local_108.x._4_4_ = *(uint *)((int)&(local_20->end_pos).x + 4);
        local_108.y._0_4_ = *(uint *)&(local_20->end_pos).z;
        local_108.y._4_4_ = *(uint *)((int)&(local_20->end_pos).z + 4);
      }
      else {
        local_128.x._0_4_ = *(uint *)&(local_20->start_pos).x;
        local_128.x._4_4_ = *(uint *)((int)&(local_20->start_pos).x + 4);
        local_128.y._0_4_ = *(uint *)&(local_20->start_pos).y;
        local_128.y._4_4_ = *(uint *)((int)&(local_20->start_pos).y + 4);
        local_108.x._0_4_ = *(uint *)&(local_20->end_pos).x;
        local_108.x._4_4_ = *(uint *)((int)&(local_20->end_pos).x + 4);
        local_108.y._0_4_ = *(uint *)&(local_20->end_pos).y;
        local_108.y._4_4_ = *(uint *)((int)&(local_20->end_pos).y + 4);
      }
      uVar2 = 0;
      pSVar1 = edges;
      if (edge_count != 0) {
        do {
          if (uVar2 != uVar3) {
            if (bVar2) {
              local_f8.x._0_4_ = *(uint *)&(pSVar1->start_pos).y;
              local_f8.x._4_4_ = *(uint *)((int)&(pSVar1->start_pos).y + 4);
              local_f8.y._0_4_ = *(uint *)&(pSVar1->start_pos).z;
              local_f8.y._4_4_ = *(uint *)((int)&(pSVar1->start_pos).z + 4);
              local_118.x._0_4_ = *(uint *)&(pSVar1->end_pos).y;
              local_118.x._4_4_ = *(uint *)((int)&(pSVar1->end_pos).y + 4);
              local_118.y._0_4_ = *(uint *)&(pSVar1->end_pos).z;
              local_118.y._4_4_ = *(uint *)((int)&(pSVar1->end_pos).z + 4);
            }
            else if (bVar1) {
              local_f8.x._0_4_ = *(uint *)&(pSVar1->start_pos).x;
              local_f8.x._4_4_ = *(uint *)((int)&(pSVar1->start_pos).x + 4);
              local_f8.y._0_4_ = *(uint *)&(pSVar1->start_pos).z;
              local_f8.y._4_4_ = *(uint *)((int)&(pSVar1->start_pos).z + 4);
              local_118.x._0_4_ = *(uint *)&(pSVar1->end_pos).x;
              local_118.x._4_4_ = *(uint *)((int)&(pSVar1->end_pos).x + 4);
              local_118.y._0_4_ = *(uint *)&(pSVar1->end_pos).z;
              local_118.y._4_4_ = *(uint *)((int)&(pSVar1->end_pos).z + 4);
            }
            else {
              local_f8.x._0_4_ = *(uint *)&(pSVar1->start_pos).x;
              local_f8.x._4_4_ = *(uint *)((int)&(pSVar1->start_pos).x + 4);
              local_f8.y._0_4_ = *(uint *)&(pSVar1->start_pos).y;
              local_f8.y._4_4_ = *(uint *)((int)&(pSVar1->start_pos).y + 4);
              local_118.x._0_4_ = *(uint *)&(pSVar1->end_pos).x;
              local_118.x._4_4_ = *(uint *)((int)&(pSVar1->end_pos).x + 4);
              local_118.y._0_4_ = *(uint *)&(pSVar1->end_pos).y;
              local_118.y._4_4_ = *(uint *)((int)&(pSVar1->end_pos).y + 4);
            }
            dVar4 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                              (&local_128,&local_108,&local_f8);
            dVar3 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                              (&local_128,&local_108,&local_118);
            local_148 = SUB84(__BITCAST_UINT64(dVar4),0);
            if (((((((ulonglong)dVar4 & 0x7fffffff00000000) == 0) && (local_148 == 0)) &&
                 (local_180 = SUB84(__BITCAST_UINT64(dVar3),0), ((ulonglong)dVar3 & 0x7fffffff00000000) == 0)) &&
                (local_180 == 0)) ||
               (((dVar4 < 0.0 && (0.0 < dVar3)) || ((0.0 < dVar4 && (dVar3 < 0.0)))))) {
              return 0;
            }
          }
          uVar2 = uVar2 + 1;
          pSVar1 = pSVar1 + 1;
        } while (uVar2 < (uint)edge_count);
      }
      local_20 = local_20 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)edge_count);
  }
  return 1;
}
