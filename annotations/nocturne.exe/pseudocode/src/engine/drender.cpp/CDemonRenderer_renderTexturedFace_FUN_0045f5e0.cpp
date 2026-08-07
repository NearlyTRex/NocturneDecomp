// Name: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0
// Address: 0045f5e0
// Address Range: [[0045f5e0, 0045f6f5]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

{
  ushort *puVar1;
  ushort uVar2;
  SInputFace *pSVar3;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0
              (this_ptr,&face->vertex_indices,render_flags);
    return;
  }
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
  _DAT_01b4d76c = (uint)(face->vertex_indices).vertex_index_0;
  _DAT_01b4d770 = (uint)(face->vertex_indices).vertex_index_1;
  _DAT_01b4d774 = (uint)(face->vertex_indices).vertex_index_2;
  if (this_ptr->face_count == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
    }
    g_RenderStateFlags.dword = render_flags;
    g_VertexPreprocessMode = 6;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(this_ptr,3,(int *)&DAT_01b4d76c);
    return;
  }
  g_RenderStateFlags.dword = 0;
  g_VertexPreprocessMode = 0;
  g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(this_ptr,3,(int *)&DAT_01b4d76c);
  return;
}
