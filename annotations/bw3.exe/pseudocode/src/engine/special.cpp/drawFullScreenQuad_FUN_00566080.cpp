// Name: engine_special.cpp_drawFullScreenQuad_FUN_00566080
// Address: 00566080
// Address Range: [[00566080, 00566130]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_00566080(int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_00566080(int color)

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
  SStack_c0.projected_vertex.screen_x = _DAT_01c6b5a8 << 0x10;
  SStack_c0.projected_vertex.screen_y = _DAT_01c6b5ac << 0x10;
  iStack_80 = _DAT_01c6b5b0 << 0x10;
  iStack_4c = _DAT_01c6b5b4 << 0x10;
  SStack_c0.projected_vertex.transformed_z = _DAT_0060683c;
  iStack_88 = _DAT_0060683c;
  iStack_58 = _DAT_0060683c;
  iStack_28 = _DAT_0060683c;
  _DAT_01c6b5c0 = color;
  iStack_7c = SStack_c0.projected_vertex.screen_y;
  iStack_50 = iStack_80;
  iStack_20 = SStack_c0.projected_vertex.screen_x;
  iStack_1c = iStack_4c;
  engine_special_cpp_drawPolygon_FUN_00565c10(&SStack_c0,4,0x10);
  return 1;
}
