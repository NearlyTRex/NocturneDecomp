// Name: shape_superopt.cpp_CComplexPolygon_splitByDimensions_FUN_005c9500
// Address: 005c9500
// Address Range: [[005c9500, 005c9a9e]]
// Convention: __cdecl
// Signature: CComplexPolygon * __cdecl shape_superopt_cpp_CComplexPolygon_splitByDimensions_FUN_005c9500(CComplexPolygon *this_ptr,double *max_dimensions)

#include "nocturne.h"

CComplexPolygon * __cdecl shape_superopt_cpp_CComplexPolygon_splitByDimensions_FUN_005c9500(CComplexPolygon *this_ptr,double *max_dimensions)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  SExpandedEdge *pSVar4;
  SExpandedEdge *pSVar5;
  CComplexPolygon *this_ptr_00;
  CComplexPolygon *pCVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  CVector3d *pCVar12;
  byte bVar13;
  CVector3d *plane_normal;
  uint local_188 [4];
  uint local_178;
  uint uStack_174;
  CVector3d local_170;
  CVector3d local_158;
  CVector3d local_140;
  CVector3d local_128;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  double local_100;
  double local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0 [4];
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint local_c4;
  double local_c0;
  uint local_b8;
  uint local_b4;
  CVector3d local_b0;
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
  CVector3d local_68;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  int local_28;
  int local_24;
  SExpandedEdge *local_20;
  SExpandedEdge *local_1c;
  SExpandedEdge *local_18;
  SExpandedEdge *local_14;
  
  bVar13 = 0;
  if ((this_ptr->expanded_edge_count != 0) &&
     (pvVar1 = this_ptr->expanded_edges, pvVar1 != (void *)0x0)) {
    puVar10 = (uint *)((int)pvVar1 + 0x10);
    puVar11 = local_e0;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar10 = local_e0;
    puVar11 = local_188;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    uVar9 = 0;
    if (this_ptr->expanded_edge_count != 0) {
      pdVar8 = (double *)((int)pvVar1 + 0x10);
      do {
        if (*pdVar8 < __BITCAST_DOUBLE(CONCAT44(local_e0[1],local_e0[0]))) {
          local_e0[0] = *(uint *)pdVar8;
          local_e0[1] = *(uint *)((int)pdVar8 + 4);
        }
        if (pdVar8[1] < __BITCAST_DOUBLE(CONCAT44(local_e0[3],local_e0[2]))) {
          local_e0[2] = *(uint *)(pdVar8 + 1);
          local_e0[3] = *(uint *)((int)pdVar8 + 0xc);
        }
        if (pdVar8[2] < __BITCAST_DOUBLE(CONCAT44(uStack_cc,local_d0))) {
          local_d0 = *(uint *)(pdVar8 + 2);
          uStack_cc = *(uint *)((int)pdVar8 + 0x14);
        }
        if (__BITCAST_DOUBLE(CONCAT44(local_188[1],local_188[0])) < *pdVar8) {
          local_188[0] = *(uint *)pdVar8;
          local_188[1] = *(uint *)((int)pdVar8 + 4);
        }
        if (__BITCAST_DOUBLE(CONCAT44(local_188[3],local_188[2])) < pdVar8[1]) {
          local_188[2] = *(uint *)(pdVar8 + 1);
          local_188[3] = *(uint *)((int)pdVar8 + 0xc);
        }
        if (__BITCAST_DOUBLE(CONCAT44(uStack_174,local_178)) < pdVar8[2]) {
          local_178 = *(uint *)(pdVar8 + 2);
          uStack_174 = *(uint *)((int)pdVar8 + 0x14);
        }
        uVar9 = uVar9 + 1;
        pdVar8 = pdVar8 + 0xc;
      } while (uVar9 < (uint)this_ptr->expanded_edge_count);
    }
    local_1c = shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->expanded_edge_count * 0xc0);
    local_28 = 0;
    if (local_1c != (SExpandedEdge *)0x0) {
      local_18 = local_1c;
      pSVar4 = shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->expanded_edge_count * 0xc0);
      local_20 = pSVar4;
      local_14 = pSVar4;
      local_24 = 0;
      if (pSVar4 == (SExpandedEdge *)0x0) {
        shape_memdbg_cpp_free_FUN_005fe659(local_18);
        return (CComplexPolygon *)0x0;
      }
      if (*max_dimensions + 0.5 <
          __BITCAST_DOUBLE(CONCAT44(local_188[1],local_188[0])) - __BITCAST_DOUBLE(CONCAT44(local_e0[1],local_e0[0]))) {
        local_80 = 0;
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_6c = 0;
        local_7c = 0x3ff00000;
        local_f0 = local_e0[2];
        local_ec = local_e0[3];
        local_28 = 0;
        local_e8 = local_d0;
        local_24 = 0;
        local_e4 = uStack_cc;
        local_f8 = *max_dimensions + __BITCAST_DOUBLE(CONCAT44(local_e0[1],local_e0[0]));
        pdVar8 = &local_f8;
        pCVar12 = &local_158;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(uint *)&pCVar12->x = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar13 * -8 + 4);
          pCVar12 = (CVector3d *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
        }
        local_140.x._0_4_ = 0;
        pCVar12 = &local_140;
        local_140.x._4_4_ = 0x3ff00000;
        plane_normal = &local_158;
        local_140.y._0_4_ = 0;
        local_140.y._4_4_ = 0;
        local_140.z._0_4_ = 0;
        local_140.z._4_4_ = 0;
        pSVar4 = local_20;
      }
      else if (max_dimensions[1] + 0.5 <
               __BITCAST_DOUBLE(CONCAT44(local_188[3],local_188[2])) -
               __BITCAST_DOUBLE(CONCAT44(local_e0[3],local_e0[2]))) {
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_40 = 0;
        local_3c = 0;
        local_44 = 0x3ff00000;
        local_38 = *(uint *)(max_dimensions + 1);
        uStack_34 = *(uint *)((int)max_dimensions + 0xc);
        local_c8 = local_e0[0];
        local_c4 = local_e0[1];
        local_b8 = local_d0;
        local_b4 = uStack_cc;
        local_28 = 0;
        local_c0 = __BITCAST_DOUBLE(CONCAT44(local_e0[3],local_e0[2])) + max_dimensions[1];
        puVar10 = &local_c8;
        pCVar12 = &local_170;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(uint *)&pCVar12->x = *puVar10;
          puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
          pCVar12 = (CVector3d *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
        }
        local_128.x._0_4_ = 0;
        pCVar12 = &local_128;
        local_128.x._4_4_ = 0;
        plane_normal = &local_170;
        local_128.y._0_4_ = 0;
        local_128.z._0_4_ = 0;
        local_128.z._4_4_ = 0;
        local_128.y._4_4_ = 0x3ff00000;
        pSVar4 = local_20;
      }
      else {
        if (__BITCAST_DOUBLE(CONCAT44(uStack_174,local_178)) - __BITCAST_DOUBLE(CONCAT44(uStack_cc,local_d0)) <=
            max_dimensions[2] + 0.5) {
          shape_memdbg_cpp_free_FUN_005fe659(local_18);
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          return (CComplexPolygon *)0x0;
        }
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        local_8c = 0;
        local_88 = 0;
        local_84 = 0x3ff00000;
        local_30 = *(uint *)(max_dimensions + 2);
        uStack_2c = *(uint *)((int)max_dimensions + 0x14);
        local_110 = local_e0[0];
        local_10c = local_e0[1];
        local_108 = local_e0[2];
        local_104 = local_e0[3];
        local_100 = __BITCAST_DOUBLE(CONCAT44(uStack_cc,local_d0)) + max_dimensions[2];
        puVar10 = &local_110;
        pCVar12 = &local_68;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(uint *)&pCVar12->x = *puVar10;
          puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
          pCVar12 = (CVector3d *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
        }
        local_28 = 0;
        pCVar12 = &local_b0;
        local_b0.x._0_4_ = 0;
        plane_normal = &local_68;
        local_b0.x._4_4_ = 0;
        local_b0.y._0_4_ = 0;
        local_b0.y._4_4_ = 0;
        local_b0.z._0_4_ = 0;
        local_b0.z._4_4_ = 0x3ff00000;
      }
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,plane_normal,pCVar12,local_18,pSVar4,&local_28,&local_24);
      pSVar4 = local_1c;
      bVar2 = false;
      if (local_28 != 0) {
        pSVar5 = local_1c;
        do {
          if ((pSVar5->start_side == 0) || (pSVar5->end_side == 0)) {
            bVar2 = true;
            break;
          }
          pSVar5 = pSVar5 + 1;
        } while (pSVar5 < local_1c + local_28);
      }
      bVar3 = false;
      if (local_24 != 0) {
        pSVar5 = local_14;
        do {
          if ((pSVar5->start_side == 0) || (pSVar5->end_side == 0)) {
            bVar3 = true;
            break;
          }
          pSVar5 = pSVar5 + 1;
        } while (pSVar5 < local_14 + local_24);
      }
      if ((bVar2) || (bVar3)) {
        iVar7 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_1c,&local_28,0);
        if (iVar7 == 0) {
          shape_memdbg_cpp_free_FUN_005fe659(pSVar4);
          shape_memdbg_cpp_free_FUN_005fe659(local_14);
          return (CComplexPolygon *)0x0;
        }
        iVar7 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_14,&local_24,0);
        if (iVar7 == 0) {
          shape_memdbg_cpp_free_FUN_005fe659(pSVar4);
          shape_memdbg_cpp_free_FUN_005fe659(local_14);
          return (CComplexPolygon *)0x0;
        }
      }
      this_ptr_00 = (CComplexPolygon *)shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(0x34);
      pCVar6 = (CComplexPolygon *)0x0;
      if (this_ptr_00 != (CComplexPolygon *)0x0) {
        pCVar6 = shape_superopt_cpp_CComplexPolygon_ctor_FUN_005c79a0(this_ptr_00);
      }
      if (pCVar6 == (CComplexPolygon *)0x0) {
        shape_memdbg_cpp_free_FUN_005fe659(local_1c);
        shape_memdbg_cpp_free_FUN_005fe659(local_14);
        return (CComplexPolygon *)0x0;
      }
      pCVar6->material_id = this_ptr->material_id;
      *(uint *)&(pCVar6->normal).x = *(uint *)&(this_ptr->normal).x;
      *(uint *)((int)&(pCVar6->normal).x + 4) =
           *(uint *)((int)&(this_ptr->normal).x + 4);
      *(uint *)&(pCVar6->normal).y = *(uint *)&(this_ptr->normal).y;
      *(uint *)((int)&(pCVar6->normal).y + 4) =
           *(uint *)((int)&(this_ptr->normal).y + 4);
      *(uint *)&(pCVar6->normal).z = *(uint *)&(this_ptr->normal).z;
      *(uint *)((int)&(pCVar6->normal).z + 4) =
           *(uint *)((int)&(this_ptr->normal).z + 4);
      pCVar6->expanded_edge_count = local_28;
      pCVar6->expanded_edges = local_1c;
      shape_superopt_cpp_CComplexPolygon_free_FUN_005c79f0(this_ptr);
      this_ptr->expanded_edge_count = local_24;
      this_ptr->expanded_edges = local_14;
      return pCVar6;
    }
  }
  return (CComplexPolygon *)0x0;
}
