// Name: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0048b320
// Address: 0048b320
// Address Range: [[0048b320, 0048b414]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0048b320(CDemonRenderer *this_ptr,SInputFace *face)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0048b320(CDemonRenderer *this_ptr,SInputFace *face)

{
  ushort *puVar1;
  ushort uVar2;
  SInputFace *pSVar3;
  
  if ((this_ptr->face_count == 0) && (this_ptr->skip_uv_extraction == 0)) {
    pSVar3 = face;
    do {
      uVar2 = (pSVar3->vertex_indices).vertex_index_0;
      this_ptr->vertex_buffer_ptr[uVar2].u = (uint)pSVar3->u_coord_0 << 8;
      puVar1 = &pSVar3->v_coord_0;
      pSVar3 = (SInputFace *)&(pSVar3->vertex_indices).vertex_index_1;
      this_ptr->vertex_buffer_ptr[uVar2].v = (uint)*puVar1 << 8;
    } while (pSVar3 != (SInputFace *)&face->u_coord_0);
  }
  g_VertexIndexBuffer[0] = (int)(face->vertex_indices).vertex_index_0;
  g_VertexIndexBuffer[1] = (int)(face->vertex_indices).vertex_index_1;
  g_VertexIndexBuffer[2] = (int)(face->vertex_indices).vertex_index_2;
  if (this_ptr->face_count == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_SOLID_ALPHA_BLEND | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_COLOR_FROM_VERTEX);
  }
  else {
    g_RenderStateFlags.dword = 0;
    g_VertexPreprocessMode = PREPROCESS_NONE;
    g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(this_ptr,3,g_VertexIndexBuffer);
  return;
}
