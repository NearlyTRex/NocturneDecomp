// Name: shape_superopt.cpp_FUN_005c79f0
// Address: 005c79f0
// Address Range: [[005c79f0, 005c7a89]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c79f0()
// Cross-references:
//   shape_superopt.cpp_FUN_005c79d0 (005c79d0) at 005c79d6 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c9500 (005c9500) at 005c984b [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d7000 (005d7000) at 005d7023 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_free_FUN_00601cd0

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005c79f0(undefined4 param_1) */

void shape_superopt_cpp_FUN_005c79f0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  if ((void *)in_stack_00000004[1] != (void *)0x0) {
    crt_memory_c_free_FUN_00601cd0((void *)in_stack_00000004[1]);
  }
  in_stack_00000004[1] = 0;
  uVar2 = 0;
  if (in_stack_00000004[2] != 0) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 4;
      iVar3 = iVar3 + 8;
      uVar2 = uVar2 + 1;
      crt_memory_c_free_FUN_005fe659(*(void **)(iVar1 + in_stack_00000004[3]));
    } while (uVar2 < (uint)in_stack_00000004[2]);
  }
  in_stack_00000004[2] = 0;
  if ((void *)in_stack_00000004[3] != (void *)0x0) {
    crt_memory_c_free_FUN_00601cd0((void *)in_stack_00000004[3]);
  }
  in_stack_00000004[3] = 0;
  in_stack_00000004[0xb] = 0;
  crt_memory_c_free_FUN_005fe659((void *)in_stack_00000004[0xc]);
  in_stack_00000004[0xc] = 0;
  return;
}


// Assembly code:
// 005c79f0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c79f0
// 005c79f1: PUSH ESI
// 005c79f2: PUSH EDI
// 005c79f3: PUSH EBP
// 005c79f4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c79f8: MOV EDX,dword ptr [EDI + 0x4]
// 005c79fb: MOV dword ptr [EDI],0x0
// 005c7a01: TEST EDX,EDX
// 005c7a03: JNZ 0x005c7a74
//   XREF to: 005c7a74 (CONDITIONAL_JUMP)
// 005c7a05: MOV ESI,dword ptr [EDI + 0x8]
//   Label: LAB_005c7a05
// 005c7a08: MOV dword ptr [EDI + 0x4],0x0
// 005c7a0f: XOR EBX,EBX
// 005c7a11: TEST ESI,ESI
// 005c7a13: JBE 0x005c7a40
//   XREF to: 005c7a40 (CONDITIONAL_JUMP)
// 005c7a15: XOR ESI,ESI
// 005c7a17: MOV EAX,dword ptr [EDI + 0xc]
//   Label: LAB_005c7a17
// 005c7a1a: MOV EBP,dword ptr [ESI + EAX*0x1 + 0x4]
// 005c7a1e: PUSH EBP
// 005c7a1f: ADD ESI,0x8
// 005c7a22: INC EBX
// 005c7a23: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c7a28: MOV EAX,dword ptr [EDI + 0x8]
// 005c7a2b: ADD ESP,0x4
// 005c7a2e: CMP EBX,EAX
// 005c7a30: JC 0x005c7a17
//   XREF to: 005c7a17 (CONDITIONAL_JUMP)
// 005c7a32: LEA EAX,[EAX]
// 005c7a38: LEA EDX,[EDX]
// 005c7a3e: MOV EAX,EAX
// 005c7a40: MOV EDX,dword ptr [EDI + 0xc]
//   Label: LAB_005c7a40
// 005c7a43: MOV dword ptr [EDI + 0x8],0x0
// 005c7a4a: TEST EDX,EDX
// 005c7a4c: JNZ 0x005c7a7f
//   XREF to: 005c7a7f (CONDITIONAL_JUMP)
// 005c7a4e: MOV EBX,dword ptr [EDI + 0x30]
//   Label: LAB_005c7a4e
// 005c7a51: MOV dword ptr [EDI + 0xc],0x0
// 005c7a58: PUSH EBX
// 005c7a59: MOV dword ptr [EDI + 0x2c],0x0
// 005c7a60: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c7a65: ADD ESP,0x4
// 005c7a68: MOV dword ptr [EDI + 0x30],0x0
// 005c7a6f: POP EBP
// 005c7a70: POP EDI
// 005c7a71: POP ESI
// 005c7a72: POP EBX
// 005c7a73: RET
// 005c7a74: PUSH EDX
//   Label: LAB_005c7a74
// 005c7a75: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 005c7a7a: ADD ESP,0x4
// 005c7a7d: JMP 0x005c7a05
//   XREF to: 005c7a05 (UNCONDITIONAL_JUMP)
// 005c7a7f: PUSH EDX
//   Label: LAB_005c7a7f
// 005c7a80: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 005c7a85: ADD ESP,0x4
// 005c7a88: JMP 0x005c7a4e
//   XREF to: 005c7a4e (UNCONDITIONAL_JUMP)
