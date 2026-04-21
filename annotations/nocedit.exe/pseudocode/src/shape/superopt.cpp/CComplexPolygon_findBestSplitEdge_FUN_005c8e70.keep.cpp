// Name: shape_superopt.cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70
// Address: 005c8e70
// MANUAL RECONSTRUCTION
// Address Range: [[005c8e70, 005c90fe]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar1;
  int iVar5;
  int iVar2;
  uint *puVar3;
  double *pdVar4;
  CVector3d *pCVar5;
  uint *puVar6;
  byte bVar6;
  double dVar7;
  double dVar8;
  CVector3d local_e4;
  double local_cc;
  double local_c4;
  double local_bc;
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
  uint local_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
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
      iVar2 = (int)this_ptr->expanded_edges->start_uv + local_28 + -0x40;
      memcpy(&local_6c,(void *)(iVar2 + 0x10),0x18);
      local_9c = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
      local_94 = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
      local_8c = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
      pdVar4 = &local_9c;
      puVar6 = &local_84;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        *puVar6 = *(uint *)pdVar4;
        pdVar4 = pdVar4;
        puVar6 = puVar6 + (uint)bVar6 * -2 + 1;
      }
      dVar8 = __BITCAST_DOUBLE(CONCAT44(uStack_78,local_7c)) * local_1c->z -
              __BITCAST_DOUBLE(CONCAT44(uStack_70,local_74)) * local_1c->y;
      dVar1 = __BITCAST_DOUBLE(CONCAT44(uStack_70,local_74)) * local_1c->x -
              __BITCAST_DOUBLE(CONCAT44(uStack_80,local_84)) * local_1c->z;
      dVar2 = __BITCAST_DOUBLE(CONCAT44(uStack_80,local_84)) * local_1c->y -
              __BITCAST_DOUBLE(CONCAT44(uStack_78,local_7c)) * local_1c->x;
      dVar3 = 1.0 / SQRT(dVar2 * dVar2 + dVar8 * dVar8 + dVar1 * dVar1);
      local_e4.x = dVar8 * dVar3;
      local_e4.y = dVar1 * dVar3;
      local_2c = 0;
      local_14 = 0;
      local_e4.z = dVar2 * dVar3;
      local_20 = iVar2;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_e4,buf_a,buf_b,&local_2c,&local_14);
      if ((local_2c != 0) && (local_14 != 0)) {
        iVar5 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_a,&local_2c,1);
        iVar4 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_b,&local_14,1);
        if ((iVar5 == 0) && (iVar4 == 0)) {
          return 0;
        }
        dVar7 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100(this_ptr,buf_a,local_2c)
        ;
        local_34 = SUB84(__BITCAST_UINT64(dVar7),0);
        uStack_30 = (uint)((ulonglong)dVar7 >> 0x20);
        if (__BITCAST_DOUBLE(CONCAT44(uStack_38,local_3c)) < dVar7) {
          local_3c = local_34;
          uStack_38 = uStack_30;
          local_18 = local_20;
        }
        dVar8 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100(this_ptr,buf_b,local_14)
        ;
        local_34 = SUB84(__BITCAST_UINT64(dVar8),0);
        uStack_30 = (uint)((ulonglong)dVar8 >> 0x20);
        if (__BITCAST_DOUBLE(CONCAT44(uStack_38,local_3c)) < dVar8) {
          local_3c = local_34;
          uStack_38 = uStack_30;
          local_18 = local_20;
        }
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + 0x60;
    } while (local_24 < (uint)this_ptr->expanded_edge_count);
  }
  return local_18;
}
