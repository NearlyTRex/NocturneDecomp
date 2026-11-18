// Name: shape_edittool.cpp_editorDrawHLine_FUN_00492de0
// Address: 00492de0
// Address Range: [[00492de0, 00492e0c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorDrawHLine_FUN_00492de0(int x1,int y,int x2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorDrawHLine_FUN_00492de0(int x1,int y,int x2)

{
  if (g_INT_01c3f544 != 0) {
    engine_mini3d_cpp_drawHLine_FUN_005182e0(x1,y,x2);
    return;
  }
  engine_2d_c_drawHLine_FUN_00402f30(x1,y,x2);
  return;
}
