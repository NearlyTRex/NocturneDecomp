// Name: engine_2d.c_getStringWidth_FUN_004018a0
// Address: 004018a0
// Address Range: [[004018a0, 004018f1]]
// Convention: __cdecl
// Signature: int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_getCurrentCharWidth_FUN_00489ca0 (00489ca0) at 00489ccb [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_getCurrentTextWidth_FUN_00489d00 (00489d00) at 00489d1a [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e770 (0040e770) at 0040e7e0 [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040ee30 (0040ee30) at 0040ee38 [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040ee50 (0040ee50) at 0040ee74 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536cd0 (00536cd0) at 00536ce6 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0 (004025f0) at 004025fb [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredAt_FUN_00402280 (00402280) at 0040228b [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredColor_FUN_004026c0 (004026c0) at 004026d6 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCentered_FUN_00402350 (00402350) at 00402366 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextRightAlignedColor_FUN_00402530 (00402530) at 0040253b [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextRightAligned_FUN_004021c0 (004021c0) at 004021cb [UNCONDITIONAL_CALL]
//   engine_2d.c_getStringWidthFormatted_FUN_004027a0 (004027a0) at 004027dd [UNCONDITIONAL_CALL]
//   engine_2d.c_wrapTextToWidth_FUN_00401d80 (00401d80) at 00401dda [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f93c [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_FontTable

#include "nocturne.h"

int __cdecl engine_2d_c_getStringWidth_FUN_004018a0(char *text)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  uVar5 = 0;
  iVar6 = 0;
  pbVar4 = (byte *)text;
  do {
    uVar3 = 0xffffffff;
    pcVar7 = text;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 <= uVar5) {
      return iVar6;
    }
    bVar2 = *pbVar4;
    if ((0x1f < bVar2) && (bVar2 < 0x100)) {
      iVar6 = iVar6 + (byte)(&g_FontTable)[(bVar2 - 0x20) * 0x91] + 1;
    }
    uVar5 = uVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while( true );
}


// Assembly code:
// 004018a0: PUSH EBX
//   Label: engine_2d.c_getStringWidth_FUN_004018a0
// 004018a1: PUSH ESI
// 004018a2: PUSH EDI
// 004018a3: PUSH EBP
// 004018a4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004018a8: MOV EDX,EBP
// 004018aa: XOR EBX,EBX
// 004018ac: XOR ESI,ESI
// 004018ae: MOV EDI,EBP
//   Label: LAB_004018ae
// 004018b0: SUB ECX,ECX
// 004018b2: DEC ECX
// 004018b3: XOR EAX,EAX
// 004018b5: SCASB.REPNE ES:EDI
// 004018b7: NOT ECX
// 004018b9: DEC ECX
// 004018ba: CMP EBX,ECX
// 004018bc: JNC 0x004018eb
//   XREF to: 004018eb (CONDITIONAL_JUMP)
// 004018be: XOR EAX,EAX
// 004018c0: MOV AL,byte ptr [EDX]
// 004018c2: CMP EAX,0x20
// 004018c5: JGE 0x004018cb
//   XREF to: 004018cb (CONDITIONAL_JUMP)
// 004018c7: INC EBX
//   Label: LAB_004018c7
// 004018c8: INC EDX
// 004018c9: JMP 0x004018ae
//   XREF to: 004018ae (UNCONDITIONAL_JUMP)
// 004018cb: CMP EAX,0x100
//   Label: LAB_004018cb
// 004018d0: JGE 0x004018c7
//   XREF to: 004018c7 (CONDITIONAL_JUMP)
// 004018d2: SUB EAX,0x20
// 004018d5: IMUL EAX,EAX,0x91
// 004018db: MOV AL,byte ptr [EAX + 0x666040]
//   XREF to: 00666040 (DATA)
// 004018e1: AND EAX,0xff
// 004018e6: INC EAX
// 004018e7: ADD ESI,EAX
// 004018e9: JMP 0x004018c7
//   XREF to: 004018c7 (UNCONDITIONAL_JUMP)
// 004018eb: MOV EAX,ESI
//   Label: LAB_004018eb
// 004018ed: POP EBP
// 004018ee: POP EDI
// 004018ef: POP ESI
// 004018f0: POP EBX
// 004018f1: RET
