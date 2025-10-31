// Name: core_stranger.cpp_FUN_005bafe0
// Address: 005bafe0
// Address Range: [[005bafe0, 005bb008]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005bafe0()

#include "nocturne.h"

bool core_stranger_cpp_FUN_005bafe0(void)

{
  int iVar1;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    return false;
  }
  iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x7c))();
  return iVar1 == 4;
}


// Assembly code:
// 005bafe0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_stranger.cpp_FUN_005bafe0
//   XREF to: Stack[0x8] (READ)
// 005bafe4: TEST EDX,EDX
// 005bafe6: JNZ 0x005bafeb
//   XREF to: 005bafeb (CONDITIONAL_JUMP)
// 005bafe8: XOR EAX,EAX
// 005bafea: RET
// 005bafeb: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_005bafeb
//   XREF to: Stack[0x4] (READ)
// 005bafef: PUSH ECX
// 005baff0: MOV EAX,dword ptr [EDX + 0x154]
// 005baff6: PUSH EDX
// 005baff7: CALL dword ptr [EAX + 0x7c]
// 005baffa: ADD ESP,0x8
// 005baffd: CMP EAX,0x4
// 005bb000: SETZ AL
// 005bb003: AND EAX,0xff
// 005bb008: RET
