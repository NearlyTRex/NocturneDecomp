// Name: engine_2d.c_computeOutcode_FUN_00402c10
// Address: 00402c10
// Address Range: [[00402c10, 00402c41]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_computeOutcode_FUN_00402c10(int x,int y,int x_min,int y_min,int x_max,int y_max)

#include "nocturne.h"

int __cdecl engine_2d_c_computeOutcode_FUN_00402c10(int x,int y,int x_min,int y_min,int x_max,int y_max)

{
  byte bVar1;
  
  bVar1 = y_max < y;
  if (y < y_min) {
    bVar1 = bVar1 | 2;
  }
  if (x_max < x) {
    bVar1 = bVar1 | 4;
  }
  if (x < x_min) {
    bVar1 = bVar1 | 8;
  }
  return (uint)bVar1;
}
