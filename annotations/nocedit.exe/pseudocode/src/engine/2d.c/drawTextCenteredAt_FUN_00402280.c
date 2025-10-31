// Name: engine_2d.c_drawTextCenteredAt_FUN_00402280
// Address: 00402280
// Address Range: [[00402280, 004022b4]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAt_FUN_00402280(char * text, int center_x, int y_pos)
// Cross-references:
//   engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0 (004022e0) at 00402331 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredAtWrapper_FUN_004022c0 (004022c0) at 004022d0 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAt_FUN_00402280(char *text,int center_x,int y_pos)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawText_FUN_00401fd0((char *)center_x,y_pos - (iVar1 + -1) / 2,unaff_EBX);
  return;
}


// Assembly code:
// 00402280: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredAt_FUN_00402280
// 00402281: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00402285: PUSH EDX
// 00402286: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040228a: PUSH ECX
// 0040228b: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 00402290: LEA EDX,[EAX + -0x1]
// 00402293: MOV EAX,EDX
// 00402295: SAR EDX,0x1f
// 00402298: SUB EAX,EDX
// 0040229a: SAR EAX,0x1
// 0040229c: ADD ESP,0x4
// 0040229f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004022a3: SUB EDX,EAX
// 004022a5: PUSH EDX
// 004022a6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004022aa: PUSH EBX
// 004022ab: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004022b0: ADD ESP,0xc
// 004022b3: POP EBX
// 004022b4: RET
