// Name: core_morph.cpp_FUN_0052cd30
// Address: 0052cd30
// Address Range: [[0052cd30, 0052cd48]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052cd30()
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void core_morph_cpp_FUN_0052cd30(void)

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
// 0052cd30: PUSH EBX
//   Label: core_morph.cpp_FUN_0052cd30
// 0052cd31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052cd35: PUSH EBX
//   Label: LAB_0052cd35
// 0052cd36: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052cd3b: ADD ESP,0x4
// 0052cd3e: TEST EAX,EAX
// 0052cd40: JL 0x0052cd47
//   XREF to: 0052cd47 (CONDITIONAL_JUMP)
// 0052cd42: CMP EAX,0xa
// 0052cd45: JNZ 0x0052cd35
//   XREF to: 0052cd35 (CONDITIONAL_JUMP)
// 0052cd47: POP EBX
//   Label: LAB_0052cd47
// 0052cd48: RET
