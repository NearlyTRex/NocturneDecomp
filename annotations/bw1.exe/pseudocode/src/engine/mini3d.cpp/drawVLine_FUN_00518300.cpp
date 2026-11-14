// Name: engine_mini3d.cpp_drawVLine_FUN_00518300
// Address: 00518300
// Address Range: [[00518300, 0051831d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawVLine_FUN_00518300(int x,int y1,int y2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_drawVLine_FUN_00518300(int x,int y1,int y2)

{
  engine_mini3d_cpp_fillRect_FUN_00518010(x,y1,x + 1,y2);
  return;
}
