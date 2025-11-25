// Name: shape_design.c_triangulateDSE_FUN_0046e4d0
// Address: 0046e4d0
// Address Range: [[0046e4d0, 0046e6a4]]
// Convention: unknown
// Signature: undefined shape_design.c_triangulateDSE_FUN_0046e4d0()
// Globals:
//   TerminatedCString s_shape_design_c_0061de76
//   TerminatedCString s_triangulateDSE_too_many__0061de88
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e99d4
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 shape_design.c_triangulateDSE(undefined4 param_1) */

void shape_design_c_triangulateDSE_FUN_0046e4d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SShapeEditorPolygon *pSVar4;
  SShapeEditorPolygon *pSVar5;
  SShapeEditorPolygon *pSVar6;
  SShapeEditorPolygon *pSVar7;
  byte bVar8;
  uint in_stack_00000004;
  int local_24;
  int local_1c;
  int local_14;
  
  iVar1 = g_PolygonCount;
  bVar8 = 0;
  for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
    pSVar4 = g_ModelPolygonData + local_14;
    if ((int)in_stack_00000004 < (int)g_ModelPolygonData[local_14].vertex_indices_count) {
      local_1c = in_stack_00000004 - 1;
      while (local_1c < (int)(g_ModelPolygonData[local_14].vertex_indices_count - 1)) {
        if (19999 < g_PolygonCount) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 0x2c8f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("triangulateDSE - too many faces!");
        }
        iVar2 = g_PolygonCount;
        pSVar5 = g_ModelPolygonData + g_PolygonCount;
        g_PolygonCount = g_PolygonCount + 1;
        pSVar6 = pSVar4;
        pSVar7 = pSVar5;
        for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
          pSVar7->polygon_type = pSVar6->polygon_type;
          pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
          pSVar7 = (SShapeEditorPolygon *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
        }
        g_ModelPolygonData[iVar2].vertex_indices[1] = pSVar4->vertex_indices[local_1c];
        g_ModelPolygonData[iVar2].uv_u[1] = pSVar4->uv_u[local_1c];
        g_ModelPolygonData[iVar2].uv_v[1] = pSVar4->uv_v[local_1c];
        g_ModelPolygonData[iVar2].vertex_indices_count =
             (g_ModelPolygonData[local_14].vertex_indices_count - local_1c) + 1;
        if ((int)in_stack_00000004 < (int)g_ModelPolygonData[iVar2].vertex_indices_count) {
          g_ModelPolygonData[iVar2].vertex_indices_count = in_stack_00000004;
        }
        for (local_24 = 2; local_24 < (int)g_ModelPolygonData[iVar2].vertex_indices_count;
            local_24 = local_24 + 1) {
          pSVar5->vertex_indices[local_24] = pSVar4->vertex_indices[local_1c + 1];
          pSVar5->uv_u[local_24] = pSVar4->uv_u[local_1c + 1];
          pSVar5->uv_v[local_24] = pSVar4->uv_v[local_1c + 1];
          local_1c = local_1c + 1;
        }
      }
      g_ModelPolygonData[local_14].vertex_indices_count = in_stack_00000004;
    }
  }
  return;
}


// Assembly code:
// 0046e4d0: PUSH EBX
//   Label: shape_design.c_triangulateDSE_FUN_0046e4d0
// 0046e4d1: PUSH ESI
// 0046e4d2: PUSH EDI
// 0046e4d3: PUSH EBP
// 0046e4d4: MOV EBP,ESP
// 0046e4d6: SUB ESP,0x18
// 0046e4dc: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 0046e4e1: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046e4e4: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046e4eb: JMP 0x0046e4f0
//   XREF to: 0046e4f0 (UNCONDITIONAL_JUMP)
// 0046e4ed: INC dword ptr [EBP + -0x4]
//   Label: LAB_0046e4ed
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046e4f0: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046e4f0
//   XREF to: Stack[-0x14] (READ)
// 0046e4f3: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046e4f6: JGE 0x0046e69e
//   XREF to: 0046e69e (CONDITIONAL_JUMP)
// 0046e4fc: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046e503: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046e508: ADD EDX,EAX
// 0046e50a: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0046e50d: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e510: MOV EAX,dword ptr [EAX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 0046e516: CMP EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046e519: JG 0x0046e520
//   XREF to: 0046e520 (CONDITIONAL_JUMP)
// 0046e51b: JMP 0x0046e699
//   XREF to: 0046e699 (UNCONDITIONAL_JUMP)
// 0046e520: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046e520
//   XREF to: Stack[0x4] (READ)
// 0046e523: DEC EAX
// 0046e524: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046e527: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0046e527
//   XREF to: Stack[-0x20] (READ)
// 0046e52a: MOV EAX,dword ptr [EAX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 0046e530: DEC EAX
// 0046e531: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e534: JLE 0x0046e68d
//   XREF to: 0046e68d (CONDITIONAL_JUMP)
// 0046e53a: CMP dword ptr [0x016e990c],0x4e20
//   XREF to: 016e990c (READ)
// 0046e544: JL 0x0046e568
//   XREF to: 0046e568 (CONDITIONAL_JUMP)
// 0046e546: MOV dword ptr [0x02f0ca48],0x61de76
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061de76 (DATA)
// 0046e550: MOV dword ptr [0x02f0ca4c],0x2c8f
//   XREF to: 02f0ca4c (WRITE)
// 0046e55a: MOV EAX,0x61de88
//   XREF to: 0061de88 (DATA)
// 0046e55f: PUSH EAX
//   XREF to: 0061de88 (DATA)
// 0046e560: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0046e565: ADD ESP,0x4
// 0046e568: IMUL EAX,dword ptr [0x016e990c],0x184
//   Label: LAB_0046e568
//   XREF to: 016e990c (READ)
// 0046e572: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046e577: ADD EDX,EAX
// 0046e579: MOV dword ptr [EBP + -0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0046e57c: INC dword ptr [0x016e990c]
//   XREF to: 016e990c (READ_WRITE)
// 0046e582: MOV ECX,0x61
// 0046e587: MOV EDI,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e58a: MOV ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e58d: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0046e58f: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e592: SHL EAX,0x2
// 0046e595: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e598: MOV EDX,dword ptr [EAX + 0xb8]
// 0046e59e: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e5a1: MOV dword ptr [EAX + 0xbc],EDX
//   XREF to: 016e99cc (DATA)
// 0046e5a7: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e5aa: SHL EAX,0x2
// 0046e5ad: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e5b0: FLD float ptr [EAX + 0xf8]
// 0046e5b6: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e5b9: FSTP float ptr [EAX + 0xfc]
//   XREF to: 016e9a0c (DATA)
// 0046e5bf: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e5c2: SHL EAX,0x2
// 0046e5c5: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e5c8: FLD float ptr [EAX + 0x138]
// 0046e5ce: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e5d1: FSTP float ptr [EAX + 0x13c]
//   XREF to: 016e9a4c (DATA)
// 0046e5d7: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e5da: MOV EDX,dword ptr [EAX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 0046e5e0: SUB EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e5e3: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e5e6: INC EDX
// 0046e5e7: MOV dword ptr [EAX + 0xa4],EDX
//   XREF to: 016e99b4 (DATA)
// 0046e5ed: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e5f0: MOV EAX,dword ptr [EAX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 0046e5f6: CMP EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046e5f9: JLE 0x0046e607
//   XREF to: 0046e607 (CONDITIONAL_JUMP)
// 0046e5fb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046e5fe: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e601: MOV dword ptr [EDX + 0xa4],EAX
//   XREF to: 016e99b4 (DATA)
// 0046e607: MOV dword ptr [EBP + -0x14],0x2
//   Label: LAB_0046e607
//   XREF to: Stack[-0x24] (WRITE)
// 0046e60e: JMP 0x0046e613
//   XREF to: 0046e613 (UNCONDITIONAL_JUMP)
// 0046e610: INC dword ptr [EBP + -0x14]
//   Label: LAB_0046e610
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0046e613: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0046e613
//   XREF to: Stack[-0x24] (READ)
// 0046e616: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e619: CMP EAX,dword ptr [EDX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 0046e61f: JGE 0x0046e688
//   XREF to: 0046e688 (CONDITIONAL_JUMP)
// 0046e621: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046e624: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e627: SHL EAX,0x2
// 0046e62a: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e62d: ADD EDX,EAX
// 0046e62f: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e632: SHL EAX,0x2
// 0046e635: MOV ECX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e638: ADD ECX,EAX
// 0046e63a: MOV EAX,dword ptr [EDX + 0xb8]
// 0046e640: MOV dword ptr [ECX + 0xb8],EAX
//   XREF to: 016e99d0 (DATA)
//   XREF to: 016e99d4 (DATA)
// 0046e646: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e649: SHL EAX,0x2
// 0046e64c: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e64f: ADD EDX,EAX
// 0046e651: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e654: SHL EAX,0x2
// 0046e657: ADD EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e65a: FLD float ptr [EDX + 0xf8]
// 0046e660: FSTP float ptr [EAX + 0xf8]
//   XREF to: 016e9a10 (DATA)
// 0046e666: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e669: SHL EAX,0x2
// 0046e66c: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e66f: ADD EDX,EAX
// 0046e671: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e674: SHL EAX,0x2
// 0046e677: ADD EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e67a: FLD float ptr [EDX + 0x138]
// 0046e680: FSTP float ptr [EAX + 0x138]
//   XREF to: 016e9a50 (DATA)
// 0046e686: JMP 0x0046e610
//   XREF to: 0046e610 (UNCONDITIONAL_JUMP)
// 0046e688: JMP 0x0046e527
//   Label: LAB_0046e688
//   XREF to: 0046e527 (UNCONDITIONAL_JUMP)
// 0046e68d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046e68d
//   XREF to: Stack[0x4] (READ)
// 0046e690: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e693: MOV dword ptr [EDX + 0xa4],EAX
//   XREF to: 016e99b4 (DATA)
// 0046e699: JMP 0x0046e4ed
//   Label: LAB_0046e699
//   XREF to: 0046e4ed (UNCONDITIONAL_JUMP)
// 0046e69e: MOV ESP,EBP
//   Label: LAB_0046e69e
// 0046e6a0: POP EBP
// 0046e6a1: POP EDI
// 0046e6a2: POP ESI
// 0046e6a3: POP EBX
// 0046e6a4: RET
