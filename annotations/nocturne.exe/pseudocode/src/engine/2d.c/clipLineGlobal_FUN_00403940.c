// Name: engine_2d.c_clipLineGlobal_FUN_00403940
// Address: 00403940
// Address Range: [[00403940, 00403980]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_clipLineGlobal_FUN_00403940(int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl engine_2d_c_clipLineGlobal_FUN_00403940(int x1,int y1,int x2,int y2)

{
  engine_2d_c_clipAndDrawLine_FUN_00403990
            (x1,y1,x2,y2,g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom);
  return;
}
