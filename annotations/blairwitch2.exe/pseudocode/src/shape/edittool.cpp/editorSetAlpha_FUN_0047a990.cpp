// Name: shape_edittool.cpp_editorSetAlpha_FUN_0047a990
// Address: 0047a990
// Address Range: [[0047a990, 0047a9c1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorSetAlpha_FUN_0047a990(int alpha)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorSetAlpha_FUN_0047a990(int alpha)

{
  engine_3d_c_setRenderAlpha_FUN_00406da0(alpha);
  engine_mini3d_cpp_setAlpha_FUN_004f3570((float)alpha * 1.525902e-05f);
  return;
}
