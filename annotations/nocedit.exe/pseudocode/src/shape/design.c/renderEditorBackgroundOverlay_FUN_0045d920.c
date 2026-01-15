// Name: shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920
// Address: 0045d920
// Address Range: [[0045d920, 0045d9b7]]
// Convention: __cdecl
// Signature: void shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920(void)

#include "nocturne.h"

void __cdecl shape_design_c_renderEditorBackgroundOverlay_FUN_0045d920(void)

{
  int local_1c;
  int local_18;
  int *local_14;
  
  if (((g_EditorTextureMode == 1) || (g_EditorTextureMode == 3)) || (g_EditorTextureMode == 4)) {
    if (g_AntiAliasingEnabled == 0) {
      local_1c = -(int)(&g_EditorBackgroundColors)[g_EditorCurrentTexture];
      engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffe0);
    }
    else {
      local_14 = (&g_EditorBackgroundColors)[g_EditorCurrentTexture];
    }
    for (local_18 = 0; local_18 < g_PolygonCount; local_18 = local_18 + 1) {
      shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(local_18,local_14);
    }
  }
  return;
}
