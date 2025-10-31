// Name: support_newmsg.cpp_FUN_00544540
// Address: 00544540
// Address Range: [[00544540, 00544593]]
// Convention: unknown
// Signature: undefined support_newmsg.cpp_FUN_00544540()
// Globals:
//   int g_MouseButtonFlags

#include "nocturne.h"

undefined4 support_newmsg_cpp_FUN_00544540(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  if ((g_MouseButtonFlags & in_stack_00000008) != 0) {
    if (*(int *)(in_stack_00000004 + 0x25c) == 0) {
      if (in_stack_0000000c == 0) {
        *(undefined4 *)(in_stack_00000004 + 0x25c) = 1;
      }
      else {
        *(undefined4 *)(in_stack_00000004 + 0x25c) = 2;
      }
    }
    g_MouseButtonFlags = g_MouseButtonFlags & (in_stack_00000008 ^ 0xff);
    return 1;
  }
  return 0;
}


// Assembly code:
// 00544540: MOV ECX,dword ptr [0x02cf6a94]
//   Label: support_newmsg.cpp_FUN_00544540
//   XREF to: 02cf6a94 (READ)
// 00544546: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0054454a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0054454e: TEST ECX,EAX
// 00544550: JZ 0x0054458b
//   XREF to: 0054458b (CONDITIONAL_JUMP)
// 00544552: PUSH EBX
// 00544553: XOR AL,0xff
// 00544555: MOV EBX,dword ptr [EDX + 0x25c]
// 0054455b: AND ECX,EAX
// 0054455d: TEST EBX,EBX
// 0054455f: JNZ 0x00544572
//   XREF to: 00544572 (CONDITIONAL_JUMP)
// 00544561: CMP dword ptr [ESP + 0x10],0x0
//   XREF to: Stack[0xc] (READ)
// 00544566: JZ 0x0054457f
//   XREF to: 0054457f (CONDITIONAL_JUMP)
// 00544568: MOV dword ptr [EDX + 0x25c],0x2
// 00544572: MOV EAX,0x1
//   Label: LAB_00544572
// 00544577: POP EBX
// 00544578: MOV dword ptr [0x02cf6a94],ECX
//   XREF to: 02cf6a94 (WRITE)
// 0054457e: RET
// 0054457f: MOV dword ptr [EDX + 0x25c],0x1
//   Label: LAB_0054457f
// 00544589: JMP 0x00544572
//   XREF to: 00544572 (UNCONDITIONAL_JUMP)
// 0054458b: XOR EAX,EAX
//   Label: LAB_0054458b
// 0054458d: MOV dword ptr [0x02cf6a94],ECX
//   XREF to: 02cf6a94 (WRITE)
// 00544593: RET
