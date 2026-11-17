// Name: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80
// Address: 00469e80
// Address Range: [[00469e80, 00469f95]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

{
  ushort *puVar1;
  ushort uVar2;
  SInputFace *pSVar3;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720
              (this_ptr,&face->vertex_indices,render_flags);
    return;
  }
  if ((this_ptr->shadow_pass_active == 0) && (this_ptr->skip_uv_extraction == 0)) {
    pSVar3 = face;
    do {
      uVar2 = (pSVar3->vertex_indices).vertex_index_0;
      this_ptr->vertex_buffer_ptr[uVar2].u = (uint)pSVar3->u_coord_0 << 8;
      puVar1 = &pSVar3->v_coord_0;
      pSVar3 = (SInputFace *)&(pSVar3->vertex_indices).vertex_index_1;
      this_ptr->vertex_buffer_ptr[uVar2].v = (uint)*puVar1 << 8;
    } while (pSVar3 != (SInputFace *)&face->u_coord_0);
  }
  g_INT_ARRAY_01ba5c84[0] = (int)(face->vertex_indices).vertex_index_0;
  g_INT_ARRAY_01ba5c84[1] = (int)(face->vertex_indices).vertex_index_1;
  g_INT_ARRAY_01ba5c84[2] = (int)(face->vertex_indices).vertex_index_2;
  if (this_ptr->shadow_pass_active == 0) {
    if (g_INT_006141c0 == 0x20) {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    g_BIT_INTEGER32_01c38b54.dword = render_flags;
    g_INT_01c38b58 = 6;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(this_ptr,3,g_INT_ARRAY_01ba5c84);
    return;
  }
  g_BIT_INTEGER32_01c38b54.dword = 0;
  g_INT_01c38b58 = 0;
  g_PTR_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(this_ptr,3,g_INT_ARRAY_01ba5c84);
  return;
}
