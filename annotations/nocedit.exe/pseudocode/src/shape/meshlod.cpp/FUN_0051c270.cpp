// Name: shape_meshlod.cpp_FUN_0051c270
// Address: 0051c270
// Address Range: [[0051c270, 0051c341]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051c270()

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051c270(void)

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
// 0051c270: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_FUN_0051c270
//   XREF to: Stack[0x4] (READ)
// 0051c274: XOR EDX,EDX
// 0051c276: MOV DL,byte ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0051c27a: MOV ECX,dword ptr [EAX]
// 0051c27c: SHL EDX,0x18
// 0051c27f: XOR ECX,EDX
// 0051c281: MOV dword ptr [EAX],ECX
// 0051c283: TEST byte ptr [EAX + 0x3],0x80
// 0051c287: JZ 0x0051c317
//   XREF to: 0051c317 (CONDITIONAL_JUMP)
// 0051c28d: LEA EDX,[ECX + ECX*0x1]
// 0051c290: XOR EDX,0x4c11db7
// 0051c296: MOV dword ptr [EAX],EDX
//   Label: LAB_0051c296
// 0051c298: TEST byte ptr [EAX + 0x3],0x80
// 0051c29c: JZ 0x0051c31f
//   XREF to: 0051c31f (CONDITIONAL_JUMP)
// 0051c2a2: MOV EDX,dword ptr [EAX]
// 0051c2a4: ADD EDX,EDX
// 0051c2a6: XOR EDX,0x4c11db7
// 0051c2ac: MOV dword ptr [EAX],EDX
//   Label: LAB_0051c2ac
// 0051c2ae: TEST byte ptr [EAX + 0x3],0x80
// 0051c2b2: JZ 0x0051c325
//   XREF to: 0051c325 (CONDITIONAL_JUMP)
// 0051c2b8: ADD EDX,EDX
// 0051c2ba: XOR EDX,0x4c11db7
// 0051c2c0: MOV dword ptr [EAX],EDX
//   Label: LAB_0051c2c0
// 0051c2c2: TEST byte ptr [EAX + 0x3],0x80
// 0051c2c6: JZ 0x0051c329
//   XREF to: 0051c329 (CONDITIONAL_JUMP)
// 0051c2c8: ADD EDX,EDX
// 0051c2ca: XOR EDX,0x4c11db7
// 0051c2d0: MOV dword ptr [EAX],EDX
//   Label: LAB_0051c2d0
// 0051c2d2: TEST byte ptr [EAX + 0x3],0x80
// 0051c2d6: JZ 0x0051c32d
//   XREF to: 0051c32d (CONDITIONAL_JUMP)
// 0051c2d8: ADD EDX,EDX
// 0051c2da: XOR EDX,0x4c11db7
// 0051c2e0: MOV dword ptr [EAX],EDX
//   Label: LAB_0051c2e0
// 0051c2e2: TEST byte ptr [EAX + 0x3],0x80
// 0051c2e6: JZ 0x0051c331
//   XREF to: 0051c331 (CONDITIONAL_JUMP)
// 0051c2e8: ADD EDX,EDX
// 0051c2ea: XOR EDX,0x4c11db7
// 0051c2f0: MOV dword ptr [EAX],EDX
//   Label: LAB_0051c2f0
// 0051c2f2: TEST byte ptr [EAX + 0x3],0x80
// 0051c2f6: JZ 0x0051c335
//   XREF to: 0051c335 (CONDITIONAL_JUMP)
// 0051c2f8: MOV EDX,dword ptr [EAX]
// 0051c2fa: ADD EDX,EDX
// 0051c2fc: XOR EDX,0x4c11db7
// 0051c302: MOV dword ptr [EAX],EDX
//   Label: LAB_0051c302
// 0051c304: TEST byte ptr [EAX + 0x3],0x80
// 0051c308: JZ 0x0051c33b
//   XREF to: 0051c33b (CONDITIONAL_JUMP)
// 0051c30a: MOV EDX,dword ptr [EAX]
// 0051c30c: ADD EDX,EDX
// 0051c30e: XOR EDX,0x4c11db7
// 0051c314: MOV dword ptr [EAX],EDX
// 0051c316: RET
// 0051c317: LEA EDX,[ECX + ECX*0x1]
//   Label: LAB_0051c317
// 0051c31a: JMP 0x0051c296
//   XREF to: 0051c296 (UNCONDITIONAL_JUMP)
// 0051c31f: MOV EDX,dword ptr [EAX]
//   Label: LAB_0051c31f
// 0051c321: ADD EDX,EDX
// 0051c323: JMP 0x0051c2ac
//   XREF to: 0051c2ac (UNCONDITIONAL_JUMP)
// 0051c325: ADD EDX,EDX
//   Label: LAB_0051c325
// 0051c327: JMP 0x0051c2c0
//   XREF to: 0051c2c0 (UNCONDITIONAL_JUMP)
// 0051c329: ADD EDX,EDX
//   Label: LAB_0051c329
// 0051c32b: JMP 0x0051c2d0
//   XREF to: 0051c2d0 (UNCONDITIONAL_JUMP)
// 0051c32d: ADD EDX,EDX
//   Label: LAB_0051c32d
// 0051c32f: JMP 0x0051c2e0
//   XREF to: 0051c2e0 (UNCONDITIONAL_JUMP)
// 0051c331: ADD EDX,EDX
//   Label: LAB_0051c331
// 0051c333: JMP 0x0051c2f0
//   XREF to: 0051c2f0 (UNCONDITIONAL_JUMP)
// 0051c335: MOV EDX,dword ptr [EAX]
//   Label: LAB_0051c335
// 0051c337: ADD EDX,EDX
// 0051c339: JMP 0x0051c302
//   XREF to: 0051c302 (UNCONDITIONAL_JUMP)
// 0051c33b: MOV EDX,dword ptr [EAX]
//   Label: LAB_0051c33b
// 0051c33d: ADD EDX,EDX
// 0051c33f: MOV dword ptr [EAX],EDX
// 0051c341: RET
