// Name: wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50
// Address: 005b7a50
// Address Range: [[005b7a50, 005b7b00]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50(int color)
// Cross-references:
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f3de [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_clearScreen_FUN_005b3f37 (005b3f37) at 005b3f48 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SystemMemorySize = 0x3c000
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   wincore_windll.cpp_drawPolygon_FUN_005b75e0

#include "nocturne.h"

int __cdecl wincore_windll_cpp_drawFullScreenQuad_FUN_005b7a50(int color)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  SRenderVertex SStack_bc;
  int iStack_84;
  int local_7c;
  int iStack_78;
  int iStack_54;
  int local_4c;
  int iStack_48;
  int iStack_24;
  int local_1c;
  int iStack_18;
  
  crt_memory_c_memset_FUN_005fde40(&stack0xffffff40,0,0xc0);
  SStack_bc.projected_vertex.screen_x = g_ClipLeft << 0x10;
  SStack_bc.projected_vertex.screen_y = g_ClipTop << 0x10;
  local_7c = g_ClipRight << 0x10;
  iStack_48 = g_ClipBottom << 0x10;
  SStack_bc.projected_vertex.transformed_z = g_SystemMemorySize;
  iStack_84 = g_SystemMemorySize;
  iStack_54 = g_SystemMemorySize;
  iStack_24 = g_SystemMemorySize;
  g_ActiveRenderColor = in_stack_00000008;
  iStack_78 = SStack_bc.projected_vertex.screen_y;
  local_4c = local_7c;
  local_1c = SStack_bc.projected_vertex.screen_x;
  iStack_18 = iStack_48;
  wincore_windll_cpp_drawPolygon_FUN_005b75e0(&SStack_bc,4,0x10);
  return 1;
}


// Assembly code:
// 005b7a50: SUB ESP,0xc0
//   Label: wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50
// 005b7a56: PUSH 0xc0
// 005b7a5b: PUSH 0x0
// 005b7a5d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xc0] (DATA)
// 005b7a61: PUSH EAX
// 005b7a62: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005b7a67: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 005b7a6c: ADD ESP,0xc
// 005b7a6f: SHL EAX,0x10
// 005b7a72: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005b7a76: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 005b7a7b: SHL EAX,0x10
// 005b7a7e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005b7a82: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 005b7a87: SHL EAX,0x10
// 005b7a8a: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005b7a8e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xac] (READ)
// 005b7a92: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005b7a96: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x80] (READ)
// 005b7a9a: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005b7a9e: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 005b7aa3: SHL EAX,0x10
// 005b7aa6: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005b7aaa: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (READ)
// 005b7aae: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005b7ab5: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x4c] (READ)
// 005b7ab9: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005b7ac0: MOV EAX,[0x0068411c]
//   XREF to: 0068411c (READ)
// 005b7ac5: PUSH 0x10
// 005b7ac7: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005b7acb: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005b7acf: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005b7ad3: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005b7ada: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[0x4] (READ)
// 005b7ae1: PUSH 0x4
// 005b7ae3: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 005b7ae8: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xc0] (DATA)
// 005b7aec: PUSH EAX
// 005b7aed: CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0
//   XREF to: 005b75e0 (UNCONDITIONAL_CALL)
// 005b7af2: MOV EAX,0x1
// 005b7af7: ADD ESP,0xc
// 005b7afa: ADD ESP,0xc0
// 005b7b00: RET
