// Name: shape_superopt.cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70
// Address: 005c8e70
// Address Range: [[005c8e70, 005c90fe]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint *puVar4;
  double *pdVar5;
  CVector3d *pCVar6;
  byte bVar7;
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
  int local_54;
  uint uStack_50;
  int local_44;
  int local_3c;
  uint uStack_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  CVector3d *local_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  local_18 = 0;
  local_24 = 0;
  local_3c = 0;
  uStack_38 = 0;
  if (this_ptr->expanded_edge_count != 0) {
    local_28 = 0;
    local_1c = &this_ptr->normal;
    do {
      iVar3 = local_28 + (int)this_ptr->expanded_edges;
      puVar4 = (uint *)(iVar3 + 0x10);
      pCVar6 = &local_6c;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)&pCVar6->x = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        pCVar6 = (CVector3d *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      local_9c = *(double *)(iVar3 + 0x28) - *(double *)(iVar3 + 0x10);
      local_94 = *(double *)(iVar3 + 0x30) - *(double *)(iVar3 + 0x18);
      local_8c = *(double *)(iVar3 + 0x38) - *(double *)(iVar3 + 0x20);
      pdVar5 = &local_9c;
      puVar4 = &local_84;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *(uint *)pdVar5;
        pdVar5 = (double *)((int)pdVar5 + (uint)bVar7 * -8 + 4);
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
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
      dVar1 = 1.0 / SQRT(local_bc * local_bc + local_cc * local_cc + local_c4 * local_c4);
      local_cc = local_cc * dVar1;
      local_c4 = local_c4 * dVar1;
      local_2c = 0;
      local_14 = 0;
      local_bc = local_bc * dVar1;
      local_20 = iVar3;
      local_e4.x = local_cc;
      local_e4.y = local_c4;
      local_e4.z = local_bc;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_e4,buf_a,buf_b,&local_2c,&local_14);
      if ((local_2c != 0) && (local_14 != 0)) {
        iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_a,&local_2c,1);
        iVar3 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_b,&local_14,1);
        if ((iVar2 == 0) && (iVar3 == 0)) {
          return 0;
        }
        local_44 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                             (this_ptr,buf_a,local_2c);
        if (__BITCAST_DOUBLE(CONCAT44(uStack_38,local_3c)) < __BITCAST_DOUBLE(CONCAT44(extraout_EDX,local_44))) {
          local_18 = local_20;
          local_3c = local_44;
          uStack_38 = extraout_EDX;
        }
        local_34 = local_44;
        local_34 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                             (this_ptr,buf_b,local_14);
        local_30 = extraout_EDX_00;
        local_54 = local_34;
        uStack_50 = extraout_EDX_00;
        if (__BITCAST_DOUBLE(CONCAT44(uStack_38,local_3c)) < __BITCAST_DOUBLE(CONCAT44(extraout_EDX_00,local_34))) {
          local_3c = local_34;
          uStack_38 = extraout_EDX_00;
          local_18 = local_20;
        }
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + 0x60;
    } while (local_24 < (uint)this_ptr->expanded_edge_count);
  }
  return local_18;
}
