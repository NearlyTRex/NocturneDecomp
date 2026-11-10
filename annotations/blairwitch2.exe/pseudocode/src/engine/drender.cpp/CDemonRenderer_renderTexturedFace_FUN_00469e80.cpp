// Name: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80
// Address: 00469e80
// Address Range: [[00469e80, 00469f95]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

{
  SInputFace *pSVar1;
  ushort uVar2;
  SInputFace *pSVar3;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720
              (this_ptr,(STrianglePackedIndices *)face,render_flags);
    return;
  }
  if ((this_ptr->shadow_pass_active == 0) && (this_ptr->skip_uv_extraction == 0)) {
    pSVar3 = face;
    do {
      uVar2 = *(ushort *)pSVar3;
      *(uint *)(this_ptr->vertex_buffer_ptr + (uint)uVar2 * 0x30 + 0x18) =
           (uint)*(ushort *)(pSVar3 + 6) << 8;
      pSVar1 = pSVar3 + 0xc;
      pSVar3 = pSVar3 + 2;
      *(uint *)(this_ptr->vertex_buffer_ptr + (uint)uVar2 * 0x30 + 0x1c) =
           (uint)*(ushort *)pSVar1 << 8;
    } while (pSVar3 != face + 6);
  }
  _DAT_01ba5c84 = (uint)*(ushort *)face;
  _DAT_01ba5c88 = (uint)*(ushort *)(face + 2);
  _DAT_01ba5c8c = (uint)*(ushort *)(face + 4);
  if (this_ptr->shadow_pass_active == 0) {
    if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    _DAT_01c38b54 = render_flags;
    _DAT_01c38b58 = 6;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(this_ptr,3,(int *)&DAT_01ba5c84);
    return;
  }
  _DAT_01c38b54 = 0;
  _DAT_01c38b58 = 0;
  _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(this_ptr,3,(int *)&DAT_01ba5c84);
  return;
}
