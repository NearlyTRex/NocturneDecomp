// Name: shape_superopt.cpp_CComplexPolygon_splitToConvex_FUN_005c84c0
// Address: 005c84c0
// Address Range: [[005c84c0, 005c8b45]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(CComplexPolygon *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(CComplexPolygon *this_ptr)

{
  double dVar1;
  int iVar2;
  SExpandedEdge *pSVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  double *pdVar7;
  CVector3d *pCVar8;
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
        pSVar3 = local_24;
        iVar2 = shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50
                          (this_ptr,local_20,local_24);
        if (iVar2 == 0) break;
        puVar6 = (uint *)(iVar2 + 0x10);
        pCVar8 = &local_114;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(uint *)&pCVar8->x = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          pCVar8 = (CVector3d *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
        }
        local_fc = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
        local_f4 = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
        local_ec = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
        pdVar7 = &local_fc;
        puVar6 = &local_84;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *(uint *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar10 * -8 + 4);
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        }
        local_b4 = local_84;
        local_b0 = uStack_80;
        local_ac = local_7c;
        local_a8 = uStack_78;
        local_a4 = local_74;
        local_a0 = uStack_70;
        local_cc.x = __BITCAST_DOUBLE(CONCAT44(uStack_78,local_7c)) * local_1c->z -
                     __BITCAST_DOUBLE(CONCAT44(uStack_70,local_74)) * local_1c->y;
        local_cc.y = __BITCAST_DOUBLE(CONCAT44(uStack_70,local_74)) * local_1c->x -
                     __BITCAST_DOUBLE(CONCAT44(uStack_80,local_84)) * local_1c->z;
        local_cc.z = __BITCAST_DOUBLE(CONCAT44(uStack_80,local_84)) * local_1c->y -
                     __BITCAST_DOUBLE(CONCAT44(uStack_78,local_7c)) * local_1c->x;
        dVar1 = 1.0 / SQRT(local_cc.z * local_cc.z +
                           local_cc.x * local_cc.x + local_cc.y * local_cc.y);
        local_cc.x = local_cc.x * dVar1;
        local_cc.y = local_cc.y * dVar1;
        local_cc.z = local_cc.z * dVar1;
        local_18 = 0;
        local_14 = 0;
        shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                  (this_ptr,&local_114,&local_cc,local_20,local_24,&local_18,&local_14);
        if ((local_18 == 0) || (local_14 == 0)) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(local_24);
          return 0;
        }
        iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_20,&local_18,0);
        pSVar3 = local_24;
        if (iVar2 == 0) goto LAB_005c8a4c;
        iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_24,&local_14,0);
        if (iVar2 == 0) goto LAB_005c8a6e;
        iVar2 = shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
                          (this_ptr,local_20,&local_18);
        if (iVar2 == 0) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(pSVar3);
          return 0;
        }
        iVar2 = shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
                          (this_ptr,pSVar3,&local_14);
        if (iVar2 == 0) goto LAB_005c8a6e;
        if ((local_18 == 0) && (local_14 == 0)) goto LAB_005c89e6;
        if ((local_18 != 0) && (local_14 != 0)) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(local_24);
          return 0;
        }
        if (local_18 == 0) {
          pSVar3 = local_24;
          piVar9 = this_ptr->expanded_edges;
          for (uVar5 = (uint)(local_14 * 0x60) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *piVar9 = pSVar3->start_vertex_index;
            pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar10 * -8 + 4);
            piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(char *)piVar9 = (char)pSVar3->start_vertex_index;
            pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar10 * -2 + 1);
            piVar9 = (int *)((int)piVar9 + (uint)bVar10 * -2 + 1);
          }
          this_ptr->expanded_edge_count = local_14;
        }
        else {
          pSVar3 = local_20;
          piVar9 = this_ptr->expanded_edges;
          for (uVar5 = (uint)(local_18 * 0x60) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *piVar9 = pSVar3->start_vertex_index;
            pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar10 * -8 + 4);
            piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(char *)piVar9 = (char)pSVar3->start_vertex_index;
            pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar10 * -2 + 1);
            piVar9 = (int *)((int)piVar9 + (uint)bVar10 * -2 + 1);
          }
          this_ptr->expanded_edge_count = local_18;
        }
      }
      iVar2 = shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70
                        (this_ptr,local_20,pSVar3);
      if (iVar2 == 0) {
        shape_memdbg_cpp_free_FUN_005fe659(local_20);
        shape_memdbg_cpp_free_FUN_005fe659(pSVar3);
        return 0;
      }
      puVar6 = (uint *)(iVar2 + 0x10);
      pCVar8 = &local_6c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)&pCVar8->x = *puVar6;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        pCVar8 = (CVector3d *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
      }
      local_e4 = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
      local_dc = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
      local_d4 = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
      pdVar7 = &local_e4;
      puVar6 = &local_54;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *(uint *)pdVar7;
        pdVar7 = (double *)((int)pdVar7 + (uint)bVar10 * -8 + 4);
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      }
      local_9c = local_54;
      local_98 = uStack_50;
      local_94 = local_4c;
      local_90 = uStack_48;
      local_8c = local_44;
      local_88 = uStack_40;
      local_12c.x = __BITCAST_DOUBLE(CONCAT44(uStack_48,local_4c)) * local_1c->z -
                    __BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) * local_1c->y;
      local_12c.y = __BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) * local_1c->x -
                    __BITCAST_DOUBLE(CONCAT44(uStack_50,local_54)) * local_1c->z;
      local_12c.z = __BITCAST_DOUBLE(CONCAT44(uStack_50,local_54)) * local_1c->y -
                    __BITCAST_DOUBLE(CONCAT44(uStack_48,local_4c)) * local_1c->x;
      dVar1 = 1.0 / SQRT(local_12c.z * local_12c.z +
                         local_12c.x * local_12c.x + local_12c.y * local_12c.y);
      local_12c.x = local_12c.x * dVar1;
      local_12c.y = local_12c.y * dVar1;
      local_12c.z = local_12c.z * dVar1;
      local_28 = 0;
      local_2c = 0;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_12c,local_20,local_24,&local_28,&local_2c);
      if ((local_28 != 0) && (local_2c != 0)) {
        iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_20,&local_28,0);
        pSVar3 = local_24;
        if (iVar2 != 0) {
          iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                            (this_ptr,local_24,&local_2c,0);
          if (iVar2 == 0) {
LAB_005c8a6e:
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(pSVar3);
            return 0;
          }
          if ((local_28 == 0) || (local_2c == 0)) goto LAB_005c8a2a;
          pSVar3 = local_20;
          piVar9 = this_ptr->expanded_edges;
          for (uVar5 = (uint)(local_28 * 0x60) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *piVar9 = pSVar3->start_vertex_index;
            pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar10 * -8 + 4);
            piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(char *)piVar9 = (char)pSVar3->start_vertex_index;
            pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar10 * -2 + 1);
            piVar9 = (int *)((int)piVar9 + (uint)bVar10 * -2 + 1);
          }
          this_ptr->expanded_edge_count = local_28;
          iVar2 = shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(this_ptr);
          if (iVar2 == 0) {
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(local_24);
            return 0;
          }
          pSVar3 = local_24;
          piVar9 = this_ptr->expanded_edges;
          for (uVar5 = (uint)(local_2c * 0x60) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *piVar9 = pSVar3->start_vertex_index;
            pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar10 * -8 + 4);
            piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(char *)piVar9 = (char)pSVar3->start_vertex_index;
            pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar10 * -2 + 1);
            piVar9 = (int *)((int)piVar9 + (uint)bVar10 * -2 + 1);
          }
          this_ptr->expanded_edge_count = local_2c;
          iVar2 = shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(this_ptr);
          if (iVar2 != 0) {
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
