// Name: shape_superopt.cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70
// Address: 005c8e70
// Address Range: [[005c8e70, 005c90fe]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  double *pdVar4;
  CVector3d *pCVar5;
  byte bVar6;
  double dVar7;
  CVector3d local_e4;
  double local_cc;
  double local_c4;
  double local_bc;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  double local_9c;
  double local_94;
  double local_8c;
  uint local_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  CVector3d local_6c;
  uint local_54;
  uint uStack_50;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  ulonglong local_34;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  CVector3d *local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  local_18 = 0;
  local_24 = 0;
  local_3c = 0;
  uStack_38 = 0;
  if (this_ptr->expanded_edge_count != 0) {
    local_28 = 0;
    local_1c = &this_ptr->normal;
    do {
      iVar2 = local_28 + (int)this_ptr->expanded_edges;
      puVar3 = (uint *)(iVar2 + 0x10);
      pCVar5 = &local_6c;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(uint *)&pCVar5->x = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        pCVar5 = (CVector3d *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      local_9c = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
      local_94 = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
      local_8c = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
      pdVar4 = &local_9c;
      puVar3 = &local_84;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(uint *)pdVar4;
        pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      }
      local_b4 = local_84;
      local_b0 = uStack_80;
      local_ac = local_7c;
      local_a8 = uStack_78;
      local_a4 = local_74;
      local_a0 = uStack_70;
      local_cc = __BITCAST_DOUBLE(CONCAT44(uStack_78,local_7c)) * local_1c->z -
                 __BITCAST_DOUBLE(CONCAT44(uStack_70,local_74)) * local_1c->y;
      local_c4 = __BITCAST_DOUBLE(CONCAT44(uStack_70,local_74)) * local_1c->x -
                 __BITCAST_DOUBLE(CONCAT44(uStack_80,local_84)) * local_1c->z;
      local_bc = __BITCAST_DOUBLE(CONCAT44(uStack_80,local_84)) * local_1c->y -
                 __BITCAST_DOUBLE(CONCAT44(uStack_78,local_7c)) * local_1c->x;
      dVar7 = 1.0 / SQRT(local_bc * local_bc + local_cc * local_cc + local_c4 * local_c4);
      local_cc = local_cc * dVar7;
      local_c4 = local_c4 * dVar7;
      local_2c = 0;
      local_14 = 0;
      local_bc = local_bc * dVar7;
      local_20 = iVar2;
      local_e4.x = local_cc;
      local_e4.y = local_c4;
      local_e4.z = local_bc;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_e4,buf_a,buf_b,&local_2c,&local_14);
      dVar7 = local_34;
      if ((local_2c != 0) && (local_14 != 0)) {
        iVar1 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_a,&local_2c,1);
        iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_b,&local_14,1);
        if ((iVar1 == 0) && (iVar2 == 0)) {
          return 0;
        }
        dVar7 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100(this_ptr,buf_a,local_2c)
        ;
        local_34._0_4_ = SUB84(__BITCAST_UINT64(dVar7),0);
        local_44 = (uint)local_34;
        local_34._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
        uStack_40 = local_34._4_4_;
        if (__BITCAST_DOUBLE(CONCAT44(uStack_38,local_3c)) < dVar7) {
          local_3c = (uint)local_34;
          uStack_38 = local_34._4_4_;
          local_18 = local_20;
        }
        local_34 = dVar7;
        dVar7 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100(this_ptr,buf_b,local_14)
        ;
        local_34 = dVar7;
        dVar7 = local_34;
        local_34._0_4_ = SUB84(__BITCAST_UINT64(dVar7),0);
        local_54 = (uint)local_34;
        local_34._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
        uStack_50 = local_34._4_4_;
        if (__BITCAST_DOUBLE(CONCAT44(uStack_38,local_3c)) < dVar7) {
          local_3c = (uint)local_34;
          uStack_38 = local_34._4_4_;
          local_18 = local_20;
        }
      }
      local_34 = dVar7;
      local_24 = local_24 + 1;
      local_28 = local_28 + 0x60;
    } while (local_24 < (uint)this_ptr->expanded_edge_count);
  }
  return local_18;
}
