// Name: core_lever.cpp_FUN_00505390
// Address: 00505390
// Address Range: [[00505390, 0050542d]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00505390()
// Globals:
//   TerminatedCString s_A_lever_will_strobe_the__0063123f
//   TerminatedCString s_Likewise_the_off_event_w_00631289
//   TerminatedCString s_If_the_momentary_flag_is_006312db
//   TerminatedCString s_as_long_as_the_lever_is__0063132b
//   TerminatedCString s_Linked_levers_behave_as__0063135d
//   TerminatedCString s_All_linked_levers_always_0063139e
//   TerminatedCString s_to_change_in_a_network_o_006313dd
//   TerminatedCString s_all_levers_in_the_group_0063141d
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00505390(undefined4 param_1, undefined4 param_2)
    */

void core_lever_cpp_FUN_00505390(void)

{
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  return;
}


// Assembly code:
// 00505390: PUSH EBX
//   Label: core_lever.cpp_FUN_00505390
// 00505391: PUSH ESI
// 00505392: PUSH EDI
// 00505393: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00505397: PUSH EBX
// 00505398: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050539c: PUSH EDX
// 0050539d: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 005053a2: ADD ESP,0x8
// 005053a5: MOV ECX,dword ptr [EBX]
// 005053a7: PUSH 0x63123f
//   XREF to: 0063123f (DATA)
// 005053ac: ADD ECX,0xb
// 005053af: PUSH EBX
// 005053b0: MOV dword ptr [EBX],ECX
// 005053b2: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005053b7: ADD ESP,0x8
// 005053ba: PUSH 0x631289
//   XREF to: 00631289 (DATA)
// 005053bf: PUSH EBX
// 005053c0: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005053c5: ADD ESP,0x8
// 005053c8: MOV ESI,dword ptr [EBX]
// 005053ca: PUSH 0x6312db
//   XREF to: 006312db (DATA)
// 005053cf: ADD ESI,0xb
// 005053d2: PUSH EBX
// 005053d3: MOV dword ptr [EBX],ESI
// 005053d5: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005053da: ADD ESP,0x8
// 005053dd: PUSH 0x63132b
//   XREF to: 0063132b (DATA)
// 005053e2: PUSH EBX
// 005053e3: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005053e8: ADD ESP,0x8
// 005053eb: MOV EDI,dword ptr [EBX]
// 005053ed: PUSH 0x63135d
//   XREF to: 0063135d (DATA)
// 005053f2: ADD EDI,0xb
// 005053f5: PUSH EBX
// 005053f6: MOV dword ptr [EBX],EDI
// 005053f8: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005053fd: ADD ESP,0x8
// 00505400: PUSH 0x63139e
//   XREF to: 0063139e (DATA)
// 00505405: PUSH EBX
// 00505406: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 0050540b: ADD ESP,0x8
// 0050540e: PUSH 0x6313dd
//   XREF to: 006313dd (DATA)
// 00505413: PUSH EBX
// 00505414: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 00505419: ADD ESP,0x8
// 0050541c: PUSH 0x63141d
//   XREF to: 0063141d (DATA)
// 00505421: PUSH EBX
// 00505422: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 00505427: ADD ESP,0x8
// 0050542a: POP EDI
// 0050542b: POP ESI
// 0050542c: POP EBX
// 0050542d: RET
