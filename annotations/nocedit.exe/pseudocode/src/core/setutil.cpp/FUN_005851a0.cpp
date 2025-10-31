// Name: core_setutil.cpp_FUN_005851a0
// Address: 005851a0
// Address Range: [[005851a0, 005851c0]]
// Convention: unknown
// Signature: undefined core_setutil.cpp_FUN_005851a0()

#include "nocturne.h"

void core_setutil_cpp_FUN_005851a0(void)

{
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if ((undefined4 *)(in_stack_00000004 + 4) == in_stack_00000008) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 4) = *in_stack_00000008;
  *(undefined4 *)(in_stack_00000004 + 8) = in_stack_00000008[1];
  *(undefined4 *)(in_stack_00000004 + 0xc) = in_stack_00000008[2];
  return;
}


// Assembly code:
// 005851a0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_setutil.cpp_FUN_005851a0
//   XREF to: Stack[0x8] (READ)
// 005851a4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005851a8: ADD EAX,0x4
// 005851ab: CMP EAX,EDX
// 005851ad: JNZ 0x005851b0
//   XREF to: 005851b0 (CONDITIONAL_JUMP)
// 005851af: RET
// 005851b0: MOV ECX,dword ptr [EDX]
//   Label: LAB_005851b0
// 005851b2: MOV dword ptr [EAX],ECX
// 005851b4: MOV ECX,dword ptr [EDX + 0x4]
// 005851b7: MOV dword ptr [EAX + 0x4],ECX
// 005851ba: MOV ECX,dword ptr [EDX + 0x8]
// 005851bd: MOV dword ptr [EAX + 0x8],ECX
// 005851c0: RET
