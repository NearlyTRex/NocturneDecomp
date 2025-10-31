// Name: shape_superopt.cpp_FUN_005d3650
// Address: 005d3650
// Address Range: [[005d3650, 005d36a1]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3650()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3650(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005d3650(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  uVar1 = in_stack_00000004[1];
  uVar2 = 0;
  if (*in_stack_00000004 != 0) {
    do {
      if ((*(uint *)(uVar1 + 0x30) & in_stack_0000000c) == in_stack_0000000c) {
        *(uint *)(uVar1 + 0x34) = *(uint *)(uVar1 + 0x34) | in_stack_00000008;
      }
      else {
        *(uint *)(uVar1 + 0x34) = *(uint *)(uVar1 + 0x34) & ~in_stack_00000008;
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 + 0x38;
    } while (uVar2 < *in_stack_00000004);
  }
  (**(code **)(in_stack_00000004[6] + 0x8c))();
  return;
}


// Assembly code:
// 005d3650: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d3650
// 005d3651: PUSH ESI
// 005d3652: PUSH EDI
// 005d3653: PUSH EBP
// 005d3654: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3658: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d365c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d3660: MOV ECX,dword ptr [EDI]
// 005d3662: MOV EAX,dword ptr [EDI + 0x4]
// 005d3665: XOR EDX,EDX
// 005d3667: TEST ECX,ECX
// 005d3669: JBE 0x005d3681
//   XREF to: 005d3681 (CONDITIONAL_JUMP)
// 005d366b: MOV ECX,dword ptr [EAX + 0x30]
//   Label: LAB_005d366b
// 005d366e: AND ECX,ESI
// 005d3670: CMP ECX,ESI
// 005d3672: JNZ 0x005d3694
//   XREF to: 005d3694 (CONDITIONAL_JUMP)
// 005d3674: OR dword ptr [EAX + 0x34],EBX
// 005d3677: INC EDX
//   Label: LAB_005d3677
// 005d3678: MOV EBP,dword ptr [EDI]
// 005d367a: ADD EAX,0x38
// 005d367d: CMP EDX,EBP
// 005d367f: JC 0x005d366b
//   XREF to: 005d366b (CONDITIONAL_JUMP)
// 005d3681: PUSH EBX
//   Label: LAB_005d3681
// 005d3682: MOV EAX,dword ptr [EDI + 0x18]
// 005d3685: PUSH EDI
// 005d3686: CALL dword ptr [EAX + 0x8c]
// 005d368c: ADD ESP,0x8
// 005d368f: POP EBP
// 005d3690: POP EDI
// 005d3691: POP ESI
// 005d3692: POP EBX
// 005d3693: RET
// 005d3694: MOV ECX,EBX
//   Label: LAB_005d3694
// 005d3696: MOV EBP,dword ptr [EAX + 0x34]
// 005d3699: NOT ECX
// 005d369b: AND EBP,ECX
// 005d369d: MOV dword ptr [EAX + 0x34],EBP
// 005d36a0: JMP 0x005d3677
//   XREF to: 005d3677 (UNCONDITIONAL_JUMP)
