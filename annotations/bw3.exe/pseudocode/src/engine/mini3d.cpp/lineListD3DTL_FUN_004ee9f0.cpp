// Name: engine_mini3d.cpp_lineListD3DTL_FUN_004ee9f0
// Address: 004ee9f0
// Address Range: [[004ee9f0, 004eea2d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_lineListD3DTL_FUN_004ee9f0(float *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_lineListD3DTL_FUN_004ee9f0(float *vertices,int vertex_count)

{
  engine_mini3d_cpp_updateTransform_FUN_004edcc0();
  engine_mini3d_cpp_updateRenderState_FUN_004f2430();
  if ((g_PTR_02cf60dc != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    (*(code *)g_PTR_02cf60dc)(vertices,vertex_count,g_BIT_INTEGER32_01c6e2b4.dword);
    return;
  }
  return;
}
