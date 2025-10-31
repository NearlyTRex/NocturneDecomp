// Name: crt_stdio.c_parse_format_spec_FUN_00604c1c
// Address: 00604c1c
// Address Range: [[00604c1c, 00604d15]]
// Convention: __cdecl
// Signature: char * crt_stdio.c_parse_format_spec_FUN_00604c1c(char * format_ptr, scanf_state_t * state)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 00604be0 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

char * __cdecl crt_stdio_c_parse_format_spec_FUN_00604c1c(char *format_ptr,scanf_state_t *state)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = state->flags;
  state->field_width = -1;
  state->flags = bVar1 | 1;
  state->flags = bVar1 & 3 | 1;
  if (*format_ptr == '*') {
    format_ptr = format_ptr + 1;
    state->flags = state->flags & 0xfe;
  }
  bVar1 = *format_ptr;
  if ((g_CharacterClassificationTable[(byte)(bVar1 + 1)] & 0x20U) != 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 * 10 + (bVar1 - 0x30);
      bVar1 = ((byte *)format_ptr)[1];
      format_ptr = (char *)((byte *)format_ptr + 1);
    } while ((g_CharacterClassificationTable[(byte)(bVar1 + 1)] & 0x20U) != 0);
    state->field_width = iVar2;
  }
  if (*format_ptr == 0x4e) {
    state->flags = state->flags | 8;
    format_ptr = (char *)((byte *)format_ptr + 1);
  }
  else if (*format_ptr == 0x46) {
    state->flags = state->flags | 4;
    format_ptr = (char *)((byte *)format_ptr + 1);
  }
  bVar1 = *format_ptr;
  if (bVar1 < 0x68) {
    if (0x48 < bVar1) {
      if (bVar1 < 0x4a) {
        if ((((byte *)format_ptr)[1] == 0x36) && (((byte *)format_ptr)[2] == 0x34)) {
          format_ptr = (char *)((byte *)format_ptr + 3);
          state->flags = state->flags | 0x40;
        }
      }
      else if (bVar1 == 0x4c) {
        state->flags = state->flags | 0x40;
        format_ptr = (char *)((byte *)format_ptr + 1);
      }
    }
  }
  else if (bVar1 < 0x69) {
    state->flags = state->flags | 0x10;
    format_ptr = (char *)((byte *)format_ptr + 1);
  }
  else if ((0x6b < bVar1) && ((bVar1 < 0x6d || (bVar1 == 0x77)))) {
    state->flags = state->flags | 0x20;
    format_ptr = (char *)((byte *)format_ptr + 1);
  }
  return (char *)(byte *)format_ptr;
}


// Assembly code:
// 00604c1c: PUSH EBX
//   Label: crt_stdio.c_parse_format_spec_FUN_00604c1c
// 00604c1d: PUSH ESI
// 00604c1e: PUSH EDI
// 00604c1f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00604c23: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00604c27: MOV AH,byte ptr [EDI + 0x10]
// 00604c2a: OR AH,0x1
// 00604c2d: MOV dword ptr [EDI + 0xc],0xffffffff
// 00604c34: MOV BL,AH
// 00604c36: MOV byte ptr [EDI + 0x10],AH
// 00604c39: AND BL,0x3
// 00604c3c: MOV byte ptr [EDI + 0x10],BL
// 00604c3f: CMP byte ptr [EDX],0x2a
// 00604c42: JNZ 0x00604c4e
//   XREF to: 00604c4e (CONDITIONAL_JUMP)
// 00604c44: MOV CL,byte ptr [EDI + 0x10]
// 00604c47: AND CL,0xfe
// 00604c4a: INC EDX
// 00604c4b: MOV byte ptr [EDI + 0x10],CL
// 00604c4e: XOR EBX,EBX
//   Label: LAB_00604c4e
// 00604c50: MOV BL,byte ptr [EDX]
// 00604c52: MOV AL,BL
// 00604c54: INC AL
// 00604c56: AND EAX,0xff
// 00604c5b: TEST byte ptr [EAX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 00604c62: JZ 0x00604c89
//   XREF to: 00604c89 (CONDITIONAL_JUMP)
// 00604c64: XOR EAX,EAX
// 00604c66: IMUL EAX,EAX,0xa
//   Label: LAB_00604c66
// 00604c69: SUB EBX,0x30
// 00604c6c: ADD EAX,EBX
// 00604c6e: XOR EBX,EBX
// 00604c70: MOV BL,byte ptr [EDX + 0x1]
// 00604c73: MOV CL,BL
// 00604c75: INC CL
// 00604c77: MOVZX ESI,CL
// 00604c7a: MOV CL,byte ptr [ESI + 0x6849c4]
//   XREF to: 006849c4 (DATA)
// 00604c80: INC EDX
// 00604c81: TEST CL,0x20
// 00604c84: JNZ 0x00604c66
//   XREF to: 00604c66 (CONDITIONAL_JUMP)
// 00604c86: MOV dword ptr [EDI + 0xc],EAX
// 00604c89: MOV CH,byte ptr [EDX]
//   Label: LAB_00604c89
// 00604c8b: LEA EAX,[EDX + 0x1]
// 00604c8e: CMP CH,0x4e
// 00604c91: JNZ 0x00604ca0
//   XREF to: 00604ca0 (CONDITIONAL_JUMP)
// 00604c93: MOV CL,byte ptr [EDI + 0x10]
// 00604c96: OR CL,0x8
// 00604c99: MOV EDX,EAX
// 00604c9b: MOV byte ptr [EDI + 0x10],CL
// 00604c9e: JMP 0x00604cb0
//   XREF to: 00604cb0 (UNCONDITIONAL_JUMP)
// 00604ca0: CMP CH,0x46
//   Label: LAB_00604ca0
// 00604ca3: JNZ 0x00604cb0
//   XREF to: 00604cb0 (CONDITIONAL_JUMP)
// 00604ca5: MOV BH,byte ptr [EDI + 0x10]
// 00604ca8: OR BH,0x4
// 00604cab: MOV EDX,EAX
// 00604cad: MOV byte ptr [EDI + 0x10],BH
// 00604cb0: MOV AL,byte ptr [EDX]
//   Label: LAB_00604cb0
// 00604cb2: LEA EBX,[EDX + 0x1]
// 00604cb5: CMP AL,0x68
// 00604cb7: JC 0x00604cc7
//   XREF to: 00604cc7 (CONDITIONAL_JUMP)
// 00604cb9: JBE 0x00604cd3
//   XREF to: 00604cd3 (CONDITIONAL_JUMP)
// 00604cbb: CMP AL,0x6c
// 00604cbd: JC 0x00604d10
//   XREF to: 00604d10 (CONDITIONAL_JUMP)
// 00604cbf: JBE 0x00604cdf
//   XREF to: 00604cdf (CONDITIONAL_JUMP)
// 00604cc1: CMP AL,0x77
// 00604cc3: JZ 0x00604cdf
//   XREF to: 00604cdf (CONDITIONAL_JUMP)
// 00604cc5: JMP 0x00604d10
//   XREF to: 00604d10 (UNCONDITIONAL_JUMP)
// 00604cc7: CMP AL,0x49
//   Label: LAB_00604cc7
// 00604cc9: JC 0x00604d10
//   XREF to: 00604d10 (CONDITIONAL_JUMP)
// 00604ccb: JBE 0x00604cf8
//   XREF to: 00604cf8 (CONDITIONAL_JUMP)
// 00604ccd: CMP AL,0x4c
// 00604ccf: JZ 0x00604ceb
//   XREF to: 00604ceb (CONDITIONAL_JUMP)
// 00604cd1: JMP 0x00604d10
//   XREF to: 00604d10 (UNCONDITIONAL_JUMP)
// 00604cd3: MOV AL,byte ptr [EDI + 0x10]
//   Label: LAB_00604cd3
// 00604cd6: OR AL,0x10
// 00604cd8: MOV EDX,EBX
// 00604cda: MOV byte ptr [EDI + 0x10],AL
// 00604cdd: JMP 0x00604d10
//   XREF to: 00604d10 (UNCONDITIONAL_JUMP)
// 00604cdf: MOV CH,byte ptr [EDI + 0x10]
//   Label: LAB_00604cdf
// 00604ce2: OR CH,0x20
// 00604ce5: INC EDX
// 00604ce6: MOV byte ptr [EDI + 0x10],CH
// 00604ce9: JMP 0x00604d10
//   XREF to: 00604d10 (UNCONDITIONAL_JUMP)
// 00604ceb: MOV AH,byte ptr [EDI + 0x10]
//   Label: LAB_00604ceb
// 00604cee: OR AH,0x40
// 00604cf1: MOV EDX,EBX
// 00604cf3: MOV byte ptr [EDI + 0x10],AH
// 00604cf6: JMP 0x00604d10
//   XREF to: 00604d10 (UNCONDITIONAL_JUMP)
// 00604cf8: CMP byte ptr [EDX + 0x1],0x36
//   Label: LAB_00604cf8
// 00604cfc: JNZ 0x00604d10
//   XREF to: 00604d10 (CONDITIONAL_JUMP)
// 00604cfe: CMP byte ptr [EDX + 0x2],0x34
// 00604d02: JNZ 0x00604d10
//   XREF to: 00604d10 (CONDITIONAL_JUMP)
// 00604d04: MOV CL,byte ptr [EDI + 0x10]
// 00604d07: OR CL,0x40
// 00604d0a: ADD EDX,0x3
// 00604d0d: MOV byte ptr [EDI + 0x10],CL
// 00604d10: MOV EAX,EDX
//   Label: LAB_00604d10
// 00604d12: POP EDI
// 00604d13: POP ESI
// 00604d14: POP EBX
// 00604d15: RET
