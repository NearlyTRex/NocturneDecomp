// Name: shape_superopt.cpp_FUN_005c7a90
// Address: 005c7a90
// Address Range: [[005c7a90, 005c7b18]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c7a90()
// Cross-references:
//   shape_superopt.cpp_COptimize_FUN_005d7350 (005d7350) at 005d73df [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_realloc_FUN_00601df0

#include "nocturne.h"

undefined1 * shape_superopt_cpp_FUN_005c7a90(void)

{
  int iVar1;
  undefined1 *puVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (((undefined4 *)in_stack_00000004[1] != (undefined4 *)0x0) &&
     (*in_stack_00000008 != **(int **)in_stack_00000004[1])) {
    return (undefined1 *)0x0;
  }
  if (in_stack_00000004[1] == 0) {
    in_stack_00000004[5] = in_stack_00000008[0x10];
    in_stack_00000004[6] = in_stack_00000008[0x11];
    in_stack_00000004[7] = in_stack_00000008[0x12];
    in_stack_00000004[8] = in_stack_00000008[0x13];
    in_stack_00000004[9] = in_stack_00000008[0x14];
    in_stack_00000004[10] = in_stack_00000008[0x15];
    in_stack_00000004[4] = in_stack_00000008[0x17];
  }
  puVar2 = (undefined1 *)
           crt_memory_c_realloc_FUN_00601df0
                     ((void *)in_stack_00000004[1],(*in_stack_00000004 + 1) * 4);
  if (puVar2 != (undefined1 *)0x0) {
    in_stack_00000004[1] = (int)puVar2;
    iVar1 = *in_stack_00000004;
    *in_stack_00000004 = iVar1 + 1;
    *(int **)(iVar1 * 4 + in_stack_00000004[1]) = in_stack_00000008;
    puVar2 = &DAT_00000001;
  }
  return puVar2;
}


// Assembly code:
// 005c7a90: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c7a90
// 005c7a91: PUSH ESI
// 005c7a92: PUSH EBP
// 005c7a93: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005c7a97: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005c7a9b: MOV EDX,dword ptr [EBX + 0x4]
// 005c7a9e: TEST EDX,EDX
// 005c7aa0: JZ 0x005c7aaa
//   XREF to: 005c7aaa (CONDITIONAL_JUMP)
// 005c7aa2: MOV EAX,dword ptr [EDX]
// 005c7aa4: MOV ECX,dword ptr [ESI]
// 005c7aa6: CMP ECX,dword ptr [EAX]
// 005c7aa8: JNZ 0x005c7b13
//   XREF to: 005c7b13 (CONDITIONAL_JUMP)
// 005c7aaa: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_005c7aaa
// 005c7aae: JNZ 0x005c7ade
//   XREF to: 005c7ade (CONDITIONAL_JUMP)
// 005c7ab0: LEA EDX,[ESI + 0x40]
// 005c7ab3: LEA EAX,[EBX + 0x14]
// 005c7ab6: MOV ECX,dword ptr [EDX]
// 005c7ab8: MOV dword ptr [EAX],ECX
// 005c7aba: MOV ECX,dword ptr [EDX + 0x4]
// 005c7abd: MOV dword ptr [EAX + 0x4],ECX
// 005c7ac0: MOV ECX,dword ptr [EDX + 0x8]
// 005c7ac3: MOV dword ptr [EAX + 0x8],ECX
// 005c7ac6: MOV ECX,dword ptr [EDX + 0xc]
// 005c7ac9: MOV dword ptr [EAX + 0xc],ECX
// 005c7acc: MOV ECX,dword ptr [EDX + 0x10]
// 005c7acf: MOV dword ptr [EAX + 0x10],ECX
// 005c7ad2: MOV ECX,dword ptr [EDX + 0x14]
// 005c7ad5: MOV dword ptr [EAX + 0x14],ECX
// 005c7ad8: MOV EAX,dword ptr [ESI + 0x5c]
// 005c7adb: MOV dword ptr [EBX + 0x10],EAX
// 005c7ade: MOV EAX,dword ptr [EBX]
//   Label: LAB_005c7ade
// 005c7ae0: INC EAX
// 005c7ae1: SHL EAX,0x2
// 005c7ae4: PUSH EAX
// 005c7ae5: MOV EBP,dword ptr [EBX + 0x4]
// 005c7ae8: PUSH EBP
// 005c7ae9: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 005c7aee: ADD ESP,0x8
// 005c7af1: TEST EAX,EAX
// 005c7af3: JZ 0x005c7b0f
//   XREF to: 005c7b0f (CONDITIONAL_JUMP)
// 005c7af5: MOV dword ptr [EBX + 0x4],EAX
// 005c7af8: MOV EAX,dword ptr [EBX]
// 005c7afa: LEA EDX,[EAX*0x4 + 0x0]
// 005c7b01: INC EAX
// 005c7b02: MOV dword ptr [EBX],EAX
// 005c7b04: MOV EAX,dword ptr [EBX + 0x4]
// 005c7b07: MOV dword ptr [EDX + EAX*0x1],ESI
// 005c7b0a: MOV EAX,0x1
// 005c7b0f: POP EBP
//   Label: LAB_005c7b0f
// 005c7b10: POP ESI
// 005c7b11: POP EBX
// 005c7b12: RET
// 005c7b13: XOR EAX,EAX
//   Label: LAB_005c7b13
// 005c7b15: POP EBP
// 005c7b16: POP ESI
// 005c7b17: POP EBX
// 005c7b18: RET
