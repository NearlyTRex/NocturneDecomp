// Name: engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470
// Address: 0046b470
// Address Range: [[0046b470, 0046b570]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLPrimitivePoly *pSVar4;
  uint local_14;
  
  g_INT_01bdd810 = 0;
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(&(poly->base).surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    local_14 = 0xffffffff;
    if (0 < (poly->base).base.count) {
      iVar2 = 0;
      pSVar4 = poly;
      do {
        iVar1 = pSVar4->vertices[0].vertex_index;
        *(int *)((int)g_INT_ARRAY_01bdd818 + iVar2) = iVar1;
        iVar2 = iVar2 + 4;
        pSVar4 = (SMRGLPrimitivePoly *)&(pSVar4->base).surface_normal.B;
        iVar3 = iVar3 + 1;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
      } while (iVar3 < (poly->base).base.count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        g_BIT_INTEGER32_01c6e2b4.dword = 0xc0;
        g_INT_01c6e2b8 = 6;
        g_PTR_01c6b5cc = core_dstrendr_cpp_renderDepthTestStatistics16xUnrolled_FUN_0046ffa5;
      }
      else {
        g_CHAR_PTR_01d71de0 = "..\\engine\\drender.cpp";
        g_INT_01d71de4 = 0x29d;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Can't use demonZFacetCount in shadow mode!");
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (this_ptr,(poly->base).base.count,g_INT_ARRAY_01bdd818);
      iVar3 = g_INT_01bdd810;
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
