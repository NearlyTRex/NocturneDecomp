// Name: core_curtain.cpp_FUN_0044b8d0
// Address: 0044b8d0
// Address Range: [[0044b8d0, 0044b95f]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_FUN_0044b8d0(void)

#include "nocturne.h"

/* Signature: byte actors_other_curtain.cpp_FUN_0044b8d0(uint param_1, uint
   param_2) */

void __cdecl core_curtain_cpp_FUN_0044b8d0(void)

{
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size box:",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  Left/Right changes width (x-size)",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  Up/Down changes height (y-size)",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  You cannot change the thickness (z-size)",iVar2,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}
