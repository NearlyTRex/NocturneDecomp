// Name: shape_edittool.cpp_editorSetAlpha_FUN_0047b9e0
// Address: 0047b9e0
// Address Range: [[0047b9e0, 0047ba11]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorSetAlpha_FUN_0047b9e0(int alpha)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorSetAlpha_FUN_0047b9e0(int alpha)

{
  engine_3d_c_setRenderAlpha_FUN_00406bf0(alpha);
  engine_mini3d_cpp_setAlpha_FUN_004edaf0((float)alpha * 1.525902e-05f);
  return;
}
