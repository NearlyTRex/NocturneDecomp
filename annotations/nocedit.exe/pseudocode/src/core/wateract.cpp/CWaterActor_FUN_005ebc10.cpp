// Name: core_wateract.cpp_CWaterActor_FUN_005ebc10
// Address: 005ebc10
// Address Range: [[005ebc10, 005ebc4f]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005ebc10(CWaterActor * this_ptr)
// Globals:
//   TerminatedCString s_With_CTRL_held_down_use__006574bf
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005ebc10(CWaterActor *this_ptr)

{
  int iVar1;
  int x_pos;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base_actor,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size water plane.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}


// Assembly code:
// 005ebc10: PUSH EBX
//   Label: core_wateract.cpp_CWaterActor_FUN_005ebc10
// 005ebc11: PUSH EDI
// 005ebc12: PUSH EBP
// 005ebc13: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005ebc17: PUSH EBX
// 005ebc18: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ebc1c: PUSH EDX
// 005ebc1d: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 005ebc22: MOV ECX,dword ptr [EBX]
// 005ebc24: ADD ESP,0x8
// 005ebc27: ADD ECX,0xb
// 005ebc2a: PUSH ECX
// 005ebc2b: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005ebc31: PUSH EDI
// 005ebc32: PUSH 0x6574bf
//   XREF to: 006574bf (DATA)
// 005ebc37: MOV dword ptr [EBX],ECX
// 005ebc39: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005ebc3e: MOV EBP,dword ptr [EBX]
// 005ebc40: ADD EBP,0xb
// 005ebc43: ADD ESP,0xc
// 005ebc46: MOV dword ptr [EBX],EBP
// 005ebc48: POP EBP
// 005ebc49: POP EDI
// 005ebc4a: POP EBX
// 005ebc4b: LEA EAX,[EAX]
// 005ebc4e: MOV ECX,ECX
