// Name: engine_mini3d.cpp_drawRect_FUN_004f3a60
// Address: 004f3a60
// Address Range: [[004f3a60, 004f3aa4]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawRect_FUN_004f3a60(int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_drawRect_FUN_004f3a60(int x1,int y1,int x2,int y2)

{
  engine_mini3d_cpp_drawHLine_FUN_004f3ab0(x1,y1,x2);
  engine_mini3d_cpp_drawHLine_FUN_004f3ab0(x1,y2,x2);
  engine_mini3d_cpp_drawVLine_FUN_004f3ad0(x1,y1,y2);
  engine_mini3d_cpp_drawVLine_FUN_004f3ad0(x2,y1,y2);
  return;
}
