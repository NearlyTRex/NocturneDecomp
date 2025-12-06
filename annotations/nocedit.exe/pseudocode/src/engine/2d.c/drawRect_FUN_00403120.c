// Name: engine_2d.c_drawRect_FUN_00403120
// Address: 00403120
// Address Range: [[00403120, 00403164]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawRect_FUN_00403120(int x1, int y1, int x2, int y2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawRect_FUN_00403120(int x1,int y1,int x2,int y2)

{
  engine_2d_c_drawHLine_FUN_00402ee0(x1,y1,x2);
  engine_2d_c_drawHLine_FUN_00402ee0(x1,y2,x2);
  engine_2d_c_drawVLine_FUN_00402ff0(x1,y1,y2);
  engine_2d_c_drawVLine_FUN_00402ff0(x2,y1,y2);
  return;
}
