// Name: core_curtain.cpp_CCurtain_load_FUN_0044b3e0
// Address: 0044b3e0
// Address Range: [[0044b3e0, 0044b5f9]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_CCurtain_load_FUN_0044b3e0()
// Globals:
//   TerminatedCString s_curtainSize_00619c5a
//   TerminatedCString s_curtainTexture_00619c66
//   TerminatedCString s_opacity_00619c75
//   TerminatedCString s_cinched_00619c7d
//   TerminatedCString s_weight_00619c85
//   TerminatedCString s_dampen_00619c8c
//   TerminatedCString s_spring_00619c93
//   TerminatedCString s_friction_00619c9a
//   TerminatedCString s_gravity_00619ca3
//   TerminatedCString s_hitFloor_00619cab
//   TerminatedCString s_simulateMe_00619cb4
//   TerminatedCString s_cinchedTop_00619cbf
//   TerminatedCString s_cinchedBottom_00619cca
//   TerminatedCString s_cinchedLeft_00619cd8
//   TerminatedCString s_cinchedRight_00619ce4
//   TerminatedCString s_falling_00619cf1
//   TerminatedCString s_letGoEvent_00619cf9
//   TerminatedCString s_patchSize_00619d04
//   TerminatedCString s_blockVirtualDirectorFlag_00619d0e
//   int g_CCurtainClassVersion = 0x6
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

/* Signature: void actors_other_curtain.cpp_CCurtain_load(CCurtain* param_1, char* param_2, char*
   param_3, char* param_4) */

void core_curtain_cpp_CCurtain_load_FUN_0044b3e0(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  char *in_stack_00000018;
  char *in_stack_0000001c;
  char *in_stack_00000020;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 1),"curtainSize");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].actor_name + 0x14),"curtainTexture");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].location.position.y,"opacity");
  in_stack_00000008 = (char *)0x0;
  if (1 < g_CCurtainClassVersion) {
    if (g_CCurtainClassVersion < 4) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0x00000008,"cinched");
      in_stack_00000004[1].location.position.z = (float)(uint)(((uint)in_stack_0000000c & 1) != 0);
      in_stack_00000004[1].orient.bank = (float)(uint)(((uint)in_stack_0000000c & 2) != 0);
      in_stack_00000004[1].location.area_id = (uint)(((uint)in_stack_0000000c & 4) != 0);
      in_stack_00000004[1].orient.pitch = (float)(uint)(((uint)in_stack_0000000c & 8) != 0);
    }
    in_stack_00000008 = "weight";
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[0x4ba].field23_0x124,"weight");
    in_stack_0000000c = "dampen";
    in_stack_00000008 = (char *)&in_stack_00000004[0x4ba].previous_transform_state;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_00000008,"dampen");
    in_stack_00000010 = "spring";
    in_stack_0000000c = (char *)&in_stack_00000004[0x4ba].previous_transform_state.position.y;
    in_stack_00000008 = (char *)0x44b4d9;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_0000000c,"spring");
    in_stack_00000014 = "friction";
    in_stack_00000010 = (char *)&in_stack_00000004[0x4ba].previous_transform_state.position.z;
    in_stack_0000000c = (char *)0x44b4ed;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_00000010,"friction");
    in_stack_00000018 = "gravity";
    in_stack_00000014 = (char *)&in_stack_00000004[0x4ba].previous_transform_state.orientation;
    in_stack_00000010 = (char *)0x44b501;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_00000014,"gravity");
    in_stack_0000001c = "hitFloor";
    in_stack_00000018 = (char *)&in_stack_00000004[0x4ba].previous_transform_state.orientation.z;
    in_stack_00000014 = (char *)0x44b515;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000018,"hitFloor");
  }
  if (2 < g_CCurtainClassVersion) {
    in_stack_00000020 = "simulateMe";
    in_stack_0000001c = in_stack_00000004[1].create_event + 0x28;
    in_stack_00000018 = (char *)0x44b532;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_0000001c,"simulateMe");
  }
  if (3 < g_CCurtainClassVersion) {
    in_stack_00000020 = "cinchedTop";
    in_stack_0000001c = (char *)&in_stack_00000004[1].location.position.z;
    in_stack_00000018 = (char *)0x44b54f;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_0000001c,"cinchedTop");
    in_stack_0000000c = "cinchedBottom";
    in_stack_00000008 = (char *)&in_stack_00000004[1].orient.bank;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000008,"cinchedBottom");
    in_stack_00000010 = "cinchedLeft";
    in_stack_0000000c = (char *)&in_stack_00000004[1].location.area_id;
    in_stack_00000008 = (char *)0x44b577;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_0000000c,"cinchedLeft");
    in_stack_00000014 = "cinchedRight";
    in_stack_00000010 = (char *)&in_stack_00000004[1].orient;
    in_stack_0000000c = (char *)0x44b58b;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000010,"cinchedRight");
    in_stack_00000018 = "falling";
    in_stack_00000014 = (char *)&in_stack_00000004[1].orient.heading;
    in_stack_00000010 = (char *)0x44b59f;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000014,"falling");
    in_stack_0000001c = "letGoEvent";
    in_stack_00000018 = (char *)&in_stack_00000004[1].orient_matrix;
    in_stack_00000014 = (char *)0x44b5b3;
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)in_stack_00000018,"letGoEvent");
  }
  if (4 < g_CCurtainClassVersion) {
    in_stack_00000020 = "patchSize";
    in_stack_0000001c = in_stack_00000004[1].create_event + 0x2c;
    in_stack_00000018 = (char *)0x44b5d0;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_0000001c,"patchSize");
  }
  if (g_CCurtainClassVersion < 6) {
    return;
  }
  in_stack_00000020 = "blockVirtualDirectorFlag";
  in_stack_0000001c = in_stack_00000004[1].create_event + 0x30;
  in_stack_00000018 = (char *)0x44b5f2;
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)in_stack_0000001c,"blockVirtualDirectorFlag");
  return;
}


// Assembly code:
// 0044b3e0: PUSH EBX
//   Label: core_curtain.cpp_CCurtain_load_FUN_0044b3e0
// 0044b3e1: SUB ESP,0x4
// 0044b3e4: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0044b3e8: PUSH EBX
// 0044b3e9: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0044b3ee: ADD ESP,0x4
// 0044b3f1: PUSH 0x619c5a
//   XREF to: 00619c5a (DATA)
// 0044b3f6: LEA EAX,[EBX + 0x158]
// 0044b3fc: PUSH EAX
// 0044b3fd: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0044b402: ADD ESP,0x8
// 0044b405: PUSH 0x619c66
//   XREF to: 00619c66 (DATA)
// 0044b40a: LEA EAX,[EBX + 0x16c]
// 0044b410: PUSH EAX
// 0044b411: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0044b416: ADD ESP,0x8
// 0044b419: PUSH 0x619c75
//   XREF to: 00619c75 (DATA)
// 0044b41e: LEA EAX,[EBX + 0x17c]
// 0044b424: PUSH EAX
// 0044b425: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b42a: ADD ESP,0x8
// 0044b42d: XOR EDX,EDX
// 0044b42f: MOV ECX,dword ptr [0x0066eca4]
//   XREF to: 0066eca4 (READ)
// 0044b435: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x8] (DATA)
// 0044b438: CMP ECX,0x2
// 0044b43b: JL 0x0044b518
//   XREF to: 0044b518 (CONDITIONAL_JUMP)
// 0044b441: CMP ECX,0x4
// 0044b444: JGE 0x0044b4a0
//   XREF to: 0044b4a0 (CONDITIONAL_JUMP)
// 0044b446: PUSH 0x619c7d
//   XREF to: 00619c7d (DATA)
// 0044b44b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8] (DATA)
// 0044b44f: PUSH EAX
// 0044b450: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b455: ADD ESP,0x8
// 0044b458: TEST byte ptr [ESP],0x1
//   XREF to: Stack[-0x8] (DATA)
// 0044b45c: SETNZ AL
// 0044b45f: AND EAX,0xff
// 0044b464: MOV dword ptr [EBX + 0x180],EAX
// 0044b46a: TEST byte ptr [ESP],0x2
//   XREF to: Stack[-0x8] (DATA)
// 0044b46e: SETNZ AL
// 0044b471: AND EAX,0xff
// 0044b476: MOV dword ptr [EBX + 0x18c],EAX
// 0044b47c: TEST byte ptr [ESP],0x4
//   XREF to: Stack[-0x8] (DATA)
// 0044b480: SETNZ AL
// 0044b483: AND EAX,0xff
// 0044b488: MOV dword ptr [EBX + 0x184],EAX
// 0044b48e: TEST byte ptr [ESP],0x8
//   XREF to: Stack[-0x8] (DATA)
// 0044b492: SETNZ AL
// 0044b495: AND EAX,0xff
// 0044b49a: MOV dword ptr [EBX + 0x188],EAX
// 0044b4a0: PUSH 0x619c85
//   Label: LAB_0044b4a0
//   XREF to: 00619c85 (DATA)
// 0044b4a5: LEA EAX,[EBX + 0x65b14]
// 0044b4ab: PUSH EAX
// 0044b4ac: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0044b4b1: ADD ESP,0x8
// 0044b4b4: PUSH 0x619c8c
//   XREF to: 00619c8c (DATA)
// 0044b4b9: LEA EAX,[EBX + 0x65b18]
// 0044b4bf: PUSH EAX
// 0044b4c0: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0044b4c5: ADD ESP,0x8
// 0044b4c8: PUSH 0x619c93
//   XREF to: 00619c93 (DATA)
// 0044b4cd: LEA EAX,[EBX + 0x65b1c]
// 0044b4d3: PUSH EAX
// 0044b4d4: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0044b4d9: ADD ESP,0x8
// 0044b4dc: PUSH 0x619c9a
//   XREF to: 00619c9a (DATA)
// 0044b4e1: LEA EAX,[EBX + 0x65b20]
// 0044b4e7: PUSH EAX
// 0044b4e8: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0044b4ed: ADD ESP,0x8
// 0044b4f0: PUSH 0x619ca3
//   XREF to: 00619ca3 (DATA)
// 0044b4f5: LEA EAX,[EBX + 0x65b24]
// 0044b4fb: PUSH EAX
// 0044b4fc: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0044b501: ADD ESP,0x8
// 0044b504: PUSH 0x619cab
//   XREF to: 00619cab (DATA)
// 0044b509: LEA EAX,[EBX + 0x65b2c]
// 0044b50f: PUSH EAX
// 0044b510: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b515: ADD ESP,0x8
// 0044b518: CMP dword ptr [0x0066eca4],0x3
//   Label: LAB_0044b518
//   XREF to: 0066eca4 (READ)
// 0044b51f: JL 0x0044b535
//   XREF to: 0044b535 (CONDITIONAL_JUMP)
// 0044b521: PUSH 0x619cb4
//   XREF to: 00619cb4 (DATA)
// 0044b526: LEA EAX,[EBX + 0x1f8]
// 0044b52c: PUSH EAX
// 0044b52d: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b532: ADD ESP,0x8
// 0044b535: CMP dword ptr [0x0066eca4],0x4
//   Label: LAB_0044b535
//   XREF to: 0066eca4 (READ)
// 0044b53c: JL 0x0044b5b6
//   XREF to: 0044b5b6 (CONDITIONAL_JUMP)
// 0044b53e: PUSH 0x619cbf
//   XREF to: 00619cbf (DATA)
// 0044b543: LEA EAX,[EBX + 0x180]
// 0044b549: PUSH EAX
// 0044b54a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b54f: ADD ESP,0x8
// 0044b552: PUSH 0x619cca
//   XREF to: 00619cca (DATA)
// 0044b557: LEA EAX,[EBX + 0x18c]
// 0044b55d: PUSH EAX
// 0044b55e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b563: ADD ESP,0x8
// 0044b566: PUSH 0x619cd8
//   XREF to: 00619cd8 (DATA)
// 0044b56b: LEA EAX,[EBX + 0x184]
// 0044b571: PUSH EAX
// 0044b572: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b577: ADD ESP,0x8
// 0044b57a: PUSH 0x619ce4
//   XREF to: 00619ce4 (DATA)
// 0044b57f: LEA EAX,[EBX + 0x188]
// 0044b585: PUSH EAX
// 0044b586: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b58b: ADD ESP,0x8
// 0044b58e: PUSH 0x619cf1
//   XREF to: 00619cf1 (DATA)
// 0044b593: LEA EAX,[EBX + 0x190]
// 0044b599: PUSH EAX
// 0044b59a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b59f: ADD ESP,0x8
// 0044b5a2: PUSH 0x619cf9
//   XREF to: 00619cf9 (DATA)
// 0044b5a7: LEA EAX,[EBX + 0x194]
// 0044b5ad: PUSH EAX
// 0044b5ae: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0044b5b3: ADD ESP,0x8
// 0044b5b6: CMP dword ptr [0x0066eca4],0x5
//   Label: LAB_0044b5b6
//   XREF to: 0066eca4 (READ)
// 0044b5bd: JL 0x0044b5d3
//   XREF to: 0044b5d3 (CONDITIONAL_JUMP)
// 0044b5bf: PUSH 0x619d04
//   XREF to: 00619d04 (DATA)
// 0044b5c4: LEA EAX,[EBX + 0x1fc]
// 0044b5ca: PUSH EAX
// 0044b5cb: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0044b5d0: ADD ESP,0x8
// 0044b5d3: CMP dword ptr [0x0066eca4],0x6
//   Label: LAB_0044b5d3
//   XREF to: 0066eca4 (READ)
// 0044b5da: JGE 0x0044b5e1
//   XREF to: 0044b5e1 (CONDITIONAL_JUMP)
// 0044b5dc: ADD ESP,0x4
// 0044b5df: POP EBX
// 0044b5e0: RET
// 0044b5e1: PUSH 0x619d0e
//   Label: LAB_0044b5e1
//   XREF to: 00619d0e (DATA)
// 0044b5e6: ADD EBX,0x200
// 0044b5ec: PUSH EBX
// 0044b5ed: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044b5f2: ADD ESP,0x8
// 0044b5f5: ADD ESP,0x4
// 0044b5f8: POP EBX
// 0044b5f9: RET
