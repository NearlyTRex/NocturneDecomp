// Name: engine_2d.c_drawTextMultilineColor_FUN_00401f40
// Address: 00401f40
// Address Range: [[00401f40, 00401fcf]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextMultilineColor_FUN_00401f40(char * text, int x_start, int y_start, int y_max, int color)
// Cross-references:
//   engine_2d.c_drawTextColor_FUN_00402430 (00402430) at 00402486 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_FontTable
// Function calls:
//   engine_2d.c_drawCharacter_FUN_00401a10

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextMultilineColor_FUN_00401f40
          (char *text,int x_start,int y_start,int y_max,int color)

{
  char cVar1;
  uint uVar2;
  uint char_code;
  int x_pos;
  char *pcVar3;
  int iVar4;
  int in_stack_00000018;
  
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
      if ((*text == 10) && (y_start = y_start + 0xb, x_pos = x_start, color < y_start)) {
        return;
      }
      char_code = (uint)(byte)*text;
      if ((0x1f < (byte)*text) && (char_code < 0x100)) {
        engine_2d_c_drawCharacter_FUN_00401a10(char_code,x_pos,y_start,in_stack_00000018);
        x_pos = x_pos + (byte)(&g_FontTable)[(char_code - 0x20) * 0x91] + 1;
      }
      iVar4 = iVar4 + 1;
      text = (char *)((byte *)text + 1);
    } while (iVar4 < (int)(~uVar2 - 1));
  }
  return;
}


// Assembly code:
// 00401f40: PUSH EBX
//   Label: engine_2d.c_drawTextMultilineColor_FUN_00401f40
// 00401f41: PUSH ESI
// 00401f42: PUSH EDI
// 00401f43: PUSH EBP
// 00401f44: SUB ESP,0x4
// 00401f47: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00401f4b: MOV EDI,ESI
// 00401f4d: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401f51: SUB ECX,ECX
// 00401f53: DEC ECX
// 00401f54: XOR EAX,EAX
// 00401f56: SCASB.REPNE ES:EDI
// 00401f58: NOT ECX
// 00401f5a: DEC ECX
// 00401f5b: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 00401f5e: XOR EDI,EDI
// 00401f60: TEST ECX,ECX
// 00401f62: JLE 0x00401faf
//   XREF to: 00401faf (CONDITIONAL_JUMP)
// 00401f64: CMP byte ptr [ESI],0xa
//   Label: LAB_00401f64
// 00401f67: JZ 0x00401fb7
//   XREF to: 00401fb7 (CONDITIONAL_JUMP)
// 00401f69: XOR EBX,EBX
//   Label: LAB_00401f69
// 00401f6b: MOV BL,byte ptr [ESI]
// 00401f6d: CMP EBX,0x20
// 00401f70: JL 0x00401fa6
//   XREF to: 00401fa6 (CONDITIONAL_JUMP)
// 00401f72: CMP EBX,0x100
// 00401f78: JGE 0x00401fa6
//   XREF to: 00401fa6 (CONDITIONAL_JUMP)
// 00401f7a: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 00401f7e: PUSH EAX
// 00401f7f: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00401f83: PUSH EDX
// 00401f84: PUSH EBP
// 00401f85: PUSH EBX
// 00401f86: SUB EBX,0x20
// 00401f89: IMUL EBX,EBX,0x91
// 00401f8f: CALL engine_2d.c_drawCharacter_FUN_00401a10
//   XREF to: 00401a10 (UNCONDITIONAL_CALL)
// 00401f94: ADD ESP,0x10
// 00401f97: MOV BL,byte ptr [EBX + 0x666040]
//   XREF to: 00666040 (DATA)
// 00401f9d: AND EBX,0xff
// 00401fa3: INC EBX
// 00401fa4: ADD EBP,EBX
// 00401fa6: MOV EDX,dword ptr [ESP]
//   Label: LAB_00401fa6
//   XREF to: Stack[-0x14] (DATA)
// 00401fa9: INC EDI
// 00401faa: INC ESI
// 00401fab: CMP EDI,EDX
// 00401fad: JL 0x00401f64
//   XREF to: 00401f64 (CONDITIONAL_JUMP)
// 00401faf: ADD ESP,0x4
//   Label: LAB_00401faf
// 00401fb2: POP EBP
// 00401fb3: POP EDI
// 00401fb4: POP ESI
// 00401fb5: POP EBX
// 00401fb6: RET
// 00401fb7: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_00401fb7
//   XREF to: Stack[0xc] (READ)
// 00401fbb: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00401fbf: ADD ECX,0xb
// 00401fc2: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401fc6: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[0xc] (WRITE)
// 00401fca: CMP ECX,EBX
// 00401fcc: JG 0x00401faf
//   XREF to: 00401faf (CONDITIONAL_JUMP)
// 00401fce: JMP 0x00401f69
//   XREF to: 00401f69 (UNCONDITIONAL_JUMP)
