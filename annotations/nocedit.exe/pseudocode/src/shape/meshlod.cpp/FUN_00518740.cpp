// Name: shape_meshlod.cpp_FUN_00518740
// Address: 00518740
// Address Range: [[00518740, 00518789]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00518740()
// Cross-references:
//   shape_meshlod.cpp_FUN_00518490 (00518490) at 00518593 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_00518740(undefined4 param_1, undefined4 param_2) */

undefined4 shape_meshlod_cpp_FUN_00518740(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  iVar3 = 0;
  while( true ) {
    iVar2 = *(int *)(in_stack_00000004 + 4) + in_stack_00000008 * 0x4c4;
    if (*(int *)(iVar2 + 0x3f8) <= iVar1) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar2 + 0x3fc + iVar3) * 0xf0 + 0x24 + *(int *)(in_stack_00000004 + 0x48))
        < 2) break;
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 4;
  }
  return 1;
}


// Assembly code:
// 00518740: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00518740
// 00518741: PUSH ESI
// 00518742: PUSH EDI
// 00518743: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00518747: IMUL EDI,dword ptr [ESP + 0x14],0x4c4
//   XREF to: Stack[0x8] (READ)
// 0051874f: XOR EAX,EAX
// 00518751: XOR EDX,EDX
// 00518753: MOV ECX,dword ptr [ESI + 0x4]
//   Label: LAB_00518753
// 00518756: ADD ECX,EDI
// 00518758: CMP EAX,dword ptr [ECX + 0x3f8]
// 0051875e: JGE 0x00518784
//   XREF to: 00518784 (CONDITIONAL_JUMP)
// 00518760: IMUL ECX,dword ptr [ECX + EDX*0x1 + 0x3fc],0xf0
// 0051876b: MOV EBX,dword ptr [ESI + 0x48]
// 0051876e: CMP dword ptr [ECX + EBX*0x1 + 0x24],0x2
// 00518773: JL 0x0051877b
//   XREF to: 0051877b (CONDITIONAL_JUMP)
// 00518775: INC EAX
// 00518776: ADD EDX,0x4
// 00518779: JMP 0x00518753
//   XREF to: 00518753 (UNCONDITIONAL_JUMP)
// 0051877b: MOV EAX,0x1
//   Label: LAB_0051877b
// 00518780: POP EDI
// 00518781: POP ESI
// 00518782: POP EBX
// 00518783: RET
// 00518784: XOR EAX,EAX
//   Label: LAB_00518784
// 00518786: POP EDI
// 00518787: POP ESI
// 00518788: POP EBX
// 00518789: RET
