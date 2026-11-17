// Name: shape_edittool.cpp_editorDrawVLine_FUN_0047a960
// Address: 0047a960
// Address Range: [[0047a960, 0047a98c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorDrawVLine_FUN_0047a960(int x,int y1,int y2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorDrawVLine_FUN_0047a960(int x,int y1,int y2)

{
  if (g_INT_01c25f84 != 0) {
    engine_mini3d_cpp_drawVLine_FUN_004f93b0(x,y1,y2);
    return;
  }
  engine_2d_c_drawVLine_FUN_00403040(x,y1,y2);
  return;
}
