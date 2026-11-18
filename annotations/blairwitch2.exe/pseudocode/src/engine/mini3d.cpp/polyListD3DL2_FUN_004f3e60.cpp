// Name: engine_mini3d.cpp_polyListD3DL2_FUN_004f3e60
// Address: 004f3e60
// Address Range: [[004f3e60, 004f3eef]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_004f3e60(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_004f3e60(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  g_RenderedTriangleCount = g_RenderedTriangleCount + triangle_count;
  g_INT_01d09854 = g_INT_01d09854 + vertex_count;
  engine_mini3d_cpp_updateTransform_FUN_004f3740();
  engine_mini3d_cpp_updateRenderState_FUN_004f7da0();
  if ((g_APIDLL_setVideoModeX != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_APIDLL_setVideoModeX)
              (vertices,vertex_count,indices,triangle_count,g_RenderStateFlags.dword);
    return;
  }
  g_CHAR_PTR_01d046a0 = "..\\engine\\mini3d.cpp";
  g_INT_01d046a4 = 0x7ca;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CMini3D::polyList - Software does not suport multitexture");
  return;
}
