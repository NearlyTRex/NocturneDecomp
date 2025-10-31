// Name: core_setedit.cpp_FUN_00578a00
// Address: 00578a00
// Address Range: [[00578a00, 00578a18]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00578a00()
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void core_setedit_cpp_FUN_00578a00(void)

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
// 00578a00: PUSH EBX
//   Label: core_setedit.cpp_FUN_00578a00
// 00578a01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00578a05: PUSH EBX
//   Label: LAB_00578a05
// 00578a06: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00578a0b: ADD ESP,0x4
// 00578a0e: TEST EAX,EAX
// 00578a10: JL 0x00578a17
//   XREF to: 00578a17 (CONDITIONAL_JUMP)
// 00578a12: CMP EAX,0xa
// 00578a15: JNZ 0x00578a05
//   XREF to: 00578a05 (CONDITIONAL_JUMP)
// 00578a17: POP EBX
//   Label: LAB_00578a17
// 00578a18: RET
