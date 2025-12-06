// Name: engine_2d.c_clipLineGlobal_FUN_00402c50
// Address: 00402c50
// Address Range: [[00402c50, 00402c90]]
// Convention: __cdecl
// Signature: void engine_2d.c_clipLineGlobal_FUN_00402c50(int * x1, int * y1, int * x2, int * y2)

#include "nocturne.h"

void __cdecl engine_2d_c_clipLineGlobal_FUN_00402c50(int *x1,int *y1,int *x2,int *y2)

{
  engine_2d_c_clipAndDrawLine_FUN_00402ca0
            (x1,y1,x2,y2,g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom);
  return;
}
