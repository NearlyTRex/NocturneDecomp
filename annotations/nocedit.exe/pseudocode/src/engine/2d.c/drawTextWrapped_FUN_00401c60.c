// Name: engine_2d.c_drawTextWrapped_FUN_00401c60
// Address: 00401c60
// Address Range: [[00401c60, 00401ce0]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextWrapped_FUN_00401c60(char * text, int x_start, int y_start, int x_max, int y_max)
// Cross-references:
//   engine_2d.c_drawText_FUN_00401fd0 (00401fd0) at 00401ffa [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawCharacter_FUN_00401610

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextWrapped_FUN_00401c60(char *text,int x_start,int y_start,int x_max,int y_max)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int y_pos;
  int iVar5;
  int x_pos;
  int iVar6;
  char *pcVar7;
  int in_stack_00000018;
  
  uVar4 = 0xffffffff;
  pcVar7 = text;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  y_pos = y_start;
  x_pos = x_start;
  if (0 < (int)(~uVar4 - 1)) {
    do {
      if ((*text == 10) && (y_pos = y_pos + 0xb, x_pos = x_start, y_max < y_pos)) {
        return;
      }
      bVar2 = *text;
      iVar6 = x_pos;
      if ((0x1f < bVar2) && (bVar2 < 0x100)) {
        iVar3 = engine_2d_c_drawCharacter_FUN_00401610((uint)bVar2,x_pos,y_pos);
        iVar6 = x_pos + iVar3;
        if ((y_max < x_pos + iVar3) &&
           (y_pos = y_pos + 0xb, iVar6 = y_start, in_stack_00000018 < y_pos)) {
          return;
        }
      }
      iVar5 = iVar5 + 1;
      text = (char *)((byte *)text + 1);
      x_pos = iVar6;
    } while (iVar5 < (int)(~uVar4 - 1));
  }
  return;
}


// Assembly code:
// 00401c60: PUSH EBX
//   Label: engine_2d.c_drawTextWrapped_FUN_00401c60
// 00401c61: PUSH ESI
// 00401c62: PUSH EDI
// 00401c63: PUSH EBP
// 00401c64: SUB ESP,0x4
// 00401c67: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00401c6b: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00401c6f: MOV EDI,EDX
// 00401c71: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401c75: SUB ECX,ECX
// 00401c77: DEC ECX
// 00401c78: XOR EAX,EAX
// 00401c7a: SCASB.REPNE ES:EDI
// 00401c7c: NOT ECX
// 00401c7e: DEC ECX
// 00401c7f: XOR EBP,EBP
// 00401c81: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 00401c84: TEST ECX,ECX
// 00401c86: JLE 0x00401cd9
//   XREF to: 00401cd9 (CONDITIONAL_JUMP)
// 00401c88: MOV EDI,EDX
// 00401c8a: CMP byte ptr [EDI],0xa
//   Label: LAB_00401c8a
// 00401c8d: JNZ 0x00401c9e
//   XREF to: 00401c9e (CONDITIONAL_JUMP)
// 00401c8f: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00401c93: ADD EBX,0xb
// 00401c96: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401c9a: CMP EBX,ECX
// 00401c9c: JG 0x00401cd9
//   XREF to: 00401cd9 (CONDITIONAL_JUMP)
// 00401c9e: XOR EAX,EAX
//   Label: LAB_00401c9e
// 00401ca0: MOV AL,byte ptr [EDI]
// 00401ca2: CMP EAX,0x20
// 00401ca5: JL 0x00401cd0
//   XREF to: 00401cd0 (CONDITIONAL_JUMP)
// 00401ca7: CMP EAX,0x100
// 00401cac: JGE 0x00401cd0
//   XREF to: 00401cd0 (CONDITIONAL_JUMP)
// 00401cae: PUSH EBX
// 00401caf: PUSH ESI
// 00401cb0: PUSH EAX
// 00401cb1: CALL engine_2d.c_drawCharacter_FUN_00401610
//   XREF to: 00401610 (UNCONDITIONAL_CALL)
// 00401cb6: ADD ESP,0xc
// 00401cb9: ADD ESI,EAX
// 00401cbb: CMP ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00401cbf: JLE 0x00401cd0
//   XREF to: 00401cd0 (CONDITIONAL_JUMP)
// 00401cc1: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00401cc5: ADD EBX,0xb
// 00401cc8: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401ccc: CMP EBX,EDX
// 00401cce: JG 0x00401cd9
//   XREF to: 00401cd9 (CONDITIONAL_JUMP)
// 00401cd0: MOV EDX,dword ptr [ESP]
//   Label: LAB_00401cd0
//   XREF to: Stack[-0x14] (DATA)
// 00401cd3: INC EBP
// 00401cd4: INC EDI
// 00401cd5: CMP EBP,EDX
// 00401cd7: JL 0x00401c8a
//   XREF to: 00401c8a (CONDITIONAL_JUMP)
// 00401cd9: ADD ESP,0x4
//   Label: LAB_00401cd9
// 00401cdc: POP EBP
// 00401cdd: POP EDI
// 00401cde: POP ESI
// 00401cdf: POP EBX
// 00401ce0: RET
