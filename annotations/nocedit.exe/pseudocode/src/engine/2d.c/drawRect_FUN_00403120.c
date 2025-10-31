// Name: engine_2d.c_drawRect_FUN_00403120
// Address: 00403120
// Address Range: [[00403120, 00403164]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawRect_FUN_00403120(int x1, int y1, int x2, int y2)
// Cross-references:
//   core_setedit.cpp_CDemonSet_FUN_00577af0 (00577af0) at 00577eae [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00577730 (00577730) at 005777ca [UNCONDITIONAL_CALL]
//   engine_2d.c_fillRectWithBorder_FUN_00403200 (00403200) at 00403247 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawHLine_FUN_00402ee0
//   engine_2d.c_drawVLine_FUN_00402ff0

#include "nocturne.h"

void __cdecl engine_2d_c_drawRect_FUN_00403120(int x1,int y1,int x2,int y2)

{
  engine_2d_c_drawHLine_FUN_00402ee0(x1,y1,x2);
  engine_2d_c_drawHLine_FUN_00402ee0(x1,y2,x2);
  engine_2d_c_drawVLine_FUN_00402ff0(x1,y1,y2);
  engine_2d_c_drawVLine_FUN_00402ff0(x2,y1,y2);
  return;
}


// Assembly code:
// 00403120: PUSH EBX
//   Label: engine_2d.c_drawRect_FUN_00403120
// 00403121: PUSH ESI
// 00403122: PUSH EDI
// 00403123: PUSH EBP
// 00403124: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00403128: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040312c: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00403130: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00403134: PUSH EBP
// 00403135: PUSH ESI
// 00403136: PUSH EBX
// 00403137: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 0040313c: ADD ESP,0xc
// 0040313f: PUSH EBP
// 00403140: PUSH EDI
// 00403141: PUSH EBX
// 00403142: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 00403147: ADD ESP,0xc
// 0040314a: PUSH EDI
// 0040314b: PUSH ESI
// 0040314c: PUSH EBX
// 0040314d: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 00403152: ADD ESP,0xc
// 00403155: PUSH EDI
// 00403156: PUSH ESI
// 00403157: PUSH EBP
// 00403158: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 0040315d: ADD ESP,0xc
// 00403160: POP EBP
// 00403161: POP EDI
// 00403162: POP ESI
// 00403163: POP EBX
// 00403164: RET
