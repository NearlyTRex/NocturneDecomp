// Name: crt_stdio.c_scanf_char_FUN_00604d54
// Address: 00604d54
// Address Range: [[00604d54, 00604e48]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_char_FUN_00604d54(scanf_state_t * state, va_list_t * args)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 00604b76 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable
// Function calls:
//   crt_locale.c_mbtowc_FUN_0060b1c0
//   crt_stdio.c_scanf_getc_wrapper_FUN_00604930

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_char_FUN_00604d54(scanf_state_t *state,va_list_t *args)

{
  byte bVar1;
  va_list_t pcVar2;
  uint uVar3;
  int iVar4;
  undefined2 *unaff_EBX;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  undefined2 in_ES;
  char *mb_string;
  undefined2 uStack_10;
  
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EBX = *(undefined2 **)pcVar2;
      }
      else {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EBX = *(undefined2 **)pcVar2;
      }
    }
    else {
      pcVar2 = *args;
      *args = pcVar2 + 8;
      unaff_EBX = (undefined2 *)*(undefined6 *)pcVar2;
    }
  }
  iVar6 = state->field_width;
  iVar5 = 0;
  uStack_10 = in_ES;
  if (iVar6 == -1) {
    iVar6 = 1;
  }
  while( true ) {
    if (iVar6 < 1) {
      return iVar5;
    }
    uVar3 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    bVar1 = state->flags;
    if ((bVar1 & 2) != 0) break;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + -1;
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 0x20) == 0) {
        *(char *)unaff_EBX = (char)uVar3;
        unaff_EBX = (undefined2 *)((int)unaff_EBX + 1);
      }
      else {
        if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[uVar3 & 0xff] & 1U) != 0)) {
          iVar4 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
          uStack_10 = CONCAT11((char)iVar4,(char)uStack_10);
        }
        mb_string = (char *)&uStack_10;
        iVar4 = crt_locale_c_mbtowc_FUN_0060b1c0((wchar_t *)&stack0xffffffec,mb_string,2);
        if (iVar4 == -1) {
          return 0;
        }
        *unaff_EBX = (short)mb_string;
        unaff_EBX = unaff_EBX + 1;
      }
    }
  }
  return iVar5;
}


// Assembly code:
// 00604d54: PUSH EBX
//   Label: crt_stdio.c_scanf_char_FUN_00604d54
// 00604d55: PUSH ESI
// 00604d56: PUSH EDI
// 00604d57: PUSH ES
// 00604d58: PUSH EBP
// 00604d59: SUB ESP,0x8
// 00604d5c: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00604d60: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00604d64: MOV DL,byte ptr [ESI + 0x10]
// 00604d67: TEST DL,0x1
// 00604d6a: JZ 0x00604da0
//   XREF to: 00604da0 (CONDITIONAL_JUMP)
// 00604d6c: TEST DL,0x4
// 00604d6f: JZ 0x00604d7d
//   XREF to: 00604d7d (CONDITIONAL_JUMP)
// 00604d71: MOV ECX,dword ptr [EAX]
// 00604d73: ADD ECX,0x8
// 00604d76: MOV dword ptr [EAX],ECX
// 00604d78: LES EBX,[ECX + -0x8]
// 00604d7b: JMP 0x00604da0
//   XREF to: 00604da0 (UNCONDITIONAL_JUMP)
// 00604d7d: TEST DL,0x8
//   Label: LAB_00604d7d
// 00604d80: JZ 0x00604d92
//   XREF to: 00604d92 (CONDITIONAL_JUMP)
// 00604d82: MOV EBX,dword ptr [EAX]
// 00604d84: ADD EBX,0x4
// 00604d87: MOV dword ptr [EAX],EBX
// 00604d89: MOV AX,DS
// 00604d8b: MOV ES,AX
// 00604d8d: MOV EBX,dword ptr [EBX + -0x4]
// 00604d90: JMP 0x00604da0
//   XREF to: 00604da0 (UNCONDITIONAL_JUMP)
// 00604d92: MOV EDX,dword ptr [EAX]
//   Label: LAB_00604d92
// 00604d94: ADD EDX,0x4
// 00604d97: MOV dword ptr [EAX],EDX
// 00604d99: MOV AX,DS
// 00604d9b: MOV ES,AX
// 00604d9d: MOV EBX,dword ptr [EDX + -0x4]
// 00604da0: MOV EDI,dword ptr [ESI + 0xc]
//   Label: LAB_00604da0
// 00604da3: XOR EBP,EBP
// 00604da5: CMP EDI,-0x1
// 00604da8: JNZ 0x00604daf
//   XREF to: 00604daf (CONDITIONAL_JUMP)
// 00604daa: MOV EDI,0x1
// 00604daf: TEST EDI,EDI
//   Label: LAB_00604daf
// 00604db1: JLE 0x00604e3e
//   XREF to: 00604e3e (CONDITIONAL_JUMP)
// 00604db7: PUSH ESI
// 00604db8: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 00604dbd: MOV CL,byte ptr [ESI + 0x10]
// 00604dc0: ADD ESP,0x4
// 00604dc3: TEST CL,0x2
// 00604dc6: JNZ 0x00604e3e
//   XREF to: 00604e3e (CONDITIONAL_JUMP)
// 00604dcc: INC EBP
// 00604dcd: DEC EDI
// 00604dce: TEST CL,0x1
// 00604dd1: JZ 0x00604daf
//   XREF to: 00604daf (CONDITIONAL_JUMP)
// 00604dd3: TEST CL,0x20
// 00604dd6: JZ 0x00604e34
//   XREF to: 00604e34 (CONDITIONAL_JUMP)
// 00604dd8: MOV EDX,dword ptr [0x03f9c020]
//   XREF to: 03f9c020 (READ)
// 00604dde: MOV byte ptr [ESP + 0x4],AL
//   XREF to: Stack[-0x18] (WRITE)
// 00604de2: TEST EDX,EDX
// 00604de4: JZ 0x00604e07
//   XREF to: 00604e07 (CONDITIONAL_JUMP)
// 00604de6: AND EAX,0xff
// 00604deb: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 00604df1: AND AL,0x1
// 00604df3: AND EAX,0xff
// 00604df8: JZ 0x00604e07
//   XREF to: 00604e07 (CONDITIONAL_JUMP)
// 00604dfa: PUSH ESI
// 00604dfb: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 00604e00: ADD ESP,0x4
// 00604e03: MOV byte ptr [ESP + 0x5],AL
//   XREF to: Stack[-0x17] (WRITE)
// 00604e07: PUSH 0x2
//   Label: LAB_00604e07
// 00604e09: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x18] (DATA)
// 00604e0d: PUSH EAX
// 00604e0e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 00604e12: PUSH EAX
// 00604e13: CALL crt_locale.c_mbtowc_FUN_0060b1c0
//   XREF to: 0060b1c0 (UNCONDITIONAL_CALL)
// 00604e18: ADD ESP,0xc
// 00604e1b: CMP EAX,-0x1
// 00604e1e: JNZ 0x00604e24
//   XREF to: 00604e24 (CONDITIONAL_JUMP)
// 00604e20: XOR EAX,EAX
// 00604e22: JMP 0x00604e40
//   XREF to: 00604e40 (UNCONDITIONAL_JUMP)
// 00604e24: ADD EBX,0x2
//   Label: LAB_00604e24
// 00604e27: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00604e2a: MOV word ptr ES:[EBX + -0x2],AX
// 00604e2f: JMP 0x00604daf
//   XREF to: 00604daf (UNCONDITIONAL_JUMP)
// 00604e34: INC EBX
//   Label: LAB_00604e34
// 00604e35: MOV byte ptr ES:[EBX + -0x1],AL
// 00604e39: JMP 0x00604daf
//   XREF to: 00604daf (UNCONDITIONAL_JUMP)
// 00604e3e: MOV EAX,EBP
//   Label: LAB_00604e3e
// 00604e40: ADD ESP,0x8
//   Label: LAB_00604e40
// 00604e43: POP EBP
// 00604e44: POP ES
// 00604e45: POP EDI
// 00604e46: POP ESI
// 00604e47: POP EBX
// 00604e48: RET
