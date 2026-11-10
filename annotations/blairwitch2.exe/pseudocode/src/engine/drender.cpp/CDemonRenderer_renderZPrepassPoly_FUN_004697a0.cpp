// Name: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_004697a0
// Address: 004697a0
// Address Range: [[004697a0, 00469899]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_004697a0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_004697a0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403970(poly + 8), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (0 < *(int *)(poly + 4)) {
      iVar2 = 0;
      pSVar3 = poly;
      do {
        iVar1 = *(int *)(pSVar3 + 0x18);
        *(int *)(&DAT_01ba5c84 + iVar2) = iVar1;
        local_14 = local_14 & *(uint *)(this_ptr->vertex_buffer_ptr + iVar1 * 0x30 + 0x10);
        if (((byte)this_ptr->vertex_buffer_ptr[iVar1 * 0x30 + 0x13] & 0x80) != 0) {
          local_18 = 1;
        }
        iVar2 = iVar2 + 4;
        iVar4 = iVar4 + 1;
        pSVar3 = pSVar3 + 0xc;
      } while (iVar4 < *(int *)(poly + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      iVar4 = this_ptr->face_capture_enabled;
      if ((iVar4 != 0) && (this_ptr->shadow_pass_active != 0)) {
        this_ptr->face_capture_enabled = local_18;
      }
      if (this_ptr->shadow_pass_active == 0) {
        _DAT_01c38b54 = 0x90;
        _DAT_01c38b58 = 6;
        _DAT_01c35e6c = core_dstrendr_cpp_renderZBufferFill16xUnrolled_FUN_0046eb02;
      }
      else {
        _DAT_01c38b54 = 0;
        _DAT_01c38b58 = 0;
        _DAT_01c35e6c = core_dstrendr_cpp_renderDepth16BitConditional_FUN_0046e984;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
                (this_ptr,*(int *)(poly + 4),(int *)&DAT_01ba5c84);
      this_ptr->face_capture_enabled = iVar4;
    }
  }
  return;
}
