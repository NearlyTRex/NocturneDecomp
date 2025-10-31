// Name: shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0
// Address: 0045bff0
// Address Range: [[0045bff0, 0045c2e1]]
// Convention: __cdecl
// Signature: void shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0(void)
// Cross-references:
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f557 [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045ca4e [UNCONDITIONAL_CALL]
// Globals:
//   float g_VertexDisplayScale = 256
//   TerminatedCString s_d_0061b31a
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 DAT_00688024+3
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a88
//   int[20000] g_VertexDepthSortedIndices
//   int g_CurrentPartIndex
//   int g_VertexDisplayEnabled
//   int g_WireframeMode
//   int g_ActiveRenderColor
//   undefined4 CHAR_ARRAY_02d03eb5
//   undefined4 CHAR_ARRAY_02d03ec7
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawTextColor_FUN_00402430
//   engine_2d.c_plotPixel_FUN_00401140
//   engine_matrix.c_transformToCache_FUN_0050cd70

#include "nocturne.h"

void __cdecl shape_design_c_renderVertexPointsWithLabels_FUN_0045bff0(void)

{
  int in_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  double dVar2;
  CVector3i local_38;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  if ((g_KeyboardState[0x2f] != '\0') && (g_KeyboardState[0x1d] == '\0')) {
    g_KeyboardState[0x2f] = '\0';
    g_VertexDisplayEnabled = g_VertexDisplayEnabled ^ 1;
  }
  if (g_VertexDisplayEnabled != 0) {
    for (local_24 = 0; local_24 < g_VertexCount; local_24 = local_24 + 1) {
      fVar1 = (float10)g_LoadedVertices[local_24].vertex.x * (float10)g_VertexDisplayScale;
      dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,local_24 * 0x14));
      local_38.x = (int)ROUND(fVar1);
      fVar1 = (float10)g_LoadedVertices[local_24].vertex.y * (float10)g_VertexDisplayScale;
      dVar2 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),local_24 * 0x14));
      local_38.y = (int)ROUND(fVar1);
      fVar1 = (float10)g_LoadedVertices[local_24].vertex.z * (float10)g_VertexDisplayScale;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),local_24 * 0x14));
      local_38.z = (int)ROUND(fVar1);
      engine_matrix_c_transformToCache_FUN_0050cd70(local_24,&local_38);
      in_EDX = local_24 * 4;
      g_VertexDepthSortedIndices[local_24] = local_24;
    }
    for (local_24 = 0; local_20 = local_24, local_24 < g_VertexCount + -1; local_24 = local_24 + 1)
    {
      while (local_20 = local_20 + 1, (int)local_20 < g_VertexCount) {
        if (g_LoadedVertices[g_VertexDepthSortedIndices[local_24]].vertex.z <
            g_LoadedVertices[g_VertexDepthSortedIndices[local_20]].vertex.z) {
          local_14 = g_VertexDepthSortedIndices[local_24];
          g_VertexDepthSortedIndices[local_24] = g_VertexDepthSortedIndices[local_20];
          g_VertexDepthSortedIndices[local_20] = local_14;
        }
      }
    }
    for (local_24 = 0; local_24 < g_VertexCount; local_24 = local_24 + 1) {
      local_20 = g_VertexDepthSortedIndices[local_24];
      if ((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) {
LAB_0045c20a:
        g_ActiveRenderColor = 7;
        local_1c = g_RenderVertexBuffer[local_20].projected_vertex.screen_x >> 0x10;
        local_18 = g_RenderVertexBuffer[local_20].projected_vertex.screen_y >> 0x10;
        if ((int)(g_RenderVertexBuffer[local_20].projected_vertex.screen_x & -0x80000000) == 0) {
          if (((local_1c < (uint)g_WindowWidth) && (local_18 < (uint)g_WindowHeight)) &&
             (0 < g_RenderVertexBuffer[local_20].projected_vertex.transformed_z)) {
            engine_2d_c_plotPixel_FUN_00401140(local_1c,local_18);
          }
          if (((local_1c + 8 < (uint)g_WindowWidth) && (local_18 + 0xc < (uint)g_WindowHeight)) &&
             (0 < g_RenderVertexBuffer[local_20].projected_vertex.transformed_z)) {
            crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff78,"%d",local_20);
            engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff78,local_1c + 1,local_18 + 1);
          }
        }
      }
      else {
        for (local_2c = 0; local_2c < g_PolygonCount; local_2c = local_2c + 1) {
          if (g_ModelPolygonData[local_2c].part_assignment == g_CurrentPartIndex) {
            for (local_28 = 0; local_28 < (int)g_ModelPolygonData[local_2c].vertex_indices_count;
                local_28 = local_28 + 1) {
              if (g_ModelPolygonData[local_2c].vertex_indices[local_28] == local_20)
              goto LAB_0045c20a;
            }
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0045bff0: PUSH EBX
//   Label: shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0
// 0045bff1: PUSH ESI
// 0045bff2: PUSH EDI
// 0045bff3: PUSH EBP
// 0045bff4: MOV EBP,ESP
// 0045bff6: SUB ESP,0x78
// 0045bffc: CMP byte ptr [0x02d03ec7],0x0
//   XREF to: 02d03ec7 (READ)
// 0045c003: JZ 0x0045c00e
//   XREF to: 0045c00e (CONDITIONAL_JUMP)
// 0045c005: CMP byte ptr [0x02d03eb5],0x0
//   XREF to: 02d03eb5 (READ)
// 0045c00c: JZ 0x0045c010
//   XREF to: 0045c010 (CONDITIONAL_JUMP)
// 0045c00e: JMP 0x0045c01e
//   Label: LAB_0045c00e
//   XREF to: 0045c01e (UNCONDITIONAL_JUMP)
// 0045c010: MOV byte ptr [0x02d03ec7],0x0
//   Label: LAB_0045c010
//   XREF to: 02d03ec7 (WRITE)
// 0045c017: XOR byte ptr [0x01e66154],0x1
//   XREF to: 01e66154 (READ_WRITE)
// 0045c01e: CMP dword ptr [0x01e66154],0x0
//   Label: LAB_0045c01e
//   XREF to: 01e66154 (READ)
// 0045c025: JNZ 0x0045c02c
//   XREF to: 0045c02c (CONDITIONAL_JUMP)
// 0045c027: JMP 0x0045c2db
//   XREF to: 0045c2db (UNCONDITIONAL_JUMP)
// 0045c02c: MOV dword ptr [EBP + -0x14],0x0
//   Label: LAB_0045c02c
//   XREF to: Stack[-0x24] (WRITE)
// 0045c033: JMP 0x0045c03b
//   XREF to: 0045c03b (UNCONDITIONAL_JUMP)
// 0045c035: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045c035
//   XREF to: Stack[-0x24] (READ)
// 0045c038: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0045c03b: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045c03b
//   XREF to: Stack[-0x24] (READ)
// 0045c03e: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045c044: JGE 0x0045c0af
//   XREF to: 0045c0af (CONDITIONAL_JUMP)
// 0045c046: IMUL EAX,dword ptr [EBP + -0x14],0x14
//   XREF to: Stack[-0x24] (READ)
// 0045c04a: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045c050: FMUL float ptr [0x0061b316]
//   XREF to: 0061b316 (READ)
// 0045c056: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045c05b: FISTP dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 0045c05e: IMUL EAX,dword ptr [EBP + -0x14],0x14
//   XREF to: Stack[-0x24] (READ)
// 0045c062: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045c068: FMUL float ptr [0x0061b316]
//   XREF to: 0061b316 (READ)
// 0045c06e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045c073: FISTP dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0045c076: IMUL EAX,dword ptr [EBP + -0x14],0x14
//   XREF to: Stack[-0x24] (READ)
// 0045c07a: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045c080: FMUL float ptr [0x0061b316]
//   XREF to: 0061b316 (READ)
// 0045c086: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045c08b: FISTP dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0045c08e: LEA EAX,[EBP + -0x28]
//   XREF to: Stack[-0x38] (DATA)
// 0045c091: PUSH EAX
// 0045c092: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045c095: PUSH EAX
// 0045c096: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 0045c09b: ADD ESP,0x8
// 0045c09e: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045c0a1: SHL EDX,0x2
// 0045c0a4: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045c0a7: MOV dword ptr [EDX + 0x1e528cc],EAX
//   XREF to: 01e528cc (DATA)
// 0045c0ad: JMP 0x0045c035
//   XREF to: 0045c035 (UNCONDITIONAL_JUMP)
// 0045c0af: MOV dword ptr [EBP + -0x14],0x0
//   Label: LAB_0045c0af
//   XREF to: Stack[-0x24] (WRITE)
// 0045c0b6: JMP 0x0045c0be
//   XREF to: 0045c0be (UNCONDITIONAL_JUMP)
// 0045c0b8: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045c0b8
//   XREF to: Stack[-0x24] (READ)
// 0045c0bb: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0045c0be: MOV EAX,[0x01626408]
//   Label: LAB_0045c0be
//   XREF to: 01626408 (READ)
// 0045c0c3: DEC EAX
// 0045c0c4: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045c0c7: JLE 0x0045c14f
//   XREF to: 0045c14f (CONDITIONAL_JUMP)
// 0045c0cd: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045c0d0: INC EAX
// 0045c0d1: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045c0d4: JMP 0x0045c0dc
//   XREF to: 0045c0dc (UNCONDITIONAL_JUMP)
// 0045c0d6: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0045c0d6
//   XREF to: Stack[-0x20] (READ)
// 0045c0d9: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0045c0dc: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0045c0dc
//   XREF to: Stack[-0x20] (READ)
// 0045c0df: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045c0e5: JGE 0x0045c14a
//   XREF to: 0045c14a (CONDITIONAL_JUMP)
// 0045c0e7: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045c0ea: SHL EAX,0x2
// 0045c0ed: IMUL EDX,dword ptr [EAX + 0x1e528cc],0x14
//   XREF to: 01e528cc (DATA)
// 0045c0f4: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045c0f7: SHL EAX,0x2
// 0045c0fa: IMUL EAX,dword ptr [EAX + 0x1e528cc],0x14
//   XREF to: 01e528cc (DATA)
// 0045c101: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045c107: FCOMP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045c10d: FNSTSW AX
// 0045c10f: SAHF
// 0045c110: JNC 0x0045c148
//   XREF to: 0045c148 (CONDITIONAL_JUMP)
// 0045c112: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045c115: SHL EAX,0x2
// 0045c118: MOV EAX,dword ptr [EAX + 0x1e528cc]
//   XREF to: 01e528cc (DATA)
// 0045c11e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045c121: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045c124: SHL EAX,0x2
// 0045c127: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045c12a: SHL EDX,0x2
// 0045c12d: MOV EAX,dword ptr [EAX + 0x1e528cc]
//   XREF to: 01e528cc (DATA)
// 0045c133: MOV dword ptr [EDX + 0x1e528cc],EAX
//   XREF to: 01e528cc (DATA)
// 0045c139: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045c13c: SHL EDX,0x2
// 0045c13f: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045c142: MOV dword ptr [EDX + 0x1e528cc],EAX
//   XREF to: 01e528cc (DATA)
// 0045c148: JMP 0x0045c0d6
//   Label: LAB_0045c148
//   XREF to: 0045c0d6 (UNCONDITIONAL_JUMP)
// 0045c14a: JMP 0x0045c0b8
//   Label: LAB_0045c14a
//   XREF to: 0045c0b8 (UNCONDITIONAL_JUMP)
// 0045c14f: MOV dword ptr [EBP + -0x14],0x0
//   Label: LAB_0045c14f
//   XREF to: Stack[-0x24] (WRITE)
// 0045c156: JMP 0x0045c15e
//   XREF to: 0045c15e (UNCONDITIONAL_JUMP)
// 0045c158: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045c158
//   XREF to: Stack[-0x24] (READ)
// 0045c15b: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0045c15e: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045c15e
//   XREF to: Stack[-0x24] (READ)
// 0045c161: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045c167: JGE 0x0045c2db
//   XREF to: 0045c2db (CONDITIONAL_JUMP)
// 0045c16d: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045c170: SHL EAX,0x2
// 0045c173: MOV EAX,dword ptr [EAX + 0x1e528cc]
//   XREF to: 01e528cc (DATA)
// 0045c179: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045c17c: CMP dword ptr [0x01e66158],0x0
//   XREF to: 01e66158 (READ)
// 0045c183: JZ 0x0045c18e
//   XREF to: 0045c18e (CONDITIONAL_JUMP)
// 0045c185: CMP dword ptr [0x01e6614c],-0x1
//   XREF to: 01e6614c (READ)
// 0045c18c: JNZ 0x0045c193
//   XREF to: 0045c193 (CONDITIONAL_JUMP)
// 0045c18e: JMP 0x0045c20a
//   Label: LAB_0045c18e
//   XREF to: 0045c20a (UNCONDITIONAL_JUMP)
// 0045c193: MOV dword ptr [EBP + -0x1c],0x0
//   Label: LAB_0045c193
//   XREF to: Stack[-0x2c] (WRITE)
// 0045c19a: JMP 0x0045c1a2
//   XREF to: 0045c1a2 (UNCONDITIONAL_JUMP)
// 0045c19c: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0045c19c
//   XREF to: Stack[-0x2c] (READ)
// 0045c19f: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 0045c1a2: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0045c1a2
//   XREF to: Stack[-0x2c] (READ)
// 0045c1a5: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045c1ab: JGE 0x0045c205
//   XREF to: 0045c205 (CONDITIONAL_JUMP)
// 0045c1ad: IMUL EAX,dword ptr [EBP + -0x1c],0x184
//   XREF to: Stack[-0x2c] (READ)
// 0045c1b4: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 0045c1ba: CMP EAX,dword ptr [0x01e6614c]
//   XREF to: 01e6614c (READ)
// 0045c1c0: JZ 0x0045c1c4
//   XREF to: 0045c1c4 (CONDITIONAL_JUMP)
// 0045c1c2: JMP 0x0045c203
//   XREF to: 0045c203 (UNCONDITIONAL_JUMP)
// 0045c1c4: MOV dword ptr [EBP + -0x18],0x0
//   Label: LAB_0045c1c4
//   XREF to: Stack[-0x28] (WRITE)
// 0045c1cb: JMP 0x0045c1d3
//   XREF to: 0045c1d3 (UNCONDITIONAL_JUMP)
// 0045c1cd: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045c1cd
//   XREF to: Stack[-0x28] (READ)
// 0045c1d0: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 0045c1d3: IMUL EDX,dword ptr [EBP + -0x1c],0x184
//   Label: LAB_0045c1d3
//   XREF to: Stack[-0x2c] (READ)
// 0045c1da: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045c1dd: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045c1e3: JGE 0x0045c203
//   XREF to: 0045c203 (CONDITIONAL_JUMP)
// 0045c1e5: IMUL EDX,dword ptr [EBP + -0x1c],0x184
//   XREF to: Stack[-0x2c] (READ)
// 0045c1ec: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045c1ef: SHL EAX,0x2
// 0045c1f2: ADD EAX,EDX
// 0045c1f4: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045c1fa: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045c1fd: JNZ 0x0045c201
//   XREF to: 0045c201 (CONDITIONAL_JUMP)
// 0045c1ff: JMP 0x0045c20a
//   XREF to: 0045c20a (UNCONDITIONAL_JUMP)
// 0045c201: JMP 0x0045c1cd
//   Label: LAB_0045c201
//   XREF to: 0045c1cd (UNCONDITIONAL_JUMP)
// 0045c203: JMP 0x0045c19c
//   Label: LAB_0045c203
//   XREF to: 0045c19c (UNCONDITIONAL_JUMP)
// 0045c205: JMP 0x0045c2d6
//   Label: LAB_0045c205
//   XREF to: 0045c2d6 (UNCONDITIONAL_JUMP)
// 0045c20a: MOV dword ptr [0x02d02570],0x7
//   Label: LAB_0045c20a
//   XREF to: 02d02570 (WRITE)
// 0045c214: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   XREF to: Stack[-0x20] (READ)
// 0045c218: MOV EAX,dword ptr [EAX + 0x688024]
//   XREF to: 00688024 (DATA)
// 0045c21e: SAR EAX,0x10
// 0045c221: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045c224: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   XREF to: Stack[-0x20] (READ)
// 0045c228: MOV EAX,dword ptr [EAX + 0x688028]
//   XREF to: 00688028 (DATA)
// 0045c22e: SAR EAX,0x10
// 0045c231: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045c234: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   XREF to: Stack[-0x20] (READ)
// 0045c238: TEST byte ptr [EAX + 0x688027],0x80
//   XREF to: 00688027 (DATA)
// 0045c23f: JZ 0x0045c246
//   XREF to: 0045c246 (CONDITIONAL_JUMP)
// 0045c241: JMP 0x0045c2d6
//   XREF to: 0045c2d6 (UNCONDITIONAL_JUMP)
// 0045c246: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045c246
//   XREF to: Stack[-0x1c] (READ)
// 0045c249: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045c24f: JNC 0x0045c25c
//   XREF to: 0045c25c (CONDITIONAL_JUMP)
// 0045c251: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045c254: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045c25a: JC 0x0045c25e
//   XREF to: 0045c25e (CONDITIONAL_JUMP)
// 0045c25c: JMP 0x0045c26b
//   Label: LAB_0045c25c
//   XREF to: 0045c26b (UNCONDITIONAL_JUMP)
// 0045c25e: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   Label: LAB_0045c25e
//   XREF to: Stack[-0x20] (READ)
// 0045c262: CMP dword ptr [EAX + 0x68801c],0x0
//   XREF to: 0068801c (DATA)
// 0045c269: JG 0x0045c26d
//   XREF to: 0045c26d (CONDITIONAL_JUMP)
// 0045c26b: JMP 0x0045c27d
//   Label: LAB_0045c26b
//   XREF to: 0045c27d (UNCONDITIONAL_JUMP)
// 0045c26d: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045c26d
//   XREF to: Stack[-0x18] (READ)
// 0045c270: PUSH EAX
// 0045c271: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045c274: PUSH EAX
// 0045c275: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0045c27a: ADD ESP,0x8
// 0045c27d: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045c27d
//   XREF to: Stack[-0x1c] (READ)
// 0045c280: ADD EAX,0x8
// 0045c283: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045c289: JNC 0x0045c299
//   XREF to: 0045c299 (CONDITIONAL_JUMP)
// 0045c28b: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045c28e: ADD EAX,0xc
// 0045c291: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045c297: JC 0x0045c29b
//   XREF to: 0045c29b (CONDITIONAL_JUMP)
// 0045c299: JMP 0x0045c2a8
//   Label: LAB_0045c299
//   XREF to: 0045c2a8 (UNCONDITIONAL_JUMP)
// 0045c29b: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   Label: LAB_0045c29b
//   XREF to: Stack[-0x20] (READ)
// 0045c29f: CMP dword ptr [EAX + 0x68801c],0x0
//   XREF to: 0068801c (DATA)
// 0045c2a6: JG 0x0045c2aa
//   XREF to: 0045c2aa (CONDITIONAL_JUMP)
// 0045c2a8: JMP 0x0045c2d6
//   Label: LAB_0045c2a8
//   XREF to: 0045c2d6 (UNCONDITIONAL_JUMP)
// 0045c2aa: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0045c2aa
//   XREF to: Stack[-0x20] (READ)
// 0045c2ad: PUSH EAX
// 0045c2ae: MOV EAX,0x61b31a
//   XREF to: 0061b31a (DATA)
// 0045c2b3: PUSH EAX
//   XREF to: 0061b31a (DATA)
// 0045c2b4: LEA EAX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0045c2b7: PUSH EAX
// 0045c2b8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045c2bd: ADD ESP,0xc
// 0045c2c0: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045c2c3: INC EAX
// 0045c2c4: PUSH EAX
// 0045c2c5: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045c2c8: INC EAX
// 0045c2c9: PUSH EAX
// 0045c2ca: LEA EAX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0045c2cd: PUSH EAX
// 0045c2ce: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 0045c2d3: ADD ESP,0xc
// 0045c2d6: JMP 0x0045c158
//   Label: LAB_0045c2d6
//   XREF to: 0045c158 (UNCONDITIONAL_JUMP)
// 0045c2db: MOV ESP,EBP
//   Label: LAB_0045c2db
// 0045c2dd: POP EBP
// 0045c2de: POP EDI
// 0045c2df: POP ESI
// 0045c2e0: POP EBX
// 0045c2e1: RET
