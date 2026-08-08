// Name: engine_special.cpp_drawFullScreenQuad_FUN_005b7a50
// Address: 005b7a50
// Address Range: [[005b7a50, 005b7b00]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005b7a50(int color)

#include "nocturne.h"

int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005b7a50(int color)

{
  SRenderVertex local_c0 [4];
  
  memset(local_c0,0,0xc0);
  local_c0[0].projected_vertex.screen_x = g_ClipLeft << 0x10;
  local_c0[0].projected_vertex.screen_y = g_ClipTop << 0x10;
  local_c0[1].projected_vertex.screen_x = g_ClipRight << 0x10;
  local_c0[2].projected_vertex.screen_y = g_ClipBottom << 0x10;
  local_c0[0].projected_vertex.transformed_z = g_FullScreenQuadDepth;
  local_c0[1].projected_vertex.transformed_z = g_FullScreenQuadDepth;
  local_c0[2].projected_vertex.transformed_z = g_FullScreenQuadDepth;
  local_c0[3].projected_vertex.transformed_z = g_FullScreenQuadDepth;
  g_ActiveRenderColor = color;
  local_c0[1].projected_vertex.screen_y = local_c0[0].projected_vertex.screen_y;
  local_c0[2].projected_vertex.screen_x = local_c0[1].projected_vertex.screen_x;
  local_c0[3].projected_vertex.screen_x = local_c0[0].projected_vertex.screen_x;
  local_c0[3].projected_vertex.screen_y = local_c0[2].projected_vertex.screen_y;
  engine_special_cpp_drawPolygon_FUN_005b75e0(local_c0,4,0x10);
  return 1;
}
