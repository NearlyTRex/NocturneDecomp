// Name: engine_2d.c_drawStringMasked_FUN_00402030
// Address: 00402030
// Address Range: [[00402030, 0040207b]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawStringMasked_FUN_00402030(char * text, int x_pos, int y_pos)
// Function calls:
//   engine_2d.c_drawCharacterMasked_FUN_00401900

#include "nocturne.h"

void __cdecl engine_2d_c_drawStringMasked_FUN_00402030(char *text,int x_pos,int y_pos)

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
        iVar3 = engine_2d_c_drawCharacterMasked_FUN_00401900((uint)bVar2,x_pos,y_pos);
        x_pos = x_pos + iVar3;
      }
      iVar5 = iVar5 + 1;
      text = (char *)((byte *)text + 1);
    } while (iVar5 < (int)(~uVar4 - 1));
  }
  return;
}


// Assembly code:
// 00402030: PUSH EBX
//   Label: engine_2d.c_drawStringMasked_FUN_00402030
// 00402031: PUSH ESI
// 00402032: PUSH EDI
// 00402033: PUSH EBP
// 00402034: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00402038: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040203c: MOV EDI,ESI
// 0040203e: SUB ECX,ECX
// 00402040: DEC ECX
// 00402041: XOR EAX,EAX
// 00402043: SCASB.REPNE ES:EDI
// 00402045: NOT ECX
// 00402047: DEC ECX
// 00402048: XOR EBX,EBX
// 0040204a: MOV EDI,ECX
// 0040204c: TEST ECX,ECX
// 0040204e: JLE 0x00402077
//   XREF to: 00402077 (CONDITIONAL_JUMP)
// 00402050: XOR EAX,EAX
//   Label: LAB_00402050
// 00402052: MOV AL,byte ptr [ESI]
// 00402054: CMP EAX,0x20
// 00402057: JL 0x00402071
//   XREF to: 00402071 (CONDITIONAL_JUMP)
// 00402059: CMP EAX,0x100
// 0040205e: JGE 0x00402071
//   XREF to: 00402071 (CONDITIONAL_JUMP)
// 00402060: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00402064: PUSH EDX
// 00402065: PUSH EBP
// 00402066: PUSH EAX
// 00402067: CALL engine_2d.c_drawCharacterMasked_FUN_00401900
//   XREF to: 00401900 (UNCONDITIONAL_CALL)
// 0040206c: ADD ESP,0xc
// 0040206f: ADD EBP,EAX
// 00402071: INC EBX
//   Label: LAB_00402071
// 00402072: INC ESI
// 00402073: CMP EBX,EDI
// 00402075: JL 0x00402050
//   XREF to: 00402050 (CONDITIONAL_JUMP)
// 00402077: POP EBP
//   Label: LAB_00402077
// 00402078: POP EDI
// 00402079: POP ESI
// 0040207a: POP EBX
// 0040207b: RET
