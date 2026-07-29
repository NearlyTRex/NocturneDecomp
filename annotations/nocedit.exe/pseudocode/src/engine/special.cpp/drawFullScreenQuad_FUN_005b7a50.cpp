// Name: engine_special.cpp_drawFullScreenQuad_FUN_005b7a50
// Address: 005b7a50
// Address Range: [[005b7a50, 005b7b00]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005b7a50(int color)

#include "nocturne.h"

int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005b7a50(int color)

{
  SRenderVertex local_c0;
  int local_88;
  int local_80;
  int local_7c;
  int local_58;
  int local_50;
  int local_4c;
  int local_28;
  int local_20;
  int local_1c;
  
  memset(&local_c0,0,0xc0);
  local_c0.projected_vertex.screen_x = g_ClipLeft << 0x10;
  local_c0.projected_vertex.screen_y = g_ClipTop << 0x10;
  local_c0.projected_vertex.transformed_z = g_SystemMemorySize;
  g_ActiveRenderColor = color;
  engine_special_cpp_drawPolygon_FUN_005b75e0(&local_c0,4,0x10);
  return 1;
}
