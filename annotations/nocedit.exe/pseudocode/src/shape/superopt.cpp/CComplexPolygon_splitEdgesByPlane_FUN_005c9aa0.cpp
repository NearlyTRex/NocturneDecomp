// Name: shape_superopt.cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
// Address: 005c9aa0
// Address Range: [[005c9aa0, 005ca58d] [00608ab4, 00608b26]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0(CComplexPolygon *this_ptr,CVector3d *plane_normal,CVector3d *plane_point,SExpandedEdge *buf_a,SExpandedEdge *buf_b,int *count_a,int *count_b)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0(CComplexPolygon *this_ptr,CVector3d *plane_normal,CVector3d *plane_point,SExpandedEdge *buf_a,SExpandedEdge *buf_b,int *count_a,int *count_b)

{
  double dVar2;
  SExpandedEdge *pSVar3;
  SExpandedEdge *pSVar4;
  int iVar4;
  int iVar5;
  int *piVar5;
  double *pdVar8;
  double *pdVar6;
  double *pdVar9;
  double *pdVar7;
  uint *puVar8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  uint local_f8 [4];
  uint local_e8;
  uint local_e4;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double *local_40;
  int local_3c;
  double *local_38;
  double *local_34;
  int local_30;
  double *local_2c;
  uint local_28;
  int local_24;
  double *local_20;
  int local_1c;
  int local_18;
  double dVar1;
  double *pdVar2;
  
  local_28 = 0;
  if (this_ptr->expanded_edge_count != 0) {
    local_1c = 0;
    do {
      piVar5 = (int *)((int)this_ptr->expanded_edges->start_uv + local_1c + -0x40);
      local_1a0 = plane_normal->x * plane_point->x;
      local_198 = plane_normal->y * plane_point->y;
      local_190 = plane_normal->z * plane_point->z;
      pdVar8 = &local_1a0;
      pdVar9 = &local_c8;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_158 = plane_point->x * *(double *)(piVar5 + 4);
      local_150 = plane_point->y * *(double *)(piVar5 + 6);
      local_148 = plane_point->z * *(double *)(piVar5 + 8);
      pdVar8 = &local_158;
      pdVar9 = &local_128;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      dVar2 = -(local_c8 + local_c0 + local_b8);
      dVar1 = local_128 + local_120;
      local_e0 = plane_point->x * *(double *)(piVar5 + 10);
      local_d8 = plane_point->y * *(double *)(piVar5 + 0xc);
      local_d0 = plane_point->z * *(double *)(piVar5 + 0xe);
      pdVar8 = &local_e0;
      pdVar9 = &local_188;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_1d8 = dVar1 + local_118 + dVar2;
      local_1e0 = local_188 + local_180 + local_178 + dVar2;
      if ((local_1d8 < 1e-10) && (-1e-10 < local_1d8)) {
        local_1d8 = 0.0;
      }
      if ((local_1e0 < 1e-10) && (-1e-10 < local_1e0)) {
        local_1e0 = 0.0;
      }
      if ((((((ulonglong)local_1d8 & 0x7fffffff00000000) != 0) || (local_1d8._0_4_ != 0)) ||
          (((ulonglong)local_1e0 & 0x7fffffff00000000) != 0)) || (local_1e0._0_4_ != 0)) {
        if ((((ulonglong)local_1d8 & 0x7fffffff00000000) == 0) && (local_1d8._0_4_ == 0)) {
          local_3c = 0;
        }
        else if (0.0 <= local_1d8) {
          local_3c = 1;
        }
        else {
          local_3c = -1;
        }
        if ((((ulonglong)local_1e0 & 0x7fffffff00000000) == 0) && (local_1e0._0_4_ == 0)) {
          local_24 = 0;
        }
        else if (0.0 <= local_1e0) {
          local_24 = 1;
        }
        else {
          local_24 = -1;
        }
        dVar2 = local_1d8 / (local_1e0 - local_1d8);
        local_30 = local_24;
        local_2c = (double *)(piVar5 + 4);
        local_20 = (double *)(piVar5 + 10);
        local_1d0 = *(double *)(piVar5 + 4) - *(double *)(piVar5 + 10);
        local_1c8 = *(double *)(piVar5 + 6) - *(double *)(piVar5 + 0xc);
        local_1c0 = *(double *)(piVar5 + 8) - *(double *)(piVar5 + 0xe);
        pdVar8 = &local_1d0;
        pdVar9 = &local_1b8;
        for (iVar5 = 6; pdVar2 = local_2c, iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pdVar9 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        local_110 = local_1b8 * dVar2;
        local_108 = local_1b0 * dVar2;
        local_100 = local_1a8 * dVar2;
        pdVar8 = &local_110;
        pdVar7 = &local_140;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pdVar7 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          pdVar7 = (double *)((int)pdVar7 + 4);
        }
        local_170 = *pdVar2 + local_140;
        local_168 = pdVar2[1] + local_138;
        local_160 = pdVar2[2] + local_130;
        pdVar6 = &local_170;
        puVar8 = local_f8;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *(uint *)pdVar6;
          pdVar6 = (double *)((int)pdVar6 + 4);
          puVar8 = puVar8 + 1;
        }
        local_40 = (double *)(piVar5 + 0x14);
        local_90 = *(double *)(piVar5 + 0x10) - *local_40;
        local_88 = *(double *)(piVar5 + 0x12) - *(double *)(piVar5 + 0x16);
        local_60 = local_90;
        local_58 = local_88;
        local_70 = local_90 * dVar2;
        local_98 = local_88 * dVar2;
        local_68 = local_98;
        local_a0 = local_70;
        local_68._4_4_ = (double *)((ulonglong)local_98 >> 0x20);
        local_80 = *local_68._4_4_ + local_70;
        local_a8 = local_68._4_4_[1] + local_98;
        local_78 = local_a8;
        local_b0 = local_80;
        local_78._4_4_ = (uint *)((ulonglong)local_a8 >> 0x20);
        if ((local_3c == 1) || (local_24 == 1)) {
          if ((local_3c == -1) || (local_30 == -1)) {
            local_34 = (double *)(piVar5 + 0x14);
            local_38 = (double *)(piVar5 + 0x10);
            pdVar8 = (double *)(piVar5 + 10);
            pdVar9 = (double *)(piVar5 + 4);
            if (local_3c == -1) {
              pSVar4 = buf_a + *count_a;
              pSVar4->start_vertex_index = *piVar5;
              pSVar4->end_vertex_index = piVar5[1];
              pSVar4->start_side = piVar5[2];
              pSVar4->end_side = piVar5[3];
              (pSVar4->start_pos).x = *pdVar9;
              (pSVar4->start_pos).y = *(double *)(piVar5 + 6);
              (pSVar4->start_pos).z = *(double *)(piVar5 + 8);
              (pSVar4->end_pos).x = *pdVar8;
              (pSVar4->end_pos).y = *(double *)(piVar5 + 0xc);
              (pSVar4->end_pos).z = *(double *)(piVar5 + 0xe);
              pSVar4->start_uv[0] = *local_38;
              pSVar4->start_uv[1] = *(double *)(piVar5 + 0x12);
              pSVar4->end_uv[0] = *local_34;
              pSVar4->end_uv[1] = *(double *)(piVar5 + 0x16);
              iVar5 = *count_a;
              *(uint *)&buf_a[iVar5].end_pos.x = local_f8[0];
              *(uint *)((int)&buf_a[iVar5].end_pos.x + 4) = local_f8[1];
              *(uint *)&buf_a[iVar5].end_pos.y = local_f8[2];
              *(uint *)((int)&buf_a[iVar5].end_pos.y + 4) = local_f8[3];
              *(uint *)&buf_a[iVar5].end_pos.z = local_e8;
              *(uint *)((int)&buf_a[iVar5].end_pos.z + 4) = local_e4;
              iVar5 = *count_a;
              buf_a[iVar5].end_uv[0] = local_80;
              buf_a[iVar5].end_uv[1] = local_a8;
              buf_a[*count_a].start_side = -1;
              buf_a[*count_a].end_side = 0;
              *count_a = *count_a + 1;
              local_18 = *count_b * 0x60;
              pSVar4 = buf_b + *count_b;
              pSVar4->start_vertex_index = *piVar5;
              pSVar4->end_vertex_index = piVar5[1];
              pSVar4->start_side = piVar5[2];
              pSVar4->end_side = piVar5[3];
              *(int *)&(pSVar4->start_pos).x = *(int *)pdVar9;
              *(int *)((int)&(pSVar4->start_pos).x + 4) = piVar5[5];
              *(int *)&(pSVar4->start_pos).y = piVar5[6];
              *(int *)((int)&(pSVar4->start_pos).y + 4) = piVar5[7];
              *(int *)&(pSVar4->start_pos).z = piVar5[8];
              *(int *)((int)&(pSVar4->start_pos).z + 4) = piVar5[9];
              *(int *)&(pSVar4->end_pos).x = *(int *)pdVar8;
              *(int *)((int)&(pSVar4->end_pos).x + 4) = piVar5[0xb];
              *(int *)&(pSVar4->end_pos).y = piVar5[0xc];
              *(int *)((int)&(pSVar4->end_pos).y + 4) = piVar5[0xd];
              *(int *)&(pSVar4->end_pos).z = piVar5[0xe];
              *(int *)((int)&(pSVar4->end_pos).z + 4) = piVar5[0xf];
              *(int *)pSVar4->start_uv = *(int *)local_38;
              *(int *)((int)pSVar4->start_uv + 4) = piVar5[0x11];
              *(int *)(pSVar4->start_uv + 1) = piVar5[0x12];
              *(int *)((int)pSVar4->start_uv + 0xc) = piVar5[0x13];
              *(int *)pSVar4->end_uv = *(int *)local_34;
              *(int *)((int)pSVar4->end_uv + 4) = piVar5[0x15];
              *(int *)(pSVar4->end_uv + 1) = piVar5[0x16];
              *(int *)((int)pSVar4->end_uv + 0xc) = piVar5[0x17];
              iVar5 = *count_b;
              *(uint *)&buf_b[iVar5].start_pos.x = local_f8[0];
              *(uint *)((int)&buf_b[iVar5].start_pos.x + 4) = local_f8[1];
              *(uint *)&buf_b[iVar5].start_pos.y = local_f8[2];
              *(uint *)((int)&buf_b[iVar5].start_pos.y + 4) = local_f8[3];
              *(uint *)&buf_b[iVar5].start_pos.z = local_e8;
              *(uint *)((int)&buf_b[iVar5].start_pos.z + 4) = local_e4;
              iVar5 = *count_b;
              buf_b[iVar5].start_uv[0] = local_80;
              buf_b[iVar5].start_uv[1] = local_a8;
              buf_b[*count_b].start_side = 0;
              buf_b[*count_b].end_side = 1;
              *count_b = *count_b + 1;
            }
            else {
              pSVar4 = buf_b + *count_b;
              pSVar4->start_vertex_index = *piVar5;
              pSVar4->end_vertex_index = piVar5[1];
              pSVar4->start_side = piVar5[2];
              pSVar4->end_side = piVar5[3];
              (pSVar4->start_pos).x = *pdVar9;
              (pSVar4->start_pos).y = *(double *)(piVar5 + 6);
              (pSVar4->start_pos).z = *(double *)(piVar5 + 8);
              (pSVar4->end_pos).x = *pdVar8;
              (pSVar4->end_pos).y = *(double *)(piVar5 + 0xc);
              (pSVar4->end_pos).z = *(double *)(piVar5 + 0xe);
              pSVar4->start_uv[0] = *local_38;
              pSVar4->start_uv[1] = *(double *)(piVar5 + 0x12);
              pSVar4->end_uv[0] = *local_34;
              pSVar4->end_uv[1] = *(double *)(piVar5 + 0x16);
              iVar5 = *count_b;
              *(uint *)&buf_b[iVar5].end_pos.x = local_f8[0];
              *(uint *)((int)&buf_b[iVar5].end_pos.x + 4) = local_f8[1];
              *(uint *)&buf_b[iVar5].end_pos.y = local_f8[2];
              *(uint *)((int)&buf_b[iVar5].end_pos.y + 4) = local_f8[3];
              *(uint *)&buf_b[iVar5].end_pos.z = local_e8;
              *(uint *)((int)&buf_b[iVar5].end_pos.z + 4) = local_e4;
              iVar5 = *count_b;
              buf_b[iVar5].end_uv[0] = local_80;
              buf_b[iVar5].end_uv[1] = local_a8;
              buf_b[*count_b].start_side = 1;
              local_18 = *count_b * 0x60;
              buf_b[*count_b].end_side = 0;
              *count_b = *count_b + 1;
              pSVar4 = buf_a + *count_a;
              pSVar4->start_vertex_index = *piVar5;
              pSVar4->end_vertex_index = piVar5[1];
              pSVar4->start_side = piVar5[2];
              pSVar4->end_side = piVar5[3];
              *(int *)&(pSVar4->start_pos).x = *(int *)pdVar9;
              *(int *)((int)&(pSVar4->start_pos).x + 4) = piVar5[5];
              *(int *)&(pSVar4->start_pos).y = piVar5[6];
              *(int *)((int)&(pSVar4->start_pos).y + 4) = piVar5[7];
              *(int *)&(pSVar4->start_pos).z = piVar5[8];
              *(int *)((int)&(pSVar4->start_pos).z + 4) = piVar5[9];
              *(int *)&(pSVar4->end_pos).x = *(int *)pdVar8;
              *(int *)((int)&(pSVar4->end_pos).x + 4) = piVar5[0xb];
              *(int *)&(pSVar4->end_pos).y = piVar5[0xc];
              *(int *)((int)&(pSVar4->end_pos).y + 4) = piVar5[0xd];
              *(int *)&(pSVar4->end_pos).z = piVar5[0xe];
              *(int *)((int)&(pSVar4->end_pos).z + 4) = piVar5[0xf];
              *(int *)pSVar4->start_uv = *(int *)local_38;
              *(int *)((int)pSVar4->start_uv + 4) = piVar5[0x11];
              *(int *)(pSVar4->start_uv + 1) = piVar5[0x12];
              *(int *)((int)pSVar4->start_uv + 0xc) = piVar5[0x13];
              *(int *)pSVar4->end_uv = *(int *)local_34;
              *(int *)((int)pSVar4->end_uv + 4) = piVar5[0x15];
              *(int *)(pSVar4->end_uv + 1) = piVar5[0x16];
              *(int *)((int)pSVar4->end_uv + 0xc) = piVar5[0x17];
              iVar5 = *count_a;
              *(uint *)&buf_a[iVar5].start_pos.x = local_f8[0];
              *(uint *)((int)&buf_a[iVar5].start_pos.x + 4) = local_f8[1];
              *(uint *)&buf_a[iVar5].start_pos.y = local_f8[2];
              *(uint *)((int)&buf_a[iVar5].start_pos.y + 4) = local_f8[3];
              *(uint *)&buf_a[iVar5].start_pos.z = local_e8;
              *(uint *)((int)&buf_a[iVar5].start_pos.z + 4) = local_e4;
              iVar5 = *count_a;
              buf_a[iVar5].start_uv[0] = local_80;
              buf_a[iVar5].start_uv[1] = local_a8;
              buf_a[*count_a].start_side = 0;
              buf_a[*count_a].end_side = -1;
              *count_a = *count_a + 1;
            }
          }
          else {
            pSVar4 = buf_b + *count_b;
            pSVar4->start_vertex_index = *piVar5;
            pSVar4->end_vertex_index = piVar5[1];
            pSVar4->start_side = piVar5[2];
            pSVar4->end_side = piVar5[3];
            (pSVar4->start_pos).x = *(double *)(piVar5 + 4);
            (pSVar4->start_pos).y = *(double *)(piVar5 + 6);
            (pSVar4->start_pos).z = *(double *)(piVar5 + 8);
            (pSVar4->end_pos).x = *(double *)(piVar5 + 10);
            (pSVar4->end_pos).y = *(double *)(piVar5 + 0xc);
            (pSVar4->end_pos).z = *(double *)(piVar5 + 0xe);
            pSVar4->start_uv[0] = *(double *)(piVar5 + 0x10);
            pSVar4->start_uv[1] = *(double *)(piVar5 + 0x12);
            *(int *)pSVar4->end_uv = piVar5[0x14];
            *(int *)((int)pSVar4->end_uv + 4) = piVar5[0x15];
            *(int *)(pSVar4->end_uv + 1) = piVar5[0x16];
            *(int *)((int)pSVar4->end_uv + 0xc) = piVar5[0x17];
            buf_b[*count_b].start_side = local_3c;
            buf_b[*count_b].end_side = local_30;
            *count_b = *count_b + 1;
          }
        }
        else {
          pSVar3 = buf_a + *count_a;
          pSVar3->start_vertex_index = *piVar5;
          pSVar3->end_vertex_index = piVar5[1];
          pSVar3->start_side = piVar5[2];
          pSVar3->end_side = piVar5[3];
          (pSVar3->start_pos).x = *local_2c;
          (pSVar3->start_pos).y = local_2c[1];
          (pSVar3->start_pos).z = local_2c[2];
          (pSVar3->end_pos).x = *local_20;
          (pSVar3->end_pos).y = local_20[1];
          (pSVar3->end_pos).z = local_20[2];
          *(uint *)pSVar3->start_uv = *local_78._4_4_;
          *(uint *)((int)pSVar3->start_uv + 4) = local_78._4_4_[1];
          *(uint *)(pSVar3->start_uv + 1) = local_78._4_4_[2];
          *(uint *)((int)pSVar3->start_uv + 0xc) = local_78._4_4_[3];
          *(uint *)pSVar3->end_uv = *(uint *)local_40;
          *(int *)((int)pSVar3->end_uv + 4) = piVar5[0x15];
          *(int *)(pSVar3->end_uv + 1) = piVar5[0x16];
          *(int *)((int)pSVar3->end_uv + 0xc) = piVar5[0x17];
          buf_a[*count_a].start_side = local_3c;
          buf_a[*count_a].end_side = local_24;
          *count_a = *count_a + 1;
        }
      }
      local_28 = local_28 + 1;
      local_1c = local_1c + 0x60;
    } while (local_28 < (uint)this_ptr->expanded_edge_count);
  }
  return;
}
