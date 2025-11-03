// Name: core_emitter.cpp_CEmitter_load_FUN_004a8b30
// Address: 004a8b30
// Address Range: [[004a8b30, 004a8d01]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_CEmitter_load_FUN_004a8b30()
// Globals:
//   TerminatedCString s_emitterType_006240d2
//   TerminatedCString s_emitterSize_006240de
//   TerminatedCString s_eventOn_006240ea
//   TerminatedCString s_eventOff_006240f2
//   TerminatedCString s_emitterState_006240fb
//   TerminatedCString s_laserR_00624108
//   TerminatedCString s_laserG_0062410f
//   TerminatedCString s_laserB_00624116
//   TerminatedCString s_laserType_0062411d
//   TerminatedCString s_maxEmitTime_00624127
//   TerminatedCString s_emitPeriod_00624133
//   TerminatedCString s_modelName_0062413e
//   TerminatedCString s_rockSpeed_00624148
//   TerminatedCString s_periodicFlag_00624152
//   TerminatedCString s_maxWaitTime_0062415f
//   TerminatedCString s_destActor_0062416b
//   TerminatedCString s_wavName_00624175
//   TerminatedCString s_sfxType_0062417d
//   undefined4 g_CEmitterClassVersion
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_CEmitter_load(CEmitter* pEmitter) */

void core_emitter_cpp_CEmitter_load_FUN_004a8b30(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004 + 1),"emitterType");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004[1].actor_name + 4),"emitterSize");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].actor_name + 0x14),"eventOn");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)in_stack_00000004[1].create_event,"eventOff");
  if (1 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].actor_name + 0x10),"emitterState");
  }
  if (*(int *)in_stack_00000004[1].actor_name == 3) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].field12_0xe0.y,"laserR");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].field12_0xe0.z,"laserG");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].field13_0xec,"laserB");
    if (2 < g_CEmitterClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)&in_stack_00000004[1].field12_0xe0,"laserType");
    }
  }
  if (2 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[1].field11_0xdc,"maxEmitTime");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[3].orient_matrix,"emitPeriod");
  }
  if (3 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].field13_0xec.y,"modelName")
    ;
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[2].field19_0x114,"rockSpeed");
  }
  if (4 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[2].field20_0x118,"periodicFlag");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[2].field21_0x11c,"maxWaitTime");
  }
  if (5 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[2].field22_0x120,"destActor");
  }
  if (g_CEmitterClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].field23_0x124,"wavName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[3].orient.bank,"sfxType");
  return;
}


// Assembly code:
// 004a8b30: PUSH EBX
//   Label: core_emitter.cpp_CEmitter_load_FUN_004a8b30
// 004a8b31: PUSH ESI
// 004a8b32: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a8b36: PUSH EBX
// 004a8b37: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004a8b3c: ADD ESP,0x4
// 004a8b3f: PUSH 0x6240d2
//   XREF to: 006240d2 (DATA)
// 004a8b44: LEA EAX,[EBX + 0x158]
// 004a8b4a: PUSH EAX
// 004a8b4b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a8b50: ADD ESP,0x8
// 004a8b53: PUSH 0x6240de
//   XREF to: 006240de (DATA)
// 004a8b58: LEA EAX,[EBX + 0x15c]
// 004a8b5e: PUSH EAX
// 004a8b5f: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 004a8b64: ADD ESP,0x8
// 004a8b67: PUSH 0x6240ea
//   XREF to: 006240ea (DATA)
// 004a8b6c: LEA EAX,[EBX + 0x16c]
// 004a8b72: PUSH EAX
// 004a8b73: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004a8b78: ADD ESP,0x8
// 004a8b7b: PUSH 0x6240f2
//   XREF to: 006240f2 (DATA)
// 004a8b80: LEA EAX,[EBX + 0x1d0]
// 004a8b86: PUSH EAX
// 004a8b87: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004a8b8c: MOV EDX,dword ptr [0x00679354]
//   XREF to: 00679354 (READ)
// 004a8b92: ADD ESP,0x8
// 004a8b95: CMP EDX,0x2
// 004a8b98: JGE 0x004a8cbe
//   XREF to: 004a8cbe (CONDITIONAL_JUMP)
// 004a8b9e: CMP dword ptr [EBX + 0x158],0x3
//   Label: LAB_004a8b9e
// 004a8ba5: JNZ 0x004a8c02
//   XREF to: 004a8c02 (CONDITIONAL_JUMP)
// 004a8ba7: PUSH 0x624108
//   XREF to: 00624108 (DATA)
// 004a8bac: LEA EAX,[EBX + 0x23c]
// 004a8bb2: PUSH EAX
// 004a8bb3: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a8bb8: ADD ESP,0x8
// 004a8bbb: PUSH 0x62410f
//   XREF to: 0062410f (DATA)
// 004a8bc0: LEA EAX,[EBX + 0x240]
// 004a8bc6: PUSH EAX
// 004a8bc7: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a8bcc: ADD ESP,0x8
// 004a8bcf: PUSH 0x624116
//   XREF to: 00624116 (DATA)
// 004a8bd4: LEA EAX,[EBX + 0x244]
// 004a8bda: PUSH EAX
// 004a8bdb: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a8be0: MOV ESI,dword ptr [0x00679354]
//   XREF to: 00679354 (READ)
// 004a8be6: ADD ESP,0x8
// 004a8be9: CMP ESI,0x3
// 004a8bec: JL 0x004a8c02
//   XREF to: 004a8c02 (CONDITIONAL_JUMP)
// 004a8bee: PUSH 0x62411d
//   XREF to: 0062411d (DATA)
// 004a8bf3: LEA EAX,[EBX + 0x238]
// 004a8bf9: PUSH EAX
// 004a8bfa: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a8bff: ADD ESP,0x8
// 004a8c02: CMP dword ptr [0x00679354],0x3
//   Label: LAB_004a8c02
//   XREF to: 00679354 (READ)
// 004a8c09: JL 0x004a8c33
//   XREF to: 004a8c33 (CONDITIONAL_JUMP)
// 004a8c0b: PUSH 0x624127
//   XREF to: 00624127 (DATA)
// 004a8c10: LEA EAX,[EBX + 0x234]
// 004a8c16: PUSH EAX
// 004a8c17: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004a8c1c: ADD ESP,0x8
// 004a8c1f: PUSH 0x624133
//   XREF to: 00624133 (DATA)
// 004a8c24: LEA EAX,[EBX + 0x444]
// 004a8c2a: PUSH EAX
// 004a8c2b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004a8c30: ADD ESP,0x8
// 004a8c33: CMP dword ptr [0x00679354],0x4
//   Label: LAB_004a8c33
//   XREF to: 00679354 (READ)
// 004a8c3a: JL 0x004a8c64
//   XREF to: 004a8c64 (CONDITIONAL_JUMP)
// 004a8c3c: PUSH 0x62413e
//   XREF to: 0062413e (DATA)
// 004a8c41: LEA EAX,[EBX + 0x248]
// 004a8c47: PUSH EAX
// 004a8c48: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 004a8c4d: ADD ESP,0x8
// 004a8c50: PUSH 0x624148
//   XREF to: 00624148 (DATA)
// 004a8c55: LEA EAX,[EBX + 0x3c4]
// 004a8c5b: PUSH EAX
// 004a8c5c: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004a8c61: ADD ESP,0x8
// 004a8c64: CMP dword ptr [0x00679354],0x5
//   Label: LAB_004a8c64
//   XREF to: 00679354 (READ)
// 004a8c6b: JL 0x004a8c95
//   XREF to: 004a8c95 (CONDITIONAL_JUMP)
// 004a8c6d: PUSH 0x624152
//   XREF to: 00624152 (DATA)
// 004a8c72: LEA EAX,[EBX + 0x3c8]
// 004a8c78: PUSH EAX
// 004a8c79: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a8c7e: ADD ESP,0x8
// 004a8c81: PUSH 0x62415f
//   XREF to: 0062415f (DATA)
// 004a8c86: LEA EAX,[EBX + 0x3cc]
// 004a8c8c: PUSH EAX
// 004a8c8d: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004a8c92: ADD ESP,0x8
// 004a8c95: CMP dword ptr [0x00679354],0x6
//   Label: LAB_004a8c95
//   XREF to: 00679354 (READ)
// 004a8c9c: JL 0x004a8cb2
//   XREF to: 004a8cb2 (CONDITIONAL_JUMP)
// 004a8c9e: PUSH 0x62416b
//   XREF to: 0062416b (DATA)
// 004a8ca3: LEA EAX,[EBX + 0x3d0]
// 004a8ca9: PUSH EAX
// 004a8caa: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004a8caf: ADD ESP,0x8
// 004a8cb2: CMP dword ptr [0x00679354],0x7
//   Label: LAB_004a8cb2
//   XREF to: 00679354 (READ)
// 004a8cb9: JGE 0x004a8cd7
//   XREF to: 004a8cd7 (CONDITIONAL_JUMP)
// 004a8cbb: POP ESI
// 004a8cbc: POP EBX
// 004a8cbd: RET
// 004a8cbe: PUSH 0x6240fb
//   Label: LAB_004a8cbe
//   XREF to: 006240fb (DATA)
// 004a8cc3: LEA EAX,[EBX + 0x168]
// 004a8cc9: PUSH EAX
// 004a8cca: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a8ccf: ADD ESP,0x8
// 004a8cd2: JMP 0x004a8b9e
//   XREF to: 004a8b9e (UNCONDITIONAL_JUMP)
// 004a8cd7: PUSH 0x624175
//   Label: LAB_004a8cd7
//   XREF to: 00624175 (DATA)
// 004a8cdc: LEA EAX,[EBX + 0x3d4]
// 004a8ce2: PUSH EAX
// 004a8ce3: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004a8ce8: ADD ESP,0x8
// 004a8ceb: PUSH 0x62417d
//   XREF to: 0062417d (DATA)
// 004a8cf0: ADD EBX,0x43c
// 004a8cf6: PUSH EBX
// 004a8cf7: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a8cfc: ADD ESP,0x8
// 004a8cff: POP ESI
// 004a8d00: POP EBX
// 004a8d01: RET
