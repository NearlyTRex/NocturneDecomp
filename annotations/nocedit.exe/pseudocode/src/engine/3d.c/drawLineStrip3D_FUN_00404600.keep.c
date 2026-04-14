// Name: engine_3d.c_drawLineStrip3D_FUN_00404600
// Address: 00404600
// MANUAL RECONSTRUCTION
// Address Range: [[00404600, 0040468f] [00599474, 0059952c] [03fc2964, 03fc2a23]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

{
  int i;

  engine_3d_c_setActiveRenderColor_FUN_00404540();
  for (i = 0; i < line_strip->vertex_count - 1; i++) {
    engine_3d_c_clipAndDrawLine3D_FUN_00408070(g_RenderVertexBuffer[line_strip->vertex_indices[i]],
                                               g_RenderVertexBuffer[line_strip->vertex_indices[i + 1]]);
  }
  return (SMRGLHeaderExtended *)&line_strip->vertex_indices[line_strip->vertex_count];
}
