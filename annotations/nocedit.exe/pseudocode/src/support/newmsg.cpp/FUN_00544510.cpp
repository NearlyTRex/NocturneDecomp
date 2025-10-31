// Name: support_newmsg.cpp_FUN_00544510
// Address: 00544510
// Address Range: [[00544510, 00544538]]
// Convention: unknown
// Signature: undefined support_newmsg.cpp_FUN_00544510()
// Globals:
//   int g_MouseButtonFlags

#include "nocturne.h"

undefined4 support_newmsg_cpp_FUN_00544510(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  
  if (((g_MouseButtonFlags & in_stack_00000008) != 0) && (*(int *)(in_stack_00000004 + 0x25c) == 0))
  {
    *(undefined4 *)(in_stack_00000004 + 0x25c) = 1;
    return 0;
  }
  return 0;
}


// Assembly code:
// 00544510: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_newmsg.cpp_FUN_00544510
//   XREF to: Stack[0x4] (READ)
// 00544514: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00544518: TEST dword ptr [0x02cf6a94],ECX
//   XREF to: 02cf6a94 (READ)
// 0054451e: JZ 0x00544529
//   XREF to: 00544529 (CONDITIONAL_JUMP)
// 00544520: CMP dword ptr [EAX + 0x25c],0x0
// 00544527: JZ 0x0054452c
//   XREF to: 0054452c (CONDITIONAL_JUMP)
// 00544529: XOR EAX,EAX
//   Label: LAB_00544529
// 0054452b: RET
// 0054452c: MOV dword ptr [EAX + 0x25c],0x1
//   Label: LAB_0054452c
// 00544536: XOR EAX,EAX
// 00544538: RET
