// Name: core_curtain.cpp_CCurtain_showEditorHelp_FUN_0044b8d0
// Address: 0044b8d0
// Address Range: [[0044b8d0, 0044b95f]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_showEditorHelp_FUN_0044b8d0(CCurtain *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_showEditorHelp_FUN_0044b8d0(CCurtain *this_ptr,int *y_pos)

{
  int iVar1;
  int iVar2;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  iVar2 = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size box:",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  Left/Right changes width (x-size)",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  Up/Down changes height (y-size)",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  You cannot change the thickness (z-size)",iVar2,iVar1 + 0xb);
  *y_pos = *y_pos + 0xb;
  return;
}
