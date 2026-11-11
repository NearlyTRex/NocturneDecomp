// Name: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00482390
// Address: 00482390
// Address Range: [[00482390, 004824a5]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00482390(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00482390(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

{
  ushort *puVar1;
  ushort uVar2;
  SInputFace *pSVar3;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_captureFace_FUN_00484c20
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
  _DAT_01bc1240 = (uint)(face->vertex_indices).vertex_index_0;
  _DAT_01bc1244 = (uint)(face->vertex_indices).vertex_index_1;
  _DAT_01bc1248 = (uint)(face->vertex_indices).vertex_index_2;
  if (this_ptr->shadow_pass_active == 0) {
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    _DAT_01c51d14 = render_flags;
    _DAT_01c51d18 = 6;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(this_ptr,3,(int *)&DAT_01bc1240);
    return;
  }
  _DAT_01c51d14 = 0;
  _DAT_01c51d18 = 0;
  _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(this_ptr,3,(int *)&DAT_01bc1240);
  return;
}
