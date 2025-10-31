// Name: core_actor.cpp_FUN_0040ce30
// Address: 0040ce30
// Address Range: [[0040ce30, 0040cf01]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040ce30()
// Cross-references:
//   core_actor.cpp_FUN_0040cf10 (0040cf10) at 0040cf2b [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040cf90 (0040cf90) at 0040cfa7 [UNCONDITIONAL_CALL]
//   core_script.cpp_CalculateCRC_FUN_00560d80 (00560d80) at 00560db2 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void core_actor_cpp_FUN_0040ce30(void)

{
  uint uVar1;
  uint *in_stack_00000004;
  byte in_stack_00000008;
  
  uVar1 = *in_stack_00000004 ^ (uint)in_stack_00000008 << 0x18;
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
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *in_stack_00000004 = uVar1;
  if ((*in_stack_00000004 & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *in_stack_00000004 = uVar1;
  if ((*in_stack_00000004 & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
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
  if ((*in_stack_00000004 & 0x80000000) != 0) {
    *in_stack_00000004 = *in_stack_00000004 * 2 ^ 0x4c11db7;
    return;
  }
  *in_stack_00000004 = *in_stack_00000004 * 2;
  return;
}


// Assembly code:
// 0040ce30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_FUN_0040ce30
//   XREF to: Stack[0x4] (READ)
// 0040ce34: XOR EDX,EDX
// 0040ce36: MOV DL,byte ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0040ce3a: MOV ECX,dword ptr [EAX]
// 0040ce3c: SHL EDX,0x18
// 0040ce3f: XOR ECX,EDX
// 0040ce41: MOV dword ptr [EAX],ECX
// 0040ce43: TEST byte ptr [EAX + 0x3],0x80
// 0040ce47: JZ 0x0040ced7
//   XREF to: 0040ced7 (CONDITIONAL_JUMP)
// 0040ce4d: LEA EDX,[ECX + ECX*0x1]
// 0040ce50: XOR EDX,0x4c11db7
// 0040ce56: MOV dword ptr [EAX],EDX
//   Label: LAB_0040ce56
// 0040ce58: TEST byte ptr [EAX + 0x3],0x80
// 0040ce5c: JZ 0x0040cedf
//   XREF to: 0040cedf (CONDITIONAL_JUMP)
// 0040ce62: MOV EDX,dword ptr [EAX]
// 0040ce64: ADD EDX,EDX
// 0040ce66: XOR EDX,0x4c11db7
// 0040ce6c: MOV dword ptr [EAX],EDX
//   Label: LAB_0040ce6c
// 0040ce6e: TEST byte ptr [EAX + 0x3],0x80
// 0040ce72: JZ 0x0040cee5
//   XREF to: 0040cee5 (CONDITIONAL_JUMP)
// 0040ce78: ADD EDX,EDX
// 0040ce7a: XOR EDX,0x4c11db7
// 0040ce80: MOV dword ptr [EAX],EDX
//   Label: LAB_0040ce80
// 0040ce82: TEST byte ptr [EAX + 0x3],0x80
// 0040ce86: JZ 0x0040cee9
//   XREF to: 0040cee9 (CONDITIONAL_JUMP)
// 0040ce88: ADD EDX,EDX
// 0040ce8a: XOR EDX,0x4c11db7
// 0040ce90: MOV dword ptr [EAX],EDX
//   Label: LAB_0040ce90
// 0040ce92: TEST byte ptr [EAX + 0x3],0x80
// 0040ce96: JZ 0x0040ceed
//   XREF to: 0040ceed (CONDITIONAL_JUMP)
// 0040ce98: ADD EDX,EDX
// 0040ce9a: XOR EDX,0x4c11db7
// 0040cea0: MOV dword ptr [EAX],EDX
//   Label: LAB_0040cea0
// 0040cea2: TEST byte ptr [EAX + 0x3],0x80
// 0040cea6: JZ 0x0040cef1
//   XREF to: 0040cef1 (CONDITIONAL_JUMP)
// 0040cea8: ADD EDX,EDX
// 0040ceaa: XOR EDX,0x4c11db7
// 0040ceb0: MOV dword ptr [EAX],EDX
//   Label: LAB_0040ceb0
// 0040ceb2: TEST byte ptr [EAX + 0x3],0x80
// 0040ceb6: JZ 0x0040cef5
//   XREF to: 0040cef5 (CONDITIONAL_JUMP)
// 0040ceb8: MOV EDX,dword ptr [EAX]
// 0040ceba: ADD EDX,EDX
// 0040cebc: XOR EDX,0x4c11db7
// 0040cec2: MOV dword ptr [EAX],EDX
//   Label: LAB_0040cec2
// 0040cec4: TEST byte ptr [EAX + 0x3],0x80
// 0040cec8: JZ 0x0040cefb
//   XREF to: 0040cefb (CONDITIONAL_JUMP)
// 0040ceca: MOV EDX,dword ptr [EAX]
// 0040cecc: ADD EDX,EDX
// 0040cece: XOR EDX,0x4c11db7
// 0040ced4: MOV dword ptr [EAX],EDX
// 0040ced6: RET
// 0040ced7: LEA EDX,[ECX + ECX*0x1]
//   Label: LAB_0040ced7
// 0040ceda: JMP 0x0040ce56
//   XREF to: 0040ce56 (UNCONDITIONAL_JUMP)
// 0040cedf: MOV EDX,dword ptr [EAX]
//   Label: LAB_0040cedf
// 0040cee1: ADD EDX,EDX
// 0040cee3: JMP 0x0040ce6c
//   XREF to: 0040ce6c (UNCONDITIONAL_JUMP)
// 0040cee5: ADD EDX,EDX
//   Label: LAB_0040cee5
// 0040cee7: JMP 0x0040ce80
//   XREF to: 0040ce80 (UNCONDITIONAL_JUMP)
// 0040cee9: ADD EDX,EDX
//   Label: LAB_0040cee9
// 0040ceeb: JMP 0x0040ce90
//   XREF to: 0040ce90 (UNCONDITIONAL_JUMP)
// 0040ceed: ADD EDX,EDX
//   Label: LAB_0040ceed
// 0040ceef: JMP 0x0040cea0
//   XREF to: 0040cea0 (UNCONDITIONAL_JUMP)
// 0040cef1: ADD EDX,EDX
//   Label: LAB_0040cef1
// 0040cef3: JMP 0x0040ceb0
//   XREF to: 0040ceb0 (UNCONDITIONAL_JUMP)
// 0040cef5: MOV EDX,dword ptr [EAX]
//   Label: LAB_0040cef5
// 0040cef7: ADD EDX,EDX
// 0040cef9: JMP 0x0040cec2
//   XREF to: 0040cec2 (UNCONDITIONAL_JUMP)
// 0040cefb: MOV EDX,dword ptr [EAX]
//   Label: LAB_0040cefb
// 0040cefd: ADD EDX,EDX
// 0040ceff: MOV dword ptr [EAX],EDX
// 0040cf01: RET
