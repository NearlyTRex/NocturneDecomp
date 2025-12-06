// Name: shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
// Address: 0045d1d0
// Address Range: [[0045d1d0, 0045d2fb]]
// Convention: __cdecl
// Signature: void shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index, int * color_value)

#include "nocturne.h"

void __cdecl
shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index,int *color_value)

{
  uint in_EDX;
  BADSPACEBASE *in_ESP;
  double dVar1;
  int local_6c;
  uint local_68;
  uint auStack_54 [16];
  int local_14;
  
  if (((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) ||
     (g_ModelPolygonData[polygon_index].part_assignment == g_CurrentPartIndex)) {
    local_68 = g_ModelPolygonData[polygon_index].vertex_indices_count;
    dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,polygon_index * 0x184));
    local_6c = 0x45d24d;
    dVar1 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar1 >> 0x20),polygon_index * 0x184));
    local_68 = 0x45d268;
    dVar1 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar1 >> 0x20),polygon_index * 0x184));
    crt_math_c_round_FUN_005fe6b0
              ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar1 >> 0x20),polygon_index * 0x184));
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_14 = local_14 + 1) {
      auStack_54[local_14] = g_ModelPolygonData[polygon_index].vertex_indices[local_14];
    }
    if (g_AntiAliasingEnabled == 0) {
      shape_design_c_renderPolygonWireframe_FUN_0045d300((SMRGLHeaderPrimitive *)&local_6c);
    }
    else {
      local_68 = 0x45d2f2;
      shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470
                ((SMRGLHeaderPrimitive *)&local_6c,(int)color_value);
    }
  }
  return;
}
