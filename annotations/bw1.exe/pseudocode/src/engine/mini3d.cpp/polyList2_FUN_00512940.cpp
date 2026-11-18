// Name: engine_mini3d.cpp_polyList2_FUN_00512940
// Address: 00512940
// Address Range: [[00512940, 005129cf]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyList2_FUN_00512940(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_polyList2_FUN_00512940(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  g_RenderedTriangleCount = g_RenderedTriangleCount + triangle_count;
  g_INT_01d224b4 = g_INT_01d224b4 + vertex_count;
  engine_mini3d_cpp_updateTransform_FUN_005124f0();
  engine_mini3d_cpp_updateRenderState_FUN_00516c60();
  if ((g_PTR_02c8345c != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c8345c)(vertices,vertex_count,indices,triangle_count,g_RenderStateFlags.dword)
    ;
    return;
  }
  g_CHAR_PTR_01d1d400 = "..\\engine\\mini3d.cpp";
  g_INT_01d1d404 = 0x71f;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CMini3D::polyList - Software does not suport multitexture");
  return;
}
