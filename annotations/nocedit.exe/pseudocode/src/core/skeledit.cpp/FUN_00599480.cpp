// Name: core_skeledit.cpp_FUN_00599480
// Address: 00599480
// Address Range: [[00599480, 0059954b]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00599480()
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_00599480(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  
  bVar4 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  puVar2 = in_stack_00000010;
  puVar3 = in_stack_0000000c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  in_stack_0000000c[8] = in_stack_00000010[8];
  in_stack_0000000c[9] = in_stack_00000010[9];
  in_stack_0000000c[10] = in_stack_00000010[10];
  in_stack_0000000c[0xb] = in_stack_00000010[0xb];
  in_stack_0000000c[0xc] = in_stack_00000010[0xc];
  in_stack_0000000c[0xd] = in_stack_00000010[0xd];
  in_stack_0000000c[0xe] = in_stack_00000010[0xe];
  in_stack_0000000c[0xf] = in_stack_00000010[0xf];
  in_stack_0000000c[0x10] = in_stack_00000010[0x10];
  in_stack_0000000c[0x11] = in_stack_00000010[0x11];
  in_stack_0000000c[0x12] = in_stack_00000010[0x12];
  in_stack_0000000c[0x13] = in_stack_00000010[0x13];
  in_stack_0000000c[0x14] = in_stack_00000010[0x14];
  in_stack_0000000c[0x15] = in_stack_00000010[0x15];
  in_stack_0000000c[0x16] = in_stack_00000010[0x16];
  in_stack_0000000c[0x17] = in_stack_00000010[0x17];
  in_stack_0000000c[0x18] = in_stack_00000010[0x18];
  in_stack_0000000c[0x19] = in_stack_00000010[0x19];
  in_stack_0000000c[0x1a] = in_stack_00000010[0x1a];
  in_stack_0000000c[0x1b] = in_stack_00000010[0x1b];
  in_stack_0000000c[0x1c] = in_stack_00000010[0x1c];
  in_stack_0000000c[0x1d] = in_stack_00000010[0x1d];
  in_stack_0000000c[0x1e] = in_stack_00000010[0x1e];
  in_stack_0000000c[0x1f] = in_stack_00000010[0x1f];
  in_stack_0000000c[0x20] = in_stack_00000010[0x20];
  return;
}


// Assembly code:
// 00599480: PUSH 0x10
//   Label: core_skeledit.cpp_FUN_00599480
// 00599485: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0059948a: PUSH EBX
// 0059948b: PUSH ESI
// 0059948c: PUSH EDI
// 0059948d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00599491: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00599495: MOV ECX,0x7
// 0059949a: MOV EDI,EAX
// 0059949c: MOV ESI,EBX
// 0059949e: ADD EAX,0x24
// 005994a1: MOVSD.REP ES:EDI,ESI
// 005994a3: MOVSW ES:EDI,ESI
// 005994a5: ADD EAX,0x30
// 005994a8: MOV EDX,dword ptr [EBX + 0x20]
// 005994ab: MOV dword ptr [EAX + -0x34],EDX
// 005994ae: LEA EDX,[EBX + 0x24]
// 005994b1: SUB EAX,0x54
// 005994b4: MOV ECX,dword ptr [EDX]
// 005994b6: MOV dword ptr [EAX + 0x24],ECX
// 005994b9: MOV ECX,dword ptr [EDX + 0x4]
// 005994bc: MOV dword ptr [EAX + 0x28],ECX
// 005994bf: MOV ECX,dword ptr [EDX + 0x8]
// 005994c2: MOV dword ptr [EAX + 0x2c],ECX
// 005994c5: MOV ECX,dword ptr [EDX + 0xc]
// 005994c8: MOV dword ptr [EAX + 0x30],ECX
// 005994cb: MOV ECX,dword ptr [EDX + 0x10]
// 005994ce: MOV dword ptr [EAX + 0x34],ECX
// 005994d1: MOV ECX,dword ptr [EDX + 0x14]
// 005994d4: MOV dword ptr [EAX + 0x38],ECX
// 005994d7: MOV ECX,dword ptr [EDX + 0x18]
// 005994da: MOV dword ptr [EAX + 0x3c],ECX
// 005994dd: MOV ECX,dword ptr [EDX + 0x1c]
// 005994e0: MOV dword ptr [EAX + 0x40],ECX
// 005994e3: MOV ECX,dword ptr [EDX + 0x20]
// 005994e6: MOV dword ptr [EAX + 0x44],ECX
// 005994e9: MOV ECX,dword ptr [EDX + 0x24]
// 005994ec: MOV dword ptr [EAX + 0x48],ECX
// 005994ef: MOV ECX,dword ptr [EDX + 0x28]
// 005994f2: MOV dword ptr [EAX + 0x4c],ECX
// 005994f5: FLD float ptr [EDX + 0x2c]
// 005994f8: LEA EDX,[EBX + 0x54]
// 005994fb: FSTP float ptr [EAX + 0x50]
// 005994fe: MOV ECX,dword ptr [EDX]
// 00599500: MOV dword ptr [EAX + 0x54],ECX
// 00599503: MOV ECX,dword ptr [EDX + 0x4]
// 00599506: MOV dword ptr [EAX + 0x58],ECX
// 00599509: MOV ECX,dword ptr [EDX + 0x8]
// 0059950c: MOV dword ptr [EAX + 0x5c],ECX
// 0059950f: MOV ECX,dword ptr [EDX + 0xc]
// 00599512: MOV dword ptr [EAX + 0x60],ECX
// 00599515: MOV ECX,dword ptr [EDX + 0x10]
// 00599518: MOV dword ptr [EAX + 0x64],ECX
// 0059951b: MOV ECX,dword ptr [EDX + 0x14]
// 0059951e: MOV dword ptr [EAX + 0x68],ECX
// 00599521: MOV ECX,dword ptr [EDX + 0x18]
// 00599524: MOV dword ptr [EAX + 0x6c],ECX
// 00599527: MOV ECX,dword ptr [EDX + 0x1c]
// 0059952a: MOV dword ptr [EAX + 0x70],ECX
// 0059952d: MOV ECX,dword ptr [EDX + 0x20]
// 00599530: MOV dword ptr [EAX + 0x74],ECX
// 00599533: MOV ECX,dword ptr [EDX + 0x24]
// 00599536: MOV dword ptr [EAX + 0x78],ECX
// 00599539: MOV ECX,dword ptr [EDX + 0x28]
// 0059953c: MOV dword ptr [EAX + 0x7c],ECX
// 0059953f: MOV ECX,dword ptr [EDX + 0x2c]
// 00599542: MOV dword ptr [EAX + 0x80],ECX
// 00599548: POP EDI
// 00599549: POP ESI
// 0059954a: POP EBX
// 0059954b: RET
