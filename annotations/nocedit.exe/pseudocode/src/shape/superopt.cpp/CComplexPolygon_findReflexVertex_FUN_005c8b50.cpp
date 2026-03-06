// Name: shape_superopt.cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50
// Address: 005c8b50
// Address Range: [[005c8b50, 005c8e6a]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  double *pdVar4;
  CVector3d *pCVar5;
  byte bVar6;
  double dVar7;
  uint local_cc;
  uint uStack_c8;
  uint local_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  CVector3d local_b4;
  double local_9c;
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  double local_74;
  CVector3d local_6c;
  uint local_54;
  uint uStack_50;
  uint local_44;
  uint uStack_40;
  ulonglong local_3c;
  uint local_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  CVector3d *local_14;
  
  bVar6 = 0;
  local_1c = 0;
  local_20 = 0;
  local_44 = 0;
  uStack_40 = 0;
  if (this_ptr->expanded_edge_count != 0) {
    local_24 = 0;
    local_14 = &this_ptr->normal;
    do {
      iVar2 = local_24 + (int)this_ptr->expanded_edges;
      local_18 = iVar2;
      puVar3 = (uint *)(iVar2 + 0x10);
      pCVar5 = &local_6c;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(uint *)&pCVar5->x = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        pCVar5 = (CVector3d *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      local_84 = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
      local_7c = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
      local_74 = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
      pdVar4 = &local_84;
      puVar3 = &local_cc;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(uint *)pdVar4;
        pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      }
      local_9c = __BITCAST_DOUBLE(CONCAT44(uStack_c0,local_c4)) * local_14->z -
                 __BITCAST_DOUBLE(CONCAT44(uStack_b8,local_bc)) * local_14->y;
      local_94 = __BITCAST_DOUBLE(CONCAT44(uStack_b8,local_bc)) * local_14->x -
                 __BITCAST_DOUBLE(CONCAT44(uStack_c8,local_cc)) * local_14->z;
      local_8c = __BITCAST_DOUBLE(CONCAT44(uStack_c8,local_cc)) * local_14->y -
                 __BITCAST_DOUBLE(CONCAT44(uStack_c0,local_c4)) * local_14->x;
      dVar7 = 1.0 / SQRT(local_8c * local_8c + local_9c * local_9c + local_94 * local_94);
      local_9c = local_9c * dVar7;
      local_94 = local_94 * dVar7;
      local_2c = 0;
      local_28 = 0;
      local_8c = local_8c * dVar7;
      local_b4.x = local_9c;
      local_b4.y = local_94;
      local_b4.z = local_8c;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_b4,buf_a,buf_b,&local_2c,&local_28);
      dVar7 = local_3c;
      if ((local_2c != 0) && (local_28 != 0)) {
        iVar1 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_a,&local_2c,1);
        iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_b,&local_28,1);
        if ((iVar1 == 0) && (iVar2 == 0)) {
          return 0;
        }
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(this_ptr,buf_a,local_2c);
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(this_ptr,buf_b,local_28);
        }
        if ((iVar1 != 0) || (dVar7 = local_3c, iVar2 != 0)) {
          if ((iVar1 != 0) && (iVar2 != 0)) {
            return local_18;
          }
          if (iVar1 == 0) {
            dVar7 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                              (this_ptr,buf_b,local_28);
            local_3c = dVar7;
            dVar7 = local_3c;
            local_3c._0_4_ = SUB84(__BITCAST_UINT64(dVar7),0);
            local_54 = (uint)local_3c;
            local_3c._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
            uStack_50 = local_3c._4_4_;
            if (__BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) < dVar7) {
              local_44 = (uint)local_3c;
              uStack_40 = local_3c._4_4_;
              local_1c = local_18;
            }
          }
          else {
            dVar7 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                              (this_ptr,buf_a,local_2c);
            local_3c = dVar7;
            dVar7 = local_3c;
            local_3c._0_4_ = SUB84(__BITCAST_UINT64(dVar7),0);
            local_34 = (uint)local_3c;
            local_3c._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
            uStack_30 = local_3c._4_4_;
            if (__BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) < dVar7) {
              local_44 = (uint)local_3c;
              uStack_40 = local_3c._4_4_;
              local_1c = local_18;
            }
          }
        }
      }
      local_3c = dVar7;
      local_20 = local_20 + 1;
      local_24 = local_24 + 0x60;
    } while (local_20 < (uint)this_ptr->expanded_edge_count);
  }
  return local_1c;
}
