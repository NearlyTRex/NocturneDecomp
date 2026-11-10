// Name: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20
// Address: 0046bc20
// Address Range: [[0046bc20, 0046bd5b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  int iVar4;
  int iVar5;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar4 != 0)) {
    if (this_ptr->shadow_pass_active == 0) {
      if (0 < *(int *)(poly + 4)) {
        iVar2 = 0;
        iVar4 = 0;
        pSVar3 = poly;
        do {
          iVar1 = *(int *)(pSVar3 + 0x18);
          if (this_ptr->skip_uv_extraction == 0) {
            iVar5 = iVar1 * 0x30;
            *(uint *)(this_ptr->vertex_buffer_ptr + iVar5 + 0x18) =
                 *(uint *)(pSVar3 + 0x1c);
            *(uint *)(this_ptr->vertex_buffer_ptr + iVar5 + 0x1c) =
                 *(uint *)(pSVar3 + 0x20);
          }
          *(int *)(&DAT_01bdd818 + iVar2) = iVar1;
          pSVar3 = pSVar3 + 0xc;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < *(int *)(poly + 4));
      }
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(poly + 4)) {
        iVar2 = 0;
        pSVar3 = poly;
        do {
          *(uint *)(&DAT_01bdd818 + iVar2) = *(uint *)(pSVar3 + 0x18);
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + 1;
          pSVar3 = pSVar3 + 0xc;
        } while (iVar4 < *(int *)(poly + 4));
      }
    }
    if (this_ptr->shadow_pass_active == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      _DAT_01c6e2b8 = 6;
      _DAT_01c6e2b4 = 0x2cd;
    }
    else {
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
              (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bdd818);
  }
  return;
}
