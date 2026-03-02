// Name: shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0
// Address: 005cb3a0
// Address Range: [[005cb3a0, 005cbb36]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  SExpandedEdge *pSVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double in_stack_fffffe80;
  double local_170;
  double local_168;
  double local_160;
  int local_148;
  CVector3d local_140;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  CVector2d local_118;
  CVector2d local_108;
  CVector2d local_f8;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
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
  uint local_a0;
  uint local_9c;
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
  double local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
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
    local_1c = 0;
  }
  else {
    local_1c = 1;
  }
  if ((local_170 < local_160) || (local_170 < local_168)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  uVar3 = 0;
  if (edge_count != 0) {
    local_20 = edges;
    do {
      if (local_1c == 0) {
        if (local_18 == 0) {
          local_128 = *(uint *)&(local_20->start_pos).x;
          local_124 = *(uint *)((int)&(local_20->start_pos).x + 4);
          local_120 = *(uint *)&(local_20->start_pos).y;
          local_11c = *(uint *)((int)&(local_20->start_pos).y + 4);
          local_108.x._0_4_ = *(uint *)&(local_20->end_pos).x;
          local_108.x._4_4_ = *(uint *)((int)&(local_20->end_pos).x + 4);
          local_108.y._0_4_ = *(uint *)&(local_20->end_pos).y;
          local_108.y._4_4_ = *(uint *)((int)&(local_20->end_pos).y + 4);
          local_c8 = local_108.x._0_4_;
          local_c4 = local_108.x._4_4_;
          local_b8 = local_120;
          local_b4 = local_11c;
          local_a8 = local_108.y._0_4_;
          local_a4 = local_108.y._4_4_;
          local_60 = local_128;
          local_5c = local_124;
        }
        else {
          local_128 = *(uint *)&(local_20->start_pos).x;
          local_124 = *(uint *)((int)&(local_20->start_pos).x + 4);
          local_120 = *(uint *)&(local_20->start_pos).z;
          local_11c = *(uint *)((int)&(local_20->start_pos).z + 4);
          local_108.x._0_4_ = *(uint *)&(local_20->end_pos).x;
          local_108.x._4_4_ = *(uint *)((int)&(local_20->end_pos).x + 4);
          local_108.y._0_4_ = *(uint *)&(local_20->end_pos).z;
          local_108.y._4_4_ = *(uint *)((int)&(local_20->end_pos).z + 4);
          local_c0 = local_128;
          local_bc = local_124;
          local_38 = local_120;
          local_34 = local_11c;
          local_30 = local_108.x._0_4_;
          local_2c = local_108.x._4_4_;
          local_28 = local_108.y._0_4_;
          local_24 = local_108.y._4_4_;
        }
      }
      else {
        local_128 = *(uint *)&(local_20->start_pos).y;
        local_124 = *(uint *)((int)&(local_20->start_pos).y + 4);
        local_120 = *(uint *)&(local_20->start_pos).z;
        local_11c = *(uint *)((int)&(local_20->start_pos).z + 4);
        local_108.x._0_4_ = *(uint *)&(local_20->end_pos).y;
        local_108.x._4_4_ = *(uint *)((int)&(local_20->end_pos).y + 4);
        local_108.y._0_4_ = *(uint *)&(local_20->end_pos).z;
        local_108.y._4_4_ = *(uint *)((int)&(local_20->end_pos).z + 4);
        local_e8 = local_128;
        local_e4 = local_124;
        local_d0 = local_108.y._0_4_;
        local_cc = local_108.y._4_4_;
        local_98 = local_120;
        local_94 = local_11c;
        local_90 = local_108.x._0_4_;
        local_8c = local_108.x._4_4_;
      }
      uVar2 = 0;
      pSVar1 = edges;
      if (edge_count != 0) {
        do {
          if (uVar2 != uVar3) {
            if (local_1c == 0) {
              if (local_18 == 0) {
                local_f8.x._0_4_ = *(uint *)&(pSVar1->start_pos).x;
                local_f8.x._4_4_ = *(uint *)((int)&(pSVar1->start_pos).x + 4);
                local_f8.y._0_4_ = *(uint *)&(pSVar1->start_pos).y;
                local_f8.y._4_4_ = *(uint *)((int)&(pSVar1->start_pos).y + 4);
                local_118.x._0_4_ = *(uint *)&(pSVar1->end_pos).x;
                local_118.x._4_4_ = *(uint *)((int)&(pSVar1->end_pos).x + 4);
                local_118.y._0_4_ = *(uint *)&(pSVar1->end_pos).y;
                local_118.y._4_4_ = *(uint *)((int)&(pSVar1->end_pos).y + 4);
                local_a0 = local_f8.x._0_4_;
                local_9c = local_f8.x._4_4_;
                local_58 = local_f8.y._0_4_;
                local_54 = local_f8.y._4_4_;
                local_50 = local_118.x._0_4_;
                local_4c = local_118.x._4_4_;
                local_48 = local_118.y._0_4_;
                local_44 = local_118.y._4_4_;
              }
              else {
                local_f8.x._0_4_ = *(uint *)&(pSVar1->start_pos).x;
                local_f8.x._4_4_ = *(uint *)((int)&(pSVar1->start_pos).x + 4);
                local_f8.y._0_4_ = *(uint *)&(pSVar1->start_pos).z;
                local_f8.y._4_4_ = *(uint *)((int)&(pSVar1->start_pos).z + 4);
                local_118.x._0_4_ = *(uint *)&(pSVar1->end_pos).x;
                local_118.x._4_4_ = *(uint *)((int)&(pSVar1->end_pos).x + 4);
                local_118.y._0_4_ = *(uint *)&(pSVar1->end_pos).z;
                local_118.y._4_4_ = *(uint *)((int)&(pSVar1->end_pos).z + 4);
                local_80 = local_f8.x._0_4_;
                local_7c = local_f8.x._4_4_;
                local_78 = local_f8.y._0_4_;
                local_74 = local_f8.y._4_4_;
                local_70 = local_118.x._0_4_;
                local_6c = local_118.x._4_4_;
                local_68 = local_118.y._0_4_;
                local_64 = local_118.y._4_4_;
              }
            }
            else {
              local_f8.x._0_4_ = *(uint *)&(pSVar1->start_pos).y;
              local_f8.x._4_4_ = *(uint *)((int)&(pSVar1->start_pos).y + 4);
              local_f8.y._0_4_ = *(uint *)&(pSVar1->start_pos).z;
              local_f8.y._4_4_ = *(uint *)((int)&(pSVar1->start_pos).z + 4);
              local_118.x._0_4_ = *(uint *)&(pSVar1->end_pos).y;
              local_118.x._4_4_ = *(uint *)((int)&(pSVar1->end_pos).y + 4);
              local_118.y._0_4_ = *(uint *)&(pSVar1->end_pos).z;
              local_118.y._4_4_ = *(uint *)((int)&(pSVar1->end_pos).z + 4);
              local_e0 = local_f8.y._0_4_;
              local_dc = local_f8.y._4_4_;
              local_d8 = local_118.x._0_4_;
              local_d4 = local_118.x._4_4_;
              local_b0 = local_f8.x._0_4_;
              local_ac = local_f8.x._4_4_;
              local_88 = local_118.y._0_4_;
              local_84 = local_118.y._4_4_;
            }
            dVar4 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                              (&local_108,&local_f8,SUB84(in_stack_fffffe80,0));
            local_40 = dVar4;
            in_stack_fffffe80 =
                 shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                           (&local_108,&local_118,SUB84(in_stack_fffffe80,0));
            local_148 = SUB84(__BITCAST_UINT64(dVar4),0);
            if (((((((ulonglong)dVar4 & 0x7fffffff00000000) == 0) && (local_148 == 0)) &&
                 (((ulonglong)in_stack_fffffe80 & 0x7fffffff00000000) == 0)) &&
                (SUB84(in_stack_fffffe80,0) == 0)) ||
               (((dVar4 < 0.0 && (0.0 < in_stack_fffffe80)) ||
                ((local_40 = in_stack_fffffe80, 0.0 < dVar4 && (in_stack_fffffe80 < 0.0)))))) {
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
