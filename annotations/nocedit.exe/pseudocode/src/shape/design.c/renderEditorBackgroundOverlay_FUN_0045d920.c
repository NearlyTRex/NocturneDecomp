// Name: shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920
// Address: 0045d920
// Address Range: [[0045d920, 0045d9b7]]
// Convention: __cdecl
// Signature: void shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920(void)
// Cross-references:
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f552 [UNCONDITIONAL_CALL]
// Globals:
//   int g_EditorCurrentTexture = 0x2
//   int INT_016263c8
//   int g_PolygonCount
//   int g_AntiAliasingEnabled
//   int g_EditorTextureMode
// Function calls:
//   engine_3d.c_processPolygonColor_FUN_00403e30
//   shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0

#include "nocturne.h"

void __cdecl shape_design_c_renderEditorBackgroundOverlay_FUN_0045d920(void)

{
  BADSPACEBASE *in_ESP;
  int local_18;
  int *local_14;
  
  if (((g_EditorTextureMode == 1) || (g_EditorTextureMode == 3)) || (g_EditorTextureMode == 4)) {
    if (g_AntiAliasingEnabled == 0) {
      engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffe0);
    }
    else {
      local_14 = (&g_EditorBackgroundColors)[g_EditorCurrentTexture];
    }
    for (local_18 = 0; local_18 < g_PolygonCount; local_18 = local_18 + 1) {
      shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(local_18,local_14);
    }
  }
  return;
}


// Assembly code:
// 0045d920: PUSH EBX
//   Label: shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920
// 0045d921: PUSH ESI
// 0045d922: PUSH EDI
// 0045d923: PUSH EBP
// 0045d924: MOV EBP,ESP
// 0045d926: SUB ESP,0x10
// 0045d92c: CMP dword ptr [0x01e528c8],0x1
//   XREF to: 01e528c8 (READ)
// 0045d933: JZ 0x0045d93e
//   XREF to: 0045d93e (CONDITIONAL_JUMP)
// 0045d935: CMP dword ptr [0x01e528c8],0x3
//   XREF to: 01e528c8 (READ)
// 0045d93c: JNZ 0x0045d940
//   XREF to: 0045d940 (CONDITIONAL_JUMP)
// 0045d93e: JMP 0x0045d949
//   Label: LAB_0045d93e
//   XREF to: 0045d949 (UNCONDITIONAL_JUMP)
// 0045d940: CMP dword ptr [0x01e528c8],0x4
//   Label: LAB_0045d940
//   XREF to: 01e528c8 (READ)
// 0045d947: JNZ 0x0045d9b1
//   XREF to: 0045d9b1 (CONDITIONAL_JUMP)
// 0045d949: CMP dword ptr [0x01e528c4],0x0
//   Label: LAB_0045d949
//   XREF to: 01e528c4 (READ)
// 0045d950: JNZ 0x0045d974
//   XREF to: 0045d974 (CONDITIONAL_JUMP)
// 0045d952: MOV EAX,[0x0066edfc]
//   XREF to: 0066edfc (READ)
// 0045d957: SHL EAX,0x2
// 0045d95a: MOV EAX,dword ptr [EAX + 0x16263c0]
//   XREF to: 016263c8 (READ)
// 0045d960: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045d963: NEG dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045d966: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 0045d969: PUSH EAX
// 0045d96a: CALL engine_3d.c_processPolygonColor_FUN_00403e30
//   XREF to: 00403e30 (UNCONDITIONAL_CALL)
// 0045d96f: ADD ESP,0x4
// 0045d972: JMP 0x0045d985
//   XREF to: 0045d985 (UNCONDITIONAL_JUMP)
// 0045d974: MOV EAX,[0x0066edfc]
//   Label: LAB_0045d974
//   XREF to: 0066edfc (READ)
// 0045d979: SHL EAX,0x2
// 0045d97c: MOV EAX,dword ptr [EAX + 0x16263c0]
//   XREF to: 016263c8 (READ)
// 0045d982: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045d985: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_0045d985
//   XREF to: Stack[-0x18] (WRITE)
// 0045d98c: JMP 0x0045d994
//   XREF to: 0045d994 (UNCONDITIONAL_JUMP)
// 0045d98e: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045d98e
//   XREF to: Stack[-0x18] (READ)
// 0045d991: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045d994: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045d994
//   XREF to: Stack[-0x18] (READ)
// 0045d997: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045d99d: JGE 0x0045d9b1
//   XREF to: 0045d9b1 (CONDITIONAL_JUMP)
// 0045d99f: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d9a2: PUSH EAX
// 0045d9a3: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d9a6: PUSH EAX
// 0045d9a7: CALL shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
//   XREF to: 0045d1d0 (UNCONDITIONAL_CALL)
// 0045d9ac: ADD ESP,0x8
// 0045d9af: JMP 0x0045d98e
//   XREF to: 0045d98e (UNCONDITIONAL_JUMP)
// 0045d9b1: MOV ESP,EBP
//   Label: LAB_0045d9b1
// 0045d9b3: POP EBP
// 0045d9b4: POP EDI
// 0045d9b5: POP ESI
// 0045d9b6: POP EBX
// 0045d9b7: RET
