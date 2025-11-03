// Name: core_spike.cpp_CSpike_load_FUN_005b87f0
// Address: 005b87f0
// Address Range: [[005b87f0, 005b893f]]
// Convention: unknown
// Signature: undefined core_spike.cpp_CSpike_load_FUN_005b87f0()
// Globals:
//   undefined4 s_modelName_00652e08
//   TerminatedCString s_spikeType_00652e12
//   TerminatedCString s_spikeState_00652e1c
//   TerminatedCString s_areWeActive_00652e27
//   TerminatedCString s_extendDistance_00652e33
//   TerminatedCString s_startEvent_00652e42
//   TerminatedCString s_stopEvent_00652e4d
//   TerminatedCString s_extendEvent_00652e57
//   TerminatedCString s_retractEvent_00652e63
//   TerminatedCString s_extendTime_00652e70
//   TerminatedCString s_retractTime_00652e7b
//   TerminatedCString s_extendSound_00652e87
//   TerminatedCString s_retractSound_00652e93
//   TerminatedCString s_period_00652ea0
//   TerminatedCString s_damageStrength_00652ea7
//   TerminatedCString s_param_00652eb6
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

/* Signature: undefined1 actors_other_spike.cpp_CSpike_load(CSpike* param_1) */

void core_spike_cpp_CSpike_load_FUN_005b87f0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),">modelName" + 1);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"spikeType");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.z,"spikeState");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (&in_stack_00000004[2].location.area_id,"areWeActive");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].orient_matrix,"extendDistance");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].orient_matrix.m[0].y,"startEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[2].create_event + 0x2c),"stopEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].scale,"extendEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].actor_name + 0x14),"retractEvent");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)in_stack_00000004[3].create_event,"extendTime");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[3].create_event + 4),"retractTime");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].create_event + 0xc),"extendSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[3].field12_0xe0.z,"retractSound");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[3].next_actor,"period");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[3].field28_0x150,"damageStrength");
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)&in_stack_00000004[3].vtable,"param")
  ;
  return;
}


// Assembly code:
// 005b87f0: PUSH EBX
//   Label: core_spike.cpp_CSpike_load_FUN_005b87f0
// 005b87f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b87f5: PUSH EBX
// 005b87f6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005b87fb: ADD ESP,0x4
// 005b87fe: PUSH 0x652e08
//   XREF to: 00652e08 (DATA)
// 005b8803: LEA EAX,[EBX + 0x158]
// 005b8809: PUSH EAX
// 005b880a: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005b880f: ADD ESP,0x8
// 005b8812: PUSH 0x652e12
//   XREF to: 00652e12 (DATA)
// 005b8817: LEA EAX,[EBX + 0x2d4]
// 005b881d: PUSH EAX
// 005b881e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005b8823: ADD ESP,0x8
// 005b8826: PUSH 0x652e1c
//   XREF to: 00652e1c (DATA)
// 005b882b: LEA EAX,[EBX + 0x2d8]
// 005b8831: PUSH EAX
// 005b8832: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005b8837: ADD ESP,0x8
// 005b883a: PUSH 0x652e27
//   XREF to: 00652e27 (DATA)
// 005b883f: LEA EAX,[EBX + 0x2dc]
// 005b8845: PUSH EAX
// 005b8846: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005b884b: ADD ESP,0x8
// 005b884e: PUSH 0x652e33
//   XREF to: 00652e33 (DATA)
// 005b8853: LEA EAX,[EBX + 0x2ec]
// 005b8859: PUSH EAX
// 005b885a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005b885f: ADD ESP,0x8
// 005b8862: PUSH 0x652e42
//   XREF to: 00652e42 (DATA)
// 005b8867: LEA EAX,[EBX + 0x2f0]
// 005b886d: PUSH EAX
// 005b886e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005b8873: ADD ESP,0x8
// 005b8876: PUSH 0x652e4d
//   XREF to: 00652e4d (DATA)
// 005b887b: LEA EAX,[EBX + 0x354]
// 005b8881: PUSH EAX
// 005b8882: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005b8887: ADD ESP,0x8
// 005b888a: PUSH 0x652e57
//   XREF to: 00652e57 (DATA)
// 005b888f: LEA EAX,[EBX + 0x3b8]
// 005b8895: PUSH EAX
// 005b8896: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005b889b: ADD ESP,0x8
// 005b889e: PUSH 0x652e63
//   XREF to: 00652e63 (DATA)
// 005b88a3: LEA EAX,[EBX + 0x41c]
// 005b88a9: PUSH EAX
// 005b88aa: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005b88af: ADD ESP,0x8
// 005b88b2: PUSH 0x652e70
//   XREF to: 00652e70 (DATA)
// 005b88b7: LEA EAX,[EBX + 0x480]
// 005b88bd: PUSH EAX
// 005b88be: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005b88c3: ADD ESP,0x8
// 005b88c6: PUSH 0x652e7b
//   XREF to: 00652e7b (DATA)
// 005b88cb: LEA EAX,[EBX + 0x484]
// 005b88d1: PUSH EAX
// 005b88d2: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005b88d7: ADD ESP,0x8
// 005b88da: PUSH 0x652e87
//   XREF to: 00652e87 (DATA)
// 005b88df: LEA EAX,[EBX + 0x48c]
// 005b88e5: PUSH EAX
// 005b88e6: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005b88eb: ADD ESP,0x8
// 005b88ee: PUSH 0x652e93
//   XREF to: 00652e93 (DATA)
// 005b88f3: LEA EAX,[EBX + 0x4f0]
// 005b88f9: PUSH EAX
// 005b88fa: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005b88ff: ADD ESP,0x8
// 005b8902: PUSH 0x652ea0
//   XREF to: 00652ea0 (DATA)
// 005b8907: LEA EAX,[EBX + 0x554]
// 005b890d: PUSH EAX
// 005b890e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005b8913: ADD ESP,0x8
// 005b8916: PUSH 0x652ea7
//   XREF to: 00652ea7 (DATA)
// 005b891b: LEA EAX,[EBX + 0x558]
// 005b8921: PUSH EAX
// 005b8922: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005b8927: ADD ESP,0x8
// 005b892a: PUSH 0x652eb6
//   XREF to: 00652eb6 (DATA)
// 005b892f: ADD EBX,0x55c
// 005b8935: PUSH EBX
// 005b8936: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005b893b: ADD ESP,0x8
// 005b893e: POP EBX
// 005b893f: RET
