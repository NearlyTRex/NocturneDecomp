// Name: crt_stack.c_ProbeStackSpace_FUN_005ffa2f
// Address: 005ffa2f
// Address Range: [[005ffa2f, 005ffa4e]]
// Convention: __stdcall
// Signature: void crt_stack.c_ProbeStackSpace_FUN_005ffa2f(uint size)
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f5c9 [UNCONDITIONAL_CALL]
//   crt_stack.c_check_stack_target_FUN_005ffa03 (005ffa03) at 005ffa1c [UNCONDITIONAL_CALL]
//   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 (00609e70) at 00609ecf [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __stdcall crt_stack_c_ProbeStackSpace_FUN_005ffa2f(uint size)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  
  iVar3 = -4;
  do {
    *(int *)(&stack0xfffffff8 + iVar3) = iVar3;
    iVar3 = iVar3 + -0x1000;
    uVar2 = size - 0x1000;
    bVar1 = 0xfff < (int)size;
    size = uVar2;
  } while (uVar2 != 0 && bVar1);
  return;
}


// Assembly code:
// 005ffa2f: PUSH EAX
//   Label: crt_stack.c_ProbeStackSpace_FUN_005ffa2f
// 005ffa30: PUSH EBX
// 005ffa31: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ffa35: MOV EBX,0xfffffffc
// 005ffa3a: MOV dword ptr [ESP + EBX*0x1],EBX
//   Label: LAB_005ffa3a
// 005ffa3d: SUB EBX,0x1000
// 005ffa43: SUB EAX,0x1000
// 005ffa48: JG 0x005ffa3a
//   XREF to: 005ffa3a (CONDITIONAL_JUMP)
// 005ffa4a: POP EBX
// 005ffa4b: POP EAX
// 005ffa4c: RET 0x4
