// Name: core_netgame.cpp_FUN_00543bb0
// Address: 00543bb0
// Address Range: [[00543bb0, 00543ca8]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543bb0()
// Function calls:
//   core_netgame.cpp_FUN_00543e30

#include "nocturne.h"

void core_netgame_cpp_FUN_00543bb0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  bVar3 = 0;
  uStack_84 = in_stack_00000004[1];
  uStack_80 = in_stack_00000004[2];
  uStack_7c = in_stack_00000004[3];
  uStack_78 = in_stack_00000004[4];
  local_74 = in_stack_00000004[5];
  local_70 = in_stack_00000004[6];
  core_netgame_cpp_FUN_00543e30();
  local_64 = *(undefined2 *)(in_stack_00000004 + 8);
  local_60 = in_stack_00000004[9];
  local_5c = in_stack_00000004[10];
  local_58 = in_stack_00000004[0xb];
  local_54 = in_stack_00000004[0xc];
  local_50 = in_stack_00000004[0xd];
  local_4c = in_stack_00000004[0xe];
  local_48 = in_stack_00000004[0xf];
  local_44 = in_stack_00000004[0x10];
  local_40 = in_stack_00000004[0x11];
  local_3c = in_stack_00000004[0x12];
  local_38 = in_stack_00000004[0x13];
  local_34 = in_stack_00000004[0x14];
  local_30 = in_stack_00000004[0x15];
  local_2c = in_stack_00000004[0x16];
  local_28 = in_stack_00000004[0x17];
  local_24 = in_stack_00000004[0x18];
  local_20 = in_stack_00000004[0x19];
  local_1c = in_stack_00000004[0x1a];
  local_18 = in_stack_00000004[0x1b];
  local_14 = in_stack_00000004[0x1c];
  puVar2 = in_stack_00000008;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000004 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    in_stack_00000004 = in_stack_00000004 + (uint)bVar3 * -2 + 1;
  }
  puVar2 = &uStack_84;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000008 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    in_stack_00000008 = in_stack_00000008 + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 00543bb0: PUSH EBX
//   Label: core_netgame.cpp_FUN_00543bb0
// 00543bb1: PUSH ESI
// 00543bb2: PUSH EDI
// 00543bb3: PUSH EBP
// 00543bb4: SUB ESP,0x78
// 00543bb7: MOV EBX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 00543bbe: MOV EBP,dword ptr [ESP + 0x90]
//   XREF to: Stack[0x8] (READ)
// 00543bc5: MOV EDI,ESP
// 00543bc7: MOV ESI,EBX
// 00543bc9: MOVSD ES:EDI,ESI
// 00543bca: MOVSD ES:EDI,ESI
// 00543bcb: MOVSD ES:EDI,ESI
// 00543bcc: MOVSD ES:EDI,ESI
// 00543bcd: MOVSD ES:EDI,ESI
// 00543bce: MOV EAX,dword ptr [EBX + 0x14]
// 00543bd1: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00543bd5: LEA ESI,[EBX + 0x1c]
// 00543bd8: MOV EAX,dword ptr [EBX + 0x18]
// 00543bdb: PUSH ESI
// 00543bdc: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00543be0: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x6c] (DATA)
// 00543be4: PUSH EAX
// 00543be5: CALL core_netgame.cpp_FUN_00543e30
//   XREF to: 00543e30 (UNCONDITIONAL_CALL)
// 00543bea: ADD ESP,0x8
// 00543bed: MOV AX,word ptr [ESI + 0x4]
// 00543bf1: MOV word ptr [ESP + 0x20],AX
//   XREF to: Stack[-0x68] (WRITE)
// 00543bf6: MOV EAX,dword ptr [EBX + 0x24]
// 00543bf9: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00543bfd: MOV EAX,dword ptr [EBX + 0x28]
// 00543c00: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00543c04: MOV EAX,dword ptr [EBX + 0x2c]
// 00543c07: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00543c0b: MOV EAX,dword ptr [EBX + 0x30]
// 00543c0e: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00543c12: MOV EAX,dword ptr [EBX + 0x34]
// 00543c15: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00543c19: MOV EAX,dword ptr [EBX + 0x38]
// 00543c1c: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00543c20: MOV EAX,dword ptr [EBX + 0x3c]
// 00543c23: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00543c27: MOV EAX,dword ptr [EBX + 0x40]
// 00543c2a: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00543c2e: MOV EAX,dword ptr [EBX + 0x44]
// 00543c31: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00543c35: MOV EAX,dword ptr [EBX + 0x48]
// 00543c38: LEA EDX,[EBX + 0x4c]
// 00543c3b: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00543c3f: MOV EAX,dword ptr [EDX]
// 00543c41: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00543c45: MOV EAX,dword ptr [EDX + 0x4]
// 00543c48: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00543c4c: MOV EAX,dword ptr [EDX + 0x8]
// 00543c4f: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00543c53: MOV EAX,dword ptr [EDX + 0xc]
// 00543c56: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00543c5a: MOV EAX,dword ptr [EDX + 0x10]
// 00543c5d: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00543c61: MOV EAX,dword ptr [EDX + 0x14]
// 00543c64: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00543c68: MOV EAX,dword ptr [EDX + 0x18]
// 00543c6b: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00543c6f: MOV EAX,dword ptr [EDX + 0x1c]
// 00543c72: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00543c76: MOV EAX,dword ptr [EDX + 0x20]
// 00543c79: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00543c7d: MOV EAX,dword ptr [EDX + 0x24]
// 00543c80: MOV ECX,0x1e
// 00543c85: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00543c89: MOV EDI,EBX
// 00543c8b: MOV EAX,dword ptr [EDX + 0x28]
// 00543c8e: MOV ESI,EBP
// 00543c90: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00543c94: MOVSD.REP ES:EDI,ESI
// 00543c96: MOV ECX,0x1e
// 00543c9b: MOV ESI,ESP
// 00543c9d: MOV EDI,EBP
// 00543c9f: MOVSD.REP ES:EDI,ESI
// 00543ca1: ADD ESP,0x78
// 00543ca4: POP EBP
// 00543ca5: POP EDI
// 00543ca6: POP ESI
// 00543ca7: POP EBX
// 00543ca8: RET
