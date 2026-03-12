// Name: shape_superopt.cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90
// Address: 005cbf90
// Address Range: [[005cbf90, 005cc61f]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90(CComplexPolygon *this_ptr,CVector3d *normal,SExpandedEdge *sub_chain,int sub_chain_count,SExpandedEdge *full_edges,int full_edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90(CComplexPolygon *this_ptr,CVector3d *normal,SExpandedEdge *sub_chain,int sub_chain_count,SExpandedEdge *full_edges,int full_edge_count)

{
  bool bVar2;
  bool bVar3;
  bool bVar4;
  SExpandedEdge *pSVar2;
  int iVar3;
  double dVar5;
  double local_138;
  int local_130;
  uint uStack_12c;
  double local_128;
  double local_120;
  int local_118;
  uint uStack_114;
  CVector2d local_f8;
  CVector2d local_e8;
  CVector2d local_d8;
  double local_a0;
  SExpandedEdge *local_30;
  SExpandedEdge *local_2c;
  SExpandedEdge *local_28;
  SExpandedEdge *local_24;
  int local_20;
  int local_1c;
  int local_18;
  bool bVar1;
  
  if (0.0 <= normal->x) {
    local_128 = normal->x;
  }
  else {
    local_128 = -normal->x;
  }
  if (normal->y < 0.0) {
    local_138 = -normal->y;
  }
  else {
    local_138 = normal->y;
  }
  if (normal->z < 0.0) {
    local_120 = -normal->z;
  }
  else {
    local_120 = normal->z;
  }
  if ((local_128 < local_138) || (local_128 < local_120)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((local_138 < local_128) || (local_138 < local_120)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((local_120 < local_128) || (local_120 < local_138)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (full_edge_count != 0) {
    local_28 = full_edges;
    do {
      if ((local_28 < sub_chain) || (sub_chain + sub_chain_count <= local_28)) {
        if (bVar2) {
          local_d8.x._0_4_ = *(uint *)&(local_28->start_pos).y;
          local_d8.x._4_4_ = *(uint *)((int)&(local_28->start_pos).y + 4);
          local_d8.y._0_4_ = *(uint *)&(local_28->start_pos).z;
          local_d8.y._4_4_ = *(uint *)((int)&(local_28->start_pos).z + 4);
        }
        else if (bVar3) {
          local_d8.x._0_4_ = *(uint *)&(local_28->start_pos).x;
          local_d8.x._4_4_ = *(uint *)((int)&(local_28->start_pos).x + 4);
          local_d8.y._0_4_ = *(uint *)&(local_28->start_pos).z;
          local_d8.y._4_4_ = *(uint *)((int)&(local_28->start_pos).z + 4);
        }
        else if (bVar4) {
          local_d8.x._0_4_ = *(uint *)&(local_28->start_pos).x;
          local_d8.x._4_4_ = *(uint *)((int)&(local_28->start_pos).x + 4);
          local_d8.y._0_4_ = *(uint *)&(local_28->start_pos).y;
          local_d8.y._4_4_ = *(uint *)((int)&(local_28->start_pos).y + 4);
        }
        iVar3 = 0;
        bVar1 = false;
        if (sub_chain_count != 0) {
          pSVar2 = sub_chain;
          do {
            if (bVar2) {
              local_f8.x._0_4_ = *(uint *)&(pSVar2->start_pos).y;
              local_f8.x._4_4_ = *(uint *)((int)&(pSVar2->start_pos).y + 4);
              local_f8.y._0_4_ = *(uint *)&(pSVar2->start_pos).z;
              local_f8.y._4_4_ = *(uint *)((int)&(pSVar2->start_pos).z + 4);
              local_e8.x._0_4_ = *(uint *)&(pSVar2->end_pos).y;
              local_e8.x._4_4_ = *(uint *)((int)&(pSVar2->end_pos).y + 4);
              local_e8.y._0_4_ = *(uint *)&(pSVar2->end_pos).z;
              local_e8.y._4_4_ = *(uint *)((int)&(pSVar2->end_pos).z + 4);
            }
            else if (bVar3) {
              local_f8.x._0_4_ = *(uint *)&(pSVar2->start_pos).x;
              local_f8.x._4_4_ = *(uint *)((int)&(pSVar2->start_pos).x + 4);
              local_f8.y._0_4_ = *(uint *)&(pSVar2->start_pos).z;
              local_f8.y._4_4_ = *(uint *)((int)&(pSVar2->start_pos).z + 4);
              local_e8.x._0_4_ = *(uint *)&(pSVar2->end_pos).x;
              local_e8.x._4_4_ = *(uint *)((int)&(pSVar2->end_pos).x + 4);
              local_e8.y._0_4_ = *(uint *)&(pSVar2->end_pos).z;
              local_e8.y._4_4_ = *(uint *)((int)&(pSVar2->end_pos).z + 4);
            }
            else if (bVar4) {
              local_f8.x._0_4_ = *(uint *)&(pSVar2->start_pos).x;
              local_f8.x._4_4_ = *(uint *)((int)&(pSVar2->start_pos).x + 4);
              local_f8.y._0_4_ = *(uint *)&(pSVar2->start_pos).y;
              local_f8.y._4_4_ = *(uint *)((int)&(pSVar2->start_pos).y + 4);
              local_e8.x._0_4_ = *(uint *)&(pSVar2->end_pos).x;
              local_e8.x._4_4_ = *(uint *)((int)&(pSVar2->end_pos).x + 4);
              local_e8.y._0_4_ = *(uint *)&(pSVar2->end_pos).y;
              local_e8.y._4_4_ = *(uint *)((int)&(pSVar2->end_pos).y + 4);
            }
            if (((__BITCAST_DOUBLE(CONCAT44(local_f8.x._4_4_,local_f8.x._0_4_)) !=
                  __BITCAST_DOUBLE(CONCAT44(local_d8.x._4_4_,local_d8.x._0_4_))) ||
                (__BITCAST_DOUBLE(CONCAT44(local_f8.y._4_4_,local_f8.y._0_4_)) !=
                 __BITCAST_DOUBLE(CONCAT44(local_d8.y._4_4_,local_d8.y._0_4_)))) &&
               ((__BITCAST_DOUBLE(CONCAT44(local_e8.x._4_4_,local_e8.x._0_4_)) !=
                 __BITCAST_DOUBLE(CONCAT44(local_d8.x._4_4_,local_d8.x._0_4_)) ||
                (__BITCAST_DOUBLE(CONCAT44(local_e8.y._4_4_,local_e8.y._0_4_)) !=
                 __BITCAST_DOUBLE(CONCAT44(local_d8.y._4_4_,local_d8.y._0_4_)))))) {
              dVar5 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                                (&local_f8,&local_e8,&local_d8);
              uStack_12c = (uint)((ulonglong)dVar5 >> 0x20);
              local_130 = SUB84(__BITCAST_UINT64(dVar5),0);
              if ((((ulonglong)dVar5 & 0x7fffffff00000000) != 0) || (local_130 != 0)) {
                if (bVar1) {
                  if (((__BITCAST_DOUBLE(CONCAT44(uStack_114,local_118)) < 0.0) && (0.0 < dVar5)) ||
                     ((0.0 < __BITCAST_DOUBLE(CONCAT44(uStack_114,local_118)) && (dVar5 < 0.0)))) break;
                }
                else {
                  local_118 = local_130;
                  bVar1 = true;
                  uStack_114 = uStack_12c;
                }
              }
            }
            pSVar2 = pSVar2 + 1;
            iVar3 = iVar3 + 1;
          } while (pSVar2 < sub_chain + sub_chain_count);
        }
        if (iVar3 == sub_chain_count) {
          return 1;
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < full_edges + full_edge_count);
  }
  return 0;
}
