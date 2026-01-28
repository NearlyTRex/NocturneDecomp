// Name: shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920
// Address: 0051b920
// Address Range: [[0051b920, 0051bab5]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh *this_ptr)

{
  CLodEdge *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CBoundingBox3D *pCVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000008;
  CLodMesh *in_stack_0000000c;
  CBoundingBox3D CStack_54;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  int local_14;
  
  if ((this_ptr->next_lod == (CLodMesh *)0x0) || (this_ptr->lod_level_count < 1)) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1279;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::getLOD until after simplify() has been called!");
  }
  shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(in_stack_0000000c,this_ptr->next_lod);
  iVar7 = 0;
  iVar6 = 0;
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(in_stack_0000000c);
  local_14 = g_LodReplayMode;
  g_LodReplayMode = 1;
  while( true ) {
    iVar4 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(in_stack_0000000c);
    if ((iVar4 <= in_stack_00000008) || (this_ptr->lod_level_count <= iVar7)) break;
    pCVar1 = this_ptr->lod_levels_ptr;
    iVar4 = iVar6 + -0x24;
    iVar2 = iVar6 + -0x18;
    iVar3 = iVar6 + -0x28;
    iVar6 = iVar6 + 0xf0;
    iVar7 = iVar7 + 1;
    shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
              (in_stack_0000000c,*(int *)((int)pCVar1->adjacent_tri_indices + iVar3),
               *(int *)((int)pCVar1->adjacent_tri_indices + iVar4),
               *(float *)((int)pCVar1->adjacent_tri_indices + iVar2));
  }
  g_LodReplayMode = local_14;
  shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(in_stack_0000000c);
  pCVar5 = shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
                     (in_stack_0000000c,&CStack_54);
  local_3c = (pCVar5->max).x - (pCVar5->min).x;
  local_38 = (pCVar5->max).y - (pCVar5->min).y;
  local_34 = (pCVar5->max).z - (pCVar5->min).z;
  shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150
            (in_stack_0000000c,
             SQRT(local_34 * local_34 + local_3c * local_3c + local_38 * local_38) *
             (float)0.0001);
  shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(in_stack_0000000c);
  local_24.x = 1.0 / this_ptr->scale_factor;
  local_24.y = local_24.x;
  local_24.z = local_24.x;
  local_18 = local_24.x;
  shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(in_stack_0000000c,&local_24);
  local_30.x = -(this_ptr->center_offset).x;
  local_30.y = -(this_ptr->center_offset).y;
  local_30.z = -(this_ptr->center_offset).z;
  shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(in_stack_0000000c,&local_30);
  return;
}
