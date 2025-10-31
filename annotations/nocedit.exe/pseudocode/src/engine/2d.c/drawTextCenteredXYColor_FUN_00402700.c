// Name: engine_2d.c_drawTextCenteredXYColor_FUN_00402700
// Address: 00402700
// Address Range: [[00402700, 00402720]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredXYColor_FUN_00402700(int left_x, int right_x, int y_pos, char * text)
// Cross-references:
//   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390 (00473390) at 004735a9 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawTextCenteredColor_FUN_004026c0

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredXYColor_FUN_00402700(int left_x,int right_x,int y_pos,char *text)

{
  engine_2d_c_drawTextCenteredColor_FUN_004026c0(text,left_x,right_x,y_pos);
  return;
}


// Assembly code:
// 00402700: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredXYColor_FUN_00402700
// 00402701: PUSH ESI
// 00402702: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00402706: PUSH EDX
// 00402707: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040270b: PUSH ECX
// 0040270c: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00402710: PUSH EBX
// 00402711: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00402715: PUSH ESI
// 00402716: CALL engine_2d.c_drawTextCenteredColor_FUN_004026c0
//   XREF to: 004026c0 (UNCONDITIONAL_CALL)
// 0040271b: ADD ESP,0x10
// 0040271e: POP ESI
// 0040271f: POP EBX
// 00402720: RET
