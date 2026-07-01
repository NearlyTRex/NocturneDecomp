// Name: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
// Address: 0048d8a0
// Address Range: [[0048d8a0, 0048da11] [00604d30, 00604d55]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  SFace *pSVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (this_ptr->face_capture_enabled == 0) {
    iVar8 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0(triangle_indices);
    if (iVar8 == 0) {
      return;
    }
  }
  else {
    pSVar1 = this_ptr->vertex_buffer_ptr;
    uVar7 = pSVar1[triangle_indices->vertex_index_2].projected_vertex.screen_x &
            pSVar1[triangle_indices->vertex_index_0].projected_vertex.screen_x &
            pSVar1[triangle_indices->vertex_index_1].projected_vertex.screen_x;
    if (((uVar7 & 0x80000000) != 0) && ((char)uVar7 != '\0')) {
      return;
    }
  }
  if (4999 < g_CaptureFaceCount) {
    g_CurrentFilename = "..\\engine\\drender.cpp";
    g_CurrentLineNumber = 2936;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDR::captureFace - too many faces captured");
  }
  iVar8 = g_CaptureTextureCount;
  iVar6 = g_CaptureFaceCount;
  pSVar4 = g_CapturedFaces + g_CaptureFaceCount;
  uVar5 = triangle_indices->vertex_index_1;
  (pSVar4->face_data).vertex_indices.vertex_index_0 = triangle_indices->vertex_index_0;
  (pSVar4->face_data).vertex_indices.vertex_index_1 = uVar5;
  *(uint *)&g_CapturedFaces[iVar6].face_data.vertex_indices.vertex_index_2 =
       *(uint *)&triangle_indices->vertex_index_2;
  uVar5 = triangle_indices[1].vertex_index_2;
  g_CapturedFaces[iVar6].face_data.u_coord_1 = triangle_indices[1].vertex_index_1;
  g_CapturedFaces[iVar6].face_data.u_coord_2 = uVar5;
  uVar5 = triangle_indices[2].vertex_index_1;
  g_CapturedFaces[iVar6].face_data.v_coord_0 = triangle_indices[2].vertex_index_0;
  g_CapturedFaces[iVar6].face_data.v_coord_1 = uVar5;
  g_CapturedFaces[iVar6].face_data.v_coord_2 = triangle_indices[2].vertex_index_2;
  g_CapturedFaces[iVar6].texture_index = iVar8;
  g_CapturedFaces[iVar6].render_flags = render_flags;
  pSVar1 = this_ptr->vertex_buffer_ptr;
  iVar8 = pSVar1[triangle_indices->vertex_index_0].projected_vertex.transformed_z;
  iVar2 = pSVar1[triangle_indices->vertex_index_1].projected_vertex.transformed_z;
  iVar3 = pSVar1[triangle_indices->vertex_index_2].projected_vertex.transformed_z;
  if ((iVar8 < iVar2) && (iVar8 < iVar3)) {
    g_CapturedFaces[iVar6].depth = iVar8;
    g_CaptureFaceCount = g_CaptureFaceCount + 1;
    return;
  }
  if (iVar3 <= iVar2) {
    g_CapturedFaces[g_CaptureFaceCount].depth = iVar3;
    g_CaptureFaceCount = g_CaptureFaceCount + 1;
    return;
  }
  g_CapturedFaces[g_CaptureFaceCount].depth = iVar2;
  g_CaptureFaceCount = g_CaptureFaceCount + 1;
  return;
}
