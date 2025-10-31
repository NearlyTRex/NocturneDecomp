// Name: engine_2d.c_drawTextRightAlignedColor_FUN_00402530
// Address: 00402530
// Address Range: [[00402530, 0040255b]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAlignedColor_FUN_00402530(char * text, int y_pos, int right_x)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 00489322 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580 (00402580) at 004025d1 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextRightAlignedColorWrapper_FUN_00402560 (00402560) at 00402570 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawTextColor_FUN_00402430
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402530(char *text,int y_pos,int right_x)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawTextColor_FUN_00402430((char *)y_pos,(right_x - iVar1) + 2,unaff_EBX);
  return;
}


// Assembly code:
// 00402530: PUSH EBX
//   Label: engine_2d.c_drawTextRightAlignedColor_FUN_00402530
// 00402531: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00402535: PUSH EDX
// 00402536: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040253a: PUSH ECX
// 0040253b: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 00402540: ADD ESP,0x4
// 00402543: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00402547: SUB EDX,EAX
// 00402549: LEA EAX,[EDX + 0x2]
// 0040254c: PUSH EAX
// 0040254d: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00402551: PUSH EBX
// 00402552: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 00402557: ADD ESP,0xc
// 0040255a: POP EBX
// 0040255b: RET
