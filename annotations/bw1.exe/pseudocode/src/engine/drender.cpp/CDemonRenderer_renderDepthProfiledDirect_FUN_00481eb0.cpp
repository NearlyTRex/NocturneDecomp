// Name: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
// Address: 00481eb0
// Address Range: [[00481eb0, 00481f90]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  
  iVar1 = g_INT_01e7dac8;
  g_INT_01bc1238 = 0;
  if (this_ptr->plane_culling_enabled != 0) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (this_ptr->shadow_pass_active == 0) {
    g_BIT_INTEGER32_01c51d14.dword = 0xc0;
    g_INT_01c51d18 = 6;
    g_PTR_01c4f02c = core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_00487327;
  }
  else {
    g_BIT_INTEGER32_01c51d14.dword = 0;
    g_INT_01c51d18 = 0;
    g_PTR_01c4f02c = core_dstrendr_cpp_renderScreenDepthTestInterlacedProfiled_FUN_004873a5;
  }
  iVar2 = this_ptr->shadow_pass_active;
  if (g_INT_01c50948 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(this_ptr,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
            (this_ptr,(prim->base).count,(int *)(prim + 1));
  if (g_INT_01c50948 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(this_ptr,iVar2);
  }
  g_INT_01e7dac8 = iVar1;
  return (uint)(g_INT_00612564 <= g_INT_01bc1238);
}
