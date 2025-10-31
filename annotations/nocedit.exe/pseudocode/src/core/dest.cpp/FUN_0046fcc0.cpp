// Name: core_dest.cpp_FUN_0046fcc0
// Address: 0046fcc0
// Address Range: [[0046fcc0, 0046fd4b]]
// Convention: unknown
// Signature: undefined core_dest.cpp_FUN_0046fcc0()

#include "nocturne.h"

/* Signature: undefined1 actors_other_dest.cpp_FUN_0046fcc0(undefined4 param_1, undefined4 param_2)
    */

undefined4 * core_dest_cpp_FUN_0046fcc0(void)

{
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x158) == 0) {
    *in_stack_00000008 = 0xbf800000;
    in_stack_00000008[1] = 0xbdcccccd;
    in_stack_00000008[2] = 0xbf800000;
    in_stack_00000008[3] = 0x3f800000;
    in_stack_00000008[4] = 0x40066666;
    in_stack_00000008[5] = 0x3f800000;
    return in_stack_00000008;
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x158) + 0x154) + 0x14))();
  return in_stack_00000008;
}


// Assembly code:
// 0046fcc0: PUSH EBX
//   Label: core_dest.cpp_FUN_0046fcc0
// 0046fcc1: PUSH EBP
// 0046fcc2: SUB ESP,0x18
// 0046fcc5: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0046fcc9: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0046fccd: MOV EDX,dword ptr [EAX + 0x158]
// 0046fcd3: TEST EDX,EDX
// 0046fcd5: JNZ 0x0046fd34
//   XREF to: 0046fd34 (CONDITIONAL_JUMP)
// 0046fcd7: PUSH ESI
// 0046fcd8: MOV ESI,0xbdcccccd
// 0046fcdd: MOV ECX,0xbf800000
// 0046fce2: MOV EBP,0x3f800000
// 0046fce7: MOV EAX,0x40066666
// 0046fcec: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0046fcf0: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0046fcf4: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0046fcf8: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0046fcfc: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0xc] (WRITE)
// 0046fd00: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0046fd04: MOV dword ptr [EBX],ECX
// 0046fd06: LEA EDX,[EBX + 0x4]
// 0046fd09: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0046fd0d: MOV dword ptr [EDX],EAX
// 0046fd0f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0046fd13: MOV dword ptr [EDX + 0x4],EAX
// 0046fd16: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0046fd1a: MOV dword ptr [EDX + 0x8],EAX
// 0046fd1d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 0046fd21: MOV dword ptr [EDX + 0xc],EAX
// 0046fd24: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xc] (READ)
// 0046fd28: MOV dword ptr [EDX + 0x10],EAX
// 0046fd2b: POP ESI
// 0046fd2c: MOV EAX,EBX
// 0046fd2e: ADD ESP,0x18
// 0046fd31: POP EBP
// 0046fd32: POP EBX
// 0046fd33: RET
// 0046fd34: PUSH EBX
//   Label: LAB_0046fd34
// 0046fd35: MOV EAX,EDX
// 0046fd37: PUSH EAX
// 0046fd38: MOV EDX,dword ptr [EDX + 0x154]
// 0046fd3e: CALL dword ptr [EDX + 0x14]
// 0046fd41: ADD ESP,0x8
// 0046fd44: MOV EAX,EBX
// 0046fd46: ADD ESP,0x18
// 0046fd49: POP EBP
// 0046fd4a: POP EBX
// 0046fd4b: RET
