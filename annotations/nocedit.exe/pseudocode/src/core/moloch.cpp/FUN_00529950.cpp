// Name: core_moloch.cpp_FUN_00529950
// Address: 00529950
// Address Range: [[00529950, 005299a5]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_FUN_00529950()
// Globals:
//   TerminatedCString s_In_human_form_00639ee1
//   TerminatedCString s_humanToDemonCond_00639eef
//   TerminatedCString s_demonToHumanCond_00639f00
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_hero.cpp_CHero_FUN_004f3f20

#include "nocturne.h"

/* Signature: undefined1 actors_hero_moloch.cpp_FUN_00529950(undefined4 param_1, undefined4 param_2)
    */

void core_moloch_cpp_FUN_00529950(void)

{
  CHero *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_hero_cpp_CHero_FUN_004f3f20(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 00529950: PUSH EBX
//   Label: core_moloch.cpp_FUN_00529950
// 00529951: PUSH ESI
// 00529952: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00529956: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052995a: PUSH ESI
// 0052995b: PUSH EBX
// 0052995c: CALL core_hero.cpp_CHero_FUN_004f3f20
//   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
// 00529961: ADD ESP,0x8
// 00529964: LEA EAX,[EBX + 0x21e88]
// 0052996a: PUSH EAX
// 0052996b: PUSH 0x639ee1
//   XREF to: 00639ee1 (DATA)
// 00529970: PUSH ESI
// 00529971: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00529976: ADD ESP,0xc
// 00529979: LEA EAX,[EBX + 0x21e94]
// 0052997f: PUSH EAX
// 00529980: PUSH 0x639eef
//   XREF to: 00639eef (DATA)
// 00529985: PUSH ESI
// 00529986: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0052998b: ADD ESP,0xc
// 0052998e: ADD EBX,0x21ef8
// 00529994: PUSH EBX
// 00529995: PUSH 0x639f00
//   XREF to: 00639f00 (DATA)
// 0052999a: PUSH ESI
// 0052999b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005299a0: ADD ESP,0xc
// 005299a3: POP ESI
// 005299a4: POP EBX
// 005299a5: RET
