// Name: engine_mini3d.cpp_lineListD3DTL_FUN_004f44d0
// Address: 004f44d0
// Address Range: [[004f44d0, 004f450d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_lineListD3DTL_FUN_004f44d0(float *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_lineListD3DTL_FUN_004f44d0(float *vertices,int vertex_count)

{
  engine_mini3d_cpp_updateTransform_FUN_004f3740();
  engine_mini3d_cpp_updateRenderState_FUN_004f7da0();
  if ((g_APIDLL_setLightConstants != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_APIDLL_setLightConstants)(vertices,vertex_count,g_RenderStateFlags.dword);
    return;
  }
  return;
}
