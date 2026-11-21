// Name: engine_mini3d.cpp_polyListD3DL2_FUN_004ee3a0
// Address: 004ee3a0
// Address Range: [[004ee3a0, 004ee42f]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_004ee3a0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_004ee3a0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  g_RenderedTriangleCount = g_RenderedTriangleCount + triangle_count;
  g_INT_01d76c34 = g_INT_01d76c34 + vertex_count;
  engine_mini3d_cpp_updateTransform_FUN_004edcc0();
  engine_mini3d_cpp_updateRenderState_FUN_004f2430();
  if ((g_PTR_02cf60c4 != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    (*(code *)g_PTR_02cf60c4)(vertices,vertex_count,indices,triangle_count,g_RenderStateFlags.dword)
    ;
    return;
  }
  g_CurrentFilename = "..\\engine\\mini3d.cpp";
  g_CurrentLineNumber = 1961;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CMini3D::polyList - Software does not suport multitexture");
  return;
}
