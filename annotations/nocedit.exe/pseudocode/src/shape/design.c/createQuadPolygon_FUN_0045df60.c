// Name: shape_design.c_createQuadPolygon_FUN_0045df60
// Address: 0045df60
// Address Range: [[0045df60, 0045e03f]]
// Convention: unknown
// Signature: undefined shape_design.c_createQuadPolygon_FUN_0045df60()
// Cross-references:
//   shape_design.c_createBoxPrimitive_FUN_0045e520 (0045e520) at 0045e8f2 [UNCONDITIONAL_CALL]
//   shape_design.c_createReversedQuadPolygon_FUN_0045e040 (0045e040) at 0045e05c [UNCONDITIONAL_CALL]
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e500 [UNCONDITIONAL_CALL]
// Globals:
//   int g_EditorColorIndex
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e99d4
//   undefined4 DAT_016e9a88
//   undefined4 DAT_016e9a8c
//   int g_CurrentPartIndex
// Function calls:
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0

#include "nocturne.h"

void shape_design_c_createQuadPolygon_FUN_0045df60(void)

{
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  g_ModelPolygonData[g_PolygonCount].vertex_indices_count = 4;
  g_ModelPolygonData[g_PolygonCount].polygon_type = 1;
  g_ModelPolygonData[g_PolygonCount].texture_name[0] = '\0';
  g_ModelPolygonData[g_PolygonCount].part_assignment = g_CurrentPartIndex;
  g_ModelPolygonData[g_PolygonCount].material_id = g_EditorColorIndex;
  g_ModelPolygonData[g_PolygonCount].vertex_indices[0] = in_stack_00000004;
  g_ModelPolygonData[g_PolygonCount].vertex_indices[1] = in_stack_00000008;
  g_ModelPolygonData[g_PolygonCount].vertex_indices[2] = in_stack_0000000c;
  g_ModelPolygonData[g_PolygonCount].vertex_indices[3] = in_stack_00000010;
  shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + g_PolygonCount);
  g_PolygonCount = g_PolygonCount + 1;
  return;
}


// Assembly code:
// 0045df60: PUSH EBX
//   Label: shape_design.c_createQuadPolygon_FUN_0045df60
// 0045df61: PUSH ESI
// 0045df62: PUSH EDI
// 0045df63: PUSH EBP
// 0045df64: MOV EBP,ESP
// 0045df66: SUB ESP,0x0
// 0045df6c: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045df76: MOV dword ptr [EAX + 0x16e99b4],0x4
//   XREF to: 016e99b4 (DATA)
// 0045df80: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045df8a: MOV dword ptr [EAX + 0x16e9910],0x1
//   XREF to: 016e9910 (DATA)
// 0045df94: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045df9e: MOV byte ptr [EAX + 0x16e9914],0x0
//   XREF to: 016e9914 (DATA)
// 0045dfa5: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045dfaf: MOV EAX,[0x01e6614c]
//   XREF to: 01e6614c (READ)
// 0045dfb4: MOV dword ptr [EDX + 0x16e9a88],EAX
//   XREF to: 016e9a88 (DATA)
// 0045dfba: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045dfc4: MOV EAX,[0x01626368]
//   XREF to: 01626368 (READ)
// 0045dfc9: MOV dword ptr [EDX + 0x16e9a8c],EAX
//   XREF to: 016e9a8c (DATA)
// 0045dfcf: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045dfd9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045dfdc: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 0045dfe2: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045dfec: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045dfef: MOV dword ptr [EDX + 0x16e99cc],EAX
//   XREF to: 016e99cc (DATA)
// 0045dff5: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045dfff: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045e002: MOV dword ptr [EDX + 0x16e99d0],EAX
//   XREF to: 016e99d0 (DATA)
// 0045e008: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045e012: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0045e015: MOV dword ptr [EDX + 0x16e99d4],EAX
//   XREF to: 016e99d4 (DATA)
// 0045e01b: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045e025: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045e02a: ADD EAX,EDX
// 0045e02c: PUSH EAX
// 0045e02d: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 0045e032: ADD ESP,0x4
// 0045e035: INC dword ptr [0x016e990c]
//   XREF to: 016e990c (READ_WRITE)
// 0045e03b: POP EBP
// 0045e03c: POP EDI
// 0045e03d: POP ESI
// 0045e03e: POP EBX
// 0045e03f: RET
