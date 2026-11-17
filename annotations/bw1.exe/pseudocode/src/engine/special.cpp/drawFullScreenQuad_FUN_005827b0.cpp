// Name: engine_special.cpp_drawFullScreenQuad_FUN_005827b0
// Address: 005827b0
// Address Range: [[005827b0, 00582860]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005827b0(int color)

#include "nocturne.h"

int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005827b0(int color)

{
  SRenderVertex SStack_c0;
  int iStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  
  memset(&SStack_c0,0,0xc0);
  SStack_c0.projected_vertex.screen_x = g_INT_01c4f008 << 0x10;
  SStack_c0.projected_vertex.screen_y = g_INT_01c4f00c << 0x10;
  iStack_80 = g_INT_01c4f010 << 0x10;
  iStack_4c = g_INT_01c4f014 << 0x10;
  SStack_c0.projected_vertex.transformed_z = g_INT_006258dc;
  iStack_88 = g_INT_006258dc;
  iStack_58 = g_INT_006258dc;
  iStack_28 = g_INT_006258dc;
  g_INT_01c4f020 = color;
  iStack_7c = SStack_c0.projected_vertex.screen_y;
  iStack_50 = iStack_80;
  iStack_20 = SStack_c0.projected_vertex.screen_x;
  iStack_1c = iStack_4c;
  engine_special_cpp_drawPolygon_FUN_00582340(&SStack_c0,4,0x10);
  return 1;
}
