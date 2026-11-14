// Name: engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0
// Address: 00481db0
// Address Range: [[00481db0, 00481ea0]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLPrimitivePoly *pSVar4;
  uint local_14;
  
  _DAT_01bc1238 = 0;
  if ((this_ptr->plane_culling_enabled != 0) &&
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&(poly->base).surface_normal), iVar2 == 0)) {
    return 0;
  }
  iVar2 = 0;
  local_14 = 0xffffffff;
  if (0 < (poly->base).base.count) {
    iVar3 = 0;
    pSVar4 = poly;
    do {
      iVar1 = pSVar4->vertices[0].vertex_index;
      *(int *)(&DAT_01bc1240 + iVar3) = iVar1;
      iVar3 = iVar3 + 4;
      pSVar4 = (SMRGLPrimitivePoly *)&(pSVar4->base).surface_normal.B;
      iVar2 = iVar2 + 1;
      local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
    } while (iVar2 < (poly->base).base.count);
  }
  if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
    if (this_ptr->shadow_pass_active == 0) {
      _DAT_01c51d14 = 0xc0;
      _DAT_01c51d18 = 6;
      _DAT_01c4f02c = core_dstrendr_cpp_renderDepthTestStatistics16xUnrolled_FUN_00487425;
    }
    else {
      _DAT_01d1d400 = "..\\engine\\drender.cpp";
      _DAT_01d1d404 = 0x29d;
      core_main_c_FUN_005030e0("Can't use demonZFacetCount in shadow mode!");
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
              (this_ptr,(poly->base).base.count,(int *)&DAT_01bc1240);
    iVar2 = _DAT_01bc1238;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
