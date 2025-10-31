// Name: core_battery.cpp_FUN_00417f20
// Address: 00417f20
// Address Range: [[00417f20, 00417f3b]]
// Convention: unknown
// Signature: undefined core_battery.cpp_FUN_00417f20()
// Globals:
//   TerminatedCString s_CHero_006159e6
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int core_battery_cpp_FUN_00417f20(void)

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
// 00417f20: PUSH 0x6159e6
//   Label: core_battery.cpp_FUN_00417f20
//   XREF to: 006159e6 (DATA)
// 00417f25: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00417f29: PUSH EDX
// 00417f2a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00417f2f: ADD ESP,0x8
// 00417f32: TEST EAX,EAX
// 00417f34: JZ 0x00417f3b
//   XREF to: 00417f3b (CONDITIONAL_JUMP)
// 00417f36: MOV EAX,0x2
// 00417f3b: RET
//   Label: LAB_00417f3b
