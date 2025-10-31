// Name: shape_superopt.cpp_FUN_005cdfe0
// Address: 005cdfe0
// Address Range: [[005cdfe0, 005ce092]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cdfe0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005cdfe0(undefined4 param_1) */

void shape_superopt_cpp_FUN_005cdfe0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_stack_00000004;
  
  uVar1 = *(undefined4 *)(in_stack_00000004 + 4);
  *(undefined4 *)(in_stack_00000004 + 4) = *(undefined4 *)(in_stack_00000004 + 8);
  *(undefined4 *)(in_stack_00000004 + 8) = uVar1;
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x10);
  uVar2 = *(undefined4 *)(in_stack_00000004 + 0x14);
  uVar3 = *(undefined4 *)(in_stack_00000004 + 0x18);
  uVar4 = *(undefined4 *)(in_stack_00000004 + 0x1c);
  *(undefined4 *)(in_stack_00000004 + 0x10) = *(undefined4 *)(in_stack_00000004 + 0x20);
  *(undefined4 *)(in_stack_00000004 + 0x14) = *(undefined4 *)(in_stack_00000004 + 0x24);
  *(undefined4 *)(in_stack_00000004 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x28);
  *(undefined4 *)(in_stack_00000004 + 0x1c) = *(undefined4 *)(in_stack_00000004 + 0x2c);
  *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
  *(undefined4 *)(in_stack_00000004 + 0x24) = uVar2;
  *(undefined4 *)(in_stack_00000004 + 0x28) = uVar3;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = uVar4;
  *(double *)(in_stack_00000004 + 0x40) = -*(double *)(in_stack_00000004 + 0x40);
  *(double *)(in_stack_00000004 + 0x48) = -*(double *)(in_stack_00000004 + 0x48);
  *(double *)(in_stack_00000004 + 0x50) = -*(double *)(in_stack_00000004 + 0x50);
  return;
}


// Assembly code:
// 005cdfe0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cdfe0
// 005cdfe1: PUSH EBP
// 005cdfe2: MOV EBP,ESP
// 005cdfe4: SUB ESP,0x28
// 005cdfe7: AND ESP,0xfffffff8
// 005cdfea: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005cdfed: MOV ECX,dword ptr [EDX + 0x8]
// 005cdff0: MOV EAX,dword ptr [EDX + 0x4]
// 005cdff3: MOV dword ptr [EDX + 0x4],ECX
// 005cdff6: LEA ECX,[EDX + 0x10]
// 005cdff9: MOV dword ptr [EDX + 0x8],EAX
// 005cdffc: MOV EAX,dword ptr [ECX]
// 005cdffe: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 005ce001: MOV EAX,dword ptr [ECX + 0x4]
// 005ce004: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005ce008: MOV EAX,dword ptr [ECX + 0x8]
// 005ce00b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005ce00f: MOV EAX,dword ptr [ECX + 0xc]
// 005ce012: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005ce016: LEA EAX,[EDX + 0x20]
// 005ce019: MOV EBX,dword ptr [EAX]
// 005ce01b: MOV dword ptr [ECX],EBX
// 005ce01d: MOV EBX,dword ptr [EAX + 0x4]
// 005ce020: MOV dword ptr [ECX + 0x4],EBX
// 005ce023: MOV EBX,dword ptr [EAX + 0x8]
// 005ce026: MOV dword ptr [ECX + 0x8],EBX
// 005ce029: MOV EBX,dword ptr [EAX + 0xc]
// 005ce02c: MOV dword ptr [ECX + 0xc],EBX
// 005ce02f: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005ce032: MOV dword ptr [EAX],ECX
// 005ce034: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005ce038: MOV dword ptr [EAX + 0x4],ECX
// 005ce03b: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005ce03f: MOV dword ptr [EAX + 0x8],ECX
// 005ce042: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005ce046: MOV dword ptr [EAX + 0xc],ECX
// 005ce049: FLD double ptr [EDX + 0x40]
// 005ce04c: FCHS
// 005ce04e: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 005ce052: FLD double ptr [EDX + 0x48]
// 005ce055: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005ce059: FCHS
// 005ce05b: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 005ce05f: FLD double ptr [EDX + 0x50]
// 005ce062: FCHS
// 005ce064: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (WRITE)
// 005ce068: MOV dword ptr [EDX + 0x40],EAX
// 005ce06b: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005ce06f: MOV dword ptr [EDX + 0x44],EAX
// 005ce072: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005ce076: MOV dword ptr [EDX + 0x48],EAX
// 005ce079: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005ce07d: MOV dword ptr [EDX + 0x4c],EAX
// 005ce080: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 005ce084: MOV dword ptr [EDX + 0x50],EAX
// 005ce087: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 005ce08b: MOV dword ptr [EDX + 0x54],EAX
// 005ce08e: MOV ESP,EBP
// 005ce090: POP EBP
// 005ce091: POP EBX
// 005ce092: RET
