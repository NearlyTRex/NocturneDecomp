// Name: shape_meshlod.cpp_FUN_0051efe0
// Address: 0051efe0
// Address Range: [[0051efe0, 0051f079]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051efe0()
// Function calls:
//   crt_unknown.c_FUN_006020c2

#include "nocturne.h"

undefined4 * shape_meshlod_cpp_FUN_0051efe0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  bVar4 = 0;
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  in_stack_00000004[3] = in_stack_00000008[3];
  in_stack_00000004[4] = in_stack_00000008[4];
  in_stack_00000004[5] = in_stack_00000008[5];
  in_stack_00000004[6] = in_stack_00000008[6];
  puVar2 = in_stack_00000008 + 7;
  puVar3 = in_stack_00000004 + 7;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_stack_00000004[0xd] = in_stack_00000008[0xd];
  in_stack_00000004[0xe] = in_stack_00000008[0xe];
  in_stack_00000004[0xf] = in_stack_00000008[0xf];
  in_stack_00000004[0x10] = in_stack_00000008[0x10];
  if (in_stack_00000004 + 0x11 != in_stack_00000008 + 0x11) {
    in_stack_00000004[0x11] = in_stack_00000008[0x11];
    in_stack_00000004[0x12] = in_stack_00000008[0x12];
    in_stack_00000004[0x13] = in_stack_00000008[0x13];
  }
  in_stack_00000004[0x14] = in_stack_00000008[0x14];
  crt_unknown_c_FUN_006020c2();
  in_stack_00000004[0x1e] = in_stack_00000008[0x1e];
  in_stack_00000004[(uint)bVar4 * -2 + 0x1f] = in_stack_00000008[(uint)bVar4 * -2 + 0x1f];
  (in_stack_00000004 + (uint)bVar4 * -2 + 0x1f)[(uint)bVar4 * -2 + 1] =
       (in_stack_00000008 + (uint)bVar4 * -2 + 0x1f)[(uint)bVar4 * -2 + 1];
  in_stack_00000004[0x21] = in_stack_00000008[0x21];
  in_stack_00000004[0x22] = in_stack_00000008[0x22];
  return in_stack_00000004;
}


// Assembly code:
// 0051efe0: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051efe0
// 0051efe1: PUSH ESI
// 0051efe2: PUSH EDI
// 0051efe3: PUSH EBP
// 0051efe4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051efe8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051efec: MOV EDI,EBX
// 0051efee: MOV ESI,EBP
// 0051eff0: MOVSD ES:EDI,ESI
// 0051eff1: MOVSD ES:EDI,ESI
// 0051eff2: MOVSD ES:EDI,ESI
// 0051eff3: MOVSD ES:EDI,ESI
// 0051eff4: LEA EDI,[EBX + 0x10]
// 0051eff7: LEA ESI,[EBP + 0x10]
// 0051effa: MOVSD ES:EDI,ESI
// 0051effb: MOVSD ES:EDI,ESI
// 0051effc: MOVSD ES:EDI,ESI
// 0051effd: MOV ECX,0x6
// 0051f002: LEA EDI,[EBX + 0x1c]
// 0051f005: LEA ESI,[EBP + 0x1c]
// 0051f008: MOVSD.REP ES:EDI,ESI
// 0051f00a: LEA EDI,[EBX + 0x34]
// 0051f00d: LEA ESI,[EBP + 0x34]
// 0051f010: MOVSD ES:EDI,ESI
// 0051f011: MOVSD ES:EDI,ESI
// 0051f012: MOVSD ES:EDI,ESI
// 0051f013: MOV EAX,dword ptr [EBP + 0x40]
// 0051f016: LEA EDX,[EBP + 0x44]
// 0051f019: MOV dword ptr [EBX + 0x40],EAX
// 0051f01c: LEA EAX,[EBX + 0x44]
// 0051f01f: CMP EAX,EDX
// 0051f021: JZ 0x0051f033
//   XREF to: 0051f033 (CONDITIONAL_JUMP)
// 0051f023: MOV ECX,dword ptr [EDX]
// 0051f025: MOV dword ptr [EAX],ECX
// 0051f027: MOV ECX,dword ptr [EDX + 0x4]
// 0051f02a: MOV dword ptr [EAX + 0x4],ECX
// 0051f02d: MOV ECX,dword ptr [EDX + 0x8]
// 0051f030: MOV dword ptr [EAX + 0x8],ECX
// 0051f033: PUSH 0x410360
//   Label: LAB_0051f033
//   XREF to: 00410360 (DATA)
// 0051f038: PUSH 0xc
// 0051f03a: PUSH 0x3
// 0051f03c: LEA EAX,[EBP + 0x54]
// 0051f03f: PUSH EAX
// 0051f040: LEA EAX,[EBX + 0x54]
// 0051f043: FLD float ptr [EBP + 0x50]
// 0051f046: PUSH EAX
// 0051f047: FSTP float ptr [EBX + 0x50]
// 0051f04a: CALL crt_unknown.c_FUN_006020c2
//   XREF to: 006020c2 (UNCONDITIONAL_CALL)
// 0051f04f: LEA EDI,[EBX + 0x78]
// 0051f052: LEA ESI,[EBP + 0x78]
// 0051f055: MOVSD ES:EDI,ESI
// 0051f056: MOVSD ES:EDI,ESI
// 0051f057: MOVSD ES:EDI,ESI
// 0051f058: MOV EAX,dword ptr [EBP + 0x84]
// 0051f05e: MOV dword ptr [EBX + 0x84],EAX
// 0051f064: MOV EAX,dword ptr [EBP + 0x88]
// 0051f06a: ADD ESP,0x14
// 0051f06d: MOV dword ptr [EBX + 0x88],EAX
// 0051f073: MOV EAX,EBX
// 0051f075: POP EBP
// 0051f076: POP EDI
// 0051f077: POP ESI
// 0051f078: POP EBX
// 0051f079: RET
