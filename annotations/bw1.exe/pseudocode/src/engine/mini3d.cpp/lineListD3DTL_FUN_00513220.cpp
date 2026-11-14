// Name: engine_mini3d.cpp_lineListD3DTL_FUN_00513220
// Address: 00513220
// Address Range: [[00513220, 0051325d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_lineListD3DTL_FUN_00513220(float *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_lineListD3DTL_FUN_00513220(float *vertices,int vertex_count)

{
  engine_mini3d_cpp_updateTransform_FUN_005124f0();
  engine_mini3d_cpp_updateRenderState_FUN_00516c60();
  if ((_DAT_02c83480 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83480)(vertices,vertex_count,_DAT_01c51d14);
    return;
  }
  return;
}
