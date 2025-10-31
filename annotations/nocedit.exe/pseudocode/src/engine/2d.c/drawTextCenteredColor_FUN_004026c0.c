// Name: engine_2d.c_drawTextCenteredColor_FUN_004026c0
// Address: 004026c0
// Address Range: [[004026c0, 004026f9]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredColor_FUN_004026c0(char * text, int left_x, int right_x, int y_pos)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 004893a1 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730 (00402730) at 0040278a [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredXYColor_FUN_00402700 (00402700) at 00402716 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawTextColor_FUN_00402430
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredColor_FUN_004026c0(char *text,int left_x,int right_x,int y_pos)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawTextColor_FUN_00402430(text,(((left_x + right_x) - iVar1) + 2) / 2,unaff_ESI);
  return;
}


// Assembly code:
// 004026c0: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredColor_FUN_004026c0
// 004026c1: PUSH ESI
// 004026c2: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 004026c6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004026ca: PUSH EDX
// 004026cb: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004026cf: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004026d3: PUSH ESI
// 004026d4: ADD EBX,ECX
// 004026d6: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 004026db: LEA EDX,[EBX + 0x1]
// 004026de: SUB EDX,EAX
// 004026e0: INC EDX
// 004026e1: MOV EAX,EDX
// 004026e3: SAR EDX,0x1f
// 004026e6: SUB EAX,EDX
// 004026e8: SAR EAX,0x1
// 004026ea: ADD ESP,0x4
// 004026ed: PUSH EAX
// 004026ee: PUSH ESI
// 004026ef: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 004026f4: ADD ESP,0xc
// 004026f7: POP ESI
// 004026f8: POP EBX
// 004026f9: RET
