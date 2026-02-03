// Name: core_emitter.cpp_CEmitter_showEditorHelp_FUN_004a9350
// Address: 004a9350
// Address Range: [[004a9350, 004a938b]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_showEditorHelp_FUN_004a9350(CEmitter *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_showEditorHelp_FUN_004a9350(CEmitter *this_ptr,int *y_pos)

{
  int iVar1;
  int x_pos;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  x_pos = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size box.",x_pos,iVar1 + 0xb);
  *y_pos = *y_pos + 0xb;
  return;
}
