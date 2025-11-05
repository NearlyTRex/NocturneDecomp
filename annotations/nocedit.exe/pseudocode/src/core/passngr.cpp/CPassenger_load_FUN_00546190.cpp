// Name: core_passngr.cpp_CPassenger_load_FUN_00546190
// Address: 00546190
// Address Range: [[00546190, 00546269]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_CPassenger_load_FUN_00546190()
// Globals:
//   TerminatedCString s_transformEvent_0063e7d8
//   TerminatedCString s_wolfModelName_0063e7e7
//   TerminatedCString s_morphTime_0063e7f5
//   TerminatedCString s_modelName_0063e7ff
//   TerminatedCString s_motion_state_0063e809
//   TerminatedCString s_wolfSize_0063e816
//   TerminatedCString s_nameOfWolf_0063e81f
//   TerminatedCString s_transformWav_0063e82a
//   undefined4 g_CPassengerClassVersion
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_passenger.cpp_CPassenger_load(CPassenger* param_1) */

void core_passngr_cpp_CPassenger_load_FUN_00546190(void)

{
  CDeformableModelInstance *model_ptr;
  CNPC *in_stack_00000004;
  
  core_npc_cpp_CNPC_serialize_FUN_00544ba0(in_stack_00000004);
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 1),"transformEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base_character.base_actor.health,
             "wolfModelName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[1].base_character.model.bone_transform.bone_rotations[0x53].w,
             "morphTime");
  if ((1 < g_CPassengerClassVersion) && (g_CPassengerClassVersion < 5)) {
    model_ptr = &(in_stack_00000004->base_character).model;
    core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
  }
  if (2 < g_CPassengerClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[1].base_character.model.bone_transform.bone_rotations[0x53].x,
               "wolfSize");
  }
  if (3 < g_CPassengerClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].base_character.base_actor.create_event + 0xc),
               "nameOfWolf");
  }
  if (g_CPassengerClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base_character.base_actor.create_event + 0x2c),
             "transformWav");
  return;
}


// Assembly code:
// 00546190: PUSH EBX
//   Label: core_passngr.cpp_CPassenger_load_FUN_00546190
// 00546191: PUSH ESI
// 00546192: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00546196: PUSH EBX
// 00546197: CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0
//   XREF to: 00544ba0 (UNCONDITIONAL_CALL)
// 0054619c: ADD ESP,0x4
// 0054619f: PUSH 0x63e7d8
//   XREF to: 0063e7d8 (DATA)
// 005461a4: LEA ESI,[EBX + 0x1f708]
// 005461aa: PUSH ESI
// 005461ab: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005461b0: ADD ESP,0x8
// 005461b3: PUSH 0x63e7e7
//   XREF to: 0063e7e7 (DATA)
// 005461b8: LEA ESI,[EBX + 0x1f76c]
// 005461be: PUSH ESI
// 005461bf: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005461c4: ADD ESP,0x8
// 005461c7: PUSH 0x63e7f5
//   XREF to: 0063e7f5 (DATA)
// 005461cc: LEA ESI,[EBX + 0x20440]
// 005461d2: PUSH ESI
// 005461d3: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005461d8: MOV EDX,dword ptr [0x00680b98]
//   XREF to: 00680b98 (READ)
// 005461de: ADD ESP,0x8
// 005461e1: CMP EDX,0x2
// 005461e4: JL 0x0054620d
//   XREF to: 0054620d (CONDITIONAL_JUMP)
// 005461e6: CMP EDX,0x5
// 005461e9: JGE 0x0054620d
//   XREF to: 0054620d (CONDITIONAL_JUMP)
// 005461eb: PUSH 0x63e7ff
//   XREF to: 0063e7ff (DATA)
// 005461f0: LEA ESI,[EBX + 0x158]
// 005461f6: PUSH ESI
// 005461f7: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 005461fc: ADD ESP,0x8
// 005461ff: PUSH 0x63e809
//   XREF to: 0063e809 (DATA)
// 00546204: PUSH ESI
// 00546205: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 0054620a: ADD ESP,0x8
// 0054620d: CMP dword ptr [0x00680b98],0x3
//   Label: LAB_0054620d
//   XREF to: 00680b98 (READ)
// 00546214: JL 0x0054622a
//   XREF to: 0054622a (CONDITIONAL_JUMP)
// 00546216: PUSH 0x63e816
//   XREF to: 0063e816 (DATA)
// 0054621b: LEA ESI,[EBX + 0x20444]
// 00546221: PUSH ESI
// 00546222: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00546227: ADD ESP,0x8
// 0054622a: CMP dword ptr [0x00680b98],0x4
//   Label: LAB_0054622a
//   XREF to: 00680b98 (READ)
// 00546231: JL 0x00546247
//   XREF to: 00546247 (CONDITIONAL_JUMP)
// 00546233: PUSH 0x63e81f
//   XREF to: 0063e81f (DATA)
// 00546238: LEA ESI,[EBX + 0x1f78c]
// 0054623e: PUSH ESI
// 0054623f: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00546244: ADD ESP,0x8
// 00546247: CMP dword ptr [0x00680b98],0x6
//   Label: LAB_00546247
//   XREF to: 00680b98 (READ)
// 0054624e: JGE 0x00546253
//   XREF to: 00546253 (CONDITIONAL_JUMP)
// 00546250: POP ESI
// 00546251: POP EBX
// 00546252: RET
// 00546253: PUSH 0x63e82a
//   Label: LAB_00546253
//   XREF to: 0063e82a (DATA)
// 00546258: ADD EBX,0x1f7ac
// 0054625e: PUSH EBX
// 0054625f: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00546264: ADD ESP,0x8
// 00546267: POP ESI
// 00546268: POP EBX
// 00546269: RET
