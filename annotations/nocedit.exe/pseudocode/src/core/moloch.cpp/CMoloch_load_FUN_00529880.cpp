// Name: core_moloch.cpp_CMoloch_load_FUN_00529880
// Address: 00529880
// Address Range: [[00529880, 005298f3]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_CMoloch_load_FUN_00529880()
// Globals:
//   TerminatedCString s_humanToDemonCond_00639e6d
//   TerminatedCString s_demonToHumanCond_00639e7e
//   TerminatedCString s_inHumanForm_00639e8f
//   TerminatedCString s_morphing_00639e9b
//   TerminatedCString s_morphTimer_00639ea4
// Function calls:
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_hero.cpp_CHero_serialize_FUN_004f2610

#include "nocturne.h"

/* Signature: undefined1 actors_hero_moloch.cpp_CMoloch_load(CMoloch* param_1) */

void core_moloch_cpp_CMoloch_load_FUN_00529880(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_serialize_FUN_004f2610(in_stack_00000004);
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x2168),
             "humanToDemonCond");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x21cc),
             "demonToHumanCond");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x215c),
             "inHumanForm");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x2160),
             "morphing");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x2164),
             "morphTimer");
  return;
}


// Assembly code:
// 00529880: PUSH EBX
//   Label: core_moloch.cpp_CMoloch_load_FUN_00529880
// 00529881: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00529885: PUSH EBX
// 00529886: CALL core_hero.cpp_CHero_serialize_FUN_004f2610
//   XREF to: 004f2610 (UNCONDITIONAL_CALL)
// 0052988b: ADD ESP,0x4
// 0052988e: PUSH 0x639e6d
//   XREF to: 00639e6d (DATA)
// 00529893: LEA EAX,[EBX + 0x21e94]
// 00529899: PUSH EAX
// 0052989a: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0052989f: ADD ESP,0x8
// 005298a2: PUSH 0x639e7e
//   XREF to: 00639e7e (DATA)
// 005298a7: LEA EAX,[EBX + 0x21ef8]
// 005298ad: PUSH EAX
// 005298ae: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005298b3: ADD ESP,0x8
// 005298b6: PUSH 0x639e8f
//   XREF to: 00639e8f (DATA)
// 005298bb: LEA EAX,[EBX + 0x21e88]
// 005298c1: PUSH EAX
// 005298c2: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005298c7: ADD ESP,0x8
// 005298ca: PUSH 0x639e9b
//   XREF to: 00639e9b (DATA)
// 005298cf: LEA EAX,[EBX + 0x21e8c]
// 005298d5: PUSH EAX
// 005298d6: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005298db: ADD ESP,0x8
// 005298de: PUSH 0x639ea4
//   XREF to: 00639ea4 (DATA)
// 005298e3: ADD EBX,0x21e90
// 005298e9: PUSH EBX
// 005298ea: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005298ef: ADD ESP,0x8
// 005298f2: POP EBX
// 005298f3: RET
