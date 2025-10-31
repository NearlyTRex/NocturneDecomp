// Name: core_boxactor.cpp_CLightActor_FUN_00423590
// Address: 00423590
// Address Range: [[00423590, 004235b7]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CLightActor_FUN_00423590()
// Globals:
//   TerminatedCString s_Select_type_of_light_to__00616a47
// Function calls:
//   core_boxactor.cpp_FUN_00423110

#include "nocturne.h"

undefined4 core_boxactor_cpp_CLightActor_FUN_00423590(void)

{
  int iVar1;
  int in_stack_00000008;
  
  iVar1 = core_boxactor_cpp_FUN_00423110();
  if (-1 < iVar1) {
    *(int *)(in_stack_00000008 + 0x66c) = iVar1;
    return 1;
  }
  return 0;
}


// Assembly code:
// 00423590: PUSH 0x1
//   Label: core_boxactor.cpp_CLightActor_FUN_00423590
// 00423592: PUSH 0x0
// 00423594: PUSH 0x616a47
//   XREF to: 00616a47 (DATA)
// 00423599: CALL core_boxactor.cpp_FUN_00423110
//   XREF to: 00423110 (UNCONDITIONAL_CALL)
// 0042359e: ADD ESP,0xc
// 004235a1: TEST EAX,EAX
// 004235a3: JL 0x004235b5
//   XREF to: 004235b5 (CONDITIONAL_JUMP)
// 004235a5: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004235a9: MOV dword ptr [EDX + 0x66c],EAX
// 004235af: MOV EAX,0x1
// 004235b4: RET
// 004235b5: XOR EAX,EAX
//   Label: LAB_004235b5
// 004235b7: RET
