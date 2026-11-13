// Name: engine_mini3d.cpp_drawRect_FUN_00518290
// Address: 00518290
// Address Range: [[00518290, 005182d4]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawRect_FUN_00518290(int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_drawRect_FUN_00518290(int x1,int y1,int x2,int y2)

{
  engine_mini3d_cpp_drawHLine_FUN_005182e0(x1,y1,x2);
  engine_mini3d_cpp_drawHLine_FUN_005182e0(x1,y2,x2);
  engine_mini3d_cpp_drawVLine_FUN_00518300(x1,y1,y2);
  engine_mini3d_cpp_drawVLine_FUN_00518300(x2,y1,y2);
  return;
}
