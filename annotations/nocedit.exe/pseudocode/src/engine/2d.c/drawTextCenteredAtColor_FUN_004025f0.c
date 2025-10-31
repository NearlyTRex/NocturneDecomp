// Name: engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
// Address: 004025f0
// Address Range: [[004025f0, 00402624]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAtColor_FUN_004025f0(char * text, int center_x, int y_pos)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 00489363 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650 (00402650) at 004026a1 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredAtColorWrapper_FUN_00402630 (00402630) at 00402640 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawTextColor_FUN_00402430
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAtColor_FUN_004025f0(char *text,int center_x,int y_pos)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawTextColor_FUN_00402430((char *)center_x,y_pos - (iVar1 + -1) / 2,unaff_EBX);
  return;
}


// Assembly code:
// 004025f0: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
// 004025f1: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004025f5: PUSH EDX
// 004025f6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004025fa: PUSH ECX
// 004025fb: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 00402600: LEA EDX,[EAX + -0x1]
// 00402603: MOV EAX,EDX
// 00402605: SAR EDX,0x1f
// 00402608: SUB EAX,EDX
// 0040260a: SAR EAX,0x1
// 0040260c: ADD ESP,0x4
// 0040260f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00402613: SUB EDX,EAX
// 00402615: PUSH EDX
// 00402616: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040261a: PUSH EBX
// 0040261b: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 00402620: ADD ESP,0xc
// 00402623: POP EBX
// 00402624: RET
