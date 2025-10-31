// Name: core_skeledit.cpp_FUN_005894c0
// Address: 005894c0
// Address Range: [[005894c0, 005894f1]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_005894c0()
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void core_skeledit_cpp_FUN_005894c0(void)

{
  int iVar1;
  FILE *in_stack_0000000c;
  int in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  if (0 < in_stack_00000010) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
      if (iVar1 < 0) {
        return;
      }
    } while ((iVar1 != 10) || (in_stack_00000010 = in_stack_00000010 + -1, 0 < in_stack_00000010));
  }
  return;
}


// Assembly code:
// 005894c0: PUSH 0x10
//   Label: core_skeledit.cpp_FUN_005894c0
// 005894c5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 005894ca: PUSH EBX
// 005894cb: PUSH ESI
// 005894cc: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005894d0: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005894d4: TEST ESI,ESI
// 005894d6: JLE 0x005894ef
//   XREF to: 005894ef (CONDITIONAL_JUMP)
// 005894d8: PUSH EBX
//   Label: LAB_005894d8
// 005894d9: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005894de: ADD ESP,0x4
// 005894e1: TEST EAX,EAX
// 005894e3: JL 0x005894ef
//   XREF to: 005894ef (CONDITIONAL_JUMP)
// 005894e5: CMP EAX,0xa
// 005894e8: JNZ 0x005894d8
//   XREF to: 005894d8 (CONDITIONAL_JUMP)
// 005894ea: DEC ESI
// 005894eb: TEST ESI,ESI
// 005894ed: JG 0x005894d8
//   XREF to: 005894d8 (CONDITIONAL_JUMP)
// 005894ef: POP ESI
//   Label: LAB_005894ef
// 005894f0: POP EBX
// 005894f1: RET
//   Label: LAB_005894f1
