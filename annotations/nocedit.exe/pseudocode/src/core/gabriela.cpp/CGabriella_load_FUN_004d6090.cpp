// Name: core_gabriela.cpp_CGabriella_load_FUN_004d6090
// Address: 004d6090
// Address Range: [[004d6090, 004d6132]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_CGabriella_load_FUN_004d6090()
// Globals:
//   TerminatedCString s_objectToPickUp_0062b025
//   TerminatedCString s_doorToOpen_0062b034
//   TerminatedCString s_leverToPull_0062b03f
//   TerminatedCString s_ladderToClimb_0062b04b
//   TerminatedCString s_lhCarryObject_0062b059
//   TerminatedCString s_rhCarryObject_0062b067
//   undefined4 g_CGabriellaClassVersion
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_hero.cpp_CHero_serialize_FUN_004f2610

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_CGabriella_load(CGabriella* param_1) */

void core_gabriela_cpp_CGabriella_load_FUN_004d6090(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_serialize_FUN_004f2610(in_stack_00000004);
  if ((1 < g_CGabriellaClassVersion) && (g_CGabriellaClassVersion < 4)) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(in_stack_00000004->field6_0x1fb9c + 4),"objectToPickUp");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)in_stack_00000004->field6_0x1fb9c,"doorToOpen");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(in_stack_00000004->field6_0x1fb9c + 0xc),"leverToPull");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(in_stack_00000004->field6_0x1fb9c + 0x10),"ladderToClimb");
  }
  if (g_CGabriellaClassVersion != 2) {
    return;
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&(in_stack_00000004->base_character).carry_hands[0].carry_actor,
             "lhCarryObject");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&(in_stack_00000004->base_character).carry_hands[1].carry_actor,
             "rhCarryObject");
  return;
}


// Assembly code:
// 004d6090: PUSH EBX
//   Label: core_gabriela.cpp_CGabriella_load_FUN_004d6090
// 004d6091: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004d6095: PUSH EBX
// 004d6096: CALL core_hero.cpp_CHero_serialize_FUN_004f2610
//   XREF to: 004f2610 (UNCONDITIONAL_CALL)
// 004d609b: MOV EDX,dword ptr [0x0067b5a4]
//   XREF to: 0067b5a4 (READ)
// 004d60a1: ADD ESP,0x4
// 004d60a4: CMP EDX,0x2
// 004d60a7: JL 0x004d60fe
//   XREF to: 004d60fe (CONDITIONAL_JUMP)
// 004d60a9: CMP EDX,0x3
// 004d60ac: JG 0x004d60fe
//   XREF to: 004d60fe (CONDITIONAL_JUMP)
// 004d60ae: PUSH 0x62b025
//   XREF to: 0062b025 (DATA)
// 004d60b3: LEA EAX,[EBX + 0x1fba0]
// 004d60b9: PUSH EAX
// 004d60ba: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004d60bf: ADD ESP,0x8
// 004d60c2: PUSH 0x62b034
//   XREF to: 0062b034 (DATA)
// 004d60c7: LEA EAX,[EBX + 0x1fb9c]
// 004d60cd: PUSH EAX
// 004d60ce: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004d60d3: ADD ESP,0x8
// 004d60d6: PUSH 0x62b03f
//   XREF to: 0062b03f (DATA)
// 004d60db: LEA EAX,[EBX + 0x1fba8]
// 004d60e1: PUSH EAX
// 004d60e2: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004d60e7: ADD ESP,0x8
// 004d60ea: PUSH 0x62b04b
//   XREF to: 0062b04b (DATA)
// 004d60ef: LEA EAX,[EBX + 0x1fbac]
// 004d60f5: PUSH EAX
// 004d60f6: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004d60fb: ADD ESP,0x8
// 004d60fe: CMP dword ptr [0x0067b5a4],0x2
//   Label: LAB_004d60fe
//   XREF to: 0067b5a4 (READ)
// 004d6105: JZ 0x004d6109
//   XREF to: 004d6109 (CONDITIONAL_JUMP)
// 004d6107: POP EBX
// 004d6108: RET
// 004d6109: PUSH 0x62b059
//   Label: LAB_004d6109
//   XREF to: 0062b059 (DATA)
// 004d610e: LEA EAX,[EBX + 0x24b4]
// 004d6114: PUSH EAX
// 004d6115: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004d611a: ADD ESP,0x8
// 004d611d: PUSH 0x62b067
//   XREF to: 0062b067 (DATA)
// 004d6122: ADD EBX,0x24f8
// 004d6128: PUSH EBX
// 004d6129: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004d612e: ADD ESP,0x8
// 004d6131: POP EBX
// 004d6132: RET
