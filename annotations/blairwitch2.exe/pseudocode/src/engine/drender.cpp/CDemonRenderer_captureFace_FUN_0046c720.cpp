// Name: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720
// Address: 0046c720
// Address Range: [[0046c720, 0046c891]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

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
    iVar8 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_0051ca00(triangle_indices);
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
  if (4999 < g_INT_01ba5cc4) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\drender.cpp";
    g_INT_01d046a4 = 0xb78;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDR::captureFace - too many faces captured");
  }
  iVar8 = g_INT_01ba5cc8;
  iVar6 = g_INT_01ba5cc4;
  pSVar4 = g_SFace_ARRAY_01ba5ccc + g_INT_01ba5cc4;
  puVar11 = (uint *)(g_INT_01ba5cc4 * 0x20 + 0x1ba5cdc + (uint)bVar13 * -8);
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
  g_SFace_ARRAY_01ba5ccc[iVar6].texture_index = iVar8;
  g_SFace_ARRAY_01ba5ccc[iVar6].render_flags = render_flags;
  pSVar1 = this_ptr->vertex_buffer_ptr;
  iVar8 = pSVar1[triangle_indices->vertex_index_0].projected_vertex.transformed_z;
  iVar2 = pSVar1[triangle_indices->vertex_index_1].projected_vertex.transformed_z;
  iVar3 = pSVar1[triangle_indices->vertex_index_2].projected_vertex.transformed_z;
  if ((iVar8 < iVar2) && (iVar8 < iVar3)) {
    g_SFace_ARRAY_01ba5ccc[iVar6].depth = iVar8;
    g_INT_01ba5cc4 = g_INT_01ba5cc4 + 1;
    return;
  }
  if (iVar3 <= iVar2) {
    g_SFace_ARRAY_01ba5ccc[g_INT_01ba5cc4].depth = iVar3;
    g_INT_01ba5cc4 = g_INT_01ba5cc4 + 1;
    return;
  }
  g_SFace_ARRAY_01ba5ccc[g_INT_01ba5cc4].depth = iVar2;
  g_INT_01ba5cc4 = g_INT_01ba5cc4 + 1;
  return;
}
