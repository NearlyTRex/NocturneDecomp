// Name: core_chain.cpp_FUN_00431120
// Address: 00431120
// Address Range: [[00431120, 0043124d]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_00431120()
// Globals:
//   TerminatedCString s_Vertex_count_00617871
//   TerminatedCString s_Chain_length_0061787e
//   TerminatedCString s_CCharacter_0061788b
//   TerminatedCString s_Actor_to_chain_00617896
//   TerminatedCString s_Bone_to_lock_on_006178a5
//   TerminatedCString s_Weight_006178b5
//   TerminatedCString s_Dampen_006178bc
//   TerminatedCString s_Friction_006178c3
//   TerminatedCString s_Gravity_006178cc
//   TerminatedCString s_Texture_006178d4
//   TerminatedCString s_Pull_sound_006178dc
//   TerminatedCString s_Move_sound_006178e7
//   TerminatedCString s_Collide_with_ground_006178f2
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_chain.cpp_FUN_00431120(undefined4 param_1, undefined4 param_2)
    */

void core_chain_cpp_FUN_00431120(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 00431120: PUSH EBX
//   Label: core_chain.cpp_FUN_00431120
// 00431121: PUSH ESI
// 00431122: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00431126: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0043112a: PUSH EBX
// 0043112b: PUSH ESI
// 0043112c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00431131: ADD ESP,0x8
// 00431134: PUSH 0x0
// 00431136: LEA EAX,[ESI + 0x158]
// 0043113c: PUSH EAX
// 0043113d: PUSH 0x617871
//   XREF to: 00617871 (DATA)
// 00431142: PUSH EBX
// 00431143: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 00431148: ADD ESP,0x10
// 0043114b: PUSH 0x0
// 0043114d: LEA EAX,[ESI + 0x15c]
// 00431153: PUSH EAX
// 00431154: PUSH 0x61787e
//   XREF to: 0061787e (DATA)
// 00431159: PUSH EBX
// 0043115a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0043115f: ADD ESP,0x10
// 00431162: PUSH 0x0
// 00431164: PUSH 0x61788b
//   XREF to: 0061788b (DATA)
// 00431169: PUSH 0x1
// 0043116b: LEA EAX,[ESI + 0x164]
// 00431171: PUSH EAX
// 00431172: PUSH 0x617896
//   XREF to: 00617896 (DATA)
// 00431177: PUSH EBX
// 00431178: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 0043117d: ADD ESP,0x18
// 00431180: PUSH 0x0
// 00431182: LEA EAX,[ESI + 0x168]
// 00431188: PUSH EAX
// 00431189: PUSH 0x6178a5
//   XREF to: 006178a5 (DATA)
// 0043118e: PUSH EBX
// 0043118f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 00431194: ADD ESP,0x10
// 00431197: PUSH 0x0
// 00431199: LEA EAX,[ESI + 0x55c]
// 0043119f: PUSH EAX
// 004311a0: PUSH 0x6178b5
//   XREF to: 006178b5 (DATA)
// 004311a5: PUSH EBX
// 004311a6: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004311ab: ADD ESP,0x10
// 004311ae: PUSH 0x0
// 004311b0: LEA EAX,[ESI + 0x568]
// 004311b6: PUSH EAX
// 004311b7: PUSH 0x6178bc
//   XREF to: 006178bc (DATA)
// 004311bc: PUSH EBX
// 004311bd: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004311c2: ADD ESP,0x10
// 004311c5: PUSH 0x0
// 004311c7: LEA EAX,[ESI + 0x560]
// 004311cd: PUSH EAX
// 004311ce: PUSH 0x6178c3
//   XREF to: 006178c3 (DATA)
// 004311d3: PUSH EBX
// 004311d4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004311d9: ADD ESP,0x10
// 004311dc: PUSH 0x0
// 004311de: LEA EAX,[ESI + 0x564]
// 004311e4: PUSH EAX
// 004311e5: PUSH 0x6178cc
//   XREF to: 006178cc (DATA)
// 004311ea: PUSH EBX
// 004311eb: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004311f0: ADD ESP,0x10
// 004311f3: PUSH 0x0
// 004311f5: PUSH 0x14
// 004311f7: LEA EAX,[ESI + 0x174]
// 004311fd: PUSH EAX
// 004311fe: PUSH 0x6178d4
//   XREF to: 006178d4 (DATA)
// 00431203: PUSH EBX
// 00431204: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 00431209: ADD ESP,0x14
// 0043120c: LEA EAX,[ESI + 0x1b4]
// 00431212: PUSH EAX
// 00431213: PUSH 0x6178dc
//   XREF to: 006178dc (DATA)
// 00431218: PUSH EBX
// 00431219: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0043121e: ADD ESP,0xc
// 00431221: LEA EAX,[ESI + 0x21c]
// 00431227: PUSH EAX
// 00431228: PUSH 0x6178e7
//   XREF to: 006178e7 (DATA)
// 0043122d: PUSH EBX
// 0043122e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 00431233: ADD ESP,0xc
// 00431236: ADD ESI,0x288
// 0043123c: PUSH ESI
// 0043123d: PUSH 0x6178f2
//   XREF to: 006178f2 (DATA)
// 00431242: PUSH EBX
// 00431243: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00431248: ADD ESP,0xc
// 0043124b: POP ESI
// 0043124c: POP EBX
// 0043124d: RET
