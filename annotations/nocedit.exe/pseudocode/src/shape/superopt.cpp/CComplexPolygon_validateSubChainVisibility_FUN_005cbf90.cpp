// Name: shape_superopt.cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90
// Address: 005cbf90
// Address Range: [[005cbf90, 005cc61f]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90(CComplexPolygon *this_ptr,CVector3d *normal,SExpandedEdge *sub_chain,int sub_chain_count,SExpandedEdge *full_edges,int full_edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90(CComplexPolygon *this_ptr,CVector3d *normal,SExpandedEdge *sub_chain,int sub_chain_count,SExpandedEdge *full_edges,int full_edge_count)

{
  bool bVar1;
  SExpandedEdge *pSVar2;
  int iVar3;
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
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  double local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  SExpandedEdge *local_30;
  SExpandedEdge *local_2c;
  SExpandedEdge *local_28;
  SExpandedEdge *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
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
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  if ((local_138 < local_128) || (local_138 < local_120)) {
    local_1c = 0;
  }
  else {
    local_1c = 1;
  }
  if ((local_120 < local_128) || (local_120 < local_138)) {
    local_20 = 0;
  }
  else {
    local_20 = 1;
  }
  if (full_edge_count != 0) {
    local_2c = sub_chain + sub_chain_count;
    local_28 = full_edges;
    local_30 = full_edges + full_edge_count;
    do {
      if ((local_28 < sub_chain) || (local_2c <= local_28)) {
        if (local_18 == 0) {
          if (local_1c == 0) {
            if (local_20 != 0) {
              local_d8.x._0_4_ = *(uint *)&(local_28->start_pos).x;
              local_d8.x._4_4_ = *(uint *)((int)&(local_28->start_pos).x + 4);
              local_d8.y._0_4_ = *(uint *)&(local_28->start_pos).y;
              local_d8.y._4_4_ = *(uint *)((int)&(local_28->start_pos).y + 4);
              local_80 = local_d8.y._0_4_;
              local_7c = local_d8.y._4_4_;
              local_50 = local_d8.x._0_4_;
              local_4c = local_d8.x._4_4_;
            }
          }
          else {
            local_d8.x._0_4_ = *(uint *)&(local_28->start_pos).x;
            local_d8.x._4_4_ = *(uint *)((int)&(local_28->start_pos).x + 4);
            local_d8.y._0_4_ = *(uint *)&(local_28->start_pos).z;
            local_d8.y._4_4_ = *(uint *)((int)&(local_28->start_pos).z + 4);
            local_98 = local_d8.x._0_4_;
            local_94 = local_d8.x._4_4_;
            local_90 = local_d8.y._0_4_;
            local_8c = local_d8.y._4_4_;
          }
        }
        else {
          local_d8.x._0_4_ = *(uint *)&(local_28->start_pos).y;
          local_d8.x._4_4_ = *(uint *)((int)&(local_28->start_pos).y + 4);
          local_d8.y._0_4_ = *(uint *)&(local_28->start_pos).z;
          local_d8.y._4_4_ = *(uint *)((int)&(local_28->start_pos).z + 4);
          local_c8 = local_d8.x._0_4_;
          local_c4 = local_d8.x._4_4_;
          local_78 = local_d8.y._0_4_;
          local_74 = local_d8.y._4_4_;
        }
        iVar3 = 0;
        bVar1 = false;
        if (sub_chain_count != 0) {
          local_24 = sub_chain + sub_chain_count;
          pSVar2 = sub_chain;
          do {
            if (local_18 == 0) {
              if (local_1c == 0) {
                if (local_20 != 0) {
                  local_f8.x._0_4_ = *(uint *)&(pSVar2->start_pos).x;
                  local_f8.x._4_4_ = *(uint *)((int)&(pSVar2->start_pos).x + 4);
                  local_f8.y._0_4_ = *(uint *)&(pSVar2->start_pos).y;
                  local_f8.y._4_4_ = *(uint *)((int)&(pSVar2->start_pos).y + 4);
                  local_e8.x._0_4_ = *(uint *)&(pSVar2->end_pos).x;
                  local_e8.x._4_4_ = *(uint *)((int)&(pSVar2->end_pos).x + 4);
                  local_e8.y._0_4_ = *(uint *)&(pSVar2->end_pos).y;
                  local_e8.y._4_4_ = *(uint *)((int)&(pSVar2->end_pos).y + 4);
                  local_b0 = local_f8.x._0_4_;
                  local_ac = local_f8.x._4_4_;
                  local_a8 = local_e8.y._0_4_;
                  local_a4 = local_e8.y._4_4_;
                  local_60 = local_e8.x._0_4_;
                  local_5c = local_e8.x._4_4_;
                  local_48 = local_f8.y._0_4_;
                  local_44 = local_f8.y._4_4_;
                }
              }
              else {
                local_f8.x._0_4_ = *(uint *)&(pSVar2->start_pos).x;
                local_f8.x._4_4_ = *(uint *)((int)&(pSVar2->start_pos).x + 4);
                local_f8.y._0_4_ = *(uint *)&(pSVar2->start_pos).z;
                local_f8.y._4_4_ = *(uint *)((int)&(pSVar2->start_pos).z + 4);
                local_e8.x._0_4_ = *(uint *)&(pSVar2->end_pos).x;
                local_e8.x._4_4_ = *(uint *)((int)&(pSVar2->end_pos).x + 4);
                local_e8.y._0_4_ = *(uint *)&(pSVar2->end_pos).z;
                local_e8.y._4_4_ = *(uint *)((int)&(pSVar2->end_pos).z + 4);
                local_c0 = local_e8.x._0_4_;
                local_bc = local_e8.x._4_4_;
                local_b8 = local_f8.y._0_4_;
                local_b4 = local_f8.y._4_4_;
                local_88 = local_e8.y._0_4_;
                local_84 = local_e8.y._4_4_;
                local_68 = local_f8.x._0_4_;
                local_64 = local_f8.x._4_4_;
              }
            }
            else {
              local_f8.x._0_4_ = *(uint *)&(pSVar2->start_pos).y;
              local_f8.x._4_4_ = *(uint *)((int)&(pSVar2->start_pos).y + 4);
              local_f8.y._0_4_ = *(uint *)&(pSVar2->start_pos).z;
              local_f8.y._4_4_ = *(uint *)((int)&(pSVar2->start_pos).z + 4);
              local_e8.x._0_4_ = *(uint *)&(pSVar2->end_pos).y;
              local_e8.x._4_4_ = *(uint *)((int)&(pSVar2->end_pos).y + 4);
              local_e8.y._0_4_ = *(uint *)&(pSVar2->end_pos).z;
              local_e8.y._4_4_ = *(uint *)((int)&(pSVar2->end_pos).z + 4);
              local_70 = local_e8.y._0_4_;
              local_6c = local_e8.y._4_4_;
              local_58 = local_f8.x._0_4_;
              local_54 = local_f8.x._4_4_;
              local_40 = local_e8.x._0_4_;
              local_3c = local_e8.x._4_4_;
              local_38 = local_f8.y._0_4_;
              local_34 = local_f8.y._4_4_;
            }
            if (((__BITCAST_DOUBLE(CONCAT44(local_f8.x._4_4_,local_f8.x._0_4_)) !=
                  __BITCAST_DOUBLE(CONCAT44(local_d8.x._4_4_,local_d8.x._0_4_))) ||
                (__BITCAST_DOUBLE(CONCAT44(local_f8.y._4_4_,local_f8.y._0_4_)) !=
                 __BITCAST_DOUBLE(CONCAT44(local_d8.y._4_4_,local_d8.y._0_4_)))) &&
               ((__BITCAST_DOUBLE(CONCAT44(local_e8.x._4_4_,local_e8.x._0_4_)) !=
                 __BITCAST_DOUBLE(CONCAT44(local_d8.x._4_4_,local_d8.x._0_4_)) ||
                (__BITCAST_DOUBLE(CONCAT44(local_e8.y._4_4_,local_e8.y._0_4_)) !=
                 __BITCAST_DOUBLE(CONCAT44(local_d8.y._4_4_,local_d8.y._0_4_)))))) {
              local_a0 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                                   (&local_f8,&local_e8,&local_d8);
              uStack_12c = (uint)((ulonglong)local_a0 >> 0x20);
              local_130 = SUB84(local_a0,0);
              if ((((ulonglong)local_a0 & 0x7fffffff00000000) != 0) || (local_130 != 0)) {
                if (bVar1) {
                  if (((__BITCAST_DOUBLE(CONCAT44(uStack_114,local_118)) < 0.0) && (0.0 < local_a0)) ||
                     ((0.0 < __BITCAST_DOUBLE(CONCAT44(uStack_114,local_118)) && (local_a0 < 0.0)))) break;
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
          } while (pSVar2 < local_24);
        }
        if (iVar3 == sub_chain_count) {
          return 1;
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < local_30);
  }
  return 0;
}
