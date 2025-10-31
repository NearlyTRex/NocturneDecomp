// Name: engine_2d.c_drawStringHighlighted_FUN_004020e0
// Address: 004020e0
// Address Range: [[004020e0, 0040212b]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawStringHighlighted_FUN_004020e0(char * text, int x_pos, int y_pos)
// Function calls:
//   engine_2d.c_drawCharacterHighlighted_FUN_00401b70

#include "nocturne.h"

void __cdecl engine_2d_c_drawStringHighlighted_FUN_004020e0(char *text,int x_pos,int y_pos)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  uVar4 = 0xffffffff;
  pcVar6 = text;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  if (0 < (int)(~uVar4 - 1)) {
    do {
      bVar2 = *text;
      if ((0x1f < bVar2) && (bVar2 < 0x100)) {
        iVar3 = engine_2d_c_drawCharacterHighlighted_FUN_00401b70((uint)bVar2,x_pos,y_pos);
        x_pos = x_pos + iVar3;
      }
      iVar5 = iVar5 + 1;
      text = (char *)((byte *)text + 1);
    } while (iVar5 < (int)(~uVar4 - 1));
  }
  return;
}


// Assembly code:
// 004020e0: PUSH EBX
//   Label: engine_2d.c_drawStringHighlighted_FUN_004020e0
// 004020e1: PUSH ESI
// 004020e2: PUSH EDI
// 004020e3: PUSH EBP
// 004020e4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004020e8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004020ec: MOV EDI,ESI
// 004020ee: SUB ECX,ECX
// 004020f0: DEC ECX
// 004020f1: XOR EAX,EAX
// 004020f3: SCASB.REPNE ES:EDI
// 004020f5: NOT ECX
// 004020f7: DEC ECX
// 004020f8: XOR EBX,EBX
// 004020fa: MOV EDI,ECX
// 004020fc: TEST ECX,ECX
// 004020fe: JLE 0x00402127
//   XREF to: 00402127 (CONDITIONAL_JUMP)
// 00402100: XOR EAX,EAX
//   Label: LAB_00402100
// 00402102: MOV AL,byte ptr [ESI]
// 00402104: CMP EAX,0x20
// 00402107: JL 0x00402121
//   XREF to: 00402121 (CONDITIONAL_JUMP)
// 00402109: CMP EAX,0x100
// 0040210e: JGE 0x00402121
//   XREF to: 00402121 (CONDITIONAL_JUMP)
// 00402110: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00402114: PUSH EDX
// 00402115: PUSH EBP
// 00402116: PUSH EAX
// 00402117: CALL engine_2d.c_drawCharacterHighlighted_FUN_00401b70
//   XREF to: 00401b70 (UNCONDITIONAL_CALL)
// 0040211c: ADD ESP,0xc
// 0040211f: ADD EBP,EAX
// 00402121: INC EBX
//   Label: LAB_00402121
// 00402122: INC ESI
// 00402123: CMP EBX,EDI
// 00402125: JL 0x00402100
//   XREF to: 00402100 (CONDITIONAL_JUMP)
// 00402127: POP EBP
//   Label: LAB_00402127
// 00402128: POP EDI
// 00402129: POP ESI
// 0040212a: POP EBX
// 0040212b: RET
