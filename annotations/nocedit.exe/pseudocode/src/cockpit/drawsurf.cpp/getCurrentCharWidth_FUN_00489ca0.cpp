// Name: cockpit_drawsurf.cpp_getCurrentCharWidth_FUN_00489ca0
// Address: 00489ca0
// Address Range: [[00489ca0, 00489cd7]]
// Convention: __cdecl
// Signature: int cockpit_drawsurf.cpp_getCurrentCharWidth_FUN_00489ca0(char character)
// Globals:
//   CBitFont* g_CurrentFont
// Function calls:
//   engine_2d.c_getStringWidth_FUN_004018a0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_getCurrentCharWidth_FUN_00489ca0(char character)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  char local_4 [4];
  
  if (g_CurrentFont != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(g_CurrentFont,in_stack_00000008);
    return iVar1;
  }
  local_4[0] = (char)in_stack_00000008;
  local_4[1] = 0;
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(local_4);
  return iVar1 + -1;
}


// Assembly code:
// 00489ca0: SUB ESP,0x4
//   Label: cockpit_drawsurf.cpp_getCurrentCharWidth_FUN_00489ca0
// 00489ca3: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00489ca7: MOV EDX,dword ptr [0x02c6d558]
//   XREF to: 02c6d558 (READ)
// 00489cad: TEST EDX,EDX
// 00489caf: JZ 0x00489cbf
//   XREF to: 00489cbf (CONDITIONAL_JUMP)
// 00489cb1: PUSH EAX
// 00489cb2: PUSH EDX
// 00489cb3: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   XREF to: 004d01a0 (UNCONDITIONAL_CALL)
// 00489cb8: ADD ESP,0x8
// 00489cbb: ADD ESP,0x4
// 00489cbe: RET
// 00489cbf: MOV byte ptr [ESP],AL
//   Label: LAB_00489cbf
//   XREF to: Stack[-0x4] (DATA)
// 00489cc2: XOR AH,AH
// 00489cc4: MOV byte ptr [ESP + 0x1],AH
//   XREF to: Stack[-0x3] (WRITE)
// 00489cc8: MOV EAX,ESP
// 00489cca: PUSH EAX
// 00489ccb: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 00489cd0: ADD ESP,0x4
// 00489cd3: DEC EAX
// 00489cd4: ADD ESP,0x4
// 00489cd7: RET
