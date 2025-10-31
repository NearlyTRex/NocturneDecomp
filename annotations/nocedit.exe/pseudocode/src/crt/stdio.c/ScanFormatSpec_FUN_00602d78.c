// Name: crt_stdio.c_ScanFormatSpec_FUN_00602d78
// Address: 00602d78
// Address Range: [[00602d78, 00602eda]]
// Convention: __cdecl
// Signature: char * crt_stdio.c_ScanFormatSpec_FUN_00602d78(char * format, va_list_t * args, FormatSpec * spec_info)
// Cross-references:
//   crt_stdio.c_FormatEngine_FUN_00602950 (00602950) at 006029d0 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_ParseFormatFlags_FUN_00602edc

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

char * __cdecl
crt_stdio_c_ScanFormatSpec_FUN_00602d78(char *format,va_list_t *args,FormatSpec *spec_info)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  spec_info->zerofill = ' ';
  pbVar4 = (byte *)crt_stdio_c_ParseFormatFlags_FUN_00602edc(format,spec_info);
  spec_info->width = 0;
  if (*pbVar4 == 0x2a) {
    piVar2 = (int *)*args;
    *args = (va_list_t)(piVar2 + 1);
    iVar3 = *piVar2;
    spec_info->width = iVar3;
    if (iVar3 < 0) {
      spec_info->width = -iVar3;
      *(undefined1 *)&spec_info->flags = (char)spec_info->flags | LEFT_ALIGN;
    }
    pbVar4 = pbVar4 + 1;
  }
  else {
    for (; (0x2f < *pbVar4 && (*pbVar4 < 0x3a)); pbVar4 = pbVar4 + 1) {
      spec_info->width = spec_info->width * 10 + (*pbVar4 - 0x30);
    }
  }
  spec_info->precision = -1;
  if (*pbVar4 == 0x2e) {
    spec_info->precision = 0;
    if (pbVar4[1] == 0x2a) {
      piVar2 = (int *)*args;
      *args = (va_list_t)(piVar2 + 1);
      iVar3 = *piVar2;
      spec_info->precision = iVar3;
      if (iVar3 < 0) {
        spec_info->precision = -1;
      }
      pbVar4 = pbVar4 + 2;
    }
    else {
      while( true ) {
        pbVar4 = pbVar4 + 1;
        if ((*pbVar4 < 0x30) || (0x39 < *pbVar4)) break;
        spec_info->precision = spec_info->precision * 10 + (*pbVar4 - 0x30);
      }
    }
    if (spec_info->precision != -1) {
      spec_info->zerofill = ' ';
    }
  }
  bVar1 = *pbVar4;
  pbVar5 = pbVar4 + 1;
  if (bVar1 < 0x4e) {
    if (bVar1 < 0x49) {
      if (bVar1 == 0x46) {
        *(undefined1 *)&spec_info->flags = (char)spec_info->flags | FAR_PTR;
        return (char *)pbVar5;
      }
      return (char *)pbVar4;
    }
    if (0x49 < bVar1) {
      if (bVar1 == 0x4c) {
        *(byte *)((int)&spec_info->flags + 1) = *(byte *)((int)&spec_info->flags + 1) | 1;
        return (char *)pbVar5;
      }
      return (char *)pbVar4;
    }
    pbVar5 = pbVar4;
    if ((pbVar4[1] == 0x36) && (pbVar4[2] == 0x34)) {
      *(byte *)((int)&spec_info->flags + 1) = *(byte *)((int)&spec_info->flags + 1) | 1;
      return (char *)(pbVar4 + 3);
    }
  }
  else if (bVar1 < 0x4f) {
    *(undefined1 *)&spec_info->flags = (char)spec_info->flags | NEAR_PTR;
  }
  else {
    if (0x6b < bVar1) {
      if ((0x6c < bVar1) && (bVar1 != 0x77)) {
        return (char *)pbVar4;
      }
      *(undefined1 *)&spec_info->flags = (char)spec_info->flags | LONG_MODIFIER;
      return (char *)(pbVar4 + 1);
    }
    if (bVar1 != 0x68) {
      return (char *)pbVar4;
    }
    *(undefined1 *)&spec_info->flags = (char)spec_info->flags | SHORT_MODIFIER;
  }
  return (char *)pbVar5;
}


// Assembly code:
// 00602d78: PUSH EBX
//   Label: crt_stdio.c_ScanFormatSpec_FUN_00602d78
// 00602d79: PUSH ESI
// 00602d7a: PUSH EDI
// 00602d7b: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00602d7f: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00602d83: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00602d87: PUSH EBX
// 00602d88: PUSH EAX
// 00602d89: MOV byte ptr [EBX + 0x16],0x20
// 00602d8d: CALL crt_stdio.c_ParseFormatFlags_FUN_00602edc
//   XREF to: 00602edc (UNCONDITIONAL_CALL)
// 00602d92: MOV dword ptr [EBX + 0x4],0x0
// 00602d99: MOV CL,byte ptr [EAX]
// 00602d9b: ADD ESP,0x8
// 00602d9e: CMP CL,0x2a
// 00602da1: JNZ 0x00602dc7
//   XREF to: 00602dc7 (CONDITIONAL_JUMP)
// 00602da3: MOV EDX,dword ptr [ESI]
// 00602da5: ADD EDX,0x4
// 00602da8: MOV dword ptr [ESI],EDX
// 00602daa: MOV EDX,dword ptr [EDX + -0x4]
// 00602dad: MOV dword ptr [EBX + 0x4],EDX
// 00602db0: TEST EDX,EDX
// 00602db2: JGE 0x00602dc4
//   XREF to: 00602dc4 (CONDITIONAL_JUMP)
// 00602db4: MOV EDI,EDX
// 00602db6: MOV CH,byte ptr [EBX + 0x1e]
// 00602db9: NEG EDI
// 00602dbb: OR CH,0x8
// 00602dbe: MOV dword ptr [EBX + 0x4],EDI
// 00602dc1: MOV byte ptr [EBX + 0x1e],CH
// 00602dc4: INC EAX
//   Label: LAB_00602dc4
// 00602dc5: JMP 0x00602de6
//   XREF to: 00602de6 (UNCONDITIONAL_JUMP)
// 00602dc7: MOV DL,byte ptr [EAX]
//   Label: LAB_00602dc7
// 00602dc9: CMP DL,0x30
// 00602dcc: JC 0x00602de6
//   XREF to: 00602de6 (CONDITIONAL_JUMP)
// 00602dce: CMP DL,0x39
// 00602dd1: JA 0x00602de6
//   XREF to: 00602de6 (CONDITIONAL_JUMP)
// 00602dd3: IMUL ECX,dword ptr [EBX + 0x4],0xa
// 00602dd7: XOR EDX,EDX
// 00602dd9: MOV DL,byte ptr [EAX]
// 00602ddb: SUB EDX,0x30
// 00602dde: ADD ECX,EDX
// 00602de0: INC EAX
// 00602de1: MOV dword ptr [EBX + 0x4],ECX
// 00602de4: JMP 0x00602dc7
//   XREF to: 00602dc7 (UNCONDITIONAL_JUMP)
// 00602de6: MOV dword ptr [EBX + 0x8],0xffffffff
//   Label: LAB_00602de6
// 00602ded: CMP byte ptr [EAX],0x2e
// 00602df0: JNZ 0x00602e46
//   XREF to: 00602e46 (CONDITIONAL_JUMP)
// 00602df2: MOV dword ptr [EBX + 0x8],0x0
// 00602df9: MOV CH,byte ptr [EAX + 0x1]
// 00602dfc: INC EAX
// 00602dfd: CMP CH,0x2a
// 00602e00: JNZ 0x00602e1d
//   XREF to: 00602e1d (CONDITIONAL_JUMP)
// 00602e02: MOV EDX,dword ptr [ESI]
// 00602e04: ADD EDX,0x4
// 00602e07: MOV dword ptr [ESI],EDX
// 00602e09: MOV EDX,dword ptr [EDX + -0x4]
// 00602e0c: MOV dword ptr [EBX + 0x8],EDX
// 00602e0f: TEST EDX,EDX
// 00602e11: JGE 0x00602e1a
//   XREF to: 00602e1a (CONDITIONAL_JUMP)
// 00602e13: MOV dword ptr [EBX + 0x8],0xffffffff
// 00602e1a: INC EAX
//   Label: LAB_00602e1a
// 00602e1b: JMP 0x00602e3c
//   XREF to: 00602e3c (UNCONDITIONAL_JUMP)
// 00602e1d: MOV DL,byte ptr [EAX]
//   Label: LAB_00602e1d
// 00602e1f: CMP DL,0x30
// 00602e22: JC 0x00602e3c
//   XREF to: 00602e3c (CONDITIONAL_JUMP)
// 00602e24: CMP DL,0x39
// 00602e27: JA 0x00602e3c
//   XREF to: 00602e3c (CONDITIONAL_JUMP)
// 00602e29: IMUL ECX,dword ptr [EBX + 0x8],0xa
// 00602e2d: XOR EDX,EDX
// 00602e2f: MOV DL,byte ptr [EAX]
// 00602e31: SUB EDX,0x30
// 00602e34: ADD ECX,EDX
// 00602e36: INC EAX
// 00602e37: MOV dword ptr [EBX + 0x8],ECX
// 00602e3a: JMP 0x00602e1d
//   XREF to: 00602e1d (UNCONDITIONAL_JUMP)
// 00602e3c: CMP dword ptr [EBX + 0x8],-0x1
//   Label: LAB_00602e3c
// 00602e40: JZ 0x00602e46
//   XREF to: 00602e46 (CONDITIONAL_JUMP)
// 00602e42: MOV byte ptr [EBX + 0x16],0x20
// 00602e46: MOV DL,byte ptr [EAX]
//   Label: LAB_00602e46
// 00602e48: LEA ECX,[EAX + 0x1]
// 00602e4b: CMP DL,0x4e
// 00602e4e: JC 0x00602e6f
//   XREF to: 00602e6f (CONDITIONAL_JUMP)
// 00602e50: JBE 0x00602ed1
//   XREF to: 00602ed1 (CONDITIONAL_JUMP)
// 00602e56: CMP DL,0x6c
// 00602e59: JC 0x00602e66
//   XREF to: 00602e66 (CONDITIONAL_JUMP)
// 00602e5b: JBE 0x00602e88
//   XREF to: 00602e88 (CONDITIONAL_JUMP)
// 00602e5d: CMP DL,0x77
// 00602e60: JZ 0x00602e88
//   XREF to: 00602e88 (CONDITIONAL_JUMP)
// 00602e62: POP EDI
// 00602e63: POP ESI
// 00602e64: POP EBX
// 00602e65: RET
// 00602e66: CMP DL,0x68
//   Label: LAB_00602e66
// 00602e69: JZ 0x00602e96
//   XREF to: 00602e96 (CONDITIONAL_JUMP)
// 00602e6b: POP EDI
// 00602e6c: POP ESI
// 00602e6d: POP EBX
// 00602e6e: RET
// 00602e6f: CMP DL,0x49
//   Label: LAB_00602e6f
// 00602e72: JC 0x00602e7f
//   XREF to: 00602e7f (CONDITIONAL_JUMP)
// 00602e74: JBE 0x00602e9c
//   XREF to: 00602e9c (CONDITIONAL_JUMP)
// 00602e76: CMP DL,0x4c
// 00602e79: JZ 0x00602eb8
//   XREF to: 00602eb8 (CONDITIONAL_JUMP)
// 00602e7b: POP EDI
// 00602e7c: POP ESI
// 00602e7d: POP EBX
// 00602e7e: RET
// 00602e7f: CMP DL,0x46
//   Label: LAB_00602e7f
// 00602e82: JZ 0x00602ec7
//   XREF to: 00602ec7 (CONDITIONAL_JUMP)
// 00602e84: POP EDI
// 00602e85: POP ESI
// 00602e86: POP EBX
// 00602e87: RET
// 00602e88: MOV CL,byte ptr [EBX + 0x1e]
//   Label: LAB_00602e88
// 00602e8b: OR CL,0x20
// 00602e8e: INC EAX
// 00602e8f: MOV byte ptr [EBX + 0x1e],CL
// 00602e92: POP EDI
// 00602e93: POP ESI
// 00602e94: POP EBX
// 00602e95: RET
// 00602e96: OR byte ptr [EBX + 0x1e],0x10
//   Label: LAB_00602e96
// 00602e9a: JMP 0x00602ed5
//   XREF to: 00602ed5 (UNCONDITIONAL_JUMP)
// 00602e9c: CMP byte ptr [EAX + 0x1],0x36
//   Label: LAB_00602e9c
// 00602ea0: JNZ 0x00602ed7
//   XREF to: 00602ed7 (CONDITIONAL_JUMP)
// 00602ea2: CMP byte ptr [EAX + 0x2],0x34
// 00602ea6: JNZ 0x00602ed7
//   XREF to: 00602ed7 (CONDITIONAL_JUMP)
// 00602ea8: MOV CH,byte ptr [EBX + 0x1f]
// 00602eab: OR CH,0x1
// 00602eae: ADD EAX,0x3
// 00602eb1: MOV byte ptr [EBX + 0x1f],CH
// 00602eb4: POP EDI
// 00602eb5: POP ESI
// 00602eb6: POP EBX
// 00602eb7: RET
// 00602eb8: MOV DL,byte ptr [EBX + 0x1f]
//   Label: LAB_00602eb8
// 00602ebb: OR DL,0x1
// 00602ebe: MOV EAX,ECX
// 00602ec0: MOV byte ptr [EBX + 0x1f],DL
// 00602ec3: POP EDI
// 00602ec4: POP ESI
// 00602ec5: POP EBX
// 00602ec6: RET
// 00602ec7: OR byte ptr [EBX + 0x1e],0x80
//   Label: LAB_00602ec7
// 00602ecb: MOV EAX,ECX
// 00602ecd: POP EDI
// 00602ece: POP ESI
// 00602ecf: POP EBX
// 00602ed0: RET
// 00602ed1: OR byte ptr [EBX + 0x1e],0x40
//   Label: LAB_00602ed1
// 00602ed5: MOV EAX,ECX
//   Label: LAB_00602ed5
// 00602ed7: POP EDI
//   Label: LAB_00602ed7
// 00602ed8: POP ESI
// 00602ed9: POP EBX
// 00602eda: RET
