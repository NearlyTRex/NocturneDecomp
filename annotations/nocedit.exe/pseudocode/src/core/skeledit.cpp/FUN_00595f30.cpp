// Name: core_skeledit.cpp_FUN_00595f30
// Address: 00595f30
// Address Range: [[00595f30, 00595fb7]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00595f30()
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005929d6 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_00595f30(void)

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
  
  uStackY_8 = 0x595f3a;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x28);
  iVar5 = 0;
  if (0 < *in_stack_00000010) {
    piVar3 = in_stack_00000010 + 10;
    piVar4 = (int *)(in_stack_0000000c + 0x2937c);
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
// 00595f30: PUSH 0x28
//   Label: core_skeledit.cpp_FUN_00595f30
// 00595f35: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00595f3a: PUSH EBX
// 00595f3b: PUSH ESI
// 00595f3c: PUSH EDI
// 00595f3d: SUB ESP,0x18
// 00595f40: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00595f44: MOV EDX,dword ptr [ESI]
// 00595f46: XOR EBX,EBX
// 00595f48: TEST EDX,EDX
// 00595f4a: JLE 0x00595f9b
//   XREF to: 00595f9b (CONDITIONAL_JUMP)
// 00595f4c: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00595f50: LEA ECX,[ESI + 0x28]
// 00595f53: ADD EDX,0x2937c
// 00595f59: MOV EAX,dword ptr [ECX + 0xc]
//   Label: LAB_00595f59
// 00595f5c: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00595f60: MOV EAX,dword ptr [ECX + 0x1c]
// 00595f63: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00595f67: MOV EAX,dword ptr [ECX + 0x2c]
// 00595f6a: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00595f6e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 00595f72: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00595f75: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00595f79: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00595f7d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 00595f81: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00595f85: MOV EAX,ESP
// 00595f87: CMP EDX,EAX
// 00595f89: JNZ 0x00595fa2
//   XREF to: 00595fa2 (CONDITIONAL_JUMP)
// 00595f8b: ADD EDX,0xc
//   Label: LAB_00595f8b
// 00595f8e: INC EBX
// 00595f8f: MOV EDI,dword ptr [ESI]
// 00595f91: ADD ECX,0x84
// 00595f97: CMP EBX,EDI
// 00595f99: JL 0x00595f59
//   XREF to: 00595f59 (CONDITIONAL_JUMP)
// 00595f9b: ADD ESP,0x18
//   Label: LAB_00595f9b
// 00595f9e: POP EDI
// 00595f9f: POP ESI
// 00595fa0: POP EBX
// 00595fa1: RET
// 00595fa2: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00595fa2
//   XREF to: Stack[-0x10] (READ)
// 00595fa6: MOV dword ptr [EDX],EAX
// 00595fa8: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 00595fac: MOV dword ptr [EDX + 0x4],EAX
// 00595faf: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 00595fb3: MOV dword ptr [EDX + 0x8],EAX
// 00595fb6: JMP 0x00595f8b
//   XREF to: 00595f8b (UNCONDITIONAL_JUMP)
