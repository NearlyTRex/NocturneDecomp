// Name: core_trap.cpp_CTrap_FUN_005de710
// Address: 005de710
// Address Range: [[005de710, 005de71f] [005de723, 005de73e]]
// Convention: __cdecl
// Signature: int core_trap.cpp_CTrap_FUN_005de710(CTrap * this_ptr)
// Globals:
//   TerminatedCString s_CHero_00655539
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_FUN_005de710(CTrap *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if (this_ptr->wolf_in_trap == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// Assembly code:
// 005de710: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_trap.cpp_CTrap_FUN_005de710
//   XREF to: Stack[0x4] (READ)
// 005de714: CMP dword ptr [EAX + 0x2d8],0x0
// 005de71b: JZ 0x005de723
//   XREF to: 005de723 (CONDITIONAL_JUMP)
// 005de723: PUSH 0x655539
//   Label: LAB_005de723
//   XREF to: 00655539 (DATA)
// 005de728: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005de72c: PUSH ECX
// 005de72d: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005de732: ADD ESP,0x8
// 005de735: TEST EAX,EAX
// 005de737: JZ 0x005de722
//   XREF to: 005de722 (CONDITIONAL_JUMP)
// 005de739: MOV EAX,0x2
// 005de73e: RET
