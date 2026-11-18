// Name: shape_edittool.cpp_editorDrawHLine_FUN_0047a930
// Address: 0047a930
// Address Range: [[0047a930, 0047a95c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorDrawHLine_FUN_0047a930(int x1,int y,int x2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorDrawHLine_FUN_0047a930(int x1,int y,int x2)

{
  if (g_INT_01c25f84 != 0) {
    engine_mini3d_cpp_drawHLine_FUN_004f9390(x1,y,x2);
    return;
  }
  engine_2d_c_drawHLine_FUN_00402f30(x1,y,x2);
  return;
}
