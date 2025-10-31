// Name: shape_design.c_duplicateSharedVertices_FUN_00465d50
// Address: 00465d50
// Address Range: [[00465d50, 00465e8e]]
// Convention: __cdecl
// Signature: void shape_design.c_duplicateSharedVertices_FUN_00465d50(int polygon_index)
// Cross-references:
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464ed3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_design_c_0061c666
//   TerminatedCString s_Cannot_add_any_more_poin_0061c678
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a94
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl shape_design_c_duplicateSharedVertices_FUN_00465d50(int polygon_index)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  SShapeEditorPolygon *local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar7 = 0;
  local_24 = 0;
  do {
    if ((int)g_ModelPolygonData[polygon_index].vertex_indices_count <= local_24) {
      return;
    }
    uVar1 = g_ModelPolygonData[polygon_index].vertex_indices[local_24];
    bVar2 = false;
    local_28 = g_ModelPolygonData;
    for (local_20 = 0; local_20 < g_PolygonCount; local_20 = local_20 + 1) {
      if (local_20 != polygon_index) {
        for (local_1c = 0; local_1c < (int)local_28->vertex_indices_count; local_1c = local_1c + 1)
        {
          if (uVar1 == local_28->vertex_indices[local_1c]) {
            bVar2 = true;
            goto LAB_00465e13;
          }
        }
      }
      local_28 = local_28 + 1;
    }
LAB_00465e13:
    if (bVar2) {
      if (19999 < g_VertexCount) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 0x1d5a;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot add any more points!");
      }
      puVar5 = (undefined4 *)(g_VertexCount * 0x14 + 0x1626410 + (uint)bVar7 * -8);
      puVar3 = (undefined4 *)(uVar1 * 0x14 + 0x1626410 + (uint)bVar7 * -8);
      g_LoadedVertices[g_VertexCount].vertex.x = g_LoadedVertices[uVar1].vertex.x;
      puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar4 = puVar3 + (uint)bVar7 * -2 + 1;
      *puVar5 = *puVar3;
      *puVar6 = *puVar4;
      puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
      (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      g_ModelPolygonData[polygon_index].vertex_indices[local_24] = g_VertexCount;
      g_VertexCount = g_VertexCount + 1;
    }
    local_24 = local_24 + 1;
  } while( true );
}


// Assembly code:
// 00465d50: PUSH EBX
//   Label: shape_design.c_duplicateSharedVertices_FUN_00465d50
// 00465d51: PUSH ESI
// 00465d52: PUSH EDI
// 00465d53: PUSH EBP
// 00465d54: MOV EBP,ESP
// 00465d56: SUB ESP,0x18
// 00465d5c: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 00465d63: JMP 0x00465d6b
//   XREF to: 00465d6b (UNCONDITIONAL_JUMP)
// 00465d65: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_00465d65
//   XREF to: Stack[-0x24] (READ)
// 00465d68: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 00465d6b: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00465d6b
//   XREF to: Stack[0x4] (READ)
// 00465d72: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00465d75: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00465d7b: JGE 0x00465e88
//   XREF to: 00465e88 (CONDITIONAL_JUMP)
// 00465d81: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00465d88: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00465d8b: SHL EAX,0x2
// 00465d8e: ADD EAX,EDX
// 00465d90: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00465d96: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00465d99: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00465da0: MOV dword ptr [EBP + -0x18],0x16e9910
//   XREF to: Stack[-0x28] (WRITE)
//   XREF to: 016e9910 (DATA)
// 00465da7: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 00465dae: JMP 0x00465dc0
//   XREF to: 00465dc0 (UNCONDITIONAL_JUMP)
// 00465db0: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00465db0
//   XREF to: Stack[-0x20] (READ)
// 00465db3: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 00465db6: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00465db9: ADD dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ_WRITE)
//   XREF to: 016e9a94 (DATA)
// 00465dc0: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00465dc0
//   XREF to: Stack[-0x20] (READ)
// 00465dc3: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00465dc9: JGE 0x00465e13
//   XREF to: 00465e13 (CONDITIONAL_JUMP)
// 00465dcb: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00465dce: CMP EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00465dd1: JZ 0x00465e11
//   XREF to: 00465e11 (CONDITIONAL_JUMP)
// 00465dd3: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00465dda: JMP 0x00465de2
//   XREF to: 00465de2 (UNCONDITIONAL_JUMP)
// 00465ddc: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00465ddc
//   XREF to: Stack[-0x1c] (READ)
// 00465ddf: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00465de2: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00465de2
//   XREF to: Stack[-0x1c] (READ)
// 00465de5: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00465de8: CMP EAX,dword ptr [EDX + 0xa4]
//   XREF to: 016e99b4 (READ)
// 00465dee: JGE 0x00465e11
//   XREF to: 00465e11 (CONDITIONAL_JUMP)
// 00465df0: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00465df3: SHL EAX,0x2
// 00465df6: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00465df9: ADD EDX,EAX
// 00465dfb: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465dfe: CMP EAX,dword ptr [EDX + 0xb8]
//   XREF to: 016e99c8 (DATA)
// 00465e04: JNZ 0x00465e0f
//   XREF to: 00465e0f (CONDITIONAL_JUMP)
// 00465e06: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 00465e0d: JMP 0x00465e13
//   XREF to: 00465e13 (UNCONDITIONAL_JUMP)
// 00465e0f: JMP 0x00465ddc
//   Label: LAB_00465e0f
//   XREF to: 00465ddc (UNCONDITIONAL_JUMP)
// 00465e11: JMP 0x00465db0
//   Label: LAB_00465e11
//   XREF to: 00465db0 (UNCONDITIONAL_JUMP)
// 00465e13: CMP dword ptr [EBP + -0x4],0x0
//   Label: LAB_00465e13
//   XREF to: Stack[-0x14] (READ)
// 00465e17: JZ 0x00465e83
//   XREF to: 00465e83 (CONDITIONAL_JUMP)
// 00465e19: CMP dword ptr [0x01626408],0x4e20
//   XREF to: 01626408 (READ)
// 00465e23: JL 0x00465e47
//   XREF to: 00465e47 (CONDITIONAL_JUMP)
// 00465e25: MOV dword ptr [0x02f0ca48],0x61c666
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061c666 (DATA)
// 00465e2f: MOV dword ptr [0x02f0ca4c],0x1d5a
//   XREF to: 02f0ca4c (WRITE)
// 00465e39: MOV EAX,0x61c678
//   XREF to: 0061c678 (PARAM)
// 00465e3e: PUSH EAX
//   XREF to: 0061c678 (DATA)
// 00465e3f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00465e44: ADD ESP,0x4
// 00465e47: IMUL ESI,dword ptr [EBP + -0x8],0x14
//   Label: LAB_00465e47
//   XREF to: Stack[-0x18] (READ)
// 00465e4b: IMUL EDI,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00465e52: LEA EDI,[EDI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00465e58: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00465e5e: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 00465e5f: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 00465e60: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 00465e61: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 00465e62: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 00465e63: IMUL ESI,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00465e6a: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00465e6d: SHL EAX,0x2
// 00465e70: ADD ESI,EAX
// 00465e72: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00465e77: MOV dword ptr [ESI + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 00465e7d: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 00465e83: JMP 0x00465d65
//   Label: LAB_00465e83
//   XREF to: 00465d65 (UNCONDITIONAL_JUMP)
// 00465e88: MOV ESP,EBP
//   Label: LAB_00465e88
// 00465e8a: POP EBP
// 00465e8b: POP EDI
// 00465e8c: POP ESI
// 00465e8d: POP EBX
// 00465e8e: RET
