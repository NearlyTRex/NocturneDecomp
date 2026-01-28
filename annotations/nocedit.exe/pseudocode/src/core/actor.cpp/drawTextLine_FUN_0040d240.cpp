// Name: core_actor.cpp_drawTextLine_FUN_0040d240
// Address: 0040d240
// Address Range: [[0040d240, 0040d268]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_drawTextLine_FUN_0040d240(int *y_position,char *text)

#include "nocturne.h"

void __cdecl core_actor_cpp_drawTextLine_FUN_0040d240(int *y_position,char *text)

{
  engine_2d_c_drawText_FUN_00401fd0(text,g_ClipLeft,*y_position);
  *y_position = *y_position + 0xb;
  return;
}
