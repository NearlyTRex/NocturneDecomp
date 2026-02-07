// Name: core_flies.cpp_CFlies_showEditorHelp_FUN_004ccc70
// Address: 004ccc70
// Address Range: [[004ccc70, 004cccab]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_showEditorHelp_FUN_004ccc70(CFlies *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_showEditorHelp_FUN_004ccc70(CFlies *this_ptr,int *y_pos)

{
  int iVar1;
  int x;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  x = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size box.",x,iVar1 + 0xb);
  *y_pos = *y_pos + 0xb;
  return;
}
