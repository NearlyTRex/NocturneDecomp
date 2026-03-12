// Name: shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330
// Address: 0051b330
// Address Range: [[0051b330, 0051b3d3]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(CLodMesh *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D *pCVar1;
  CBoundingBox3D CStack_28;
  float local_10;
  float local_c;
  float local_8;
  
  pCVar1 = shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(this_ptr,&CStack_28);
  fVar1 = (pCVar1->max).x - (pCVar1->min).x;
  fVar2 = (pCVar1->max).y - (pCVar1->min).y;
  fVar3 = (pCVar1->max).z - (pCVar1->min).z;
  shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150
            (this_ptr,SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) * (float)0.0001);
  shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(this_ptr);
  shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(this_ptr);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Computing plane equations...");
  shape_meshlod_cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(this_ptr);
  shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(this_ptr);
  shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(this_ptr);
  return;
}
