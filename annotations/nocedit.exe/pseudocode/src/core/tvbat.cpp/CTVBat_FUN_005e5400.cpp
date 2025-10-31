// Name: core_tvbat.cpp_CTVBat_FUN_005e5400
// Address: 005e5400
// Address Range: [[005e5400, 005e543b]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_FUN_005e5400(CTVBat * this_ptr)
// Globals:
//   undefined4 s_With_CTRL_held_down,_use_slew_ke_00656a72
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e5400(CTVBat *this_ptr)

{
  int iVar1;
  int x_pos;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150((CDemonActor *)this_ptr,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("@With CTRL held down, use slew keys to size cage." + 1,x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}


// Assembly code:
// 005e5400: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_FUN_005e5400
// 005e5401: PUSH EDI
// 005e5402: PUSH EBP
// 005e5403: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e5407: PUSH EBX
// 005e5408: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e540c: PUSH EDX
// 005e540d: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 005e5412: MOV ECX,dword ptr [EBX]
// 005e5414: ADD ESP,0x8
// 005e5417: ADD ECX,0xb
// 005e541a: PUSH ECX
// 005e541b: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005e5421: PUSH EDI
// 005e5422: PUSH 0x656a72
//   XREF to: 00656a72 (DATA)
// 005e5427: MOV dword ptr [EBX],ECX
// 005e5429: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005e542e: MOV EBP,dword ptr [EBX]
// 005e5430: ADD EBP,0xb
// 005e5433: ADD ESP,0xc
// 005e5436: MOV dword ptr [EBX],EBP
// 005e5438: POP EBP
// 005e5439: POP EDI
// 005e543a: POP EBX
// 005e543b: RET
