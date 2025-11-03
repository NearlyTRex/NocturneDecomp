// Name: core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50
// Address: 005e6f50
// Address Range: [[005e6f50, 005e7023]]
// Convention: __cdecl
// Signature: void core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50(CVampireBoss * this_ptr)
// Globals:
//   TerminatedCString s_human_model_motion_state_00656bfb
//   TerminatedCString s_bat_model_motion_state_00656c14
//   TerminatedCString s_wayPoint0_00656c2b
//   TerminatedCString s_wayPoint1_00656c35
//   TerminatedCString s_wayPoint2_00656c3f
//   TerminatedCString s_wayPoint3_00656c49
//   TerminatedCString s_form_00656c53
//   TerminatedCString s_morphT_00656c58
//   int g_CVampireBossVersion = 0x4
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_serialize_FUN_005e6f50(CVampireBoss *this_ptr)

{
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  if (1 < g_CVampireBossVersion) {
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&(this_ptr->base_enemy).base_character.model.motion_controller,
               "human model motion state");
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              ((CMotionController *)(this_ptr->field1_0xbeb4 + 8),"bat model motion state")
    ;
  }
  if (2 < g_CVampireBossVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field5_0xce8f4 + 0x18),"wayPoint0");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field5_0xce8f4 + 0x1c),"wayPoint1");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field5_0xce8f4 + 0x20),"wayPoint2");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field5_0xce8f4 + 0x24),"wayPoint3");
  }
  if (g_CVampireBossVersion < 4) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->form,"form");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->morph_t,"morphT");
  return;
}


// Assembly code:
// 005e6f50: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50
// 005e6f51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e6f55: PUSH EBX
// 005e6f56: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 005e6f5b: MOV EDX,dword ptr [0x00684464]
//   XREF to: 00684464 (READ)
// 005e6f61: ADD ESP,0x4
// 005e6f64: CMP EDX,0x2
// 005e6f67: JGE 0x005e6fcd
//   XREF to: 005e6fcd (CONDITIONAL_JUMP)
// 005e6f69: CMP dword ptr [0x00684464],0x3
//   Label: LAB_005e6f69
//   XREF to: 00684464 (READ)
// 005e6f70: JL 0x005e6fc2
//   XREF to: 005e6fc2 (CONDITIONAL_JUMP)
// 005e6f72: PUSH 0x656c2b
//   XREF to: 00656c2b (DATA)
// 005e6f77: LEA EAX,[EBX + 0xce90c]
// 005e6f7d: PUSH EAX
// 005e6f7e: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e6f83: ADD ESP,0x8
// 005e6f86: PUSH 0x656c35
//   XREF to: 00656c35 (DATA)
// 005e6f8b: LEA EAX,[EBX + 0xce910]
// 005e6f91: PUSH EAX
// 005e6f92: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e6f97: ADD ESP,0x8
// 005e6f9a: PUSH 0x656c3f
//   XREF to: 00656c3f (DATA)
// 005e6f9f: LEA EAX,[EBX + 0xce914]
// 005e6fa5: PUSH EAX
// 005e6fa6: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e6fab: ADD ESP,0x8
// 005e6fae: PUSH 0x656c49
//   XREF to: 00656c49 (DATA)
// 005e6fb3: LEA EAX,[EBX + 0xce918]
// 005e6fb9: PUSH EAX
// 005e6fba: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e6fbf: ADD ESP,0x8
// 005e6fc2: CMP dword ptr [0x00684464],0x4
//   Label: LAB_005e6fc2
//   XREF to: 00684464 (READ)
// 005e6fc9: JGE 0x005e6ffa
//   XREF to: 005e6ffa (CONDITIONAL_JUMP)
// 005e6fcb: POP EBX
// 005e6fcc: RET
// 005e6fcd: PUSH 0x656bfb
//   Label: LAB_005e6fcd
//   XREF to: 00656bfb (DATA)
// 005e6fd2: LEA EAX,[EBX + 0x158]
// 005e6fd8: PUSH EAX
// 005e6fd9: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 005e6fde: ADD ESP,0x8
// 005e6fe1: PUSH 0x656c14
//   XREF to: 00656c14 (DATA)
// 005e6fe6: LEA EAX,[EBX + 0xbebc]
// 005e6fec: PUSH EAX
// 005e6fed: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 005e6ff2: ADD ESP,0x8
// 005e6ff5: JMP 0x005e6f69
//   XREF to: 005e6f69 (UNCONDITIONAL_JUMP)
// 005e6ffa: PUSH 0x656c53
//   Label: LAB_005e6ffa
//   XREF to: 00656c53 (DATA)
// 005e6fff: LEA EAX,[EBX + 0xcdcc0]
// 005e7005: PUSH EAX
// 005e7006: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e700b: ADD ESP,0x8
// 005e700e: PUSH 0x656c58
//   XREF to: 00656c58 (DATA)
// 005e7013: ADD EBX,0xce8f0
// 005e7019: PUSH EBX
// 005e701a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e701f: ADD ESP,0x8
// 005e7022: POP EBX
// 005e7023: RET
