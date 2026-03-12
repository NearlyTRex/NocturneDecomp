// Name: shape_design.c_applyVertexCentering_FUN_004680f0
// Address: 004680f0
// Address Range: [[004680f0, 0046819a]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_applyVertexCentering_FUN_004680f0(SMRGLHeaderExtended *target_model,CVector3i *reference_vertex_list,int reference_vertex_id)

#include "nocturne.h"

void __cdecl shape_design_c_applyVertexCentering_FUN_004680f0(SMRGLHeaderExtended *target_model,CVector3i *reference_vertex_list,int reference_vertex_id)

{
  int iVar1;
  uint *puVar1;
  byte bVar2;
  int aiStackY_1010 [1017];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CVector3i *local_14;
  
  bVar2 = 0;
  local_14 = shape_design_c_findVertexListInModel_FUN_00468000(target_model);
  local_18 = shape_design_c_getVertexCountFromModel_FUN_00468080(target_model);
  puVar1 = (uint *)((int)(local_14 + reference_vertex_id) + (uint)bVar2 * -8 + 4);
  iVar1 = local_14[reference_vertex_id].x;
  (&local_24)[(uint)bVar2 * -2] = *puVar1;
  (&local_20)[(uint)bVar2 * -2 + (uint)bVar2 * -2] = puVar1[(uint)bVar2 * -2 + 1];
  for (local_1c = 0; local_1c < local_18; local_1c = local_1c + 1) {
    local_14[local_1c].x = (local_14[local_1c].x - iVar1) + reference_vertex_list->x;
    local_14[local_1c].y = (local_14[local_1c].y - local_24) + reference_vertex_list->y;
    local_14[local_1c].z = (local_14[local_1c].z - local_20) + reference_vertex_list->z;
  }
  return;
}
