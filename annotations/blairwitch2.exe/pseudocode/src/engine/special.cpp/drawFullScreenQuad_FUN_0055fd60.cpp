// Name: engine_special.cpp_drawFullScreenQuad_FUN_0055fd60
// Address: 0055fd60
// Address Range: [[0055fd60, 0055fe10]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_0055fd60(int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_0055fd60(int color)

{
  byte auStack_c0 [8];
  uint uStack_b8;
  int iStack_b0;
  int iStack_ac;
  uint uStack_88;
  int iStack_80;
  int iStack_7c;
  uint uStack_58;
  int iStack_50;
  int iStack_4c;
  uint uStack_28;
  int iStack_20;
  int iStack_1c;
  
  memset(auStack_c0,0,0xc0);
  iStack_b0 = _DAT_01c35e48 << 0x10;
  iStack_ac = _DAT_01c35e4c << 0x10;
  iStack_80 = _DAT_01c35e50 << 0x10;
  iStack_4c = _DAT_01c35e54 << 0x10;
  uStack_b8 = _DAT_0061e28c;
  uStack_88 = _DAT_0061e28c;
  uStack_58 = _DAT_0061e28c;
  uStack_28 = _DAT_0061e28c;
  _DAT_01c35e60 = color;
  iStack_7c = iStack_ac;
  iStack_50 = iStack_80;
  iStack_20 = iStack_b0;
  iStack_1c = iStack_4c;
  engine_special_cpp_drawPolygon_FUN_0055f8f0(auStack_c0,4,0x10);
  return 1;
}
