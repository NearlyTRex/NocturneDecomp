// Name: core_actor.cpp_CActorPropertyList_FUN_0040e9c0
// Address: 0040e9c0
// Address Range: [[0040e9c0, 0040e9fe]]
// Convention: unknown
// Signature: undefined core_actor.cpp_CActorPropertyList_FUN_0040e9c0()
// Cross-references:
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c649 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int core_actor_cpp_CActorPropertyList_FUN_0040e9c0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = (in_stack_0000000c - *(int *)(in_stack_00000004 + 0x2500)) / 0xe;
  if ((((iVar1 < 0) || (*(int *)(in_stack_00000004 + 4) <= iVar1)) ||
      (in_stack_00000008 < *(int *)(in_stack_00000004 + 0x24f8))) ||
     (*(int *)(in_stack_00000004 + 0x24fc) < in_stack_00000008)) {
    iVar1 = -1;
  }
  return iVar1;
}


// Assembly code:
// 0040e9c0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e9c0
// 0040e9c1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040e9c5: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0040e9c9: SUB EDX,dword ptr [ECX + 0x2500]
// 0040e9cf: MOV EBX,0xe
// 0040e9d4: MOV EAX,EDX
// 0040e9d6: SAR EDX,0x1f
// 0040e9d9: IDIV EBX
// 0040e9db: TEST EAX,EAX
// 0040e9dd: JL 0x0040e9f8
//   XREF to: 0040e9f8 (CONDITIONAL_JUMP)
// 0040e9df: CMP EAX,dword ptr [ECX + 0x4]
// 0040e9e2: JGE 0x0040e9f8
//   XREF to: 0040e9f8 (CONDITIONAL_JUMP)
// 0040e9e4: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0040e9e8: CMP EDX,dword ptr [ECX + 0x24f8]
// 0040e9ee: JL 0x0040e9f8
//   XREF to: 0040e9f8 (CONDITIONAL_JUMP)
// 0040e9f0: CMP EDX,dword ptr [ECX + 0x24fc]
// 0040e9f6: JLE 0x0040e9fd
//   XREF to: 0040e9fd (CONDITIONAL_JUMP)
// 0040e9f8: MOV EAX,0xffffffff
//   Label: LAB_0040e9f8
// 0040e9fd: POP EBX
//   Label: LAB_0040e9fd
// 0040e9fe: RET
