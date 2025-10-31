// Name: core_manpuz.cpp_FUN_005092e0
// Address: 005092e0
// Address Range: [[005092e0, 0050931f]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005092e0()

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_005092e0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_005092e0(void)

{
  float fVar1;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x1508);
  in_stack_00000008[1] = 0.0;
  *in_stack_00000008 = -fVar1;
  in_stack_00000008[2] = -*(float *)(in_stack_00000004 + 0x1508);
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x1508);
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x1510);
  in_stack_00000008[5] = *(float *)(in_stack_00000004 + 0x1508);
  return;
}


// Assembly code:
// 005092e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_manpuz.cpp_FUN_005092e0
//   XREF to: Stack[0x4] (READ)
// 005092e4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005092e8: FLD float ptr [EDX + 0x1508]
// 005092ee: MOV dword ptr [EAX + 0x4],0x0
// 005092f5: FCHS
// 005092f7: FSTP float ptr [EAX]
// 005092f9: FLD float ptr [EDX + 0x1508]
// 005092ff: FCHS
// 00509301: FSTP float ptr [EAX + 0x8]
// 00509304: MOV ECX,dword ptr [EDX + 0x1508]
// 0050930a: MOV dword ptr [EAX + 0xc],ECX
// 0050930d: MOV ECX,dword ptr [EDX + 0x1510]
// 00509313: MOV dword ptr [EAX + 0x10],ECX
// 00509316: MOV ECX,dword ptr [EDX + 0x1508]
// 0050931c: MOV dword ptr [EAX + 0x14],ECX
// 0050931f: RET
