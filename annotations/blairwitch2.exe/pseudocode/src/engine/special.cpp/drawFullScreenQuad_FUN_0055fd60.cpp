// Name: engine_special.cpp_drawFullScreenQuad_FUN_0055fd60
// Address: 0055fd60
// Address Range: [[0055fd60, 0055fe10]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_0055fd60(int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_0055fd60(int color)

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
  SStack_c0.projected_vertex.screen_x = _DAT_01c35e48 << 0x10;
  SStack_c0.projected_vertex.screen_y = _DAT_01c35e4c << 0x10;
  iStack_80 = _DAT_01c35e50 << 0x10;
  iStack_4c = _DAT_01c35e54 << 0x10;
  SStack_c0.projected_vertex.transformed_z = _DAT_0061e28c;
  iStack_88 = _DAT_0061e28c;
  iStack_58 = _DAT_0061e28c;
  iStack_28 = _DAT_0061e28c;
  _DAT_01c35e60 = color;
  iStack_7c = SStack_c0.projected_vertex.screen_y;
  iStack_50 = iStack_80;
  iStack_20 = SStack_c0.projected_vertex.screen_x;
  iStack_1c = iStack_4c;
  engine_special_cpp_drawPolygon_FUN_0055f8f0(&SStack_c0,4,0x10);
  return 1;
}
