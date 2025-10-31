// Name: core_skeledit.cpp_FUN_005995d0
// Address: 005995d0
// Address Range: [[005995d0, 00599628]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_005995d0()
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_005995d0(void)

{
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  *in_stack_0000000c = *in_stack_00000010;
  in_stack_0000000c[1] = in_stack_00000010[1];
  in_stack_0000000c[2] = in_stack_00000010[2];
  in_stack_0000000c[3] = in_stack_00000010[3];
  in_stack_0000000c[4] = in_stack_00000010[4];
  in_stack_0000000c[5] = in_stack_00000010[5];
  in_stack_0000000c[6] = in_stack_00000010[6];
  in_stack_0000000c[7] = in_stack_00000010[7];
  in_stack_0000000c[8] = in_stack_00000010[8];
  in_stack_0000000c[9] = in_stack_00000010[9];
  in_stack_0000000c[10] = in_stack_00000010[10];
  in_stack_0000000c[0xb] = in_stack_00000010[0xb];
  return;
}


// Assembly code:
// 005995d0: PUSH 0x4
//   Label: core_skeledit.cpp_FUN_005995d0
// 005995d5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 005995da: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005995de: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005995e2: MOV ECX,dword ptr [EDX]
// 005995e4: MOV dword ptr [EAX],ECX
// 005995e6: MOV ECX,dword ptr [EDX + 0x4]
// 005995e9: MOV dword ptr [EAX + 0x4],ECX
// 005995ec: MOV ECX,dword ptr [EDX + 0x8]
// 005995ef: MOV dword ptr [EAX + 0x8],ECX
// 005995f2: MOV ECX,dword ptr [EDX + 0xc]
// 005995f5: MOV dword ptr [EAX + 0xc],ECX
// 005995f8: MOV ECX,dword ptr [EDX + 0x10]
// 005995fb: MOV dword ptr [EAX + 0x10],ECX
// 005995fe: MOV ECX,dword ptr [EDX + 0x14]
// 00599601: MOV dword ptr [EAX + 0x14],ECX
// 00599604: MOV ECX,dword ptr [EDX + 0x18]
// 00599607: MOV dword ptr [EAX + 0x18],ECX
// 0059960a: MOV ECX,dword ptr [EDX + 0x1c]
// 0059960d: MOV dword ptr [EAX + 0x1c],ECX
// 00599610: MOV ECX,dword ptr [EDX + 0x20]
// 00599613: MOV dword ptr [EAX + 0x20],ECX
// 00599616: MOV ECX,dword ptr [EDX + 0x24]
// 00599619: MOV dword ptr [EAX + 0x24],ECX
// 0059961c: MOV ECX,dword ptr [EDX + 0x28]
// 0059961f: MOV dword ptr [EAX + 0x28],ECX
// 00599622: MOV ECX,dword ptr [EDX + 0x2c]
// 00599625: MOV dword ptr [EAX + 0x2c],ECX
// 00599628: RET
