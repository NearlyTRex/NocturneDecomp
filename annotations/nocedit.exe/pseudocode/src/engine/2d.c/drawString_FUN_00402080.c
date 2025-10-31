// Name: engine_2d.c_drawString_FUN_00402080
// Address: 00402080
// Address Range: [[00402080, 004020d0]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawString_FUN_00402080(char * text, int x_pos, int y_pos, int color)
// Cross-references:
//   engine_console.cpp_CConsole_render_FUN_00441b00 (00441b00) at 00441b72 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawCharacter_FUN_00401a10

#include "nocturne.h"

void __cdecl engine_2d_c_drawString_FUN_00402080(char *text,int x_pos,int y_pos,int color)

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
        iVar3 = engine_2d_c_drawCharacter_FUN_00401a10((uint)bVar2,x_pos,y_pos,color);
        x_pos = x_pos + iVar3;
      }
      iVar5 = iVar5 + 1;
      text = (char *)((byte *)text + 1);
    } while (iVar5 < (int)(~uVar4 - 1));
  }
  return;
}


// Assembly code:
// 00402080: PUSH EBX
//   Label: engine_2d.c_drawString_FUN_00402080
// 00402081: PUSH ESI
// 00402082: PUSH EDI
// 00402083: PUSH EBP
// 00402084: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00402088: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040208c: MOV EDI,ESI
// 0040208e: SUB ECX,ECX
// 00402090: DEC ECX
// 00402091: XOR EAX,EAX
// 00402093: SCASB.REPNE ES:EDI
// 00402095: NOT ECX
// 00402097: DEC ECX
// 00402098: XOR EBX,EBX
// 0040209a: MOV EDI,ECX
// 0040209c: TEST ECX,ECX
// 0040209e: JLE 0x004020cc
//   XREF to: 004020cc (CONDITIONAL_JUMP)
// 004020a0: XOR EAX,EAX
//   Label: LAB_004020a0
// 004020a2: MOV AL,byte ptr [ESI]
// 004020a4: CMP EAX,0x20
// 004020a7: JL 0x004020c6
//   XREF to: 004020c6 (CONDITIONAL_JUMP)
// 004020a9: CMP EAX,0x100
// 004020ae: JGE 0x004020c6
//   XREF to: 004020c6 (CONDITIONAL_JUMP)
// 004020b0: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004020b4: PUSH EDX
// 004020b5: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004020b9: PUSH ECX
// 004020ba: PUSH EBP
// 004020bb: PUSH EAX
// 004020bc: CALL engine_2d.c_drawCharacter_FUN_00401a10
//   XREF to: 00401a10 (UNCONDITIONAL_CALL)
// 004020c1: ADD ESP,0x10
// 004020c4: ADD EBP,EAX
// 004020c6: INC EBX
//   Label: LAB_004020c6
// 004020c7: INC ESI
// 004020c8: CMP EBX,EDI
// 004020ca: JL 0x004020a0
//   XREF to: 004020a0 (CONDITIONAL_JUMP)
// 004020cc: POP EBP
//   Label: LAB_004020cc
// 004020cd: POP EDI
// 004020ce: POP ESI
// 004020cf: POP EBX
// 004020d0: RET
