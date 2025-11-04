// Name: core_mobster.cpp_CMobster_load_FUN_00527230
// Address: 00527230
// Address Range: [[00527230, 00527357]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_CMobster_load_FUN_00527230()
// Globals:
//   TerminatedCString s_speed_0063992e
//   TerminatedCString s_modelName_00639934
//   TerminatedCString s_guardDistance_0063993e
//   TerminatedCString s_motion_state_0063994c
//   TerminatedCString s_clothList_00639959
//   TerminatedCString s_postMode_00639963
//   TerminatedCString s_ourPost_0063996c
//   TerminatedCString s_vehicle_00639974
//   TerminatedCString s_sideOfCar_0063997c
//   TerminatedCString s_holdPosFlag_00639986
//   TerminatedCString s_holdPosCond_00639992
//   undefined4 g_CMobsterClassVersion
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeClothList_FUN_0040be60
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_CMobster_load(CMobster* param_1) */

void core_mobster_cpp_CMobster_load_FUN_00527230(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base_character).model,"modelName");
  if (g_CMobsterClassVersion < 4) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base_character).model.motion_controller,"motion state");
  if (g_CMobsterClassVersion == 2) {
    core_actor_cpp_serializeClothList_FUN_0040be60
              ((CClothList *)&(in_stack_00000004->base_character).cloth_count,"clothList");
  }
  if (4 < g_CMobsterClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base_character.base_actor.location.position.y,
               "postMode");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[1].base_character.base_actor.location.position.z,
               "ourPost");
  }
  if (5 < g_CMobsterClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[1].base_character.base_actor.location.area_id,
               "vehicle");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base_character.base_actor.orient,"sideOfCar");
  }
  if (g_CMobsterClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base_character.base_actor.orient.bank,
             "holdPosFlag");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base_character.base_actor.orient.heading,
             "holdPosCond");
  return;
}


// Assembly code:
// 00527230: PUSH EBX
//   Label: core_mobster.cpp_CMobster_load_FUN_00527230
// 00527231: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00527235: PUSH EBX
// 00527236: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0052723b: ADD ESP,0x4
// 0052723e: PUSH 0x63992e
//   XREF to: 0063992e (DATA)
// 00527243: LEA EAX,[EBX + 0xbe24]
// 00527249: PUSH EAX
// 0052724a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0052724f: ADD ESP,0x8
// 00527252: PUSH 0x639934
//   XREF to: 00639934 (DATA)
// 00527257: LEA EAX,[EBX + 0x158]
// 0052725d: PUSH EAX
// 0052725e: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00527263: MOV EDX,dword ptr [0x0067d6e4]
//   XREF to: 0067d6e4 (READ)
// 00527269: ADD ESP,0x8
// 0052726c: CMP EDX,0x4
// 0052726f: JL 0x00527315
//   XREF to: 00527315 (CONDITIONAL_JUMP)
// 00527275: PUSH 0x63994c
//   Label: LAB_00527275
//   XREF to: 0063994c (DATA)
// 0052727a: LEA EAX,[EBX + 0x158]
// 00527280: PUSH EAX
// 00527281: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 00527286: MOV ECX,dword ptr [0x0067d6e4]
//   XREF to: 0067d6e4 (READ)
// 0052728c: ADD ESP,0x8
// 0052728f: CMP ECX,0x2
// 00527292: JNZ 0x005272a8
//   XREF to: 005272a8 (CONDITIONAL_JUMP)
// 00527294: PUSH 0x639959
//   XREF to: 00639959 (DATA)
// 00527299: LEA EAX,[EBX + 0x2a94]
// 0052729f: PUSH EAX
// 005272a0: CALL core_actor.cpp_serializeClothList_FUN_0040be60
//   XREF to: 0040be60 (UNCONDITIONAL_CALL)
// 005272a5: ADD ESP,0x8
// 005272a8: CMP dword ptr [0x0067d6e4],0x5
//   Label: LAB_005272a8
//   XREF to: 0067d6e4 (READ)
// 005272af: JL 0x005272d9
//   XREF to: 005272d9 (CONDITIONAL_JUMP)
// 005272b1: PUSH 0x639963
//   XREF to: 00639963 (DATA)
// 005272b6: LEA EAX,[EBX + 0xbed8]
// 005272bc: PUSH EAX
// 005272bd: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005272c2: ADD ESP,0x8
// 005272c5: PUSH 0x63996c
//   XREF to: 0063996c (DATA)
// 005272ca: LEA EAX,[EBX + 0xbedc]
// 005272d0: PUSH EAX
// 005272d1: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005272d6: ADD ESP,0x8
// 005272d9: CMP dword ptr [0x0067d6e4],0x6
//   Label: LAB_005272d9
//   XREF to: 0067d6e4 (READ)
// 005272e0: JL 0x0052730a
//   XREF to: 0052730a (CONDITIONAL_JUMP)
// 005272e2: PUSH 0x639974
//   XREF to: 00639974 (DATA)
// 005272e7: LEA EAX,[EBX + 0xbee0]
// 005272ed: PUSH EAX
// 005272ee: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005272f3: ADD ESP,0x8
// 005272f6: PUSH 0x63997c
//   XREF to: 0063997c (DATA)
// 005272fb: LEA EAX,[EBX + 0xbee4]
// 00527301: PUSH EAX
// 00527302: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00527307: ADD ESP,0x8
// 0052730a: CMP dword ptr [0x0067d6e4],0x7
//   Label: LAB_0052730a
//   XREF to: 0067d6e4 (READ)
// 00527311: JGE 0x0052732e
//   XREF to: 0052732e (CONDITIONAL_JUMP)
// 00527313: POP EBX
// 00527314: RET
// 00527315: PUSH 0x63993e
//   Label: LAB_00527315
//   XREF to: 0063993e (DATA)
// 0052731a: LEA EAX,[EBX + 0xbe34]
// 00527320: PUSH EAX
// 00527321: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00527326: ADD ESP,0x8
// 00527329: JMP 0x00527275
//   XREF to: 00527275 (UNCONDITIONAL_JUMP)
// 0052732e: PUSH 0x639986
//   Label: LAB_0052732e
//   XREF to: 00639986 (DATA)
// 00527333: LEA EAX,[EBX + 0xbee8]
// 00527339: PUSH EAX
// 0052733a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0052733f: ADD ESP,0x8
// 00527342: PUSH 0x639992
//   XREF to: 00639992 (DATA)
// 00527347: ADD EBX,0xbeec
// 0052734d: PUSH EBX
// 0052734e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00527353: ADD ESP,0x8
// 00527356: POP EBX
// 00527357: RET
