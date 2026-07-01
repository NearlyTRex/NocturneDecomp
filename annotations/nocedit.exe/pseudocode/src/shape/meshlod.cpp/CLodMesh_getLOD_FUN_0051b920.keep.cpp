// Name: shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920
// Address: 0051b920
// MANUAL RECONSTRUCTION
// Address Range: [[0051b920, 0051bab5]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh *this_ptr,int target_face_count,CLodMesh *output_mesh)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh *this_ptr,int target_face_count,CLodMesh *output_mesh)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar8;
  int iVar4;
  CBoundingBox3D *pCVar5;
  int iVar7;
  CBoundingBox3D CStack_54;
  CVector3f local_30;
  CVector3f local_24;
  CLodEdge *pCVar1;
  
  if ((this_ptr->next_lod == (CLodMesh *)0x0) || (this_ptr->lod_level_count < 1)) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 4729;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::getLOD until after simplify() has been called!");
  }
  shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(output_mesh,this_ptr->next_lod);
  iVar7 = 0;
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(output_mesh);
  iVar8 = g_LodReplayMode;
  g_LodReplayMode = 1;
  while( true ) {
    iVar4 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(output_mesh);
    if ((iVar4 <= target_face_count) || (this_ptr->lod_level_count <= iVar7)) break;
    pCVar1 = this_ptr->lod_levels_ptr + iVar7;
    iVar7 = iVar7 + 1;
    shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
              (output_mesh,pCVar1->vertex_idx_1,pCVar1->vertex_idx_2,pCVar1->collapse_error);
  }
  g_LodReplayMode = iVar8;
  shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(output_mesh);
  shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(output_mesh);
  shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(output_mesh);
  pCVar5 = shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(output_mesh,&CStack_54);
  fVar1 = (pCVar5->max).x - (pCVar5->min).x;
  fVar2 = (pCVar5->max).y - (pCVar5->min).y;
  fVar3 = (pCVar5->max).z - (pCVar5->min).z;
  shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150
            (output_mesh,
             SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) * (float)0.0001);
  shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(output_mesh);
  shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(output_mesh);
  shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(output_mesh);
  local_24.x = 1.0 / this_ptr->scale_factor;
  local_24.y = local_24.x;
  local_24.z = local_24.x;
  shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(output_mesh,&local_24);
  local_30.x = -(this_ptr->center_offset).x;
  local_30.y = -(this_ptr->center_offset).y;
  local_30.z = -(this_ptr->center_offset).z;
  shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(output_mesh,&local_30);
  return;
}
