// Name: core_barrier.cpp_CBarrier_FUN_00414610
// Address: 00414610
// Address Range: [[00414610, 0041466c]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_00414610(CBarrier * this_ptr)
// Globals:
//   TerminatedCString s_With_CTRL_held_down_use__006151cf
//   TerminatedCString s_effectClassNameList_is_u_006151ff
//   TerminatedCString s_If_this_is_empty_then_al_0061524e
//   TerminatedCString s_actors_of_the_type_s_lis_0061529c
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   core_actor.cpp_drawTextLine_FUN_0040d240

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_00414610(CBarrier *this_ptr)

{
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base_actor,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"With CTRL held down, use slew keys to size box.");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"effectClassNameList is used to select which actors are blocked by the barrier.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"If this is empty, then all actors are blocked.  If non-empty, then only those");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"actors of the type(s) listed are blocked.");
  return;
}


// Assembly code:
// 00414610: PUSH EBX
//   Label: core_barrier.cpp_CBarrier_FUN_00414610
// 00414611: PUSH ESI
// 00414612: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00414616: PUSH EBX
// 00414617: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0041461b: PUSH EDX
// 0041461c: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 00414621: ADD ESP,0x8
// 00414624: MOV ECX,dword ptr [EBX]
// 00414626: PUSH 0x6151cf
//   XREF to: 006151cf (DATA)
// 0041462b: ADD ECX,0xb
// 0041462e: PUSH EBX
// 0041462f: MOV dword ptr [EBX],ECX
// 00414631: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 00414636: ADD ESP,0x8
// 00414639: MOV ESI,dword ptr [EBX]
// 0041463b: PUSH 0x6151ff
//   XREF to: 006151ff (DATA)
// 00414640: ADD ESI,0xb
// 00414643: PUSH EBX
// 00414644: MOV dword ptr [EBX],ESI
// 00414646: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 0041464b: ADD ESP,0x8
// 0041464e: PUSH 0x61524e
//   XREF to: 0061524e (DATA)
// 00414653: PUSH EBX
// 00414654: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 00414659: ADD ESP,0x8
// 0041465c: PUSH 0x61529c
//   XREF to: 0061529c (DATA)
// 00414661: PUSH EBX
// 00414662: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 00414667: ADD ESP,0x8
// 0041466a: POP ESI
// 0041466b: POP EBX
// 0041466c: RET
