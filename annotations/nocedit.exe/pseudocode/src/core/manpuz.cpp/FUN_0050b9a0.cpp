// Name: core_manpuz.cpp_FUN_0050b9a0
// Address: 0050b9a0
// Address Range: [[0050b9a0, 0050ba60]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b9a0()

#include "nocturne.h"

void core_manpuz_cpp_FUN_0050b9a0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  if (in_stack_00000004 + 3 != in_stack_00000008 + 3) {
    in_stack_00000004[3] = in_stack_00000008[3];
    in_stack_00000004[4] = in_stack_00000008[4];
    in_stack_00000004[5] = in_stack_00000008[5];
  }
  if (in_stack_00000004 + 6 != in_stack_00000008 + 6) {
    in_stack_00000004[6] = in_stack_00000008[6];
    in_stack_00000004[7] = in_stack_00000008[7];
    in_stack_00000004[8] = in_stack_00000008[8];
  }
  in_stack_00000004[9] = in_stack_00000008[9];
  in_stack_00000004[10] = in_stack_00000008[10];
  in_stack_00000004[0xb] = in_stack_00000008[0xb];
  in_stack_00000004[0xc] = in_stack_00000008[0xc];
  in_stack_00000004[0xd] = in_stack_00000008[0xd];
  in_stack_00000004[0xe] = in_stack_00000008[0xe];
  in_stack_00000004[0xf] = in_stack_00000008[0xf];
  in_stack_00000004[0x10] = in_stack_00000008[0x10];
  in_stack_00000004[0x11] = in_stack_00000008[0x11];
  in_stack_00000004[0x12] = in_stack_00000008[0x12];
  in_stack_00000004[0x13] = in_stack_00000008[0x13];
  in_stack_00000004[0x14] = in_stack_00000008[0x14];
  in_stack_00000004[0x15] = in_stack_00000008[0x15];
  if (in_stack_00000004 + 0x16 == in_stack_00000008 + 0x16) {
    return;
  }
  in_stack_00000004[0x16] = in_stack_00000008[0x16];
  in_stack_00000004[0x17] = in_stack_00000008[0x17];
  in_stack_00000004[0x18] = in_stack_00000008[0x18];
  return;
}


// Assembly code:
// 0050b9a0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b9a0
// 0050b9a1: PUSH ESI
// 0050b9a2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050b9a6: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050b9aa: MOV ECX,dword ptr [EDX]
// 0050b9ac: MOV dword ptr [EAX],ECX
// 0050b9ae: LEA EBX,[EDX + 0xc]
// 0050b9b1: FLD float ptr [EDX + 0x4]
// 0050b9b4: LEA ECX,[EAX + 0xc]
// 0050b9b7: FSTP float ptr [EAX + 0x4]
// 0050b9ba: MOV ESI,dword ptr [EDX + 0x8]
// 0050b9bd: MOV dword ptr [EAX + 0x8],ESI
// 0050b9c0: CMP ECX,EBX
// 0050b9c2: JNZ 0x0050ba39
//   XREF to: 0050ba39 (CONDITIONAL_JUMP)
// 0050b9c4: LEA EBX,[EDX + 0x18]
//   Label: LAB_0050b9c4
// 0050b9c7: LEA ECX,[EAX + 0x18]
// 0050b9ca: CMP ECX,EBX
// 0050b9cc: JZ 0x0050b9de
//   XREF to: 0050b9de (CONDITIONAL_JUMP)
// 0050b9ce: MOV ESI,dword ptr [EBX]
// 0050b9d0: MOV dword ptr [ECX],ESI
// 0050b9d2: MOV ESI,dword ptr [EBX + 0x4]
// 0050b9d5: MOV dword ptr [ECX + 0x4],ESI
// 0050b9d8: MOV ESI,dword ptr [EBX + 0x8]
// 0050b9db: MOV dword ptr [ECX + 0x8],ESI
// 0050b9de: MOV ECX,dword ptr [EDX + 0x24]
//   Label: LAB_0050b9de
// 0050b9e1: MOV dword ptr [EAX + 0x24],ECX
// 0050b9e4: MOV ECX,dword ptr [EDX + 0x28]
// 0050b9e7: MOV dword ptr [EAX + 0x28],ECX
// 0050b9ea: MOV ECX,dword ptr [EDX + 0x2c]
// 0050b9ed: MOV dword ptr [EAX + 0x2c],ECX
// 0050b9f0: MOV ECX,dword ptr [EDX + 0x30]
// 0050b9f3: MOV dword ptr [EAX + 0x30],ECX
// 0050b9f6: MOV ECX,dword ptr [EDX + 0x34]
// 0050b9f9: MOV dword ptr [EAX + 0x34],ECX
// 0050b9fc: MOV ECX,dword ptr [EDX + 0x38]
// 0050b9ff: MOV dword ptr [EAX + 0x38],ECX
// 0050ba02: MOV ECX,dword ptr [EDX + 0x3c]
// 0050ba05: MOV dword ptr [EAX + 0x3c],ECX
// 0050ba08: MOV ECX,dword ptr [EDX + 0x40]
// 0050ba0b: MOV dword ptr [EAX + 0x40],ECX
// 0050ba0e: MOV ECX,dword ptr [EDX + 0x44]
// 0050ba11: MOV dword ptr [EAX + 0x44],ECX
// 0050ba14: MOV ECX,dword ptr [EDX + 0x48]
// 0050ba17: MOV dword ptr [EAX + 0x48],ECX
// 0050ba1a: MOV ECX,dword ptr [EDX + 0x4c]
// 0050ba1d: MOV dword ptr [EAX + 0x4c],ECX
// 0050ba20: MOV ECX,dword ptr [EDX + 0x50]
// 0050ba23: MOV dword ptr [EAX + 0x50],ECX
// 0050ba26: MOV ECX,dword ptr [EDX + 0x54]
// 0050ba29: ADD EDX,0x58
// 0050ba2c: MOV dword ptr [EAX + 0x54],ECX
// 0050ba2f: LEA ECX,[EAX + 0x58]
// 0050ba32: CMP ECX,EDX
// 0050ba34: JNZ 0x0050ba4e
//   XREF to: 0050ba4e (CONDITIONAL_JUMP)
// 0050ba36: POP ESI
// 0050ba37: POP EBX
// 0050ba38: RET
// 0050ba39: MOV ESI,dword ptr [EBX]
//   Label: LAB_0050ba39
// 0050ba3b: MOV dword ptr [ECX],ESI
// 0050ba3d: MOV ESI,dword ptr [EBX + 0x4]
// 0050ba40: MOV dword ptr [ECX + 0x4],ESI
// 0050ba43: MOV ESI,dword ptr [EBX + 0x8]
// 0050ba46: MOV dword ptr [ECX + 0x8],ESI
// 0050ba49: JMP 0x0050b9c4
//   XREF to: 0050b9c4 (UNCONDITIONAL_JUMP)
// 0050ba4e: MOV EBX,dword ptr [EDX]
//   Label: LAB_0050ba4e
// 0050ba50: MOV dword ptr [ECX],EBX
// 0050ba52: MOV EBX,dword ptr [EDX + 0x4]
// 0050ba55: MOV dword ptr [ECX + 0x4],EBX
// 0050ba58: MOV EBX,dword ptr [EDX + 0x8]
// 0050ba5b: MOV dword ptr [ECX + 0x8],EBX
// 0050ba5e: POP ESI
// 0050ba5f: POP EBX
// 0050ba60: RET
