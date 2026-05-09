// Name: shape_design.c_applyVertexCentering_FUN_004680f0
// Address: 004680f0
// MANUAL RECONSTRUCTION
// Address Range: [[004680f0, 0046819a] [00608c2a, 00608c4b]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_applyVertexCentering_FUN_004680f0(SMRGLHeaderExtended *target_model,CVector3i *reference_vertex_list,int reference_vertex_id)

#include "nocturne.h"

void __cdecl shape_design_c_applyVertexCentering_FUN_004680f0(SMRGLHeaderExtended *target_model,CVector3i *reference_vertex_list,int reference_vertex_id)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CVector3i *pCVar4;
  int iVar5;
  CVector3i *pCVar6;
  int local_1c;
  
  pCVar4 = shape_design_c_findVertexListInModel_FUN_00468000(target_model);
  iVar5 = shape_design_c_getVertexCountFromModel_FUN_00468080(target_model);
  pCVar6 = pCVar4 + reference_vertex_id;
  iVar1 = pCVar6->x;
  iVar2 = pCVar6->y;
  iVar3 = pCVar6->z;
  for (local_1c = 0; local_1c < iVar5; local_1c = local_1c + 1) {
    pCVar4[local_1c].x = (pCVar4[local_1c].x - iVar1) + reference_vertex_list->x;
    pCVar4[local_1c].y = (pCVar4[local_1c].y - iVar2) + reference_vertex_list->y;
    pCVar4[local_1c].z = (pCVar4[local_1c].z - iVar3) + reference_vertex_list->z;
  }
  return;
}
