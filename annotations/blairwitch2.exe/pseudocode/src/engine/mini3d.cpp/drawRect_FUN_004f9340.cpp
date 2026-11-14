// Name: engine_mini3d.cpp_drawRect_FUN_004f9340
// Address: 004f9340
// Address Range: [[004f9340, 004f9384]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawRect_FUN_004f9340(int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_drawRect_FUN_004f9340(int x1,int y1,int x2,int y2)

{
  engine_mini3d_cpp_drawHLine_FUN_004f9390(x1,y1,x2);
  engine_mini3d_cpp_drawHLine_FUN_004f9390(x1,y2,x2);
  engine_mini3d_cpp_drawVLine_FUN_004f93b0(x1,y1,y2);
  engine_mini3d_cpp_drawVLine_FUN_004f93b0(x2,y1,y2);
  return;
}
