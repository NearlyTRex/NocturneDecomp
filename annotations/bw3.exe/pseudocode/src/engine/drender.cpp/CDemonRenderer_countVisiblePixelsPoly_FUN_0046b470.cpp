// Name: engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470
// Address: 0046b470
// Address Range: [[0046b470, 0046b570]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLPrimitivePoly *pSVar4;
  uint local_14;
  
  _DAT_01bdd810 = 0;
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar3 != 0)) {
    iVar3 = 0;
    local_14 = 0xffffffff;
    if (0 < *(int *)(poly + 4)) {
      iVar2 = 0;
      pSVar4 = poly;
      do {
        iVar1 = *(int *)(pSVar4 + 0x18);
        *(int *)(&DAT_01bdd818 + iVar2) = iVar1;
        iVar2 = iVar2 + 4;
        pSVar4 = pSVar4 + 0xc;
        iVar3 = iVar3 + 1;
        local_14 = local_14 & *(uint *)(this_ptr->vertex_buffer_ptr + iVar1 * 0x30 + 0x10);
      } while (iVar3 < *(int *)(poly + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        _DAT_01c6e2b4 = 0xc0;
        _DAT_01c6e2b8 = 6;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthTestStatistics16xUnrolled_FUN_0046ffa5;
      }
      else {
        _DAT_01d71de0 = "..\\engine\\drender.cpp";
        _DAT_01d71de4 = 0x29d;
        core_main_c_FUN_004e4330("Can't use demonZFacetCount in shadow mode!");
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bdd818);
      iVar3 = _DAT_01bdd810;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}
