// Name: core_chain.cpp_CChain_load_FUN_00430fe0
// Address: 00430fe0
// Address Range: [[00430fe0, 00431100]]
// Convention: unknown
// Signature: undefined core_chain.cpp_CChain_load_FUN_00430fe0()
// Globals:
//   TerminatedCString s_vertexCount_006177f2
//   TerminatedCString s_chainLength_006177fe
//   TerminatedCString s_target_0061780a
//   TerminatedCString s_targetBone_00617811
//   TerminatedCString s_weight_0061781c
//   TerminatedCString s_dampen_00617823
//   TerminatedCString s_friction_0061782a
//   TerminatedCString s_gravity_00617833
//   TerminatedCString s_textureName_0061783b
//   TerminatedCString s_pullWavName_00617847
//   TerminatedCString s_moveWavName_00617853
//   TerminatedCString s_groundCollideFlag_0061785f
//   int g_CChainClassVersion = 0x4
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

/* Signature: void actors_other_chain.cpp_CChain_load(CChain* pChain, undefined4 param_2, char*
   param_3, char* param_4) */

void core_chain_cpp_CChain_load_FUN_00430fe0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004 + 1),"vertexCount");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 4),"chainLength");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000004[1].actor_name + 0xc),"target");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].actor_name + 0x10),"targetBone");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[3].vtable,"weight");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[4].actor_name + 8),"dampen");
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)(in_stack_00000004 + 4),"friction");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[4].actor_name + 4),"gravity");
  if (1 < g_CChainClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].actor_name + 0x1c),"textureName");
  }
  if (2 < g_CChainClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].orient_matrix.m[2].z,"pullWavName");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].create_event + 0x4c),"moveWavName");
  }
  if (g_CChainClassVersion < 4) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].previous_transform_state.position.z,
             "groundCollideFlag");
  return;
}


// Assembly code:
// 00430fe0: PUSH EBX
//   Label: core_chain.cpp_CChain_load_FUN_00430fe0
// 00430fe1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00430fe5: PUSH EBX
// 00430fe6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00430feb: ADD ESP,0x4
// 00430fee: PUSH 0x6177f2
//   XREF to: 006177f2 (DATA)
// 00430ff3: LEA EAX,[EBX + 0x158]
// 00430ff9: PUSH EAX
// 00430ffa: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00430fff: ADD ESP,0x8
// 00431002: PUSH 0x6177fe
//   XREF to: 006177fe (DATA)
// 00431007: LEA EAX,[EBX + 0x15c]
// 0043100d: PUSH EAX
// 0043100e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00431013: ADD ESP,0x8
// 00431016: PUSH 0x61780a
//   XREF to: 0061780a (DATA)
// 0043101b: LEA EAX,[EBX + 0x164]
// 00431021: PUSH EAX
// 00431022: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00431027: ADD ESP,0x8
// 0043102a: PUSH 0x617811
//   XREF to: 00617811 (DATA)
// 0043102f: LEA EAX,[EBX + 0x168]
// 00431035: PUSH EAX
// 00431036: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0043103b: ADD ESP,0x8
// 0043103e: PUSH 0x61781c
//   XREF to: 0061781c (DATA)
// 00431043: LEA EAX,[EBX + 0x55c]
// 00431049: PUSH EAX
// 0043104a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0043104f: ADD ESP,0x8
// 00431052: PUSH 0x617823
//   XREF to: 00617823 (DATA)
// 00431057: LEA EAX,[EBX + 0x568]
// 0043105d: PUSH EAX
// 0043105e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00431063: ADD ESP,0x8
// 00431066: PUSH 0x61782a
//   XREF to: 0061782a (DATA)
// 0043106b: LEA EAX,[EBX + 0x560]
// 00431071: PUSH EAX
// 00431072: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00431077: ADD ESP,0x8
// 0043107a: PUSH 0x617833
//   XREF to: 00617833 (DATA)
// 0043107f: LEA EAX,[EBX + 0x564]
// 00431085: PUSH EAX
// 00431086: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0043108b: MOV EDX,dword ptr [0x0066e7d0]
//   XREF to: 0066e7d0 (READ)
// 00431091: ADD ESP,0x8
// 00431094: CMP EDX,0x2
// 00431097: JGE 0x004310d5
//   XREF to: 004310d5 (CONDITIONAL_JUMP)
// 00431099: CMP dword ptr [0x0066e7d0],0x3
//   Label: LAB_00431099
//   XREF to: 0066e7d0 (READ)
// 004310a0: JL 0x004310ca
//   XREF to: 004310ca (CONDITIONAL_JUMP)
// 004310a2: PUSH 0x617847
//   XREF to: 00617847 (DATA)
// 004310a7: LEA EAX,[EBX + 0x1b4]
// 004310ad: PUSH EAX
// 004310ae: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004310b3: ADD ESP,0x8
// 004310b6: PUSH 0x617853
//   XREF to: 00617853 (DATA)
// 004310bb: LEA EAX,[EBX + 0x21c]
// 004310c1: PUSH EAX
// 004310c2: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004310c7: ADD ESP,0x8
// 004310ca: CMP dword ptr [0x0066e7d0],0x4
//   Label: LAB_004310ca
//   XREF to: 0066e7d0 (READ)
// 004310d1: JGE 0x004310eb
//   XREF to: 004310eb (CONDITIONAL_JUMP)
// 004310d3: POP EBX
// 004310d4: RET
// 004310d5: PUSH 0x61783b
//   Label: LAB_004310d5
//   XREF to: 0061783b (DATA)
// 004310da: LEA EAX,[EBX + 0x174]
// 004310e0: PUSH EAX
// 004310e1: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004310e6: ADD ESP,0x8
// 004310e9: JMP 0x00431099
//   XREF to: 00431099 (UNCONDITIONAL_JUMP)
// 004310eb: PUSH 0x61785f
//   Label: LAB_004310eb
//   XREF to: 0061785f (DATA)
// 004310f0: ADD EBX,0x288
// 004310f6: PUSH EBX
// 004310f7: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004310fc: ADD ESP,0x8
// 004310ff: POP EBX
// 00431100: RET
