// Name: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90
// Address: 0046bf90
// Address Range: [[0046bf90, 0046c089]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

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
        *(int *)(&DAT_01bdd818 + iVar4) = iVar1;
        pSVar2 = pSVar2 + 0xc;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(poly + 4));
    }
    if (this_ptr->shadow_pass_active == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      _DAT_01c6e2b8 = 6;
      _DAT_01c6e2b4 = 0xc3;
    }
    else {
      _DAT_01c6e2b4 = 1;
      _DAT_01c6e2b8 = 0;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
              (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bdd818);
  }
  return;
}
