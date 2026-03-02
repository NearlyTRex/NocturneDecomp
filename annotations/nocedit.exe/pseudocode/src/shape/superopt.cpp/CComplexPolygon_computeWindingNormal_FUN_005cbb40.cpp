// Name: shape_superopt.cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40
// Address: 005cbb40
// Address Range: [[005cbb40, 005cbe16]]
// Convention: __cdecl
// Signature: CVector3d * __cdecl shape_superopt_cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40(CComplexPolygon *this_ptr,CVector3d *output_normal,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

CVector3d * __cdecl shape_superopt_cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40(CComplexPolygon *this_ptr,CVector3d *output_normal,SExpandedEdge *edges,int edge_count)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  CVector3d *pCVar6;
  double *pdVar7;
  double *pdVar8;
  ulonglong local_110;
  uint local_100;
  uint uStack_fc;
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
  double local_50;
  uint local_18;
  CVector3d *local_14;
  
  local_18 = 0;
  local_100 = 0;
  uStack_fc = 0x3ff00000;
  if (edge_count != 0) {
    pCVar6 = &edges->start_pos;
    do {
      uVar4 = local_18 + 1;
      if ((uint)edge_count <= uVar4) {
        uVar4 = 0;
      }
      local_a8 = pCVar6[1].x - pCVar6->x;
      local_a0 = pCVar6[1].y - pCVar6->y;
      local_98 = pCVar6[1].z - pCVar6->z;
      pdVar7 = &local_a8;
      pdVar8 = &local_90;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pdVar8 = *(uint *)pdVar7;
        pdVar7 = (double *)((int)pdVar7 + 4);
        pdVar8 = (double *)((int)pdVar8 + 4);
      }
      local_14 = &edges[uVar4].end_pos;
      dVar1 = 1.0 / SQRT(local_80 * local_80 + local_90 * local_90 + local_88 * local_88);
      dVar2 = local_90 * dVar1;
      dVar3 = local_88 * dVar1;
      dVar1 = local_80 * dVar1;
      local_c0 = edges[uVar4].end_pos.x - pCVar6[1].x;
      local_b8 = edges[uVar4].end_pos.y - pCVar6[1].y;
      local_b0 = edges[uVar4].end_pos.z - pCVar6[1].z;
      pdVar7 = &local_c0;
      pdVar8 = &local_60;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pdVar8 = *(uint *)pdVar7;
        pdVar7 = (double *)((int)pdVar7 + 4);
        pdVar8 = (double *)((int)pdVar8 + 4);
      }
      local_68 = 1.0 / SQRT(local_50 * local_50 + local_60 * local_60 + local_58 * local_58);
      local_78 = local_60 * local_68;
      local_70 = local_58 * local_68;
      local_68 = local_50 * local_68;
      local_110 = dVar2 * local_78 + dVar3 * local_70 + dVar1 * local_68;
      if (local_110 < 0.0) {
        local_110 = -local_110;
      }
      if (local_110 < __BITCAST_DOUBLE(CONCAT44(uStack_fc,local_100))) {
        local_100 = (uint)local_110;
        uStack_fc = local_110._4_4_;
        output_normal->x = dVar3 * local_68 - dVar1 * local_70;
        output_normal->y = dVar1 * local_78 - dVar2 * local_68;
        output_normal->z = dVar2 * local_70 - dVar3 * local_78;
      }
      local_18 = local_18 + 1;
      pCVar6 = pCVar6 + 4;
    } while (local_18 < (uint)edge_count);
  }
  dVar1 = 1.0 / SQRT(output_normal->z * output_normal->z +
                     output_normal->x * output_normal->x + output_normal->y * output_normal->y);
  output_normal->x = output_normal->x * dVar1;
  output_normal->y = output_normal->y * dVar1;
  output_normal->z = output_normal->z * dVar1;
  return output_normal;
}
