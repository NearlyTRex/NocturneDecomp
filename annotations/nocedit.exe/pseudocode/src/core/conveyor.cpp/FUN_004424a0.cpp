// Name: core_conveyor.cpp_FUN_004424a0
// Address: 004424a0
// Address Range: [[004424a0, 004424b8]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_004424a0()
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void core_conveyor_cpp_FUN_004424a0(void)

{
  int iVar1;
  FILE *in_stack_00000004;
  
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000004);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}


// Assembly code:
// 004424a0: PUSH EBX
//   Label: core_conveyor.cpp_FUN_004424a0
// 004424a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004424a5: PUSH EBX
//   Label: LAB_004424a5
// 004424a6: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004424ab: ADD ESP,0x4
// 004424ae: TEST EAX,EAX
// 004424b0: JL 0x004424b7
//   XREF to: 004424b7 (CONDITIONAL_JUMP)
// 004424b2: CMP EAX,0xa
// 004424b5: JNZ 0x004424a5
//   XREF to: 004424a5 (CONDITIONAL_JUMP)
// 004424b7: POP EBX
//   Label: LAB_004424b7
// 004424b8: RET
