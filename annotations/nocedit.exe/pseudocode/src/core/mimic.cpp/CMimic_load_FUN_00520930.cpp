// Name: core_mimic.cpp_CMimic_load_FUN_00520930
// Address: 00520930
// Address Range: [[00520930, 005209fe]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_CMimic_load_FUN_00520930()
// Globals:
//   TerminatedCString s_speed_006387c6
//   TerminatedCString s_modelName_006387cc
//   TerminatedCString s_attackCondition_006387d6
//   TerminatedCString s_attackMode_006387e6
//   TerminatedCString s_mirrorPlaneActor_006387f1
//   TerminatedCString s_motion_state_00638802
//   TerminatedCString s_morphActorType_0063880f
//   TerminatedCString s_mirrorCondition_0063881e
//   int g_CMimicClassVersion = 0x3
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_CMimic_load(CMimic* param_1) */

void core_mimic_cpp_CMimic_load_FUN_00520930(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  model_ptr = &(in_stack_00000004->base_character).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base_character.base_actor.field7_0x6c,
             "attackCondition");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[6].base_character.cloth_data + 0x1b24),"attackMode")
  ;
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000004[6].base_character.cloth_data + 0x1b28),
             "mirrorPlaneActor");
  if (g_CMimicClassVersion < 2) {
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeMotionState_FUN_0040b9f0(model_ptr,"motion state");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[6].base_character.cloth_data + 0x1b2c),
               "morphActorType");
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base_character.base_actor.actor_name + 8),
             "mirrorCondition");
  return;
}


// Assembly code:
// 00520930: PUSH EBX
//   Label: core_mimic.cpp_CMimic_load_FUN_00520930
// 00520931: PUSH ESI
// 00520932: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00520936: PUSH EBX
// 00520937: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0052093c: ADD ESP,0x4
// 0052093f: PUSH 0x6387c6
//   XREF to: 006387c6 (DATA)
// 00520944: LEA ESI,[EBX + 0xbe24]
// 0052094a: PUSH ESI
// 0052094b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00520950: ADD ESP,0x8
// 00520953: PUSH 0x6387cc
//   XREF to: 006387cc (DATA)
// 00520958: LEA ESI,[EBX + 0x158]
// 0052095e: PUSH ESI
// 0052095f: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00520964: ADD ESP,0x8
// 00520967: PUSH 0x6387d6
//   XREF to: 006387d6 (DATA)
// 0052096c: LEA EAX,[EBX + 0xbf20]
// 00520972: PUSH EAX
// 00520973: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00520978: ADD ESP,0x8
// 0052097b: PUSH 0x6387e6
//   XREF to: 006387e6 (DATA)
// 00520980: LEA EAX,[EBX + 0x4bdf4]
// 00520986: PUSH EAX
// 00520987: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0052098c: ADD ESP,0x8
// 0052098f: PUSH 0x6387f1
//   XREF to: 006387f1 (DATA)
// 00520994: LEA EAX,[EBX + 0x4bdf8]
// 0052099a: PUSH EAX
// 0052099b: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005209a0: MOV EDX,dword ptr [0x0067d510]
//   XREF to: 0067d510 (READ)
// 005209a6: ADD ESP,0x8
// 005209a9: CMP EDX,0x2
// 005209ac: JGE 0x005209ba
//   XREF to: 005209ba (CONDITIONAL_JUMP)
// 005209ae: CMP dword ptr [0x0067d510],0x3
//   XREF to: 0067d510 (READ)
// 005209b5: JGE 0x005209e8
//   XREF to: 005209e8 (CONDITIONAL_JUMP)
// 005209b7: POP ESI
// 005209b8: POP EBX
// 005209b9: RET
// 005209ba: PUSH 0x638802
//   Label: LAB_005209ba
//   XREF to: 00638802 (DATA)
// 005209bf: PUSH ESI
// 005209c0: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 005209c5: ADD ESP,0x8
// 005209c8: PUSH 0x63880f
//   XREF to: 0063880f (DATA)
// 005209cd: LEA ESI,[EBX + 0x4bdfc]
// 005209d3: PUSH ESI
// 005209d4: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005209d9: ADD ESP,0x8
// 005209dc: CMP dword ptr [0x0067d510],0x3
//   XREF to: 0067d510 (READ)
// 005209e3: JGE 0x005209e8
//   XREF to: 005209e8 (CONDITIONAL_JUMP)
// 005209e5: POP ESI
// 005209e6: POP EBX
// 005209e7: RET
// 005209e8: PUSH 0x63881e
//   Label: LAB_005209e8
//   XREF to: 0063881e (DATA)
// 005209ed: ADD EBX,0xbebc
// 005209f3: PUSH EBX
// 005209f4: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005209f9: ADD ESP,0x8
// 005209fc: POP ESI
// 005209fd: POP EBX
// 005209fe: RET
