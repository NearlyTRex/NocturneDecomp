// Name: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70
// Address: 0046ba70
// Address Range: [[0046ba70, 0046bb85]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

{
  ushort *puVar1;
  ushort uVar2;
  SInputFace *pSVar3;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046e300
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
  _DAT_01bdd818 = (uint)(face->vertex_indices).vertex_index_0;
  _DAT_01bdd81c = (uint)(face->vertex_indices).vertex_index_1;
  _DAT_01bdd820 = (uint)(face->vertex_indices).vertex_index_2;
  if (this_ptr->shadow_pass_active == 0) {
    if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b4 = render_flags;
    _DAT_01c6e2b8 = 6;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(this_ptr,3,(int *)&DAT_01bdd818);
    return;
  }
  _DAT_01c6e2b4 = 0;
  _DAT_01c6e2b8 = 0;
  _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(this_ptr,3,(int *)&DAT_01bdd818);
  return;
}
