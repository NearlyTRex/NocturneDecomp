// Name: crt_stdio.c_scanf_string_FUN_00604e4c
// Address: 00604e4c
// Address Range: [[00604e4c, 00604faf]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_string_FUN_00604e4c(scanf_state_t * state, va_list_t * args)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 00604b52 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable
// Function calls:
//   crt_locale.c_mbtowc_FUN_0060b1c0
//   crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_string_FUN_00604e4c(scanf_state_t *state,va_list_t *args)

{
  byte bVar1;
  va_list_t pcVar2;
  uint character;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  byte *unaff_EDI;
  scanf_state_t *psVar5;
  byte local_1c;
  char local_18;
  
  if ((state->flags & 0x20) == 0) {
    local_18 = '\x01';
  }
  else {
    local_18 = '\x02';
  }
  bVar1 = state->flags;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EDI = *(byte **)pcVar2;
      }
      else {
        pcVar2 = *args;
        *args = pcVar2 + 4;
        unaff_EDI = *(byte **)pcVar2;
      }
    }
    else {
      pcVar2 = *args;
      *args = pcVar2 + 8;
      unaff_EDI = (byte *)*(undefined6 *)pcVar2;
    }
  }
  iVar4 = 0;
  while (psVar5 = state, character = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state),
        (g_CharacterClassificationTable[(byte)((char)character + 1)] & 2U) != 0) {
    iVar4 = iVar4 + 1;
  }
  if ((state->flags & 2) == 0) {
    iVar3 = state->field_width;
    state->field_width = iVar3 + -1;
    if (iVar3 != 0) {
      do {
        iVar4 = iVar4 + 1;
        if ((state->flags & 1) != 0) {
          if (local_18 == '\x01') {
            *unaff_EDI = (byte)character;
          }
          else {
            if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[character & 0xff] & 1U) != 0)) {
              psVar5 = state;
              iVar3 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
              psVar5 = (scanf_state_t *)(uint)CONCAT11((char)iVar3,(char)psVar5);
            }
            iVar3 = crt_locale_c_mbtowc_FUN_0060b1c0((wchar_t *)&stack0xffffffd8,&stack0xffffffdc,2)
            ;
            if (iVar3 == -1) {
              return 0;
            }
            *(short *)unaff_EDI = (short)psVar5;
            local_1c = (byte)character;
          }
          unaff_EDI = unaff_EDI + local_1c;
        }
        character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
        if (character == 0xffffffff) goto LAB_00604f88;
      } while ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 2U) == 0);
    }
    crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(character,state);
  }
  else {
    iVar4 = 0;
  }
LAB_00604f88:
  if (((state->flags & 1) != 0) && (0 < iVar4)) {
    if (local_18 == '\x01') {
      *unaff_EDI = 0;
    }
    else {
      unaff_EDI[0] = 0;
      unaff_EDI[1] = 0;
    }
  }
  return iVar4;
}


// Assembly code:
// 00604e4c: PUSH EBX
//   Label: crt_stdio.c_scanf_string_FUN_00604e4c
// 00604e4d: PUSH ESI
// 00604e4e: PUSH EDI
// 00604e4f: PUSH ES
// 00604e50: PUSH EBP
// 00604e51: SUB ESP,0xc
// 00604e54: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00604e58: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00604e5c: MOV DL,byte ptr [ESI + 0x10]
// 00604e5f: TEST DL,0x20
// 00604e62: JZ 0x00604e6b
//   XREF to: 00604e6b (CONDITIONAL_JUMP)
// 00604e64: MOV byte ptr [ESP + 0x8],0x2
//   XREF to: Stack[-0x18] (WRITE)
// 00604e69: JMP 0x00604e73
//   XREF to: 00604e73 (UNCONDITIONAL_JUMP)
// 00604e6b: TEST DL,0x10
//   Label: LAB_00604e6b
// 00604e6e: MOV byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 00604e73: MOV CH,byte ptr [ESI + 0x10]
//   Label: LAB_00604e73
// 00604e76: TEST CH,0x1
// 00604e79: JZ 0x00604eaf
//   XREF to: 00604eaf (CONDITIONAL_JUMP)
// 00604e7b: TEST CH,0x4
// 00604e7e: JZ 0x00604e8c
//   XREF to: 00604e8c (CONDITIONAL_JUMP)
// 00604e80: MOV ECX,dword ptr [EAX]
// 00604e82: ADD ECX,0x8
// 00604e85: MOV dword ptr [EAX],ECX
// 00604e87: LES EDI,[ECX + -0x8]
// 00604e8a: JMP 0x00604eaf
//   XREF to: 00604eaf (UNCONDITIONAL_JUMP)
// 00604e8c: TEST CH,0x8
//   Label: LAB_00604e8c
// 00604e8f: JZ 0x00604ea1
//   XREF to: 00604ea1 (CONDITIONAL_JUMP)
// 00604e91: MOV EBX,dword ptr [EAX]
// 00604e93: ADD EBX,0x4
// 00604e96: MOV dword ptr [EAX],EBX
// 00604e98: MOV AX,DS
// 00604e9a: MOV ES,AX
// 00604e9c: MOV EDI,dword ptr [EBX + -0x4]
// 00604e9f: JMP 0x00604eaf
//   XREF to: 00604eaf (UNCONDITIONAL_JUMP)
// 00604ea1: MOV EDX,dword ptr [EAX]
//   Label: LAB_00604ea1
// 00604ea3: ADD EDX,0x4
// 00604ea6: MOV dword ptr [EAX],EDX
// 00604ea8: MOV AX,DS
// 00604eaa: MOV ES,AX
// 00604eac: MOV EDI,dword ptr [EDX + -0x4]
// 00604eaf: XOR EBP,EBP
//   Label: LAB_00604eaf
// 00604eb1: PUSH ESI
//   Label: LAB_00604eb1
// 00604eb2: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 00604eb7: ADD ESP,0x4
// 00604eba: MOV EBX,EAX
// 00604ebc: INC AL
// 00604ebe: AND EAX,0xff
// 00604ec3: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00604eca: JZ 0x00604ecf
//   XREF to: 00604ecf (CONDITIONAL_JUMP)
// 00604ecc: INC EBP
// 00604ecd: JMP 0x00604eb1
//   XREF to: 00604eb1 (UNCONDITIONAL_JUMP)
// 00604ecf: TEST byte ptr [ESI + 0x10],0x2
//   Label: LAB_00604ecf
// 00604ed3: JZ 0x00604edc
//   XREF to: 00604edc (CONDITIONAL_JUMP)
// 00604ed5: XOR EBP,EBP
// 00604ed7: JMP 0x00604f88
//   XREF to: 00604f88 (UNCONDITIONAL_JUMP)
// 00604edc: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_00604edc
// 00604edf: LEA EDX,[EAX + -0x1]
// 00604ee2: MOV dword ptr [ESI + 0xc],EDX
// 00604ee5: TEST EAX,EAX
// 00604ee7: JZ 0x00604f7e
//   XREF to: 00604f7e (CONDITIONAL_JUMP)
// 00604eed: MOV AL,byte ptr [ESI + 0x10]
//   Label: LAB_00604eed
// 00604ef0: INC EBP
// 00604ef1: TEST AL,0x1
// 00604ef3: JZ 0x00604f5a
//   XREF to: 00604f5a (CONDITIONAL_JUMP)
// 00604ef5: CMP byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[-0x18] (READ)
// 00604efa: JNZ 0x00604f01
//   XREF to: 00604f01 (CONDITIONAL_JUMP)
// 00604efc: MOV byte ptr ES:[EDI],BL
// 00604eff: JMP 0x00604f52
//   XREF to: 00604f52 (UNCONDITIONAL_JUMP)
// 00604f01: MOV EAX,[0x03f9c020]
//   Label: LAB_00604f01
//   XREF to: 03f9c020 (READ)
// 00604f06: MOV byte ptr [ESP + 0x4],BL
//   XREF to: Stack[-0x1c] (WRITE)
// 00604f0a: TEST EAX,EAX
// 00604f0c: JZ 0x00604f2e
//   XREF to: 00604f2e (CONDITIONAL_JUMP)
// 00604f0e: XOR EAX,EAX
// 00604f10: MOV AL,BL
// 00604f12: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 00604f18: AND AL,0x1
// 00604f1a: AND EAX,0xff
// 00604f1f: JZ 0x00604f2e
//   XREF to: 00604f2e (CONDITIONAL_JUMP)
// 00604f21: PUSH ESI
// 00604f22: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 00604f27: ADD ESP,0x4
// 00604f2a: MOV byte ptr [ESP + 0x5],AL
//   XREF to: Stack[-0x1b] (WRITE)
// 00604f2e: PUSH 0x2
//   Label: LAB_00604f2e
// 00604f30: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 00604f34: PUSH EAX
// 00604f35: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 00604f39: PUSH EAX
// 00604f3a: CALL crt_locale.c_mbtowc_FUN_0060b1c0
//   XREF to: 0060b1c0 (UNCONDITIONAL_CALL)
// 00604f3f: ADD ESP,0xc
// 00604f42: CMP EAX,-0x1
// 00604f45: JNZ 0x00604f4b
//   XREF to: 00604f4b (CONDITIONAL_JUMP)
// 00604f47: XOR EAX,EAX
// 00604f49: JMP 0x00604fa7
//   XREF to: 00604fa7 (UNCONDITIONAL_JUMP)
// 00604f4b: MOV EAX,dword ptr [ESP]
//   Label: LAB_00604f4b
//   XREF to: Stack[-0x20] (DATA)
// 00604f4e: MOV word ptr ES:[EDI],AX
// 00604f52: XOR EAX,EAX
//   Label: LAB_00604f52
// 00604f54: MOV AL,byte ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00604f58: ADD EDI,EAX
// 00604f5a: PUSH ESI
//   Label: LAB_00604f5a
// 00604f5b: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 00604f60: ADD ESP,0x4
// 00604f63: MOV EBX,EAX
// 00604f65: CMP EAX,-0x1
// 00604f68: JZ 0x00604f88
//   XREF to: 00604f88 (CONDITIONAL_JUMP)
// 00604f6a: INC AL
// 00604f6c: AND EAX,0xff
// 00604f71: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00604f78: JZ 0x00604eed
//   XREF to: 00604eed (CONDITIONAL_JUMP)
// 00604f7e: PUSH ESI
//   Label: LAB_00604f7e
// 00604f7f: PUSH EBX
// 00604f80: CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   XREF to: 0060493c (UNCONDITIONAL_CALL)
// 00604f85: ADD ESP,0x8
// 00604f88: TEST byte ptr [ESI + 0x10],0x1
//   Label: LAB_00604f88
// 00604f8c: JZ 0x00604fa5
//   XREF to: 00604fa5 (CONDITIONAL_JUMP)
// 00604f8e: TEST EBP,EBP
// 00604f90: JLE 0x00604fa5
//   XREF to: 00604fa5 (CONDITIONAL_JUMP)
// 00604f92: CMP byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[-0x18] (READ)
// 00604f97: JNZ 0x00604f9f
//   XREF to: 00604f9f (CONDITIONAL_JUMP)
// 00604f99: MOV byte ptr ES:[EDI],0x0
// 00604f9d: JMP 0x00604fa5
//   XREF to: 00604fa5 (UNCONDITIONAL_JUMP)
// 00604f9f: MOV word ptr ES:[EDI],0x0
//   Label: LAB_00604f9f
// 00604fa5: MOV EAX,EBP
//   Label: LAB_00604fa5
// 00604fa7: ADD ESP,0xc
//   Label: LAB_00604fa7
// 00604faa: POP EBP
// 00604fab: POP ES
// 00604fac: POP EDI
// 00604fad: POP ESI
// 00604fae: POP EBX
// 00604faf: RET
