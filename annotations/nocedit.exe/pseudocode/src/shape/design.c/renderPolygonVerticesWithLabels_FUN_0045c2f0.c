// Name: shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0
// Address: 0045c2f0
// Address Range: [[0045c2f0, 0045c4e5]]
// Convention: __cdecl
// Signature: void shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index)
// Cross-references:
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f562 [UNCONDITIONAL_CALL]
// Globals:
//   float g_PolygonVertexDisplayScale = 256
//   TerminatedCString s_d_0061b322
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 DAT_00688024+3
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   int g_PolygonVertexDisplayEnabled
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
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

void __cdecl shape_design_c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index)

{
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  double dVar2;
  CVector3i local_2c;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if ((g_KeyboardState[0x2f] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x2f] = '\0';
    g_PolygonVertexDisplayEnabled = g_PolygonVertexDisplayEnabled ^ 1;
  }
  if (((g_PolygonVertexDisplayEnabled != 0) && (-1 < polygon_index)) &&
     (polygon_index <= g_PolygonCount + -1)) {
    for (local_20 = 0; local_20 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_20 = local_20 + 1) {
      local_14 = g_ModelPolygonData[polygon_index].vertex_indices[local_20];
      fVar1 = (float10)g_LoadedVertices[local_14].vertex.x * (float10)g_PolygonVertexDisplayScale;
      dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(polygon_index * 0x184,local_14 * 0x14))
      ;
      local_2c.x = (int)ROUND(fVar1);
      fVar1 = (float10)g_LoadedVertices[local_14].vertex.y * (float10)g_PolygonVertexDisplayScale;
      dVar2 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),local_14 * 0x14));
      local_2c.y = (int)ROUND(fVar1);
      fVar1 = (float10)g_LoadedVertices[local_14].vertex.z * (float10)g_PolygonVertexDisplayScale;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),local_14 * 0x14));
      local_2c.z = (int)ROUND(fVar1);
      engine_matrix_c_transformToCache_FUN_0050cd70(local_20,&local_2c);
    }
    for (local_20 = 0; local_20 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_20 = local_20 + 1) {
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
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (&stack0xffffff84,"%d",
                     g_ModelPolygonData[polygon_index].vertex_indices[local_20]);
          engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff84,local_1c + 1,local_18 + 1);
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0045c2f0: PUSH EBX
//   Label: shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0
// 0045c2f1: PUSH ESI
// 0045c2f2: PUSH EDI
// 0045c2f3: PUSH EBP
// 0045c2f4: MOV EBP,ESP
// 0045c2f6: SUB ESP,0x6c
// 0045c2fc: CMP byte ptr [0x02d03ec7],0x0
//   XREF to: 02d03ec7 (READ)
// 0045c303: JZ 0x0045c30e
//   XREF to: 0045c30e (CONDITIONAL_JUMP)
// 0045c305: CMP byte ptr [0x02d03eb5],0x0
//   XREF to: 02d03eb5 (READ)
// 0045c30c: JNZ 0x0045c310
//   XREF to: 0045c310 (CONDITIONAL_JUMP)
// 0045c30e: JMP 0x0045c31e
//   Label: LAB_0045c30e
//   XREF to: 0045c31e (UNCONDITIONAL_JUMP)
// 0045c310: MOV byte ptr [0x02d03ec7],0x0
//   Label: LAB_0045c310
//   XREF to: 02d03ec7 (WRITE)
// 0045c317: XOR byte ptr [0x015c4830],0x1
//   XREF to: 015c4830 (READ_WRITE)
// 0045c31e: CMP dword ptr [0x015c4830],0x0
//   Label: LAB_0045c31e
//   XREF to: 015c4830 (READ)
// 0045c325: JNZ 0x0045c32c
//   XREF to: 0045c32c (CONDITIONAL_JUMP)
// 0045c327: JMP 0x0045c4df
//   XREF to: 0045c4df (UNCONDITIONAL_JUMP)
// 0045c32c: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_0045c32c
//   XREF to: Stack[0x4] (READ)
// 0045c330: JL 0x0045c33d
//   XREF to: 0045c33d (CONDITIONAL_JUMP)
// 0045c332: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 0045c337: DEC EAX
// 0045c338: CMP EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045c33b: JGE 0x0045c342
//   XREF to: 0045c342 (CONDITIONAL_JUMP)
// 0045c33d: JMP 0x0045c4df
//   Label: LAB_0045c33d
//   XREF to: 0045c4df (UNCONDITIONAL_JUMP)
// 0045c342: MOV dword ptr [EBP + -0x10],0x0
//   Label: LAB_0045c342
//   XREF to: Stack[-0x20] (WRITE)
// 0045c349: JMP 0x0045c351
//   XREF to: 0045c351 (UNCONDITIONAL_JUMP)
// 0045c34b: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0045c34b
//   XREF to: Stack[-0x20] (READ)
// 0045c34e: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0045c351: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045c351
//   XREF to: Stack[0x4] (READ)
// 0045c358: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045c35b: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045c361: JGE 0x0045c3d8
//   XREF to: 0045c3d8 (CONDITIONAL_JUMP)
// 0045c363: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045c36a: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045c36d: SHL EAX,0x2
// 0045c370: ADD EAX,EDX
// 0045c372: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045c378: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045c37b: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045c37f: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045c385: FMUL float ptr [0x0061b31e]
//   XREF to: 0061b31e (READ)
// 0045c38b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045c390: FISTP dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0045c393: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045c397: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045c39d: FMUL float ptr [0x0061b31e]
//   XREF to: 0061b31e (READ)
// 0045c3a3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045c3a8: FISTP dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0045c3ab: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045c3af: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045c3b5: FMUL float ptr [0x0061b31e]
//   XREF to: 0061b31e (READ)
// 0045c3bb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045c3c0: FISTP dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0045c3c3: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0045c3c6: PUSH EAX
// 0045c3c7: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045c3ca: PUSH EAX
// 0045c3cb: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 0045c3d0: ADD ESP,0x8
// 0045c3d3: JMP 0x0045c34b
//   XREF to: 0045c34b (UNCONDITIONAL_JUMP)
// 0045c3d8: MOV dword ptr [EBP + -0x10],0x0
//   Label: LAB_0045c3d8
//   XREF to: Stack[-0x20] (WRITE)
// 0045c3df: JMP 0x0045c3e7
//   XREF to: 0045c3e7 (UNCONDITIONAL_JUMP)
// 0045c3e1: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0045c3e1
//   XREF to: Stack[-0x20] (READ)
// 0045c3e4: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0045c3e7: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045c3e7
//   XREF to: Stack[0x4] (READ)
// 0045c3ee: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045c3f1: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045c3f7: JGE 0x0045c4df
//   XREF to: 0045c4df (CONDITIONAL_JUMP)
// 0045c3fd: MOV dword ptr [0x02d02570],0x7
//   XREF to: 02d02570 (WRITE)
// 0045c407: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   XREF to: Stack[-0x20] (READ)
// 0045c40b: MOV EAX,dword ptr [EAX + 0x688024]
//   XREF to: 00688024 (DATA)
// 0045c411: SAR EAX,0x10
// 0045c414: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045c417: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   XREF to: Stack[-0x20] (READ)
// 0045c41b: MOV EAX,dword ptr [EAX + 0x688028]
//   XREF to: 00688028 (DATA)
// 0045c421: SAR EAX,0x10
// 0045c424: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045c427: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   XREF to: Stack[-0x20] (READ)
// 0045c42b: TEST byte ptr [EAX + 0x688027],0x80
//   XREF to: 00688027 (DATA)
// 0045c432: JZ 0x0045c439
//   XREF to: 0045c439 (CONDITIONAL_JUMP)
// 0045c434: JMP 0x0045c4da
//   XREF to: 0045c4da (UNCONDITIONAL_JUMP)
// 0045c439: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045c439
//   XREF to: Stack[-0x1c] (READ)
// 0045c43c: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045c442: JNC 0x0045c44f
//   XREF to: 0045c44f (CONDITIONAL_JUMP)
// 0045c444: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045c447: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045c44d: JC 0x0045c451
//   XREF to: 0045c451 (CONDITIONAL_JUMP)
// 0045c44f: JMP 0x0045c45e
//   Label: LAB_0045c44f
//   XREF to: 0045c45e (UNCONDITIONAL_JUMP)
// 0045c451: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   Label: LAB_0045c451
//   XREF to: Stack[-0x20] (READ)
// 0045c455: CMP dword ptr [EAX + 0x68801c],0x0
//   XREF to: 0068801c (DATA)
// 0045c45c: JG 0x0045c460
//   XREF to: 0045c460 (CONDITIONAL_JUMP)
// 0045c45e: JMP 0x0045c470
//   Label: LAB_0045c45e
//   XREF to: 0045c470 (UNCONDITIONAL_JUMP)
// 0045c460: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045c460
//   XREF to: Stack[-0x18] (READ)
// 0045c463: PUSH EAX
// 0045c464: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045c467: PUSH EAX
// 0045c468: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0045c46d: ADD ESP,0x8
// 0045c470: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045c470
//   XREF to: Stack[-0x1c] (READ)
// 0045c473: ADD EAX,0x8
// 0045c476: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045c47c: JNC 0x0045c48c
//   XREF to: 0045c48c (CONDITIONAL_JUMP)
// 0045c47e: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045c481: ADD EAX,0xc
// 0045c484: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045c48a: JC 0x0045c48e
//   XREF to: 0045c48e (CONDITIONAL_JUMP)
// 0045c48c: JMP 0x0045c49b
//   Label: LAB_0045c48c
//   XREF to: 0045c49b (UNCONDITIONAL_JUMP)
// 0045c48e: IMUL EAX,dword ptr [EBP + -0x10],0x30
//   Label: LAB_0045c48e
//   XREF to: Stack[-0x20] (READ)
// 0045c492: CMP dword ptr [EAX + 0x68801c],0x0
//   XREF to: 0068801c (DATA)
// 0045c499: JG 0x0045c49d
//   XREF to: 0045c49d (CONDITIONAL_JUMP)
// 0045c49b: JMP 0x0045c4da
//   Label: LAB_0045c49b
//   XREF to: 0045c4da (UNCONDITIONAL_JUMP)
// 0045c49d: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045c49d
//   XREF to: Stack[0x4] (READ)
// 0045c4a4: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045c4a7: SHL EAX,0x2
// 0045c4aa: ADD EAX,EDX
// 0045c4ac: PUSH dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045c4b2: MOV EAX,0x61b322
//   XREF to: 0061b322 (DATA)
// 0045c4b7: PUSH EAX
//   XREF to: 0061b322 (DATA)
// 0045c4b8: LEA EAX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 0045c4bb: PUSH EAX
// 0045c4bc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045c4c1: ADD ESP,0xc
// 0045c4c4: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045c4c7: INC EAX
// 0045c4c8: PUSH EAX
// 0045c4c9: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045c4cc: INC EAX
// 0045c4cd: PUSH EAX
// 0045c4ce: LEA EAX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 0045c4d1: PUSH EAX
// 0045c4d2: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 0045c4d7: ADD ESP,0xc
// 0045c4da: JMP 0x0045c3e1
//   Label: LAB_0045c4da
//   XREF to: 0045c3e1 (UNCONDITIONAL_JUMP)
// 0045c4df: MOV ESP,EBP
//   Label: LAB_0045c4df
// 0045c4e1: POP EBP
// 0045c4e2: POP EDI
// 0045c4e3: POP ESI
// 0045c4e4: POP EBX
// 0045c4e5: RET
