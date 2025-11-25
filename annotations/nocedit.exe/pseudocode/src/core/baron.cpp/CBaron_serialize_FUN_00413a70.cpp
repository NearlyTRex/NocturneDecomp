// Name: core_baron.cpp_CBaron_serialize_FUN_00413a70
// Address: 00413a70
// Address Range: [[00413a70, 00413ac8]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_serialize_FUN_00413a70(CBaron * this_ptr)
// Globals:
//   TerminatedCString s_summonEvent_00615069
//   TerminatedCString s_goAwayEvent_00615075
//   TerminatedCString s_summoned_00615081
//   undefined4 g_CBaronClassVersion
// Function calls:
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_hero.cpp_CHero_serialize_FUN_004f2610

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_serialize_FUN_00413a70(CBaron *this_ptr)

{
  core_hero_cpp_CHero_serialize_FUN_004f2610(&this_ptr->field0_0x0);
  if (g_CBaronClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->field1_0x1fbd4,"summonEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field1_0x1fbd4 + 100),"goAwayEvent");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->field1_0x1fbd4 + 0xf8),"summoned");
  return;
}


// Assembly code:
// 00413a70: PUSH EBX
//   Label: core_baron.cpp_CBaron_serialize_FUN_00413a70
// 00413a71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00413a75: PUSH EBX
// 00413a76: CALL core_hero.cpp_CHero_serialize_FUN_004f2610
//   XREF to: 004f2610 (UNCONDITIONAL_CALL)
// 00413a7b: MOV EDX,dword ptr [0x0066e45c]
//   XREF to: 0066e45c (READ)
// 00413a81: ADD ESP,0x4
// 00413a84: CMP EDX,0x2
// 00413a87: JGE 0x00413a8b
//   XREF to: 00413a8b (CONDITIONAL_JUMP)
// 00413a89: POP EBX
// 00413a8a: RET
// 00413a8b: PUSH 0x615069
//   Label: LAB_00413a8b
//   XREF to: 00615069 (DATA)
// 00413a90: LEA EAX,[EBX + 0x1fbd4]
// 00413a96: PUSH EAX
// 00413a97: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00413a9c: ADD ESP,0x8
// 00413a9f: PUSH 0x615075
//   XREF to: 00615075 (DATA)
// 00413aa4: LEA EAX,[EBX + 0x1fc38]
// 00413aaa: PUSH EAX
// 00413aab: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00413ab0: ADD ESP,0x8
// 00413ab3: PUSH 0x615081
//   XREF to: 00615081 (DATA)
// 00413ab8: ADD EBX,0x1fccc
// 00413abe: PUSH EBX
// 00413abf: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00413ac4: ADD ESP,0x8
// 00413ac7: POP EBX
// 00413ac8: RET
