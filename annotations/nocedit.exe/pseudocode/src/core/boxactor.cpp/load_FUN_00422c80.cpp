// Name: core_boxactor.cpp_load_FUN_00422c80
// Address: 00422c80
// Address Range: [[00422c80, 00422d59]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_load_FUN_00422c80()
// Globals:
//   TerminatedCString s_lightType_00616908
//   TerminatedCString s_bLightPos_00616912
//   TerminatedCString s_lightOrient_0061691c
//   TerminatedCString s_lightFov_00616928
//   TerminatedCString s_lightFov_00616931
//   TerminatedCString s_light_status_0061693a
//   TerminatedCString s_light_falloff_00616947
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeOrientation_FUN_0040b3e0
//   core_actor.cpp_serializeVector_FUN_0040b340
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060

#include "nocturne.h"

void core_boxactor_cpp_load_FUN_00422c80(void)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  fVar1 = (float)in_stack_00000004;
  core_boxactor_cpp_CBoxActor_load_FUN_00422060();
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)((int)fVar1 + 0x66c),"lightType");
  if (*(int *)((int)fVar1 + 0x66c) == 0) {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)((int)fVar1 + 0x361c),"bLightPos");
    core_actor_cpp_serializeOrientation_FUN_0040b3e0
              ((COrientation *)((int)fVar1 + 0x3628),"lightOrient");
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_serializeFloat_FUN_0040b770((float *)&stack0x00000004,"lightFov");
      *(char **)((int)fVar1 + 0x6a8) = in_stack_00000008;
    }
    else {
      in_stack_00000004 = *(char **)((int)fVar1 + 0x6a8);
      core_actor_cpp_serializeFloat_FUN_0040b770((float *)&stack0x00000004,"lightFov");
    }
  }
  in_stack_00000004 = "light status";
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)((int)fVar1 + 0x2324),"light status")
  ;
  if (*(int *)((int)fVar1 + 0x66c) != 0) {
    return;
  }
  in_stack_00000008 = "light falloff";
  in_stack_00000004 = (char *)((int)fVar1 + 0x7b0);
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_00000004,"light falloff");
  return;
}


// Assembly code:
// 00422c80: PUSH EBX
//   Label: core_boxactor.cpp_load_FUN_00422c80
// 00422c81: PUSH ESI
// 00422c82: SUB ESP,0x4
// 00422c85: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00422c89: PUSH EBX
// 00422c8a: CALL core_boxactor.cpp_CBoxActor_load_FUN_00422060
//   XREF to: 00422060 (UNCONDITIONAL_CALL)
// 00422c8f: ADD ESP,0x4
// 00422c92: PUSH 0x616908
//   XREF to: 00616908 (DATA)
// 00422c97: LEA EAX,[EBX + 0x66c]
// 00422c9d: PUSH EAX
// 00422c9e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00422ca3: MOV EDX,dword ptr [EBX + 0x66c]
// 00422ca9: ADD ESP,0x8
// 00422cac: TEST EDX,EDX
// 00422cae: JNZ 0x00422d01
//   XREF to: 00422d01 (CONDITIONAL_JUMP)
// 00422cb0: PUSH 0x616912
//   XREF to: 00616912 (DATA)
// 00422cb5: LEA EAX,[EBX + 0x361c]
// 00422cbb: PUSH EAX
// 00422cbc: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 00422cc1: ADD ESP,0x8
// 00422cc4: PUSH 0x61691c
//   XREF to: 0061691c (DATA)
// 00422cc9: LEA EAX,[EBX + 0x3628]
// 00422ccf: PUSH EAX
// 00422cd0: LEA ESI,[EBX + 0x670]
// 00422cd6: CALL core_actor.cpp_serializeOrientation_FUN_0040b3e0
//   XREF to: 0040b3e0 (UNCONDITIONAL_CALL)
// 00422cdb: MOV ECX,dword ptr [0x00822038]
//   XREF to: 00822038 (READ)
// 00422ce1: ADD ESP,0x8
// 00422ce4: CMP ECX,0x1
// 00422ce7: JNZ 0x00422d25
//   XREF to: 00422d25 (CONDITIONAL_JUMP)
// 00422ce9: PUSH 0x616928
//   XREF to: 00616928 (DATA)
// 00422cee: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xc] (DATA)
// 00422cf2: PUSH EAX
// 00422cf3: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00422cf8: ADD ESP,0x8
// 00422cfb: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
//   XREF to: Stack[-0xc] (DATA)
// 00422cfe: MOV dword ptr [ESI + 0x38],EAX
// 00422d01: PUSH 0x61693a
//   Label: LAB_00422d01
//   XREF to: 0061693a (DATA)
// 00422d06: LEA EAX,[EBX + 0x2324]
// 00422d0c: PUSH EAX
// 00422d0d: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00422d12: MOV ESI,dword ptr [EBX + 0x66c]
// 00422d18: ADD ESP,0x8
// 00422d1b: TEST ESI,ESI
// 00422d1d: JZ 0x00422d40
//   XREF to: 00422d40 (CONDITIONAL_JUMP)
// 00422d1f: ADD ESP,0x4
// 00422d22: POP ESI
// 00422d23: POP EBX
// 00422d24: RET
// 00422d25: PUSH 0x616931
//   Label: LAB_00422d25
//   XREF to: 00616931 (DATA)
// 00422d2a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xc] (DATA)
// 00422d2e: FLD float ptr [ESI + 0x38]
// 00422d31: PUSH EAX
// 00422d32: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 00422d36: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00422d3b: ADD ESP,0x8
// 00422d3e: JMP 0x00422d01
//   XREF to: 00422d01 (UNCONDITIONAL_JUMP)
// 00422d40: PUSH 0x616947
//   Label: LAB_00422d40
//   XREF to: 00616947 (DATA)
// 00422d45: ADD EBX,0x7b0
// 00422d4b: PUSH EBX
// 00422d4c: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00422d51: ADD ESP,0x8
// 00422d54: ADD ESP,0x4
// 00422d57: POP ESI
// 00422d58: POP EBX
// 00422d59: RET
