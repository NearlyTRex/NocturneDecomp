// Name: core_barrier.cpp_CBarrier_FUN_004143a0
// Address: 004143a0
// Address Range: [[004143a0, 004143dc]]
// Convention: __cdecl
// Signature: int core_barrier.cpp_CBarrier_FUN_004143a0(CBarrier * this_ptr)
// Globals:
//   undefined4 DAT_00821ff4
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int __cdecl core_barrier_cpp_CBarrier_FUN_004143a0(CBarrier *this_ptr)

{
  int iVar1;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 0) {
    return 0;
  }
  if (this_ptr->field1_0x158[0x10] != '\0') {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(DAT_00821ff4,this_ptr->field1_0x158 + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 004143a0: PUSH EBX
//   Label: core_barrier.cpp_CBarrier_FUN_004143a0
// 004143a1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004143a5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004143a9: CMP dword ptr [EDX],0x0
// 004143ac: JNZ 0x004143be
//   XREF to: 004143be (CONDITIONAL_JUMP)
// 004143ae: CMP byte ptr [EAX + 0x168],0x0
// 004143b5: JNZ 0x004143c2
//   XREF to: 004143c2 (CONDITIONAL_JUMP)
// 004143b7: MOV EAX,0x1
//   Label: LAB_004143b7
// 004143bc: POP EBX
// 004143bd: RET
// 004143be: XOR EAX,EAX
//   Label: LAB_004143be
// 004143c0: POP EBX
// 004143c1: RET
// 004143c2: ADD EAX,0x168
//   Label: LAB_004143c2
// 004143c7: PUSH EAX
// 004143c8: MOV EBX,dword ptr [0x00821ff4]
//   XREF to: 00821ff4 (READ)
// 004143ce: PUSH EBX
// 004143cf: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004143d4: ADD ESP,0x8
// 004143d7: TEST EAX,EAX
// 004143d9: JNZ 0x004143b7
//   XREF to: 004143b7 (CONDITIONAL_JUMP)
// 004143db: POP EBX
// 004143dc: RET
