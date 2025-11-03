// Name: core_stranger.cpp_CStranger_serialize_FUN_005c2fe0
// Address: 005c2fe0
// Address Range: [[005c2fe0, 005c3127]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_serialize_FUN_005c2fe0(CStranger * this_ptr)
// Globals:
//   TerminatedCString s_objectToPickUp_00653bd4
//   TerminatedCString s_doorToOpen_00653be3
//   TerminatedCString s_leverToPull_00653bee
//   TerminatedCString s_ladderToClimb_00653bfa
//   TerminatedCString s_lhCarryObject_00653c08
//   TerminatedCString s_rhCarryObject_00653c16
//   TerminatedCString s_ladderToDescend_00653c24
//   TerminatedCString s_gunsDrawn_00653c34
//   TerminatedCString s_weapon_00653c3e
//   TerminatedCString s_actionPending_00653c45
//   TerminatedCString s_layerActionIndex_00653c53
//   TerminatedCString s_layerActionT_00653c64
//   int g_CStrangerClassVersion = 0x9
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_hero.cpp_CHero_serialize_FUN_004f2610

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_serialize_FUN_005c2fe0(CStranger *this_ptr)

{
  core_hero_cpp_CHero_serialize_FUN_004f2610(&this_ptr->base_hero);
  if ((1 < g_CStrangerClassVersion) && (g_CStrangerClassVersion < 5)) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)((this_ptr->base_hero).field6_0x1fb9c + 4),"objectToPickUp");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->base_hero).field6_0x1fb9c,"doorToOpen");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)((this_ptr->base_hero).field6_0x1fb9c + 0xc),"leverToPull");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)((this_ptr->base_hero).field6_0x1fb9c + 0x10),"ladderToClimb"
              );
  }
  if (g_CStrangerClassVersion == 2) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&(this_ptr->base_hero).base_character.carry_hands[0].carry_actor,
               "lhCarryObject");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&(this_ptr->base_hero).base_character.carry_hands[1].carry_actor,
               "rhCarryObject");
  }
  if (3 < g_CStrangerClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field2_0x1fbd8 + 0x50),"ladderToDescend");
  }
  if (5 < g_CStrangerClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->guns_drawn,"gunsDrawn");
  }
  if (6 < g_CStrangerClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field2_0x1fbd8 + 0x54),"weapon");
  }
  if (7 < g_CStrangerClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->action_pending,"actionPending")
    ;
  }
  if (g_CStrangerClassVersion < 9) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)((this_ptr->base_hero).base_character.field13_0x2620 + 0x46c),
             "layerActionIndex");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)((this_ptr->base_hero).base_character.field13_0x2620 + 0x470),
             "layerActionT");
  return;
}


// Assembly code:
// 005c2fe0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_serialize_FUN_005c2fe0
// 005c2fe1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c2fe5: PUSH EBX
// 005c2fe6: CALL core_hero.cpp_CHero_serialize_FUN_004f2610
//   XREF to: 004f2610 (UNCONDITIONAL_CALL)
// 005c2feb: MOV EDX,dword ptr [0x006841bc]
//   XREF to: 006841bc (READ)
// 005c2ff1: ADD ESP,0x4
// 005c2ff4: CMP EDX,0x2
// 005c2ff7: JL 0x005c304e
//   XREF to: 005c304e (CONDITIONAL_JUMP)
// 005c2ff9: CMP EDX,0x4
// 005c2ffc: JG 0x005c304e
//   XREF to: 005c304e (CONDITIONAL_JUMP)
// 005c2ffe: PUSH 0x653bd4
//   XREF to: 00653bd4 (DATA)
// 005c3003: LEA EAX,[EBX + 0x1fba0]
// 005c3009: PUSH EAX
// 005c300a: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005c300f: ADD ESP,0x8
// 005c3012: PUSH 0x653be3
//   XREF to: 00653be3 (DATA)
// 005c3017: LEA EAX,[EBX + 0x1fb9c]
// 005c301d: PUSH EAX
// 005c301e: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005c3023: ADD ESP,0x8
// 005c3026: PUSH 0x653bee
//   XREF to: 00653bee (DATA)
// 005c302b: LEA EAX,[EBX + 0x1fba8]
// 005c3031: PUSH EAX
// 005c3032: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005c3037: ADD ESP,0x8
// 005c303a: PUSH 0x653bfa
//   XREF to: 00653bfa (DATA)
// 005c303f: LEA EAX,[EBX + 0x1fbac]
// 005c3045: PUSH EAX
// 005c3046: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005c304b: ADD ESP,0x8
// 005c304e: CMP dword ptr [0x006841bc],0x2
//   Label: LAB_005c304e
//   XREF to: 006841bc (READ)
// 005c3055: JNZ 0x005c307f
//   XREF to: 005c307f (CONDITIONAL_JUMP)
// 005c3057: PUSH 0x653c08
//   XREF to: 00653c08 (DATA)
// 005c305c: LEA EAX,[EBX + 0x24b4]
// 005c3062: PUSH EAX
// 005c3063: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005c3068: ADD ESP,0x8
// 005c306b: PUSH 0x653c16
//   XREF to: 00653c16 (DATA)
// 005c3070: LEA EAX,[EBX + 0x24f8]
// 005c3076: PUSH EAX
// 005c3077: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005c307c: ADD ESP,0x8
// 005c307f: CMP dword ptr [0x006841bc],0x4
//   Label: LAB_005c307f
//   XREF to: 006841bc (READ)
// 005c3086: JL 0x005c309c
//   XREF to: 005c309c (CONDITIONAL_JUMP)
// 005c3088: PUSH 0x653c24
//   XREF to: 00653c24 (DATA)
// 005c308d: LEA EAX,[EBX + 0x1fc28]
// 005c3093: PUSH EAX
// 005c3094: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005c3099: ADD ESP,0x8
// 005c309c: CMP dword ptr [0x006841bc],0x6
//   Label: LAB_005c309c
//   XREF to: 006841bc (READ)
// 005c30a3: JL 0x005c30b9
//   XREF to: 005c30b9 (CONDITIONAL_JUMP)
// 005c30a5: PUSH 0x653c34
//   XREF to: 00653c34 (DATA)
// 005c30aa: LEA EAX,[EBX + 0x1fbd4]
// 005c30b0: PUSH EAX
// 005c30b1: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005c30b6: ADD ESP,0x8
// 005c30b9: CMP dword ptr [0x006841bc],0x7
//   Label: LAB_005c30b9
//   XREF to: 006841bc (READ)
// 005c30c0: JL 0x005c30d6
//   XREF to: 005c30d6 (CONDITIONAL_JUMP)
// 005c30c2: PUSH 0x653c3e
//   XREF to: 00653c3e (DATA)
// 005c30c7: LEA EAX,[EBX + 0x1fc2c]
// 005c30cd: PUSH EAX
// 005c30ce: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005c30d3: ADD ESP,0x8
// 005c30d6: CMP dword ptr [0x006841bc],0x8
//   Label: LAB_005c30d6
//   XREF to: 006841bc (READ)
// 005c30dd: JL 0x005c30f3
//   XREF to: 005c30f3 (CONDITIONAL_JUMP)
// 005c30df: PUSH 0x653c45
//   XREF to: 00653c45 (DATA)
// 005c30e4: LEA EAX,[EBX + 0x1fc38]
// 005c30ea: PUSH EAX
// 005c30eb: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005c30f0: ADD ESP,0x8
// 005c30f3: CMP dword ptr [0x006841bc],0x9
//   Label: LAB_005c30f3
//   XREF to: 006841bc (READ)
// 005c30fa: JGE 0x005c30fe
//   XREF to: 005c30fe (CONDITIONAL_JUMP)
// 005c30fc: POP EBX
// 005c30fd: RET
// 005c30fe: PUSH 0x653c53
//   Label: LAB_005c30fe
//   XREF to: 00653c53 (DATA)
// 005c3103: LEA EAX,[EBX + 0x2a8c]
// 005c3109: PUSH EAX
// 005c310a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005c310f: ADD ESP,0x8
// 005c3112: PUSH 0x653c64
//   XREF to: 00653c64 (DATA)
// 005c3117: ADD EBX,0x2a90
// 005c311d: PUSH EBX
// 005c311e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005c3123: ADD ESP,0x8
// 005c3126: POP EBX
// 005c3127: RET
