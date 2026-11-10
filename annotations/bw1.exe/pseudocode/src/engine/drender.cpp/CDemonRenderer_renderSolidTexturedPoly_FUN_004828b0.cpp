// Name: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_004828b0
// Address: 004828b0
// Address Range: [[004828b0, 004829a9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_004828b0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_004828b0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(poly + 4)) {
      iVar4 = 0;
      pSVar2 = poly;
      do {
        iVar1 = *(int *)(pSVar2 + 0x18);
        if (this_ptr->skip_uv_extraction == 0) {
          iVar5 = iVar1 * 0x30;
          *(uint *)(this_ptr->vertex_buffer_ptr + iVar5 + 0x18) =
               *(uint *)(pSVar2 + 0x1c);
          *(uint *)(this_ptr->vertex_buffer_ptr + iVar5 + 0x1c) =
               *(uint *)(pSVar2 + 0x20);
        }
        *(int *)(&DAT_01bc1240 + iVar4) = iVar1;
        pSVar2 = pSVar2 + 0xc;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(poly + 4));
    }
    if (this_ptr->shadow_pass_active == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
      }
      else {
        _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
      }
      _DAT_01c51d18 = 6;
      _DAT_01c51d14 = 0xc3;
    }
    else {
      _DAT_01c51d14 = 1;
      _DAT_01c51d18 = 0;
      _DAT_01c4f02c = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
              (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bc1240);
  }
  return;
}
