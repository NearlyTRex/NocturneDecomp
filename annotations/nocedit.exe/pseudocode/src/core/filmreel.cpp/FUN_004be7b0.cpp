// Name: core_filmreel.cpp_FUN_004be7b0
// Address: 004be7b0
// Address Range: [[004be7b0, 004be7cb]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be7b0()
// Globals:
//   TerminatedCString s_CHero_00629ae5
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int core_filmreel_cpp_FUN_004be7b0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  if (iVar1 != 0) {
    iVar1 = 2;
  }
  return iVar1;
}


// Assembly code:
// 004be7b0: PUSH 0x629ae5
//   Label: core_filmreel.cpp_FUN_004be7b0
//   XREF to: 00629ae5 (DATA)
// 004be7b5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004be7b9: PUSH EDX
// 004be7ba: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004be7bf: ADD ESP,0x8
// 004be7c2: TEST EAX,EAX
// 004be7c4: JZ 0x004be7cb
//   XREF to: 004be7cb (CONDITIONAL_JUMP)
// 004be7c6: MOV EAX,0x2
// 004be7cb: RET
//   Label: LAB_004be7cb
