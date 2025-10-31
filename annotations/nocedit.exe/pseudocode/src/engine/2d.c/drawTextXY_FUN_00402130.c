// Name: engine_2d.c_drawTextXY_FUN_00402130
// Address: 00402130
// Address Range: [[00402130, 00402149]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextXY_FUN_00402130(int x_pos, int y_pos, char * text)
// Cross-references:
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d9ac [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da967 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00577af0 (00577af0) at 00577eff [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ab7c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e023 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextXY_FUN_00402130(int x_pos,int y_pos,char *text)

{
  engine_2d_c_drawText_FUN_00401fd0(text,x_pos,y_pos);
  return;
}


// Assembly code:
// 00402130: PUSH EBX
//   Label: engine_2d.c_drawTextXY_FUN_00402130
// 00402131: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00402135: PUSH EDX
// 00402136: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040213a: PUSH ECX
// 0040213b: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040213f: PUSH EBX
// 00402140: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00402145: ADD ESP,0xc
// 00402148: POP EBX
// 00402149: RET
