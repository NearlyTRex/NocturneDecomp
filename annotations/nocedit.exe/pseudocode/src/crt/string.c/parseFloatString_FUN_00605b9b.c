// Name: crt_string.c_parseFloatString_FUN_00605b9b
// Address: 00605b9b
// Address Range: [[00605b9b, 00605d5c]]
// Convention: __cdecl
// Signature: int crt_string.c_parseFloatString_FUN_00605b9b(char * str, void * result, char * * endptr)
// Cross-references:
//   crt_string.c_strtod_main_FUN_00605d5d (00605d5d) at 00605d72 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_unknown.c_FUN_00603d60
//   crt_unknown.c_FUN_0060b586

#include "nocturne.h"

int __cdecl crt_string_c_parseFloatString_FUN_00605b9b(char *str,void *result,char **endptr)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  undefined4 uStack_44;
  int local_40 [5];
  undefined4 local_2c;
  undefined4 local_28;
  ushort local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  byte local_14;
  
  local_20 = (byte *)str;
  for (; (bVar4 = *str, bVar4 == 0x20 || ((8 < bVar4 && (bVar4 < 0xe))));
      str = (char *)((byte *)str + 1)) {
  }
  local_14 = 0;
  pbVar2 = (byte *)str + 1;
  if ((bVar4 != 0x2b) && (pbVar2 = (byte *)str, bVar4 == 0x2d)) {
    local_14 = 1;
    pbVar2 = (byte *)str + 1;
  }
  bVar4 = 0x30;
  iVar5 = 0;
  iVar7 = 0;
  while( true ) {
    while( true ) {
      bVar1 = *pbVar2;
      pbVar3 = pbVar2 + 1;
      if (bVar1 != 0x2e) break;
      if ((local_14 & 8) != 0) goto LAB_00605c23;
      local_14 = local_14 | 8;
      pbVar2 = pbVar3;
    }
    if ((bVar1 < 0x30) || (0x39 < bVar1)) break;
    if ((local_14 & 8) != 0) {
      iVar7 = iVar7 + 1;
    }
    bVar4 = bVar4 | bVar1;
    if (bVar4 != 0x30) {
      if (iVar5 < 0x13) {
        *(byte *)((int)local_40 + iVar5) = bVar1;
      }
      iVar5 = iVar5 + 1;
    }
    local_14 = local_14 | 4;
    pbVar2 = pbVar3;
  }
LAB_00605c23:
  iVar6 = 0;
  if (((local_14 & 4) != 0) && ((bVar1 == 0x65 || (local_20 = pbVar2, bVar1 == 0x45)))) {
    local_20 = pbVar2 + 2;
    if ((*pbVar3 != 0x2b) && (local_20 = pbVar3, *pbVar3 == 0x2d)) {
      local_14 = local_14 | 2;
      local_20 = pbVar2 + 2;
    }
    local_14 = local_14 & 0xfb;
    for (; (bVar4 = *local_20, 0x2f < bVar4 && (bVar4 < 0x3a)); local_20 = local_20 + 1) {
      if (iVar6 < 1000) {
        local_18 = iVar6 * 10;
        iVar6 = (uint)bVar4 + local_18 + -0x30;
      }
      local_14 = local_14 | 4;
    }
    if ((local_14 & 2) != 0) {
      iVar6 = -iVar6;
    }
    local_1c = pbVar2;
    if ((local_14 & 4) == 0) {
      local_20 = pbVar2;
    }
  }
  if (endptr != (char **)0x0) {
    *endptr = (char *)local_20;
  }
  iVar6 = iVar6 - iVar7;
  if (0x13 < iVar5) {
    iVar6 = iVar6 + iVar5 + -0x13;
    iVar5 = 0x13;
  }
  for (; (0 < iVar5 && (*(char *)((int)local_40 + iVar5 + -1) == '0')); iVar5 = iVar5 + -1) {
    iVar6 = iVar6 + 1;
  }
  if (iVar5 == 0) {
    *(undefined2 *)((int)result + 8) = 0;
    *(undefined4 *)((int)result + 4) = 0;
    *(undefined4 *)result = 0;
    iVar5 = 0;
  }
  else {
    *(undefined1 *)((int)local_40 + iVar5) = 0;
    uStack_44 = (undefined4 *)0x605d00;
    crt_unknown_c_FUN_0060b586(local_40,&local_2c);
    if (iVar6 != 0) {
      uStack_44 = &local_2c;
      local_40[0] = iVar6;
      crt_unknown_c_FUN_00603d60();
    }
    if ((local_14 & 1) != 0) {
      local_24 = local_24 | 0x8000;
    }
    *(ushort *)((int)result + 8) = local_24;
    *(undefined4 *)((int)result + 4) = local_28;
    *(undefined4 *)result = local_2c;
    iVar5 = iVar6 + -1 + iVar5;
    if (iVar5 < 0x135) {
      if (iVar5 < -0x134) {
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 3;
    }
  }
  return iVar5;
}


// Assembly code:
// 00605b9b: PUSH EBP
//   Label: crt_string.c_parseFloatString_FUN_00605b9b
// 00605b9c: MOV EBP,ESP
// 00605b9e: PUSH EBX
// 00605b9f: PUSH ESI
// 00605ba0: PUSH EDI
// 00605ba1: SUB ESP,0x30
// 00605ba4: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00605ba7: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00605baa: MOV DL,byte ptr [EAX]
//   Label: LAB_00605baa
// 00605bac: CMP DL,0x20
// 00605baf: JZ 0x00605bbb
//   XREF to: 00605bbb (CONDITIONAL_JUMP)
// 00605bb1: CMP DL,0x9
// 00605bb4: JC 0x00605bbe
//   XREF to: 00605bbe (CONDITIONAL_JUMP)
// 00605bb6: CMP DL,0xd
// 00605bb9: JA 0x00605bbe
//   XREF to: 00605bbe (CONDITIONAL_JUMP)
// 00605bbb: INC EAX
//   Label: LAB_00605bbb
// 00605bbc: JMP 0x00605baa
//   XREF to: 00605baa (UNCONDITIONAL_JUMP)
// 00605bbe: XOR DH,DH
//   Label: LAB_00605bbe
// 00605bc0: LEA EBX,[EAX + 0x1]
// 00605bc3: MOV byte ptr [EBP + -0x10],DH
//   XREF to: Stack[-0x14] (WRITE)
// 00605bc6: CMP DL,0x2b
// 00605bc9: JNZ 0x00605bcf
//   XREF to: 00605bcf (CONDITIONAL_JUMP)
// 00605bcb: MOV EAX,EBX
// 00605bcd: JMP 0x00605bdb
//   XREF to: 00605bdb (UNCONDITIONAL_JUMP)
// 00605bcf: CMP DL,0x2d
//   Label: LAB_00605bcf
// 00605bd2: JNZ 0x00605bdb
//   XREF to: 00605bdb (CONDITIONAL_JUMP)
// 00605bd4: MOV CL,0x1
// 00605bd6: MOV EAX,EBX
// 00605bd8: MOV byte ptr [EBP + -0x10],CL
//   XREF to: Stack[-0x14] (WRITE)
// 00605bdb: MOV DH,0x30
//   Label: LAB_00605bdb
// 00605bdd: XOR EBX,EBX
// 00605bdf: XOR EDI,EDI
// 00605be1: MOV DL,byte ptr [EAX]
//   Label: LAB_00605be1
// 00605be3: INC EAX
// 00605be4: CMP DL,0x2e
// 00605be7: JNZ 0x00605bfb
//   XREF to: 00605bfb (CONDITIONAL_JUMP)
// 00605be9: MOV CL,byte ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 00605bec: TEST CL,0x8
// 00605bef: JNZ 0x00605c23
//   XREF to: 00605c23 (CONDITIONAL_JUMP)
// 00605bf1: MOV CH,CL
// 00605bf3: OR CH,0x8
// 00605bf6: MOV byte ptr [EBP + -0x10],CH
//   XREF to: Stack[-0x14] (WRITE)
// 00605bf9: JMP 0x00605be1
//   XREF to: 00605be1 (UNCONDITIONAL_JUMP)
// 00605bfb: CMP DL,0x30
//   Label: LAB_00605bfb
// 00605bfe: JC 0x00605c23
//   XREF to: 00605c23 (CONDITIONAL_JUMP)
// 00605c00: CMP DL,0x39
// 00605c03: JA 0x00605c23
//   XREF to: 00605c23 (CONDITIONAL_JUMP)
// 00605c05: TEST byte ptr [EBP + -0x10],0x8
//   XREF to: Stack[-0x14] (READ)
// 00605c09: JZ 0x00605c0c
//   XREF to: 00605c0c (CONDITIONAL_JUMP)
// 00605c0b: INC EDI
// 00605c0c: OR DH,DL
//   Label: LAB_00605c0c
// 00605c0e: CMP DH,0x30
// 00605c11: JZ 0x00605c1d
//   XREF to: 00605c1d (CONDITIONAL_JUMP)
// 00605c13: CMP EBX,0x13
// 00605c16: JGE 0x00605c1c
//   XREF to: 00605c1c (CONDITIONAL_JUMP)
// 00605c18: MOV byte ptr [EBX + EBP*0x1 + -0x3c],DL
// 00605c1c: INC EBX
//   Label: LAB_00605c1c
// 00605c1d: OR byte ptr [EBP + -0x10],0x4
//   Label: LAB_00605c1d
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00605c21: JMP 0x00605be1
//   XREF to: 00605be1 (UNCONDITIONAL_JUMP)
// 00605c23: MOV DH,byte ptr [EBP + -0x10]
//   Label: LAB_00605c23
//   XREF to: Stack[-0x14] (READ)
// 00605c26: XOR ESI,ESI
// 00605c28: TEST DH,0x4
// 00605c2b: JZ 0x00605cad
//   XREF to: 00605cad (CONDITIONAL_JUMP)
// 00605c31: CMP DL,0x65
// 00605c34: JZ 0x00605c3f
//   XREF to: 00605c3f (CONDITIONAL_JUMP)
// 00605c36: CMP DL,0x45
// 00605c39: JNZ 0x00605ca9
//   XREF to: 00605ca9 (CONDITIONAL_JUMP)
// 00605c3f: LEA EDX,[EAX + -0x1]
//   Label: LAB_00605c3f
// 00605c42: MOV CL,byte ptr [EAX]
// 00605c44: MOV dword ptr [EBP + -0x18],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00605c47: LEA EDX,[EAX + 0x1]
// 00605c4a: CMP CL,0x2b
// 00605c4d: JNZ 0x00605c53
//   XREF to: 00605c53 (CONDITIONAL_JUMP)
// 00605c4f: MOV EAX,EDX
// 00605c51: JMP 0x00605c63
//   XREF to: 00605c63 (UNCONDITIONAL_JUMP)
// 00605c53: CMP CL,0x2d
//   Label: LAB_00605c53
// 00605c56: JNZ 0x00605c63
//   XREF to: 00605c63 (CONDITIONAL_JUMP)
// 00605c58: MOV CL,byte ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 00605c5b: OR CL,0x2
// 00605c5e: MOV EAX,EDX
// 00605c60: MOV byte ptr [EBP + -0x10],CL
//   XREF to: Stack[-0x14] (WRITE)
// 00605c63: AND byte ptr [EBP + -0x10],0xfb
//   Label: LAB_00605c63
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00605c67: MOV DL,byte ptr [EAX]
//   Label: LAB_00605c67
// 00605c69: CMP DL,0x30
// 00605c6c: JC 0x00605c96
//   XREF to: 00605c96 (CONDITIONAL_JUMP)
// 00605c6e: CMP DL,0x39
// 00605c71: JA 0x00605c96
//   XREF to: 00605c96 (CONDITIONAL_JUMP)
// 00605c73: CMP ESI,0x3e8
// 00605c79: JGE 0x00605c8a
//   XREF to: 00605c8a (CONDITIONAL_JUMP)
// 00605c7b: IMUL ESI,ESI,0xa
// 00605c7e: MOV dword ptr [EBP + -0x14],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00605c81: MOVZX ESI,DL
// 00605c84: ADD ESI,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (READ)
// 00605c87: SUB ESI,0x30
// 00605c8a: MOV DL,byte ptr [EBP + -0x10]
//   Label: LAB_00605c8a
//   XREF to: Stack[-0x14] (READ)
// 00605c8d: OR DL,0x4
// 00605c90: INC EAX
// 00605c91: MOV byte ptr [EBP + -0x10],DL
//   XREF to: Stack[-0x14] (WRITE)
// 00605c94: JMP 0x00605c67
//   XREF to: 00605c67 (UNCONDITIONAL_JUMP)
// 00605c96: TEST byte ptr [EBP + -0x10],0x2
//   Label: LAB_00605c96
//   XREF to: Stack[-0x14] (READ)
// 00605c9a: JZ 0x00605c9e
//   XREF to: 00605c9e (CONDITIONAL_JUMP)
// 00605c9c: NEG ESI
// 00605c9e: TEST byte ptr [EBP + -0x10],0x4
//   Label: LAB_00605c9e
//   XREF to: Stack[-0x14] (READ)
// 00605ca2: JNZ 0x00605caa
//   XREF to: 00605caa (CONDITIONAL_JUMP)
// 00605ca4: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00605ca7: JMP 0x00605caa
//   XREF to: 00605caa (UNCONDITIONAL_JUMP)
// 00605ca9: DEC EAX
//   Label: LAB_00605ca9
// 00605caa: MOV dword ptr [EBP + -0x1c],EAX
//   Label: LAB_00605caa
//   XREF to: Stack[-0x20] (WRITE)
// 00605cad: MOV ECX,dword ptr [EBP + 0x10]
//   Label: LAB_00605cad
//   XREF to: Stack[0xc] (READ)
// 00605cb0: TEST ECX,ECX
// 00605cb2: JZ 0x00605cb9
//   XREF to: 00605cb9 (CONDITIONAL_JUMP)
// 00605cb4: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x20] (READ)
// 00605cb7: MOV dword ptr [ECX],EAX
// 00605cb9: SUB ESI,EDI
//   Label: LAB_00605cb9
// 00605cbb: CMP EBX,0x13
// 00605cbe: JLE 0x00605cca
//   XREF to: 00605cca (CONDITIONAL_JUMP)
// 00605cc0: SUB EBX,0x13
// 00605cc3: ADD ESI,EBX
// 00605cc5: MOV EBX,0x13
// 00605cca: TEST EBX,EBX
//   Label: LAB_00605cca
// 00605ccc: JLE 0x00605cd9
//   XREF to: 00605cd9 (CONDITIONAL_JUMP)
// 00605cce: CMP byte ptr [EBX + EBP*0x1 + -0x3d],0x30
// 00605cd3: JNZ 0x00605cd9
//   XREF to: 00605cd9 (CONDITIONAL_JUMP)
// 00605cd5: INC ESI
// 00605cd6: DEC EBX
// 00605cd7: JMP 0x00605cca
//   XREF to: 00605cca (UNCONDITIONAL_JUMP)
// 00605cd9: TEST EBX,EBX
//   Label: LAB_00605cd9
// 00605cdb: JNZ 0x00605cef
//   XREF to: 00605cef (CONDITIONAL_JUMP)
// 00605cdd: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00605ce0: MOV word ptr [EAX + 0x8],0x0
// 00605ce6: MOV dword ptr [EAX + 0x4],EBX
// 00605ce9: MOV dword ptr [EAX],EBX
// 00605ceb: XOR EAX,EAX
// 00605ced: JMP 0x00605d55
//   XREF to: 00605d55 (UNCONDITIONAL_JUMP)
// 00605cef: XOR AL,AL
//   Label: LAB_00605cef
// 00605cf1: LEA EDX,[EBP + -0x28]
//   XREF to: Stack[-0x2c] (DATA)
// 00605cf4: MOV byte ptr [EBX + EBP*0x1 + -0x3c],AL
// 00605cf8: LEA EAX,[EBP + -0x3c]
//   XREF to: Stack[-0x40] (DATA)
// 00605cfb: CALL crt_unknown.c_FUN_0060b586
//   XREF to: 0060b586 (UNCONDITIONAL_CALL)
// 00605d00: TEST ESI,ESI
// 00605d02: JZ 0x00605d11
//   XREF to: 00605d11 (CONDITIONAL_JUMP)
// 00605d04: PUSH ESI
// 00605d05: LEA EAX,[EBP + -0x28]
//   XREF to: Stack[-0x2c] (DATA)
// 00605d08: PUSH EAX
// 00605d09: CALL crt_unknown.c_FUN_00603d60
//   XREF to: 00603d60 (UNCONDITIONAL_CALL)
// 00605d0e: ADD ESP,0x8
// 00605d11: TEST byte ptr [EBP + -0x10],0x1
//   Label: LAB_00605d11
//   XREF to: Stack[-0x14] (READ)
// 00605d15: JZ 0x00605d1b
//   XREF to: 00605d1b (CONDITIONAL_JUMP)
// 00605d17: OR byte ptr [EBP + -0x1f],0x80
//   XREF to: Stack[-0x23] (READ_WRITE)
// 00605d1b: MOV EDX,dword ptr [EBP + 0xc]
//   Label: LAB_00605d1b
//   XREF to: Stack[0x8] (READ)
// 00605d1e: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x24] (READ)
// 00605d21: MOV word ptr [EDX + 0x8],AX
// 00605d25: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x28] (READ)
// 00605d28: MOV dword ptr [EDX + 0x4],EAX
// 00605d2b: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x2c] (READ)
// 00605d2e: MOV dword ptr [EDX],EAX
// 00605d30: LEA EAX,[ESI + EBX*0x1 + -0x1]
// 00605d34: CMP EAX,0x134
// 00605d39: JLE 0x00605d42
//   XREF to: 00605d42 (CONDITIONAL_JUMP)
// 00605d3b: MOV EAX,0x3
// 00605d40: JMP 0x00605d55
//   XREF to: 00605d55 (UNCONDITIONAL_JUMP)
// 00605d42: CMP EAX,0xfffffecc
//   Label: LAB_00605d42
// 00605d47: JGE 0x00605d50
//   XREF to: 00605d50 (CONDITIONAL_JUMP)
// 00605d49: MOV EAX,0x2
// 00605d4e: JMP 0x00605d55
//   XREF to: 00605d55 (UNCONDITIONAL_JUMP)
// 00605d50: MOV EAX,0x1
//   Label: LAB_00605d50
// 00605d55: LEA ESP,[EBP + -0xc]
//   Label: LAB_00605d55
//   XREF to: Stack[-0x10] (DATA)
// 00605d58: POP EDI
// 00605d59: POP ESI
// 00605d5a: POP EBX
// 00605d5b: POP EBP
// 00605d5c: RET
