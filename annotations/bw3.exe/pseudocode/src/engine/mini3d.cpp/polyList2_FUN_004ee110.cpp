// Name: engine_mini3d.cpp_polyList2_FUN_004ee110
// Address: 004ee110
// Address Range: [[004ee110, 004ee19f]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyList2_FUN_004ee110(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_polyList2_FUN_004ee110(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  g_INT_01ed3198 = g_INT_01ed3198 + triangle_count;
  g_INT_01d76c34 = g_INT_01d76c34 + vertex_count;
  engine_mini3d_cpp_updateTransform_FUN_004edcc0();
  engine_mini3d_cpp_updateRenderState_FUN_004f2430();
  if ((g_PTR_02cf60b8 != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    (*(code *)g_PTR_02cf60b8)
              (vertices,vertex_count,indices,triangle_count,g_BIT_INTEGER32_01c6e2b4.dword);
    return;
  }
  g_CHAR_PTR_01d71de0 = "..\\engine\\mini3d.cpp";
  g_INT_01d71de4 = 0x71f;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CMini3D::polyList - Software does not suport multitexture");
  return;
}
