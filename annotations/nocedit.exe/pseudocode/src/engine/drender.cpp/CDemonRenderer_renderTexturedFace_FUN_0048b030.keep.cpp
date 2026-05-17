// Name: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0048b030
// Address: 0048b030
// MANUAL RECONSTRUCTION
// Address Range: [[0048b030, 0048b145]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0048b030(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0048b030(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

{
  ushort uVar2;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0
              (this_ptr,&face->vertex_indices,render_flags);
    return;
  }
  if ((this_ptr->face_count == 0) && (this_ptr->skip_uv_extraction == 0)) {
    uVar2 = face->vertex_indices.vertex_index_0;
    this_ptr->vertex_buffer_ptr[uVar2].u = (uint)face->u_coord_0 << 8;
    this_ptr->vertex_buffer_ptr[uVar2].v = (uint)face->v_coord_0 << 8;
    uVar2 = face->vertex_indices.vertex_index_1;
    this_ptr->vertex_buffer_ptr[uVar2].u = (uint)face->u_coord_1 << 8;
    this_ptr->vertex_buffer_ptr[uVar2].v = (uint)face->v_coord_1 << 8;
    uVar2 = face->vertex_indices.vertex_index_2;
    this_ptr->vertex_buffer_ptr[uVar2].u = (uint)face->u_coord_2 << 8;
    this_ptr->vertex_buffer_ptr[uVar2].v = (uint)face->v_coord_2 << 8;
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
    g_RenderStateFlags.dword = render_flags;
    g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(this_ptr,3,g_VertexIndexBuffer);
    return;
  }
  g_RenderStateFlags.dword = 0;
  g_VertexPreprocessMode = PREPROCESS_NONE;
  g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(this_ptr,3,g_VertexIndexBuffer);
  return;
}
