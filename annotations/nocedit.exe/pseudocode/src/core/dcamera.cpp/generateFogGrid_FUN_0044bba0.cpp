// Name: core_dcamera.cpp_generateFogGrid_FUN_0044bba0
// Address: 0044bba0
// Address Range: [[0044bba0, 0044bdc8]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_generateFogGrid_FUN_0044bba0(SFogGrid * fog)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0 (004529a0) at 004529a5 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044bba0(SFogGrid *fog)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int in_stack_00000008;
  SFogGrid *in_stack_0000000c;
  char *local_40;
  char *local_38;
  int local_34;
  uint local_28;
  uint local_1c;
  int local_18;
  int local_14;
  undefined1 *puVar6;
  
  iVar9 = 0;
  crt_memory_c_memset_FUN_005fde40(fog,0,0x1000);
  local_34 = in_stack_00000008;
  do {
    iVar13 = 0;
    do {
      puVar11 = (undefined1 *)(local_34 + iVar13 * 0x10 + 0x1000);
      puVar6 = (undefined1 *)(iVar13 * 0x10 + iVar9 + in_stack_00000008);
      do {
        puVar5 = puVar6 + 0x100;
        iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
        *puVar6 = (char)iVar2;
        puVar6 = puVar5;
      } while (puVar5 != puVar11);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x10);
    local_34 = local_34 + 1;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  uVar7 = (uint)puVar5 ^ (uint)puVar11;
  local_28 = 0xffffffff;
  do {
    local_1c = 0xffffffff;
    local_14 = 0;
    local_18 = 0;
    do {
      uVar12 = 0;
      local_38 = in_stack_0000000c->planes[0].grid[0] + (uVar7 + 1 & 0xf) + local_14;
      pcVar10 = in_stack_0000000c->planes[0].grid[0] + (local_28 & 0xf) + local_14;
      pcVar3 = in_stack_0000000c->planes[0].grid[local_18 + 1U & 0xf] + uVar7;
      local_40 = in_stack_0000000c->planes[0].grid[local_1c & 0xf] + uVar7;
      uVar14 = 0xffffffff;
      pcVar8 = in_stack_0000000c->planes[0].grid[0] + uVar7 + local_14;
      do {
        uVar4 = uVar14 & 0xf;
        uVar12 = uVar12 + 1;
        bVar1 = *pcVar10;
        pcVar10 = pcVar10 + 0x100;
        uVar14 = uVar14 + 1;
        *pcVar8 = (byte)((ulonglong)
                         ((uint)(byte)*local_38 +
                         (uint)bVar1 +
                         (uint)(byte)*pcVar3 +
                         (uint)(byte)*pcVar8 +
                         (uint)(byte)in_stack_0000000c->planes[uVar4].grid[0][uVar7 + local_14] +
                         (uint)(byte)in_stack_0000000c->planes[uVar12 & 0xf].grid[0]
                                     [uVar7 + local_14] + (uint)(byte)*local_40) / 7);
        local_38 = local_38 + 0x100;
        local_40 = local_40 + 0x100;
        pcVar3 = pcVar3 + 0x100;
        pcVar8 = pcVar8 + 0x100;
      } while ((int)uVar12 < 0x10);
      local_14 = local_14 + 0x10;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    } while (local_18 < 0x10);
    uVar7 = uVar7 + 1;
    local_28 = local_28 + 1;
  } while ((int)uVar7 < 0x10);
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(in_stack_0000000c);
  return;
}


// Assembly code:
// 0044bba0: PUSH EBX
//   Label: core_dcamera.cpp_generateFogGrid_FUN_0044bba0
// 0044bba1: PUSH ESI
// 0044bba2: PUSH EDI
// 0044bba3: PUSH EBP
// 0044bba4: SUB ESP,0x3c
// 0044bba7: PUSH 0x1000
// 0044bbac: PUSH 0x0
// 0044bbae: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0044bbb2: PUSH EDX
// 0044bbb3: XOR EBP,EBP
// 0044bbb5: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0044bbba: ADD ESP,0xc
// 0044bbbd: MOV ECX,0x1000
// 0044bbc2: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0044bbc6: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0044bbca: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0044bbce: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0044bbce
//   XREF to: Stack[-0x3c] (READ)
// 0044bbd2: XOR EDI,EDI
// 0044bbd4: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0044bbd8: MOV EAX,EDI
//   Label: LAB_0044bbd8
// 0044bbda: SHL EAX,0x4
// 0044bbdd: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0044bbe1: LEA EBX,[EAX + EBP*0x1]
// 0044bbe4: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 0044bbe8: ADD EBX,ESI
// 0044bbea: ADD EAX,EDX
// 0044bbec: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 0044bbf0: ADD ESI,EAX
// 0044bbf2: ADD EBX,0x100
//   Label: LAB_0044bbf2
// 0044bbf8: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 0044bbfd: MOV byte ptr [EBX + 0xffffff00],AL
// 0044bc03: CMP EBX,ESI
// 0044bc05: JNZ 0x0044bbf2
//   XREF to: 0044bbf2 (CONDITIONAL_JUMP)
// 0044bc07: INC EDI
// 0044bc08: CMP EDI,0x10
// 0044bc0b: JL 0x0044bbd8
//   XREF to: 0044bbd8 (CONDITIONAL_JUMP)
// 0044bc0d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x3c] (READ)
// 0044bc11: INC ECX
// 0044bc12: INC EBP
// 0044bc13: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0044bc17: CMP EBP,0x10
// 0044bc1a: JL 0x0044bbce
//   XREF to: 0044bbce (CONDITIONAL_JUMP)
// 0044bc1c: XOR EBX,ESI
// 0044bc1e: MOV ESI,0xffffffff
// 0044bc23: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0044bc27: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0044bc2b: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0044bc2b
//   XREF to: Stack[-0x30] (READ)
// 0044bc2f: MOV EBP,0xffffffff
// 0044bc34: AND EAX,0xf
// 0044bc37: XOR EDI,EDI
// 0044bc39: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0044bc3d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0044bc41: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0044bc45: INC EAX
// 0044bc46: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0044bc4a: AND EAX,0xf
// 0044bc4d: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0044bc51: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0044bc55: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0044bc55
//   XREF to: Stack[-0x1c] (READ)
// 0044bc59: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 0044bc5d: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 0044bc61: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 0044bc65: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0044bc69: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 0044bc6d: XOR ESI,ESI
// 0044bc6f: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044bc73: AND ECX,0xf
// 0044bc76: INC EBX
// 0044bc77: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 0044bc7b: ADD EBP,EDX
// 0044bc7d: ADD EAX,EDX
// 0044bc7f: AND EBX,0xf
// 0044bc82: ADD EAX,EDI
// 0044bc84: SHL EBX,0x4
// 0044bc87: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0044bc8b: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0044bc8f: SHL ECX,0x4
// 0044bc92: ADD EAX,EBX
// 0044bc94: ADD EBP,EDI
// 0044bc96: ADD EAX,EDI
// 0044bc98: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0044bc9c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4c] (DATA)
// 0044bc9f: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0044bca3: ADD EBX,EDX
// 0044bca5: ADD EAX,ECX
// 0044bca7: ADD EBX,EDI
// 0044bca9: ADD EAX,EDI
// 0044bcab: MOV EDI,0xffffffff
// 0044bcb0: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0044bcb4: MOV ECX,EDI
//   Label: LAB_0044bcb4
// 0044bcb6: AND ECX,0xf
// 0044bcb9: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0044bcbd: SHL ECX,0x8
// 0044bcc0: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 0044bcc4: ADD ECX,EAX
// 0044bcc6: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0044bcca: ADD ECX,EDX
// 0044bccc: ADD ECX,EAX
// 0044bcce: XOR EAX,EAX
// 0044bcd0: MOV AL,byte ptr [ECX]
// 0044bcd2: XOR ECX,ECX
// 0044bcd4: MOV CL,byte ptr [EBX]
// 0044bcd6: ADD ECX,EAX
// 0044bcd8: INC ESI
// 0044bcd9: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0044bcdd: MOV ECX,ESI
// 0044bcdf: AND ECX,0xf
// 0044bce2: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0044bce6: SHL ECX,0x8
// 0044bce9: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 0044bced: ADD ECX,EDX
// 0044bcef: ADD ECX,EAX
// 0044bcf1: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0044bcf5: MOV AL,byte ptr [ECX + EAX*0x1]
// 0044bcf8: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 0044bcfc: AND EAX,0xff
// 0044bd01: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 0044bd05: ADD ECX,EAX
// 0044bd07: XOR EAX,EAX
// 0044bd09: MOV AL,byte ptr [EDX]
// 0044bd0b: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x4c] (DATA)
// 0044bd0e: ADD ECX,EAX
// 0044bd10: XOR EAX,EAX
// 0044bd12: MOV AL,byte ptr [EDX]
// 0044bd14: ADD EAX,ECX
// 0044bd16: XOR ECX,ECX
// 0044bd18: MOV CL,byte ptr [EBP]
// 0044bd1b: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (READ)
// 0044bd1f: ADD ECX,EAX
// 0044bd21: XOR EAX,EAX
// 0044bd23: MOV AL,byte ptr [EDX]
// 0044bd25: XOR EDX,EDX
// 0044bd27: ADD EAX,ECX
// 0044bd29: MOV ECX,0x7
// 0044bd2e: DIV ECX
// 0044bd30: ADD EBP,0x100
// 0044bd36: ADD EBX,0x100
// 0044bd3c: INC EDI
// 0044bd3d: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (READ)
// 0044bd41: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 0044bd45: MOV byte ptr [EBX + 0xffffff00],AL
// 0044bd4b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4c] (DATA)
// 0044bd4e: ADD ECX,0x100
// 0044bd54: ADD EDX,0x100
// 0044bd5a: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 0044bd5e: ADD EAX,0x100
// 0044bd63: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0044bd67: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4c] (DATA)
// 0044bd6a: CMP ESI,0x10
// 0044bd6d: JL 0x0044bcb4
//   XREF to: 0044bcb4 (CONDITIONAL_JUMP)
// 0044bd73: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 0044bd77: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 0044bd7b: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 0044bd7f: ADD EBX,0x10
// 0044bd82: INC ESI
// 0044bd83: INC ECX
// 0044bd84: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044bd88: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0044bd8c: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0044bd90: CMP ESI,0x10
// 0044bd93: JL 0x0044bc55
//   XREF to: 0044bc55 (CONDITIONAL_JUMP)
// 0044bd99: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0044bd9d: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 0044bda1: INC EAX
// 0044bda2: INC EBP
// 0044bda3: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044bda7: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 0044bdab: CMP EAX,0x10
// 0044bdae: JL 0x0044bc2b
//   XREF to: 0044bc2b (CONDITIONAL_JUMP)
// 0044bdb4: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0044bdb8: PUSH ECX
// 0044bdb9: CALL core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
//   XREF to: 0044bb70 (UNCONDITIONAL_CALL)
// 0044bdbe: ADD ESP,0x4
// 0044bdc1: ADD ESP,0x3c
// 0044bdc4: POP EBP
// 0044bdc5: POP EDI
// 0044bdc6: POP ESI
// 0044bdc7: POP EBX
// 0044bdc8: RET
