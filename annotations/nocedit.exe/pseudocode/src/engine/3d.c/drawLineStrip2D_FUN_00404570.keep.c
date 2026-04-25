// Name: engine_3d.c_drawLineStrip2D_FUN_00404570
// Address: 00404570
// MANUAL RECONSTRUCTION
// Address Range: [[00404570, 004045ff] [0060e072, 0060e12a] [03fc28a4, 03fc2963]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip)

{
  int *vertex_indices;
  int i;

  engine_3d_c_setActiveRenderColor_FUN_00404540();
  vertex_indices = (int *)(line_strip + 1);
  for (i = 0; i < line_strip->vertex_count - 1; i++) {
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(g_RenderVertexBuffer[vertex_indices[i]],
                                               g_RenderVertexBuffer[vertex_indices[i + 1]]);
  }
  return (SMRGLHeaderExtended *)&vertex_indices[line_strip->vertex_count];
}
