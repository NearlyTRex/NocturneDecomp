// Name: shape_edittool.cpp_editorSetAlpha_FUN_00492e40
// Address: 00492e40
// Address Range: [[00492e40, 00492e71]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorSetAlpha_FUN_00492e40(int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_editorSetAlpha_FUN_00492e40(int alpha)

{
  engine_3d_c_setRenderAlpha_FUN_00406bd0(alpha);
  engine_mini3d_cpp_setAlpha_FUN_00512320((float)alpha * _DAT_005dbca8);
  return;
}
