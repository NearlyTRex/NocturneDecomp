// Name: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0046b370
// Address: 0046b370
// Address Range: [[0046b370, 0046b469]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0046b370(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0046b370(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (0 < *(int *)(poly + 4)) {
      iVar2 = 0;
      pSVar3 = poly;
      do {
        iVar1 = *(int *)(pSVar3 + 0x18);
        *(int *)(&DAT_01bdd818 + iVar2) = iVar1;
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
        _DAT_01c6e2b4 = 0x90;
        _DAT_01c6e2b8 = 6;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderZBufferFill16xUnrolled_FUN_0046fb72;
      }
      else {
        _DAT_01c6e2b4 = 0;
        _DAT_01c6e2b8 = 0;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderDepth16BitConditional_FUN_0046f9f4;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bdd818);
      this_ptr->face_capture_enabled = iVar4;
    }
  }
  return;
}
