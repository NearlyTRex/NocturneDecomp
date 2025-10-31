// Name: engine_2d.c_drawTextWrappedColor_FUN_00401eb0
// Address: 00401eb0
// Address Range: [[00401eb0, 00401f35]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextWrappedColor_FUN_00401eb0(char * text, int x_start, int y_start, int x_max, int y_max, int color)
// Cross-references:
//   engine_2d.c_drawTextColor_FUN_00402430 (00402430) at 00402461 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawCharacter_FUN_00401a10

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextWrappedColor_FUN_00401eb0
          (char *text,int x_start,int y_start,int x_max,int y_max,int color)

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
        iVar3 = engine_2d_c_drawCharacter_FUN_00401a10((uint)bVar2,x_pos,y_pos,color);
        iVar6 = x_pos + iVar3;
        if ((y_max < x_pos + iVar3) && (y_pos = y_pos + 0xb, iVar6 = y_start, color < y_pos)) {
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
// 00401eb0: PUSH EBX
//   Label: engine_2d.c_drawTextWrappedColor_FUN_00401eb0
// 00401eb1: PUSH ESI
// 00401eb2: PUSH EDI
// 00401eb3: PUSH EBP
// 00401eb4: SUB ESP,0x4
// 00401eb7: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00401ebb: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00401ebf: MOV EDI,EDX
// 00401ec1: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401ec5: SUB ECX,ECX
// 00401ec7: DEC ECX
// 00401ec8: XOR EAX,EAX
// 00401eca: SCASB.REPNE ES:EDI
// 00401ecc: NOT ECX
// 00401ece: DEC ECX
// 00401ecf: XOR EBP,EBP
// 00401ed1: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 00401ed4: TEST ECX,ECX
// 00401ed6: JLE 0x00401f2e
//   XREF to: 00401f2e (CONDITIONAL_JUMP)
// 00401ed8: MOV EDI,EDX
// 00401eda: CMP byte ptr [EDI],0xa
//   Label: LAB_00401eda
// 00401edd: JNZ 0x00401eee
//   XREF to: 00401eee (CONDITIONAL_JUMP)
// 00401edf: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00401ee3: ADD EBX,0xb
// 00401ee6: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401eea: CMP EBX,ECX
// 00401eec: JG 0x00401f2e
//   XREF to: 00401f2e (CONDITIONAL_JUMP)
// 00401eee: XOR EAX,EAX
//   Label: LAB_00401eee
// 00401ef0: MOV AL,byte ptr [EDI]
// 00401ef2: CMP EAX,0x20
// 00401ef5: JL 0x00401f25
//   XREF to: 00401f25 (CONDITIONAL_JUMP)
// 00401ef7: CMP EAX,0x100
// 00401efc: JGE 0x00401f25
//   XREF to: 00401f25 (CONDITIONAL_JUMP)
// 00401efe: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 00401f02: PUSH EDX
// 00401f03: PUSH EBX
// 00401f04: PUSH ESI
// 00401f05: PUSH EAX
// 00401f06: CALL engine_2d.c_drawCharacter_FUN_00401a10
//   XREF to: 00401a10 (UNCONDITIONAL_CALL)
// 00401f0b: ADD ESP,0x10
// 00401f0e: ADD ESI,EAX
// 00401f10: CMP ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00401f14: JLE 0x00401f25
//   XREF to: 00401f25 (CONDITIONAL_JUMP)
// 00401f16: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00401f1a: ADD EBX,0xb
// 00401f1d: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401f21: CMP EBX,EAX
// 00401f23: JG 0x00401f2e
//   XREF to: 00401f2e (CONDITIONAL_JUMP)
// 00401f25: MOV EDX,dword ptr [ESP]
//   Label: LAB_00401f25
//   XREF to: Stack[-0x14] (DATA)
// 00401f28: INC EBP
// 00401f29: INC EDI
// 00401f2a: CMP EBP,EDX
// 00401f2c: JL 0x00401eda
//   XREF to: 00401eda (CONDITIONAL_JUMP)
// 00401f2e: ADD ESP,0x4
//   Label: LAB_00401f2e
// 00401f31: POP EBP
// 00401f32: POP EDI
// 00401f33: POP ESI
// 00401f34: POP EBX
// 00401f35: RET
