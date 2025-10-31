// Name: core_batman.cpp_CBatman_serialize_FUN_00417580
// Address: 00417580
// Address Range: [[00417580, 0041763a]]
// Convention: __cdecl
// Signature: void core_batman.cpp_CBatman_serialize_FUN_00417580(CBatman * this_ptr)
// Globals:
//   undefined4 s_speed_006158f5
//   TerminatedCString s_modelName_006158fb
//   TerminatedCString s_motion_state_00615905
//   TerminatedCString s_fallEvent_00615912
//   TerminatedCString s_mistState_0061591c
//   TerminatedCString s_vanishTimer_00615926
//   TerminatedCString s_newPos_00615932
//   undefined4 g_CBatmanClassVersion
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_serialize_FUN_00417580(CBatman *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base_enemy).speed,"?speed" + 1);
  model_ptr = &(this_ptr->base_enemy).base_character.model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0(model_ptr,"motion state");
  if (g_CBatmanClassVersion < 2) {
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->field1_0xbeb4 + 8),"fallEvent");
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->mist_state,"mistState");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->vanish_timer,"vanishTimer");
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->new_pos,"newPos");
  return;
}


// Assembly code:
// 00417580: PUSH EBX
//   Label: core_batman.cpp_CBatman_serialize_FUN_00417580
// 00417581: PUSH ESI
// 00417582: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00417586: PUSH EBX
// 00417587: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0041758c: ADD ESP,0x4
// 0041758f: PUSH 0x6158f5
//   XREF to: 006158f5 (DATA)
// 00417594: LEA ESI,[EBX + 0xbe24]
// 0041759a: PUSH ESI
// 0041759b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004175a0: ADD ESP,0x8
// 004175a3: PUSH 0x6158fb
//   XREF to: 006158fb (DATA)
// 004175a8: LEA ESI,[EBX + 0x158]
// 004175ae: PUSH ESI
// 004175af: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 004175b4: ADD ESP,0x8
// 004175b7: PUSH 0x615905
//   XREF to: 00615905 (DATA)
// 004175bc: PUSH ESI
// 004175bd: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004175c2: MOV EDX,dword ptr [0x0066e4dc]
//   XREF to: 0066e4dc (READ)
// 004175c8: ADD ESP,0x8
// 004175cb: CMP EDX,0x2
// 004175ce: JGE 0x004175dc
//   XREF to: 004175dc (CONDITIONAL_JUMP)
// 004175d0: CMP dword ptr [0x0066e4dc],0x3
//   XREF to: 0066e4dc (READ)
// 004175d7: JGE 0x004175fc
//   XREF to: 004175fc (CONDITIONAL_JUMP)
// 004175d9: POP ESI
// 004175da: POP EBX
// 004175db: RET
// 004175dc: PUSH 0x615912
//   Label: LAB_004175dc
//   XREF to: 00615912 (DATA)
// 004175e1: LEA ESI,[EBX + 0xbebc]
// 004175e7: PUSH ESI
// 004175e8: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004175ed: ADD ESP,0x8
// 004175f0: CMP dword ptr [0x0066e4dc],0x3
//   XREF to: 0066e4dc (READ)
// 004175f7: JGE 0x004175fc
//   XREF to: 004175fc (CONDITIONAL_JUMP)
// 004175f9: POP ESI
// 004175fa: POP EBX
// 004175fb: RET
// 004175fc: PUSH 0x61591c
//   Label: LAB_004175fc
//   XREF to: 0061591c (DATA)
// 00417601: LEA ESI,[EBX + 0xbf58]
// 00417607: PUSH ESI
// 00417608: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0041760d: ADD ESP,0x8
// 00417610: PUSH 0x615926
//   XREF to: 00615926 (DATA)
// 00417615: LEA ESI,[EBX + 0xbf5c]
// 0041761b: PUSH ESI
// 0041761c: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00417621: ADD ESP,0x8
// 00417624: PUSH 0x615932
//   XREF to: 00615932 (DATA)
// 00417629: ADD EBX,0xbf60
// 0041762f: PUSH EBX
// 00417630: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 00417635: ADD ESP,0x8
// 00417638: POP ESI
// 00417639: POP EBX
// 0041763a: RET
