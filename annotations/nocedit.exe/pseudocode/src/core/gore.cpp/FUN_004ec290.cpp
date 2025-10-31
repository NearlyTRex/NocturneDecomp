// Name: core_gore.cpp_FUN_004ec290
// Address: 004ec290
// Address Range: [[004ec290, 004ec2e4]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ec290()
// Globals:
//   double DOUBLE_0062e302 = 0.900000000000000
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_gore.cpp_FUN_004edb40
//   core_gore.cpp_FUN_004edb70

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ec290(undefined4 param_1, undefined4 param_2) */

undefined4 core_gore_cpp_FUN_004ec290(void)

{
  int in_stack_00000008;
  
  if ((float)DOUBLE_0062e302 < *(float *)(in_stack_00000008 + 4)) {
    core_gore_cpp_FUN_004edb40();
    return 1;
  }
  core_gore_cpp_FUN_004edb70();
  return 1;
}


// Assembly code:
// 004ec290: PUSH EDI
//   Label: core_gore.cpp_FUN_004ec290
// 004ec291: PUSH EBP
// 004ec292: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ec296: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004ec29a: FLD float ptr [ECX + 0x4]
// 004ec29d: FCOMP double ptr [0x0062e302]
//   XREF to: 0062e302 (READ)
// 004ec2a3: FNSTSW AX
// 004ec2a5: SAHF
// 004ec2a6: JBE 0x004ec2c4
//   XREF to: 004ec2c4 (CONDITIONAL_JUMP)
// 004ec2a8: MOV EDI,dword ptr [EDX + 0x38]
// 004ec2ab: PUSH EDI
// 004ec2ac: PUSH EDX
// 004ec2ad: MOV EBP,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 004ec2b3: PUSH EBP
//   XREF to: 02d83364 (DATA)
// 004ec2b4: CALL core_gore.cpp_FUN_004edb40
//   XREF to: 004edb40 (UNCONDITIONAL_CALL)
// 004ec2b9: ADD ESP,0xc
// 004ec2bc: MOV EAX,0x1
// 004ec2c1: POP EBP
// 004ec2c2: POP EDI
// 004ec2c3: RET
// 004ec2c4: PUSH ESI
//   Label: LAB_004ec2c4
// 004ec2c5: PUSH EBX
// 004ec2c6: MOV EBX,dword ptr [EDX + 0x38]
// 004ec2c9: PUSH EBX
// 004ec2ca: PUSH ECX
// 004ec2cb: PUSH EDX
// 004ec2cc: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 004ec2d2: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 004ec2d3: CALL core_gore.cpp_FUN_004edb70
//   XREF to: 004edb70 (UNCONDITIONAL_CALL)
// 004ec2d8: ADD ESP,0x10
// 004ec2db: POP EBX
// 004ec2dc: POP ESI
// 004ec2dd: MOV EAX,0x1
// 004ec2e2: POP EBP
// 004ec2e3: POP EDI
// 004ec2e4: RET
