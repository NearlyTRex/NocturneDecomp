// Name: shape_superopt.cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50
// Address: 005c8b50
// Address Range: [[005c8b50, 005c8e6a]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

{
  double dVar1;
  int iVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar3;
  uint *puVar4;
  double *pdVar5;
  CVector3d *pCVar6;
  byte bVar7;
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
  int local_54;
  uint uStack_50;
  int local_44;
  uint uStack_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  CVector3d *local_14;
  
  bVar7 = 0;
  local_1c = 0;
  local_20 = 0;
  local_44 = 0;
  uStack_40 = 0;
  if (this_ptr->expanded_edge_count != 0) {
    local_24 = 0;
    local_14 = &this_ptr->normal;
    do {
      iVar3 = local_24 + (int)this_ptr->expanded_edges;
      local_18 = iVar3;
      puVar4 = (uint *)(iVar3 + 0x10);
      pCVar6 = &local_6c;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)&pCVar6->x = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        pCVar6 = (CVector3d *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      local_84 = *(double *)(iVar3 + 0x28) - *(double *)(iVar3 + 0x10);
      local_7c = *(double *)(iVar3 + 0x30) - *(double *)(iVar3 + 0x18);
      local_74 = *(double *)(iVar3 + 0x38) - *(double *)(iVar3 + 0x20);
      pdVar5 = &local_84;
      puVar4 = &local_cc;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *(uint *)pdVar5;
        pdVar5 = (double *)((int)pdVar5 + (uint)bVar7 * -8 + 4);
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      }
      local_9c = __BITCAST_DOUBLE(CONCAT44(uStack_c0,local_c4)) * local_14->z -
                 __BITCAST_DOUBLE(CONCAT44(uStack_b8,local_bc)) * local_14->y;
      local_94 = __BITCAST_DOUBLE(CONCAT44(uStack_b8,local_bc)) * local_14->x -
                 __BITCAST_DOUBLE(CONCAT44(uStack_c8,local_cc)) * local_14->z;
      local_8c = __BITCAST_DOUBLE(CONCAT44(uStack_c8,local_cc)) * local_14->y -
                 __BITCAST_DOUBLE(CONCAT44(uStack_c0,local_c4)) * local_14->x;
      dVar1 = 1.0 / SQRT(local_8c * local_8c + local_9c * local_9c + local_94 * local_94);
      local_9c = local_9c * dVar1;
      local_94 = local_94 * dVar1;
      local_2c = 0;
      local_28 = 0;
      local_8c = local_8c * dVar1;
      local_b4.x = local_9c;
      local_b4.y = local_94;
      local_b4.z = local_8c;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_b4,buf_a,buf_b,&local_2c,&local_28);
      if ((local_2c != 0) && (local_28 != 0)) {
        iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_a,&local_2c,1);
        iVar3 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_b,&local_28,1);
        if ((iVar2 == 0) && (iVar3 == 0)) {
          return 0;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(this_ptr,buf_a,local_2c);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(this_ptr,buf_b,local_28);
        }
        if ((iVar2 != 0) || (iVar3 != 0)) {
          if ((iVar2 != 0) && (iVar3 != 0)) {
            return local_18;
          }
          if (iVar2 == 0) {
            local_3c = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                                 (this_ptr,buf_b,local_28);
            local_38 = extraout_EDX_00;
            local_54 = local_3c;
            uStack_50 = extraout_EDX_00;
            if (__BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) < __BITCAST_DOUBLE(CONCAT44(extraout_EDX_00,local_3c))) {
              local_44 = local_3c;
              uStack_40 = extraout_EDX_00;
              local_1c = local_18;
            }
          }
          else {
            local_3c = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                                 (this_ptr,buf_a,local_2c);
            local_38 = extraout_EDX;
            local_34 = local_3c;
            uStack_30 = extraout_EDX;
            if (__BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) < __BITCAST_DOUBLE(CONCAT44(extraout_EDX,local_3c))) {
              local_44 = local_3c;
              uStack_40 = extraout_EDX;
              local_1c = local_18;
            }
          }
        }
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + 0x60;
    } while (local_20 < (uint)this_ptr->expanded_edge_count);
  }
  return local_1c;
}
