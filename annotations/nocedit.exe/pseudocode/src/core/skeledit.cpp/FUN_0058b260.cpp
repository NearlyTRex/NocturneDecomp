// Name: core_skeledit.cpp_FUN_0058b260
// Address: 0058b260
// Address Range: [[0058b260, 0058b2b8]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b260()
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058b260(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_0000000c;
  float in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(8);
  iVar3 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x2936c)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(in_stack_0000000c + 0x29374);
      iVar3 = iVar3 + 1;
      *(float *)(iVar2 + iVar1) = *(float *)(iVar2 + iVar1) * in_stack_00000010;
      *(float *)(iVar2 + 4 + iVar1) = *(float *)(iVar2 + 4 + iVar1) * in_stack_00000010;
      *(float *)(iVar2 + 8 + iVar1) = *(float *)(iVar2 + 8 + iVar1) * in_stack_00000010;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)(in_stack_0000000c + 0x2936c));
  }
  return;
}


// Assembly code:
// 0058b260: PUSH 0x8
//   Label: core_skeledit.cpp_FUN_0058b260
// 0058b265: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058b26a: PUSH EBX
// 0058b26b: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0058b26f: MOV ECX,dword ptr [EBX + 0x2936c]
// 0058b275: XOR EDX,EDX
// 0058b277: TEST ECX,ECX
// 0058b279: JLE 0x0058b2b7
//   XREF to: 0058b2b7 (CONDITIONAL_JUMP)
// 0058b27b: PUSH ESI
// 0058b27c: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0058b280: XOR ECX,ECX
// 0058b282: MOV EAX,dword ptr [EBX + 0x29374]
//   Label: LAB_0058b282
// 0058b288: FLD float ptr [ECX + EAX*0x1]
// 0058b28b: FMUL ST1
// 0058b28d: FLD float ptr [ECX + EAX*0x1 + 0x4]
// 0058b291: FMUL ST2
// 0058b293: FLD float ptr [ECX + EAX*0x1 + 0x8]
// 0058b297: FMUL ST3
// 0058b299: INC EDX
// 0058b29a: FXCH ST2
// 0058b29c: FSTP float ptr [ECX + EAX*0x1]
// 0058b29f: FSTP float ptr [ECX + EAX*0x1 + 0x4]
// 0058b2a3: FSTP float ptr [ECX + EAX*0x1 + 0x8]
// 0058b2a7: MOV ESI,dword ptr [EBX + 0x2936c]
// 0058b2ad: ADD ECX,0xc
// 0058b2b0: CMP EDX,ESI
// 0058b2b2: JL 0x0058b282
//   XREF to: 0058b282 (CONDITIONAL_JUMP)
// 0058b2b4: FSTP ST0
// 0058b2b6: POP ESI
// 0058b2b7: POP EBX
//   Label: LAB_0058b2b7
// 0058b2b8: RET
