// Name: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046a270
// Address: 0046a270
// Address Range: [[0046a270, 0046a398]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046a270(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046a270(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  int iVar4;
  int iVar5;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(poly + 8), iVar2 != 0)) {
    if (this_ptr->shadow_pass_active == 0) {
      if (0 < *(int *)(poly + 4)) {
        iVar4 = 0;
        iVar2 = 0;
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
          *(int *)(&DAT_01ba5c84 + iVar4) = iVar1;
          pSVar3 = pSVar3 + 0xc;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)(poly + 4));
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(poly + 4)) {
        iVar4 = 0;
        pSVar3 = poly;
        do {
          *(uint *)(&DAT_01ba5c84 + iVar4) = *(uint *)(pSVar3 + 0x18);
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          pSVar3 = pSVar3 + 0xc;
        } while (iVar2 < *(int *)(poly + 4));
      }
    }
    if (this_ptr->shadow_pass_active == 0) {
      _DAT_01c38b54 = 0x41;
      _DAT_01c38b58 = 6;
      _DAT_01c35e6c = core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0046f89d;
    }
    else {
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (this_ptr,*(int *)(poly + 4),(int *)&DAT_01ba5c84);
  }
  return;
}
