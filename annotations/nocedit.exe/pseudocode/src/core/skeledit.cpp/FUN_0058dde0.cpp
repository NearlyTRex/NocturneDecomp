// Name: core_skeledit.cpp_FUN_0058dde0
// Address: 0058dde0
// Address Range: [[0058dde0, 0058de67]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058dde0()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c388 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058dde0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int local_1c [5];
  undefined4 uStackY_8;
  
  uStackY_8 = 0x58ddea;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x28);
  iVar5 = 0;
  if (0 < *in_stack_00000010) {
    piVar3 = in_stack_00000010 + 10;
    piVar4 = (int *)(in_stack_0000000c + 0x7c90);
    do {
      iVar1 = piVar3[7];
      iVar2 = piVar3[0xb];
      if (piVar4 != local_1c) {
        *piVar4 = piVar3[3];
        piVar4[1] = iVar1;
        piVar4[2] = iVar2;
      }
      piVar4 = piVar4 + 3;
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 0x21;
    } while (iVar5 < *in_stack_00000010);
  }
  return;
}


// Assembly code:
// 0058dde0: PUSH 0x28
//   Label: core_skeledit.cpp_FUN_0058dde0
// 0058dde5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058ddea: PUSH EBX
// 0058ddeb: PUSH ESI
// 0058ddec: PUSH EDI
// 0058dded: SUB ESP,0x18
// 0058ddf0: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0058ddf4: MOV EDX,dword ptr [ESI]
// 0058ddf6: XOR EBX,EBX
// 0058ddf8: TEST EDX,EDX
// 0058ddfa: JLE 0x0058de4b
//   XREF to: 0058de4b (CONDITIONAL_JUMP)
// 0058ddfc: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0058de00: LEA ECX,[ESI + 0x28]
// 0058de03: ADD EDX,0x7c90
// 0058de09: MOV EAX,dword ptr [ECX + 0xc]
//   Label: LAB_0058de09
// 0058de0c: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0058de10: MOV EAX,dword ptr [ECX + 0x1c]
// 0058de13: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058de17: MOV EAX,dword ptr [ECX + 0x2c]
// 0058de1a: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0058de1e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 0058de22: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 0058de25: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0058de29: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058de2d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0058de31: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058de35: MOV EAX,ESP
// 0058de37: CMP EDX,EAX
// 0058de39: JNZ 0x0058de52
//   XREF to: 0058de52 (CONDITIONAL_JUMP)
// 0058de3b: ADD EDX,0xc
//   Label: LAB_0058de3b
// 0058de3e: INC EBX
// 0058de3f: MOV EDI,dword ptr [ESI]
// 0058de41: ADD ECX,0x84
// 0058de47: CMP EBX,EDI
// 0058de49: JL 0x0058de09
//   XREF to: 0058de09 (CONDITIONAL_JUMP)
// 0058de4b: ADD ESP,0x18
//   Label: LAB_0058de4b
// 0058de4e: POP EDI
// 0058de4f: POP ESI
// 0058de50: POP EBX
// 0058de51: RET
// 0058de52: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0058de52
//   XREF to: Stack[-0x10] (READ)
// 0058de56: MOV dword ptr [EDX],EAX
// 0058de58: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0058de5c: MOV dword ptr [EDX + 0x4],EAX
// 0058de5f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0058de63: MOV dword ptr [EDX + 0x8],EAX
// 0058de66: JMP 0x0058de3b
//   XREF to: 0058de3b (UNCONDITIONAL_JUMP)
