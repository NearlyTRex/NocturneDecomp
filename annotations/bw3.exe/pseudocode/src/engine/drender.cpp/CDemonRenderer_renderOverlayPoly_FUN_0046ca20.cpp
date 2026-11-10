// Name: engine_drender.cpp_CDemonRenderer_renderOverlayPoly_FUN_0046ca20
// Address: 0046ca20
// Address Range: [[0046ca20, 0046cb61]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayPoly_FUN_0046ca20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayPoly_FUN_0046ca20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  uint uStack_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar4 != 0)) {
    iVar4 = 0;
    uStack_14 = 0xffffffff;
    if (0 < *(int *)(poly + 4)) {
      iVar3 = 0;
      pSVar2 = poly;
      do {
        iVar1 = *(int *)(pSVar2 + 0x18);
        *(int *)(&DAT_01bdd818 + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        uStack_14 = uStack_14 & *(uint *)(this_ptr->vertex_buffer_ptr + iVar1 * 0x30 + 0x10);
        pSVar2 = pSVar2 + 0xc;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(poly + 4));
    }
    if (((uStack_14 & 0x80000000) == 0) || ((uStack_14 & 0x1f) == 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        _DAT_01c6e2b8 = 0;
        _DAT_01c6e2b4 = 0x327;
        if ((this_ptr->skip_uv_extraction == 0) && (iVar4 = 0, 0 < *(int *)(poly + 4))) {
          iVar3 = 0;
          pSVar2 = poly;
          do {
            iVar1 = *(int *)(&DAT_01bdd818 + iVar3);
            *(uint *)(this_ptr->vertex_buffer_ptr + iVar1 * 0x30 + 0x18) =
                 *(uint *)(pSVar2 + 0x1c);
            *(uint *)(this_ptr->vertex_buffer_ptr + iVar1 * 0x30 + 0x1c) =
                 *(uint *)(pSVar2 + 0x20);
            pSVar2 = pSVar2 + 0xc;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < *(int *)(poly + 4));
        }
      }
      else {
        _DAT_01c6e2b4 = 0;
        _DAT_01c6e2b8 = 0;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bdd818);
    }
  }
  return;
}
