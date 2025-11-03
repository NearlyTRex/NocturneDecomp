// Name: core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980
// Address: 005f1980
// Address Range: [[005f1980, 005f1abb]]
// Convention: __cdecl
// Signature: void core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980(CWerewolf * this_ptr)
// Globals:
//   TerminatedCString s_speed_00657dbc
//   TerminatedCString s_modelName_00657dc2
//   TerminatedCString s_guardDistance_00657dcc
//   TerminatedCString s_motion_state_00657dda
//   TerminatedCString s_lightUpEyes_00657de7
//   TerminatedCString s_chainAnchor_00657df3
//   TerminatedCString s_chainLength_00657dff
//   TerminatedCString s_type_00657e0b
//   TerminatedCString s_phase_00657e10
//   TerminatedCString s_phaseTimer_00657e16
//   TerminatedCString s_alpha1_00657e21
//   TerminatedCString s_alpha2_00657e28
//   int g_CWerewolfClassVersion = 0x6
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_serialize_FUN_005f1980(CWerewolf *this_ptr)

{
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base_enemy).speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base_enemy).base_character.model,"modelName");
  if (g_CWerewolfClassVersion < 3) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&(this_ptr->base_enemy).guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(this_ptr->base_enemy).base_character.model.motion_controller,"motion state")
  ;
  if (1 < g_CWerewolfClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->light_up_eyes,"lightUpEyes");
  }
  if (3 < g_CWerewolfClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field6_0xbed8 + 0x10),"chainAnchor");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->chain_length,"chainLength");
  }
  if (4 < g_CWerewolfClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->type,"type");
  }
  if (g_CWerewolfClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->phase,"phase");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->phase_timer,"phaseTimer");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)this_ptr->field8_0xbef0,"alpha1");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(this_ptr->field8_0xbef0 + 4),"alpha2");
  return;
}


// Assembly code:
// 005f1980: PUSH EBX
//   Label: core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980
// 005f1981: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f1985: PUSH EBX
// 005f1986: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 005f198b: ADD ESP,0x4
// 005f198e: PUSH 0x657dbc
//   XREF to: 00657dbc (DATA)
// 005f1993: LEA EAX,[EBX + 0xbe24]
// 005f1999: PUSH EAX
// 005f199a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005f199f: ADD ESP,0x8
// 005f19a2: PUSH 0x657dc2
//   XREF to: 00657dc2 (DATA)
// 005f19a7: LEA EAX,[EBX + 0x158]
// 005f19ad: PUSH EAX
// 005f19ae: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 005f19b3: MOV EDX,dword ptr [0x00684958]
//   XREF to: 00684958 (READ)
// 005f19b9: ADD ESP,0x8
// 005f19bc: CMP EDX,0x3
// 005f19bf: JL 0x005f1a51
//   XREF to: 005f1a51 (CONDITIONAL_JUMP)
// 005f19c5: PUSH 0x657dda
//   Label: LAB_005f19c5
//   XREF to: 00657dda (DATA)
// 005f19ca: LEA EAX,[EBX + 0x158]
// 005f19d0: PUSH EAX
// 005f19d1: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 005f19d6: MOV ECX,dword ptr [0x00684958]
//   XREF to: 00684958 (READ)
// 005f19dc: ADD ESP,0x8
// 005f19df: CMP ECX,0x2
// 005f19e2: JL 0x005f19f8
//   XREF to: 005f19f8 (CONDITIONAL_JUMP)
// 005f19e4: PUSH 0x657de7
//   XREF to: 00657de7 (DATA)
// 005f19e9: LEA EAX,[EBX + 0xbed4]
// 005f19ef: PUSH EAX
// 005f19f0: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005f19f5: ADD ESP,0x8
// 005f19f8: CMP dword ptr [0x00684958],0x4
//   Label: LAB_005f19f8
//   XREF to: 00684958 (READ)
// 005f19ff: JL 0x005f1a29
//   XREF to: 005f1a29 (CONDITIONAL_JUMP)
// 005f1a01: PUSH 0x657df3
//   XREF to: 00657df3 (DATA)
// 005f1a06: LEA EAX,[EBX + 0xbee8]
// 005f1a0c: PUSH EAX
// 005f1a0d: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005f1a12: ADD ESP,0x8
// 005f1a15: PUSH 0x657dff
//   XREF to: 00657dff (DATA)
// 005f1a1a: LEA EAX,[EBX + 0xbeec]
// 005f1a20: PUSH EAX
// 005f1a21: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005f1a26: ADD ESP,0x8
// 005f1a29: CMP dword ptr [0x00684958],0x5
//   Label: LAB_005f1a29
//   XREF to: 00684958 (READ)
// 005f1a30: JL 0x005f1a46
//   XREF to: 005f1a46 (CONDITIONAL_JUMP)
// 005f1a32: PUSH 0x657e0b
//   XREF to: 00657e0b (DATA)
// 005f1a37: LEA EAX,[EBX + 0xbebc]
// 005f1a3d: PUSH EAX
// 005f1a3e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005f1a43: ADD ESP,0x8
// 005f1a46: CMP dword ptr [0x00684958],0x6
//   Label: LAB_005f1a46
//   XREF to: 00684958 (READ)
// 005f1a4d: JGE 0x005f1a6a
//   XREF to: 005f1a6a (CONDITIONAL_JUMP)
// 005f1a4f: POP EBX
// 005f1a50: RET
// 005f1a51: PUSH 0x657dcc
//   Label: LAB_005f1a51
//   XREF to: 00657dcc (DATA)
// 005f1a56: LEA EAX,[EBX + 0xbe34]
// 005f1a5c: PUSH EAX
// 005f1a5d: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005f1a62: ADD ESP,0x8
// 005f1a65: JMP 0x005f19c5
//   XREF to: 005f19c5 (UNCONDITIONAL_JUMP)
// 005f1a6a: PUSH 0x657e10
//   Label: LAB_005f1a6a
//   XREF to: 00657e10 (DATA)
// 005f1a6f: LEA EAX,[EBX + 0xbef8]
// 005f1a75: PUSH EAX
// 005f1a76: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005f1a7b: ADD ESP,0x8
// 005f1a7e: PUSH 0x657e16
//   XREF to: 00657e16 (DATA)
// 005f1a83: LEA EAX,[EBX + 0xbefc]
// 005f1a89: PUSH EAX
// 005f1a8a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005f1a8f: ADD ESP,0x8
// 005f1a92: PUSH 0x657e21
//   XREF to: 00657e21 (DATA)
// 005f1a97: LEA EAX,[EBX + 0xbef0]
// 005f1a9d: PUSH EAX
// 005f1a9e: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005f1aa3: ADD ESP,0x8
// 005f1aa6: PUSH 0x657e28
//   XREF to: 00657e28 (DATA)
// 005f1aab: ADD EBX,0xbef4
// 005f1ab1: PUSH EBX
// 005f1ab2: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005f1ab7: ADD ESP,0x8
// 005f1aba: POP EBX
// 005f1abb: RET
