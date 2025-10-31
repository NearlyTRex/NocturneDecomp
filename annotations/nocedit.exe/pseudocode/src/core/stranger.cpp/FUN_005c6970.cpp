// Name: core_stranger.cpp_FUN_005c6970
// Address: 005c6970
// Address Range: [[005c6970, 005c6992]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c6970()

#include "nocturne.h"

void core_stranger_cpp_FUN_005c6970(void)

{
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if ((undefined4 *)(in_stack_00000004 + 0x3fe64) == in_stack_00000008) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x3fe64) = *in_stack_00000008;
  *(undefined4 *)(in_stack_00000004 + 0x3fe68) = in_stack_00000008[1];
  *(undefined4 *)(in_stack_00000004 + 0x3fe6c) = in_stack_00000008[2];
  return;
}


// Assembly code:
// 005c6970: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_stranger.cpp_FUN_005c6970
//   XREF to: Stack[0x8] (READ)
// 005c6974: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005c6978: ADD EAX,0x3fe64
// 005c697d: CMP EAX,EDX
// 005c697f: JNZ 0x005c6982
//   XREF to: 005c6982 (CONDITIONAL_JUMP)
// 005c6981: RET
// 005c6982: MOV ECX,dword ptr [EDX]
//   Label: LAB_005c6982
// 005c6984: MOV dword ptr [EAX],ECX
// 005c6986: MOV ECX,dword ptr [EDX + 0x4]
// 005c6989: MOV dword ptr [EAX + 0x4],ECX
// 005c698c: MOV ECX,dword ptr [EDX + 0x8]
// 005c698f: MOV dword ptr [EAX + 0x8],ECX
// 005c6992: RET
