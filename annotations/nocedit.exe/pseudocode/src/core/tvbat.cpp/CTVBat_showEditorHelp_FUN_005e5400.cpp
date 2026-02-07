// Name: core_tvbat.cpp_CTVBat_showEditorHelp_FUN_005e5400
// Address: 005e5400
// Address Range: [[005e5400, 005e543b]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_showEditorHelp_FUN_005e5400(CTVBat *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_showEditorHelp_FUN_005e5400(CTVBat *this_ptr,int *y_pos)

{
  int iVar1;
  int x;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150((CDemonActor *)this_ptr,y_pos);
  x = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size cage.",x,iVar1 + 0xb);
  *y_pos = *y_pos + 0xb;
  return;
}
