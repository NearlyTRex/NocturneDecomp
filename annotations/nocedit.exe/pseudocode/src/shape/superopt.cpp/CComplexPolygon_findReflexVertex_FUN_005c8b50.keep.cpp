// Name: shape_superopt.cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50
// Address: 005c8b50
// MANUAL RECONSTRUCTION
// Address Range: [[005c8b50, 005c8e6a]]
// Convention: __cdecl
// Signature: SExpandedEdge * __cdecl shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

#include "nocturne.h"

SExpandedEdge * __cdecl shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  SExpandedEdge *edge;
  double *pdVar4;
  uint *puVar6;
  byte bVar6;
  double dVar7;
  double dVar8;
  uint local_cc;
  uint uStack_c8;
  uint local_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  CVector3d local_b4;
  double local_84;
  CVector3d local_6c;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  int local_2c;
  int local_28;
  uint local_20;
  SExpandedEdge *local_1c;
  SExpandedEdge *local_18;
  CVector3d *local_14;
  double local_7c;
  double local_74;
  
  bVar6 = 0;
  local_1c = (SExpandedEdge *)0x0;
  local_20 = 0;
  local_44 = 0;
  uStack_40 = 0;
  if (this_ptr->expanded_edge_count != 0) {
    local_14 = &this_ptr->normal;
    do {
      edge = &this_ptr->expanded_edges[local_20];
      local_18 = edge;
      local_6c = edge->start_pos;
      local_84 = edge->end_pos.x - edge->start_pos.x;
      local_7c = edge->end_pos.y - edge->start_pos.y;
      local_74 = edge->end_pos.z - edge->start_pos.z;
      pdVar4 = &local_84;
      puVar6 = &local_cc;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        *puVar6 = *(uint *)pdVar4;
        pdVar4 = pdVar4;
        puVar6 = puVar6 + (uint)bVar6 * -2 + 1;
      }
      dVar8 = __BITCAST_DOUBLE(CONCAT44(uStack_c0,local_c4)) * local_14->z -
              __BITCAST_DOUBLE(CONCAT44(uStack_b8,local_bc)) * local_14->y;
      dVar1 = __BITCAST_DOUBLE(CONCAT44(uStack_b8,local_bc)) * local_14->x -
              __BITCAST_DOUBLE(CONCAT44(uStack_c8,local_cc)) * local_14->z;
      dVar2 = __BITCAST_DOUBLE(CONCAT44(uStack_c8,local_cc)) * local_14->y -
              __BITCAST_DOUBLE(CONCAT44(uStack_c0,local_c4)) * local_14->x;
      dVar3 = 1.0 / SQRT(dVar2 * dVar2 + dVar8 * dVar8 + dVar1 * dVar1);
      local_b4.x = dVar8 * dVar3;
      local_b4.y = dVar1 * dVar3;
      local_2c = 0;
      local_28 = 0;
      local_b4.z = dVar2 * dVar3;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_b4,buf_a,buf_b,&local_2c,&local_28);
      if ((local_2c != 0) && (local_28 != 0)) {
        iVar5 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_a,&local_2c,1);
        iVar4 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_b,&local_28,1);
        if ((iVar5 == 0) && (iVar4 == 0)) {
          return (SExpandedEdge *)0x0;
        }
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(this_ptr,buf_a,local_2c);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(this_ptr,buf_b,local_28);
        }
        if ((iVar5 != 0) || (iVar4 != 0)) {
          if ((iVar5 != 0) && (iVar4 != 0)) {
            return local_18;
          }
          if (iVar5 == 0) {
            dVar8 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                              (this_ptr,buf_b,local_28);
            local_3c = SUB84(__BITCAST_UINT64(dVar8),0);
            uStack_38 = (uint)((ulonglong)dVar8 >> 0x20);
            if (__BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) < dVar8) {
              local_44 = local_3c;
              uStack_40 = uStack_38;
              local_1c = local_18;
            }
          }
          else {
            dVar7 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                              (this_ptr,buf_a,local_2c);
            local_3c = SUB84(__BITCAST_UINT64(dVar7),0);
            uStack_38 = (uint)((ulonglong)dVar7 >> 0x20);
            if (__BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) < dVar7) {
              local_44 = local_3c;
              uStack_40 = uStack_38;
              local_1c = local_18;
            }
          }
        }
      }
      local_20 = local_20 + 1;
    } while (local_20 < (uint)this_ptr->expanded_edge_count);
  }
  return local_1c;
}
