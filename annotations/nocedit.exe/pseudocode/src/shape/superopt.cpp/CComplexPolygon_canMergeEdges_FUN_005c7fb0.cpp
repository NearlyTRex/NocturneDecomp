// Name: shape_superopt.cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0
// Address: 005c7fb0
// Address Range: [[005c7fb0, 005c8154]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0(CComplexPolygon *this_ptr,SExpandedEdge *edge_a,SExpandedEdge *edge_b)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0(CComplexPolygon *this_ptr,SExpandedEdge *edge_a,SExpandedEdge *edge_b)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar2;
  uint *puVar4;
  uint *puVar3;
  CVector3d local_a0;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  uint local_58 [4];
  uint local_48;
  uint uStack_44;
  CVector3d local_40;
  uint local_28 [4];
  uint local_18;
  uint uStack_14;
  
  if (((((edge_a->end_pos).x != (edge_b->start_pos).x) ||
       ((edge_a->end_pos).y != (edge_b->start_pos).y)) ||
      ((edge_a->end_pos).z != (edge_b->start_pos).z)) &&
     ((((edge_a->start_pos).x != (edge_b->end_pos).x ||
       ((edge_a->start_pos).y != (edge_b->end_pos).y)) ||
      ((edge_a->start_pos).z != (edge_b->end_pos).z)))) {
    return 0;
  }
  local_88 = (edge_a->end_pos).x - (edge_a->start_pos).x;
  local_80 = (edge_a->end_pos).y - (edge_a->start_pos).y;
  local_78 = (edge_a->end_pos).z - (edge_a->start_pos).z;
  pdVar3 = &local_88;
  puVar4 = local_58;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(uint *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    puVar4 = puVar4 + 1;
  }
  local_40.x._0_4_ = local_58[0];
  local_40.x._4_4_ = local_58[1];
  local_40.y._0_4_ = local_58[2];
  local_40.y._4_4_ = local_58[3];
  local_40.z._0_4_ = local_48;
  local_40.z._4_4_ = uStack_44;
  local_70 = (edge_b->end_pos).x - (edge_b->start_pos).x;
  local_68 = (edge_b->end_pos).y - (edge_b->start_pos).y;
  local_60 = (edge_b->end_pos).z - (edge_b->start_pos).z;
  pdVar2 = &local_70;
  puVar3 = local_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar3 = puVar3 + 1;
  }
  local_a0.x._0_4_ = local_28[0];
  local_a0.x._4_4_ = local_28[1];
  local_a0.y._0_4_ = local_28[2];
  local_a0.y._4_4_ = local_28[3];
  local_a0.z._0_4_ = local_18;
  local_a0.z._4_4_ = uStack_14;
  if (0.0 <= __BITCAST_DOUBLE(CONCAT44(uStack_44,local_48)) * __BITCAST_DOUBLE(CONCAT44(uStack_14,local_18)) +
             __BITCAST_DOUBLE(CONCAT44(local_58[1],local_58[0])) * __BITCAST_DOUBLE(CONCAT44(local_28[1],local_28[0])) +
             __BITCAST_DOUBLE(CONCAT44(local_58[3],local_58[2])) * __BITCAST_DOUBLE(CONCAT44(local_28[3],local_28[2])))
  {
    iVar2 = shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(&local_40,&local_a0);
    return iVar2;
  }
  return 0;
}
