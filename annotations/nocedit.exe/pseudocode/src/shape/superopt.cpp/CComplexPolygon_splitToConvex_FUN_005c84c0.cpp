// Name: shape_superopt.cpp_CComplexPolygon_splitToConvex_FUN_005c84c0
// Address: 005c84c0
// Address Range: [[005c84c0, 005c8b45]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(CComplexPolygon *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(CComplexPolygon *this_ptr)

{
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar2;
  SExpandedEdge *pSVar3;
  SExpandedEdge *pSVar6;
  int iVar4;
  int iVar7;
  uint uVar5;
  uint uVar8;
  CVector3d *pCVar9;
  double *pdVar10;
  uint *puVar6;
  double *pdVar7;
  SExpandedEdge *pSVar11;
  CVector3d *pCVar12;
  CVector3d *pCVar8;
  uint *puVar13;
  int *piVar9;
  byte bVar10;
  CVector3d local_12c;
  CVector3d local_114;
  double local_fc;
  double local_f4;
  double local_ec;
  double local_e4;
  double local_dc;
  double local_d4;
  CVector3d local_cc;
  uint local_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  CVector3d local_6c;
  uint local_54;
  uint uStack_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  int local_2c;
  int local_28;
  SExpandedEdge *local_24;
  SExpandedEdge *local_20;
  CVector3d *local_1c;
  int local_18;
  int local_14;
  double dVar1;
  
  bVar10 = 0;
  if (this_ptr->expanded_edge_count != 0) {
    iVar2 = shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
                      (this_ptr,this_ptr->expanded_edges,&this_ptr->expanded_edge_count);
    if (iVar2 == 0) {
      return 0;
    }
    if (this_ptr->expanded_edge_count != 0) {
      pSVar3 = shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->expanded_edge_count * 0xc0);
      if (pSVar3 == (SExpandedEdge *)0x0) {
        return 0;
      }
      local_20 = pSVar3;
      local_24 = shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->expanded_edge_count * 0xc0);
      if (local_24 == (SExpandedEdge *)0x0) {
        shape_memdbg_cpp_free_FUN_005fe659(pSVar3);
        return 0;
      }
      local_1c = &this_ptr->normal;
      while( true ) {
        pSVar11 = local_24;
        pSVar6 = shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50
                           (this_ptr,local_20,local_24);
        if (pSVar6 == (SExpandedEdge *)0x0) break;
        pCVar9 = &pSVar6->start_pos;
        pCVar12 = &local_114;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(uint *)&pCVar12->x = *(uint *)&pCVar9->x;
          pCVar9 = (CVector3d *)((int)pCVar9 + (uint)bVar10 * -8 + 4);
          pCVar12 = (CVector3d *)((int)pCVar12 + (uint)bVar10 * -8 + 4);
        }
        local_fc = (pSVar6->end_pos).x - (pSVar6->start_pos).x;
        local_f4 = (pSVar6->end_pos).y - (pSVar6->start_pos).y;
        local_ec = (pSVar6->end_pos).z - (pSVar6->start_pos).z;
        pdVar10 = &local_fc;
        puVar13 = &local_84;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar13 = *(uint *)pdVar10;
          pdVar10 = (double *)((int)pdVar10 + (uint)bVar10 * -8 + 4);
          puVar13 = puVar13 + (uint)bVar10 * -2 + 1;
        }
        dVar2 = __BITCAST_DOUBLE(CONCAT44(uStack_78,local_7c)) * local_1c->z -
                __BITCAST_DOUBLE(CONCAT44(uStack_70,local_74)) * local_1c->y;
        dVar3 = __BITCAST_DOUBLE(CONCAT44(uStack_70,local_74)) * local_1c->x -
                __BITCAST_DOUBLE(CONCAT44(uStack_80,local_84)) * local_1c->z;
        dVar4 = __BITCAST_DOUBLE(CONCAT44(uStack_80,local_84)) * local_1c->y -
                __BITCAST_DOUBLE(CONCAT44(uStack_78,local_7c)) * local_1c->x;
        dVar1 = 1.0 / SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
        local_cc.x = dVar2 * dVar1;
        local_cc.y = dVar3 * dVar1;
        local_cc.z = dVar4 * dVar1;
        local_18 = 0;
        local_14 = 0;
        shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                  (this_ptr,&local_114,&local_cc,local_20,local_24,&local_18,&local_14);
        if ((local_18 == 0) || (local_14 == 0)) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(local_24);
          return 0;
        }
        iVar7 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_20,&local_18,0);
        pSVar11 = local_24;
        if (iVar7 == 0) goto LAB_005c8a4c;
        iVar7 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_24,&local_14,0);
        if (iVar7 == 0) goto LAB_005c8a6e;
        iVar7 = shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
                          (this_ptr,local_20,&local_18);
        if (iVar7 == 0) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(pSVar11);
          return 0;
        }
        iVar7 = shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
                          (this_ptr,pSVar11,&local_14);
        if (iVar7 == 0) goto LAB_005c8a6e;
        if ((local_18 == 0) && (local_14 == 0)) goto LAB_005c89e6;
        if ((local_18 != 0) && (local_14 != 0)) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(local_24);
          return 0;
        }
        if (local_18 == 0) {
          pSVar11 = local_24;
          pSVar6 = this_ptr->expanded_edges;
          for (uVar8 = (uint)(local_14 * 0x60) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            pSVar6->start_vertex_index = pSVar11->start_vertex_index;
            pSVar11 = (SExpandedEdge *)((int)pSVar11 + (uint)bVar10 * -8 + 4);
            pSVar6 = (SExpandedEdge *)((int)pSVar6 + (uint)bVar10 * -8 + 4);
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(char *)&pSVar6->start_vertex_index = (char)pSVar11->start_vertex_index;
            pSVar11 = (SExpandedEdge *)((int)pSVar11 + (uint)bVar10 * -2 + 1);
            pSVar6 = (SExpandedEdge *)((int)pSVar6 + (uint)bVar10 * -2 + 1);
          }
          this_ptr->expanded_edge_count = local_14;
        }
        else {
          pSVar11 = local_20;
          pSVar6 = this_ptr->expanded_edges;
          for (uVar5 = (uint)(local_18 * 0x60) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            pSVar6->start_vertex_index = pSVar11->start_vertex_index;
            pSVar11 = (SExpandedEdge *)((int)pSVar11 + (uint)bVar10 * -8 + 4);
            pSVar6 = (SExpandedEdge *)((int)pSVar6 + (uint)bVar10 * -8 + 4);
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(char *)&pSVar6->start_vertex_index = (char)pSVar11->start_vertex_index;
            pSVar11 = (SExpandedEdge *)((int)pSVar11 + (uint)bVar10 * -2 + 1);
            pSVar6 = (SExpandedEdge *)((int)pSVar6 + (uint)bVar10 * -2 + 1);
          }
          this_ptr->expanded_edge_count = local_18;
        }
      }
      pSVar6 = shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70
                         (this_ptr,local_20,pSVar11);
      if (pSVar6 == (SExpandedEdge *)0x0) {
        shape_memdbg_cpp_free_FUN_005fe659(local_20);
        shape_memdbg_cpp_free_FUN_005fe659(pSVar11);
        return 0;
      }
      puVar6 = (uint *)&pSVar6->start_pos;
      pCVar8 = &local_6c;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar8 = (CVector3d *)((int)pCVar8 + (uint)bVar10 * -8 + 4);
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        *(uint *)&pCVar8->x = *puVar6;
        puVar6 = puVar6;
        pCVar8 = pCVar8;
      }
      local_e4 = (pSVar6->end_pos).x - (pSVar6->start_pos).x;
      local_dc = (pSVar6->end_pos).y - (pSVar6->start_pos).y;
      local_d4 = (pSVar6->end_pos).z - (pSVar6->start_pos).z;
      pdVar7 = &local_e4;
      puVar13 = &local_54;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        pdVar7 = (double *)((int)pdVar7 + (uint)bVar10 * -8 + 4);
        *puVar13 = *(uint *)pdVar7;
        pdVar7 = pdVar7;
        puVar13 = puVar13 + (uint)bVar10 * -2 + 1;
      }
      dVar2 = __BITCAST_DOUBLE(CONCAT44(uStack_48,local_4c)) * local_1c->z -
              __BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) * local_1c->y;
      dVar3 = __BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) * local_1c->x -
              __BITCAST_DOUBLE(CONCAT44(uStack_50,local_54)) * local_1c->z;
      dVar4 = __BITCAST_DOUBLE(CONCAT44(uStack_50,local_54)) * local_1c->y -
              __BITCAST_DOUBLE(CONCAT44(uStack_48,local_4c)) * local_1c->x;
      dVar5 = 1.0 / SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
      local_12c.x = dVar2 * dVar5;
      local_12c.y = dVar3 * dVar5;
      local_12c.z = dVar4 * dVar5;
      local_28 = 0;
      local_2c = 0;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_12c,local_20,local_24,&local_28,&local_2c);
      if ((local_28 != 0) && (local_2c != 0)) {
        iVar7 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_20,&local_28,0);
        pSVar11 = local_24;
        if (iVar7 != 0) {
          iVar7 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                            (this_ptr,local_24,&local_2c,0);
          if (iVar7 == 0) {
LAB_005c8a6e:
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(pSVar11);
            return 0;
          }
          if ((local_28 == 0) || (local_2c == 0)) goto LAB_005c8a2a;
          pSVar11 = local_20;
          pSVar6 = this_ptr->expanded_edges;
          for (uVar8 = (uint)(local_28 * 0x60) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            pSVar6->start_vertex_index = pSVar11->start_vertex_index;
            pSVar11 = (SExpandedEdge *)((int)pSVar11 + (uint)bVar10 * -8 + 4);
            pSVar6 = (SExpandedEdge *)((int)pSVar6 + (uint)bVar10 * -8 + 4);
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(char *)&pSVar6->start_vertex_index = (char)pSVar11->start_vertex_index;
            pSVar11 = (SExpandedEdge *)((int)pSVar11 + (uint)bVar10 * -2 + 1);
            pSVar6 = (SExpandedEdge *)((int)pSVar6 + (uint)bVar10 * -2 + 1);
          }
          this_ptr->expanded_edge_count = local_28;
          iVar7 = shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(this_ptr);
          if (iVar7 == 0) {
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(local_24);
            return 0;
          }
          uVar8 = (uint)(local_2c * 0x60) >> 2;
          pSVar11 = local_24;
          piVar9 = &this_ptr->expanded_edges->start_vertex_index;
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            ((SExpandedEdge *)piVar9)->start_vertex_index = pSVar11->start_vertex_index;
            pSVar11 = (SExpandedEdge *)((int)pSVar11 + (uint)bVar10 * -8 + 4);
            piVar9 = (int *)((int)piVar9 + (uint)bVar10 * -8 + 4);
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            piVar9 = (int *)((int)piVar9 + (uint)bVar10 * -2 + 1);
            *(char *)piVar9 = (char)pSVar11->start_vertex_index;
            pSVar11 = (SExpandedEdge *)((int)pSVar11 + (uint)bVar10 * -2 + 1);
            piVar9 = piVar9;
          }
          this_ptr->expanded_edge_count = local_2c;
          iVar7 = shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(this_ptr);
          if (iVar7 != 0) {
LAB_005c89e6:
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(local_24);
            return 1;
          }
        }
LAB_005c8a4c:
        shape_memdbg_cpp_free_FUN_005fe659(local_20);
        shape_memdbg_cpp_free_FUN_005fe659(local_24);
        return 0;
      }
LAB_005c8a2a:
      shape_memdbg_cpp_free_FUN_005fe659(local_20);
      shape_memdbg_cpp_free_FUN_005fe659(local_24);
      return 0;
    }
  }
  return 1;
}
