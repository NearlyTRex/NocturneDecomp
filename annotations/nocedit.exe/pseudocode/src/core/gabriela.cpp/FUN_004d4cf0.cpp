// Name: core_gabriela.cpp_FUN_004d4cf0
// Address: 004d4cf0
// Address Range: [[004d4cf0, 004d4d7c]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d4cf0()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3564 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062af6d = 0.5
//   undefined4 DAT_02d7b888
//   undefined4 DAT_02d7b88c
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d4cf0(undefined4 param_1, undefined4
   param_2) */

float * core_gabriela_cpp_FUN_004d4cf0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)&stack0xffffffd0,DAT_02d7b88c);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)&stack0xffffffec,DAT_02d7b888);
  fVar5 = FLOAT_0062af6d;
  fVar1 = pCVar7->y;
  fVar2 = pCVar6->y;
  fVar3 = pCVar7->z;
  fVar4 = pCVar6->z;
  *in_stack_00000008 = (pCVar7->x + pCVar6->x) * FLOAT_0062af6d;
  in_stack_00000008[1] = (fVar1 + fVar2) * fVar5;
  in_stack_00000008[2] = fVar5 * (fVar3 + fVar4);
  return in_stack_00000008;
}


// Assembly code:
// 004d4cf0: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d4cf0
// 004d4cf1: PUSH ESI
// 004d4cf2: PUSH EDI
// 004d4cf3: SUB ESP,0x24
// 004d4cf6: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 004d4cfa: MOV EDX,dword ptr [0x02d7b88c]
//   XREF to: 02d7b88c (READ)
// 004d4d00: PUSH EDX
// 004d4d01: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 004d4d05: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 004d4d09: PUSH EAX
// 004d4d0a: ADD EDI,0x158
// 004d4d10: PUSH EDI
// 004d4d11: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004d4d16: ADD ESP,0xc
// 004d4d19: MOV ECX,dword ptr [0x02d7b888]
//   XREF to: 02d7b888 (READ)
// 004d4d1f: PUSH ECX
// 004d4d20: MOV EBX,EAX
// 004d4d22: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x18] (DATA)
// 004d4d26: PUSH EAX
// 004d4d27: PUSH EDI
// 004d4d28: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004d4d2d: FLD float ptr [EAX]
// 004d4d2f: FADD float ptr [EBX]
// 004d4d31: ADD ESP,0xc
// 004d4d34: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 004d4d38: FLD float ptr [EAX + 0x4]
// 004d4d3b: FADD float ptr [EBX + 0x4]
// 004d4d3e: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 004d4d42: FXCH
// 004d4d44: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 004d4d48: FLD float ptr [EAX + 0x8]
// 004d4d4b: FADD float ptr [EBX + 0x8]
// 004d4d4e: FXCH
// 004d4d50: FLD float ptr [0x0062af6d]
//   XREF to: 0062af6d (READ)
// 004d4d56: FXCH
// 004d4d58: FMUL ST1
// 004d4d5a: FXCH ST2
// 004d4d5c: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 004d4d60: FXCH
// 004d4d62: FSTP float ptr [ESI]
// 004d4d64: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 004d4d68: FMUL ST1
// 004d4d6a: FSTP float ptr [ESI + 0x4]
// 004d4d6d: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 004d4d71: MOV EAX,ESI
// 004d4d73: FSTP float ptr [ESI + 0x8]
// 004d4d76: ADD ESP,0x24
// 004d4d79: POP EDI
// 004d4d7a: POP ESI
// 004d4d7b: POP EBX
// 004d4d7c: RET
