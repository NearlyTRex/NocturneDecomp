// Name: core_charactr.cpp_FUN_0042e570
// Address: 0042e570
// Address Range: [[0042e570, 0042e5c2]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_FUN_0042e570()
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50

#include "nocturne.h"

void core_charactr_cpp_FUN_0042e570(void)

{
  int iVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x2628) * 0x38;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
             *(int *)(iVar1 + 0x2c + in_stack_00000004 + 0x262c),
             (float)*(int *)(iVar1 + 0x30 + in_stack_00000004 + 0x262c) *
             *(float *)(in_stack_00000004 + 0x2a90),in_stack_00000008,in_stack_0000000c,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}


// Assembly code:
// 0042e570: PUSH EBX
//   Label: core_charactr.cpp_FUN_0042e570
// 0042e571: PUSH ESI
// 0042e572: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042e576: MOV EAX,dword ptr [ECX + 0x2628]
// 0042e57c: SHL EAX,0x3
// 0042e57f: MOV EDX,EAX
// 0042e581: SHL EAX,0x3
// 0042e584: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 0042e589: SUB EAX,EDX
// 0042e58b: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0042e58f: MOV EDX,EAX
// 0042e591: LEA EAX,[ECX + 0x262c]
// 0042e597: PUSH EBX
// 0042e598: FILD dword ptr [EDX + EAX*0x1 + 0x30]
// 0042e59c: FMUL float ptr [ECX + 0x2a90]
// 0042e5a2: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042e5a6: SUB ESP,0x4
// 0042e5a9: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0042e5ac: MOV ESI,dword ptr [EDX + EAX*0x1 + 0x2c]
// 0042e5b0: PUSH ESI
// 0042e5b1: ADD ECX,0x158
// 0042e5b7: PUSH ECX
// 0042e5b8: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 0042e5bd: ADD ESP,0x18
// 0042e5c0: POP ESI
// 0042e5c1: POP EBX
// 0042e5c2: RET
