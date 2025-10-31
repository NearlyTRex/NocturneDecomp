// Name: engine_2d.c_drawTextMultiline_FUN_00401cf0
// Address: 00401cf0
// Address Range: [[00401cf0, 00401d7a]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextMultiline_FUN_00401cf0(char * text, int x_start, int y_start, int y_max)
// Cross-references:
//   engine_2d.c_drawText_FUN_00401fd0 (00401fd0) at 00402018 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_FontTable
// Function calls:
//   engine_2d.c_drawCharacter_FUN_00401610

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextMultiline_FUN_00401cf0(char *text,int x_start,int y_start,int y_max)

{
  char cVar1;
  uint uVar2;
  uint char_code;
  int x_pos;
  char *pcVar3;
  int iVar4;
  int in_stack_00000014;
  
  uVar2 = 0xffffffff;
  pcVar3 = text;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0;
  x_pos = x_start;
  if (0 < (int)(~uVar2 - 1)) {
    do {
      if ((*text == 10) && (y_start = y_start + 0xb, x_pos = x_start, in_stack_00000014 < y_start))
      {
        return;
      }
      char_code = (uint)(byte)*text;
      if ((0x1f < (byte)*text) && (char_code < 0x100)) {
        engine_2d_c_drawCharacter_FUN_00401610(char_code,x_pos,y_start);
        x_pos = x_pos + (byte)(&g_FontTable)[(char_code - 0x20) * 0x91] + 1;
      }
      iVar4 = iVar4 + 1;
      text = (char *)((byte *)text + 1);
    } while (iVar4 < (int)(~uVar2 - 1));
  }
  return;
}


// Assembly code:
// 00401cf0: PUSH EBX
//   Label: engine_2d.c_drawTextMultiline_FUN_00401cf0
// 00401cf1: PUSH ESI
// 00401cf2: PUSH EDI
// 00401cf3: PUSH EBP
// 00401cf4: SUB ESP,0x4
// 00401cf7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00401cfb: MOV EDI,ESI
// 00401cfd: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401d01: SUB ECX,ECX
// 00401d03: DEC ECX
// 00401d04: XOR EAX,EAX
// 00401d06: SCASB.REPNE ES:EDI
// 00401d08: NOT ECX
// 00401d0a: DEC ECX
// 00401d0b: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 00401d0e: XOR EDI,EDI
// 00401d10: TEST ECX,ECX
// 00401d12: JLE 0x00401d5a
//   XREF to: 00401d5a (CONDITIONAL_JUMP)
// 00401d14: CMP byte ptr [ESI],0xa
//   Label: LAB_00401d14
// 00401d17: JZ 0x00401d62
//   XREF to: 00401d62 (CONDITIONAL_JUMP)
// 00401d19: XOR EBX,EBX
//   Label: LAB_00401d19
// 00401d1b: MOV BL,byte ptr [ESI]
// 00401d1d: CMP EBX,0x20
// 00401d20: JL 0x00401d51
//   XREF to: 00401d51 (CONDITIONAL_JUMP)
// 00401d22: CMP EBX,0x100
// 00401d28: JGE 0x00401d51
//   XREF to: 00401d51 (CONDITIONAL_JUMP)
// 00401d2a: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00401d2e: PUSH EAX
// 00401d2f: PUSH EBP
// 00401d30: PUSH EBX
// 00401d31: SUB EBX,0x20
// 00401d34: IMUL EBX,EBX,0x91
// 00401d3a: CALL engine_2d.c_drawCharacter_FUN_00401610
//   XREF to: 00401610 (UNCONDITIONAL_CALL)
// 00401d3f: ADD ESP,0xc
// 00401d42: MOV BL,byte ptr [EBX + 0x666040]
//   XREF to: 00666040 (DATA)
// 00401d48: AND EBX,0xff
// 00401d4e: INC EBX
// 00401d4f: ADD EBP,EBX
// 00401d51: MOV EDX,dword ptr [ESP]
//   Label: LAB_00401d51
//   XREF to: Stack[-0x14] (DATA)
// 00401d54: INC EDI
// 00401d55: INC ESI
// 00401d56: CMP EDI,EDX
// 00401d58: JL 0x00401d14
//   XREF to: 00401d14 (CONDITIONAL_JUMP)
// 00401d5a: ADD ESP,0x4
//   Label: LAB_00401d5a
// 00401d5d: POP EBP
// 00401d5e: POP EDI
// 00401d5f: POP ESI
// 00401d60: POP EBX
// 00401d61: RET
// 00401d62: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_00401d62
//   XREF to: Stack[0xc] (READ)
// 00401d66: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00401d6a: ADD ECX,0xb
// 00401d6d: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401d71: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[0xc] (WRITE)
// 00401d75: CMP ECX,EBX
// 00401d77: JG 0x00401d5a
//   XREF to: 00401d5a (CONDITIONAL_JUMP)
// 00401d79: JMP 0x00401d19
//   XREF to: 00401d19 (UNCONDITIONAL_JUMP)
