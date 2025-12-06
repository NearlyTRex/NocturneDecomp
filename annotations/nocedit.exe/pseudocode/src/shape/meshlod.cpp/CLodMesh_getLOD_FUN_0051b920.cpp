// Name: shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920
// Address: 0051b920
// Address Range: [[0051b920, 0051bab5]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh *this_ptr)

{
  CLodEdge *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CLodMesh *pCVar7;
  CLodMesh *this_ptr_00;
  int iVar8;
  CBoundingBox3D *pCVar9;
  int unaff_EBX;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  float fStack00000008;
  CLodMesh *in_stack_0000000c;
  float fStack00000010;
  float fStack00000014;
  float in_stack_00000018;
  
  this_ptr_00 = in_stack_0000000c;
  pCVar7 = this_ptr;
  if ((this_ptr->next_lod == (CLodMesh *)0x0) || (this_ptr->lod_level_count < 1)) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1279;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::getLOD until after simplify() has been called!");
  }
  shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(in_stack_0000000c,pCVar7->next_lod);
  iVar11 = 0;
  iVar10 = 0;
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(in_stack_0000000c);
  g_LodReplayMode = 1;
  while( true ) {
    iVar8 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(in_stack_0000000c);
    if ((iVar8 <= (int)in_stack_00000018) || (pCVar7->lod_level_count <= iVar11)) break;
    pCVar1 = pCVar7->lod_levels_ptr;
    iVar8 = iVar10 + -0x24;
    iVar5 = iVar10 + -0x18;
    iVar6 = iVar10 + -0x28;
    iVar10 = iVar10 + 0xf0;
    iVar11 = iVar11 + 1;
    shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
              (in_stack_0000000c,*(int *)((int)pCVar1->adjacent_tri_indices + iVar6),
               *(int *)((int)pCVar1->adjacent_tri_indices + iVar8),
               *(float *)((int)pCVar1->adjacent_tri_indices + iVar5));
  }
  g_LodReplayMode = unaff_EBX;
  shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(in_stack_0000000c);
  pCVar9 = shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
                     (in_stack_0000000c,(CBoundingBox3D *)&stack0xffffffc8);
  fVar2 = (pCVar9->max).x - (pCVar9->min).x;
  fVar3 = (pCVar9->max).y - (pCVar9->min).y;
  fVar4 = (pCVar9->max).z - (pCVar9->min).z;
  shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150
            (in_stack_0000000c,
             SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) * (float)0.0001);
  shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(in_stack_0000000c);
  in_stack_0000000c = (CLodMesh *)(1.0 / pCVar7->scale_factor);
  fStack00000010 = (float)in_stack_0000000c;
  fStack00000014 = (float)in_stack_0000000c;
  in_stack_00000018 = (float)in_stack_0000000c;
  shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(this_ptr_00,(CVector3f *)&stack0x0000000c);
  this_ptr = (CLodMesh *)-(pCVar7->center_offset).x;
  fStack00000008 = -(pCVar7->center_offset).y;
  in_stack_0000000c = (CLodMesh *)-(pCVar7->center_offset).z;
  shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(this_ptr_00,(CVector3f *)&this_ptr);
  return;
}
