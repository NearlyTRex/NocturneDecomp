// Name: engine_mini3d.cpp_lineListD3DTL_FUN_00513220
// Address: 00513220
// Address Range: [[00513220, 0051325d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_lineListD3DTL_FUN_00513220(float *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_lineListD3DTL_FUN_00513220(float *vertices,int vertex_count)

{
  engine_mini3d_cpp_updateTransform_FUN_005124f0();
  engine_mini3d_cpp_updateRenderState_FUN_00516c60();
  if ((g_PTR_02c83480 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c83480)(vertices,vertex_count,g_RenderStateFlags.dword);
    return;
  }
  return;
}
