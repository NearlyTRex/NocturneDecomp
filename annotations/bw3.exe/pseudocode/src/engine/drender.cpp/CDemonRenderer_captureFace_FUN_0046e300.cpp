// Name: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300
// Address: 0046e300
// Address Range: [[0046e300, 0046e471]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046e300(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046e300(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  SFace *pSVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  
  bVar13 = 0;
  if (this_ptr->face_capture_enabled == 0) {
    iVar8 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_00515d60(triangle_indices);
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
    g_CHAR_PTR_01d71de0 = "..\\engine\\drender.cpp";
    g_INT_01d71de4 = 0xb78;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CDR::captureFace - too many faces captured");
  }
  iVar8 = g_CaptureTextureCount;
  iVar6 = g_CaptureFaceCount;
  pSVar4 = g_CapturedFaces + g_CaptureFaceCount;
  puVar11 = (uint *)(g_CaptureFaceCount * 0x20 + 0x1bdd870 + (uint)bVar13 * -8);
  puVar9 = (uint *)((int)triangle_indices + (uint)bVar13 * -8 + 4);
  uVar5 = triangle_indices->vertex_index_1;
  (pSVar4->face_data).vertex_indices.vertex_index_0 = triangle_indices->vertex_index_0;
  (pSVar4->face_data).vertex_indices.vertex_index_1 = uVar5;
  puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
  puVar10 = puVar9 + (uint)bVar13 * -2 + 1;
  *puVar11 = *puVar9;
  *puVar12 = *puVar10;
  puVar12[(uint)bVar13 * -2 + 1] = puVar10[(uint)bVar13 * -2 + 1];
  *(ushort *)(puVar12 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1) =
       *(ushort *)(puVar10 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1);
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
