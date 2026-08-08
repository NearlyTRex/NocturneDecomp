// Name: engine_special.cpp_drawFullScreenQuad_FUN_005329c0
// Address: 005329c0
// Address Range: [[005329c0, 00532a70]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005329c0(int color)

#include "nocturne.h"

int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005329c0(int color)

{
  SRenderVertex SStack_c0 [4];
  
  memset(SStack_c0,0,0xc0);
  SStack_c0[0].projected_vertex.screen_x = g_ClipLeft << 0x10;
  SStack_c0[0].projected_vertex.screen_y = g_ClipTop << 0x10;
  SStack_c0[1].projected_vertex.screen_x = g_ClipRight << 0x10;
  SStack_c0[2].projected_vertex.screen_y = g_ClipBottom << 0x10;
  SStack_c0[0].projected_vertex.transformed_z = g_FullScreenQuadDepth;
  SStack_c0[1].projected_vertex.transformed_z = g_FullScreenQuadDepth;
  SStack_c0[2].projected_vertex.transformed_z = g_FullScreenQuadDepth;
  SStack_c0[3].projected_vertex.transformed_z = g_FullScreenQuadDepth;
  g_ActiveRenderColor = color;
  SStack_c0[1].projected_vertex.screen_y = SStack_c0[0].projected_vertex.screen_y;
  SStack_c0[2].projected_vertex.screen_x = SStack_c0[1].projected_vertex.screen_x;
  SStack_c0[3].projected_vertex.screen_x = SStack_c0[0].projected_vertex.screen_x;
  SStack_c0[3].projected_vertex.screen_y = SStack_c0[2].projected_vertex.screen_y;
  engine_special_cpp_drawPolygon_FUN_00532620(SStack_c0,4,0x10);
  return 1;
}
