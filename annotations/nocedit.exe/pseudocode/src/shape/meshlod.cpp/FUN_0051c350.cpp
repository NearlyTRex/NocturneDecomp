// Name: shape_meshlod.cpp_FUN_0051c350
// Address: 0051c350
// Address Range: [[0051c350, 0051c470]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051c350()

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051c350(void)

{
  uint uVar1;
  uint *in_stack_00000004;
  byte *in_stack_00000008;
  int in_stack_0000000c;
  
  if (0 < in_stack_0000000c) {
    do {
      while( true ) {
        uVar1 = *in_stack_00000004 ^ (uint)*in_stack_00000008 << 0x18;
        *in_stack_00000004 = uVar1;
        if ((*in_stack_00000004 & 0x80000000) == 0) {
          uVar1 = uVar1 * 2;
        }
        else {
          uVar1 = uVar1 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000004 = uVar1;
        if ((*in_stack_00000004 & 0x80000000) == 0) {
          uVar1 = *in_stack_00000004 * 2;
        }
        else {
          uVar1 = *in_stack_00000004 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000004 = uVar1;
        if ((*in_stack_00000004 & 0x80000000) == 0) {
          uVar1 = *in_stack_00000004 * 2;
        }
        else {
          uVar1 = *in_stack_00000004 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000004 = uVar1;
        if ((*in_stack_00000004 & 0x80000000) == 0) {
          uVar1 = *in_stack_00000004 * 2;
        }
        else {
          uVar1 = *in_stack_00000004 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000004 = uVar1;
        if ((*in_stack_00000004 & 0x80000000) == 0) {
          uVar1 = *in_stack_00000004 * 2;
        }
        else {
          uVar1 = *in_stack_00000004 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000004 = uVar1;
        if ((*in_stack_00000004 & 0x80000000) == 0) {
          uVar1 = *in_stack_00000004 * 2;
        }
        else {
          uVar1 = *in_stack_00000004 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000004 = uVar1;
        if ((*in_stack_00000004 & 0x80000000) == 0) {
          uVar1 = *in_stack_00000004 * 2;
        }
        else {
          uVar1 = *in_stack_00000004 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000004 = uVar1;
        if ((*in_stack_00000004 & 0x80000000) != 0) break;
        in_stack_00000008 = in_stack_00000008 + 1;
        in_stack_0000000c = in_stack_0000000c + -1;
        *in_stack_00000004 = *in_stack_00000004 * 2;
        if (in_stack_0000000c < 1) {
          return;
        }
      }
      in_stack_00000008 = in_stack_00000008 + 1;
      in_stack_0000000c = in_stack_0000000c + -1;
      *in_stack_00000004 = *in_stack_00000004 * 2 ^ 0x4c11db7;
    } while (0 < in_stack_0000000c);
  }
  return;
}


// Assembly code:
// 0051c350: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051c350
// 0051c351: PUSH ESI
// 0051c352: PUSH EDI
// 0051c353: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0051c357: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0051c35b: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0051c35f: TEST EDI,EDI
// 0051c361: JLE 0x0051c427
//   XREF to: 0051c427 (CONDITIONAL_JUMP)
// 0051c367: MOV EAX,EDX
// 0051c369: MOV BL,byte ptr [ECX]
//   Label: LAB_0051c369
// 0051c36b: AND EBX,0xff
// 0051c371: MOV ESI,dword ptr [EDX]
// 0051c373: SHL EBX,0x18
// 0051c376: XOR ESI,EBX
// 0051c378: MOV dword ptr [EDX],ESI
// 0051c37a: TEST byte ptr [EDX + 0x3],0x80
// 0051c37e: JZ 0x0051c42b
//   XREF to: 0051c42b (CONDITIONAL_JUMP)
// 0051c384: LEA EBX,[ESI + ESI*0x1]
// 0051c387: XOR EBX,0x4c11db7
// 0051c38d: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c38d
// 0051c38f: TEST byte ptr [EAX + 0x3],0x80
// 0051c393: JZ 0x0051c433
//   XREF to: 0051c433 (CONDITIONAL_JUMP)
// 0051c399: MOV EBX,dword ptr [EAX]
// 0051c39b: ADD EBX,EBX
// 0051c39d: XOR EBX,0x4c11db7
// 0051c3a3: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c3a3
// 0051c3a5: TEST byte ptr [EAX + 0x3],0x80
// 0051c3a9: JZ 0x0051c43c
//   XREF to: 0051c43c (CONDITIONAL_JUMP)
// 0051c3af: MOV EBX,dword ptr [EAX]
// 0051c3b1: ADD EBX,EBX
// 0051c3b3: XOR EBX,0x4c11db7
// 0051c3b9: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c3b9
// 0051c3bb: TEST byte ptr [EAX + 0x3],0x80
// 0051c3bf: JZ 0x0051c445
//   XREF to: 0051c445 (CONDITIONAL_JUMP)
// 0051c3c5: MOV EBX,dword ptr [EAX]
// 0051c3c7: ADD EBX,EBX
// 0051c3c9: XOR EBX,0x4c11db7
// 0051c3cf: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c3cf
// 0051c3d1: TEST byte ptr [EAX + 0x3],0x80
// 0051c3d5: JZ 0x0051c44b
//   XREF to: 0051c44b (CONDITIONAL_JUMP)
// 0051c3db: MOV EBX,dword ptr [EAX]
// 0051c3dd: ADD EBX,EBX
// 0051c3df: XOR EBX,0x4c11db7
// 0051c3e5: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c3e5
// 0051c3e7: TEST byte ptr [EAX + 0x3],0x80
// 0051c3eb: JZ 0x0051c451
//   XREF to: 0051c451 (CONDITIONAL_JUMP)
// 0051c3ed: MOV EBX,dword ptr [EAX]
// 0051c3ef: ADD EBX,EBX
// 0051c3f1: XOR EBX,0x4c11db7
// 0051c3f7: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c3f7
// 0051c3f9: TEST byte ptr [EAX + 0x3],0x80
// 0051c3fd: JZ 0x0051c457
//   XREF to: 0051c457 (CONDITIONAL_JUMP)
// 0051c3ff: MOV EBX,dword ptr [EAX]
// 0051c401: ADD EBX,EBX
// 0051c403: XOR EBX,0x4c11db7
// 0051c409: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c409
// 0051c40b: TEST byte ptr [EAX + 0x3],0x80
// 0051c40f: JZ 0x0051c45d
//   XREF to: 0051c45d (CONDITIONAL_JUMP)
// 0051c411: MOV ESI,dword ptr [EAX]
// 0051c413: ADD ESI,ESI
// 0051c415: XOR ESI,0x4c11db7
// 0051c41b: INC ECX
// 0051c41c: DEC EDI
// 0051c41d: MOV dword ptr [EAX],ESI
// 0051c41f: TEST EDI,EDI
// 0051c421: JG 0x0051c369
//   XREF to: 0051c369 (CONDITIONAL_JUMP)
// 0051c427: POP EDI
//   Label: LAB_0051c427
// 0051c428: POP ESI
// 0051c429: POP EBX
// 0051c42a: RET
// 0051c42b: LEA EBX,[ESI + ESI*0x1]
//   Label: LAB_0051c42b
// 0051c42e: JMP 0x0051c38d
//   XREF to: 0051c38d (UNCONDITIONAL_JUMP)
// 0051c433: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051c433
// 0051c435: ADD EBX,EBX
// 0051c437: JMP 0x0051c3a3
//   XREF to: 0051c3a3 (UNCONDITIONAL_JUMP)
// 0051c43c: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051c43c
// 0051c43e: ADD EBX,EBX
// 0051c440: JMP 0x0051c3b9
//   XREF to: 0051c3b9 (UNCONDITIONAL_JUMP)
// 0051c445: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051c445
// 0051c447: ADD EBX,EBX
// 0051c449: JMP 0x0051c3cf
//   XREF to: 0051c3cf (UNCONDITIONAL_JUMP)
// 0051c44b: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051c44b
// 0051c44d: ADD EBX,EBX
// 0051c44f: JMP 0x0051c3e5
//   XREF to: 0051c3e5 (UNCONDITIONAL_JUMP)
// 0051c451: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051c451
// 0051c453: ADD EBX,EBX
// 0051c455: JMP 0x0051c3f7
//   XREF to: 0051c3f7 (UNCONDITIONAL_JUMP)
// 0051c457: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051c457
// 0051c459: ADD EBX,EBX
// 0051c45b: JMP 0x0051c409
//   XREF to: 0051c409 (UNCONDITIONAL_JUMP)
// 0051c45d: MOV ESI,dword ptr [EAX]
//   Label: LAB_0051c45d
// 0051c45f: ADD ESI,ESI
// 0051c461: INC ECX
// 0051c462: DEC EDI
// 0051c463: MOV dword ptr [EAX],ESI
// 0051c465: TEST EDI,EDI
// 0051c467: JG 0x0051c369
//   XREF to: 0051c369 (CONDITIONAL_JUMP)
// 0051c46d: POP EDI
// 0051c46e: POP ESI
// 0051c46f: POP EBX
// 0051c470: RET
