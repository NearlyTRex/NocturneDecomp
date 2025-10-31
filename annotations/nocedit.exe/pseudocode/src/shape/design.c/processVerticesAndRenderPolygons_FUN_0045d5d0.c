// Name: shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0
// Address: 0045d5d0
// Address Range: [[0045d5d0, 0045d918]]
// Convention: __cdecl
// Signature: void shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0(void)
// Cross-references:
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f543 [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045ca49 [UNCONDITIONAL_CALL]
// Globals:
//   float g_VertexScaleFactor = 256
//   double g_LightingScaleFactor = 65535
//   int g_ZBufferEnabled = 0x1
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].light
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   SVertexData[20000] g_VertexNormals
//   undefined4 DAT_01687e90
//   undefined4 DAT_01687e94
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   int g_GouraudShadingEnabled
//   int g_AntiAliasingEnabled
//   int g_WireframeMode
//   int[20000] g_PolygonIndices
//   int[20000] g_PolygonDepths
//   undefined4 CHAR_ARRAY_02d03eb6
//   undefined4 CHAR_ARRAY_02d03eba
//   undefined4 CHAR_ARRAY_02d03ec2
//   undefined4 CHAR_ARRAY_02d03ec4
//   undefined4 CHAR_ARRAY_02d03edc
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_light.cpp_calculatePhongLighting_FUN_00505530
//   engine_matrix.c_transformToCache_FUN_0050cd70
//   shape_design.c_calculateVertexNormals_FUN_0045be40
//   shape_design.c_renderSinglePolygon_FUN_0045ce20

#include "nocturne.h"

void __cdecl shape_design_c_processVerticesAndRenderPolygons_FUN_0045d5d0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  CVector3i local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    fVar4 = (float10)g_LoadedVertices[local_1c].vertex.x * (float10)g_VertexScaleFactor;
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,local_1c * 0x14));
    local_28.x = (int)ROUND(fVar4);
    fVar4 = (float10)g_LoadedVertices[local_1c].vertex.y * (float10)g_VertexScaleFactor;
    dVar6 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),local_1c * 0x14));
    local_28.y = (int)ROUND(fVar4);
    fVar4 = (float10)g_LoadedVertices[local_1c].vertex.z * (float10)g_VertexScaleFactor;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),local_1c * 0x14))
    ;
    local_28.z = (int)ROUND(fVar4);
    engine_matrix_c_transformToCache_FUN_0050cd70(local_1c,&local_28);
    in_EDX = extraout_EDX;
  }
  if (g_KeyboardState[0x22] != '\0') {
    g_KeyboardState[0x22] = '\0';
    g_GouraudShadingEnabled = 1 - g_GouraudShadingEnabled;
    shape_design_c_calculateVertexNormals_FUN_0045be40();
    in_EDX = extraout_EDX_00;
  }
  if (g_KeyboardState[0x2c] != '\0') {
    g_KeyboardState[0x2c] = '\0';
    g_ZBufferEnabled = 1 - g_ZBufferEnabled;
  }
  if ((g_KeyboardState[0x1e] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
    g_KeyboardState[0x1e] = '\0';
    g_AntiAliasingEnabled = 1 - g_AntiAliasingEnabled;
  }
  if (g_KeyboardState[0x44] != '\0') {
    g_KeyboardState[0x44] = '\0';
    g_WireframeMode = 1 - g_WireframeMode;
  }
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,local_1c * 0x14));
    fVar4 = (float10)g_VertexNormals[local_1c].vertex.y * (float10)g_LightingScaleFactor;
    dVar6 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),local_1c * 0x14));
    fVar5 = (float10)g_VertexNormals[local_1c].vertex.z * (float10)g_LightingScaleFactor;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),local_1c * 0x14))
    ;
    fVar3 = (float)engine_light_cpp_calculatePhongLighting_FUN_00505530
                             ((int)ROUND(fVar5),(int)ROUND(fVar4),(int)ROUND(fVar5));
    in_EDX = local_1c * 0x30;
    g_RenderVertexBuffer[local_1c].light = fVar3;
  }
  for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
    g_PolygonIndices[local_1c] = local_1c;
    g_PolygonDepths[local_1c] =
         g_RenderVertexBuffer[g_ModelPolygonData[local_1c].vertex_indices[0]].projected_vertex.
         transformed_z;
    for (local_18 = 1; local_18 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
        local_18 = local_18 + 1) {
      local_14 = g_RenderVertexBuffer[g_ModelPolygonData[local_1c].vertex_indices[local_18]].
                 projected_vertex.transformed_z;
      if (local_14 < g_PolygonDepths[local_1c]) {
        g_PolygonDepths[local_1c] = local_14;
      }
    }
  }
  for (local_1c = 0; iVar2 = local_1c, local_1c < g_PolygonCount + -1; local_1c = local_1c + 1) {
    while (local_18 = iVar2 + 1, local_18 < g_PolygonCount) {
      iVar2 = local_18;
      if (g_PolygonDepths[local_1c] < g_PolygonDepths[local_18]) {
        iVar1 = g_PolygonIndices[local_1c];
        g_PolygonIndices[local_1c] = g_PolygonIndices[local_18];
        g_PolygonIndices[local_18] = iVar1;
        iVar1 = g_PolygonDepths[local_1c];
        g_PolygonDepths[local_1c] = g_PolygonDepths[local_18];
        g_PolygonDepths[local_18] = iVar1;
      }
    }
  }
  for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
    shape_design_c_renderSinglePolygon_FUN_0045ce20(g_PolygonIndices[local_1c]);
  }
  return;
}


// Assembly code:
// 0045d5d0: PUSH EBX
//   Label: shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0
// 0045d5d1: PUSH ESI
// 0045d5d2: PUSH EDI
// 0045d5d3: PUSH EBP
// 0045d5d4: MOV EBP,ESP
// 0045d5d6: SUB ESP,0x7c
// 0045d5dc: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045d5e3: JMP 0x0045d5eb
//   XREF to: 0045d5eb (UNCONDITIONAL_JUMP)
// 0045d5e5: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d5e5
//   XREF to: Stack[-0x1c] (READ)
// 0045d5e8: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045d5eb: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d5eb
//   XREF to: Stack[-0x1c] (READ)
// 0045d5ee: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045d5f4: JGE 0x0045d650
//   XREF to: 0045d650 (CONDITIONAL_JUMP)
// 0045d5f6: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045d5fa: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045d600: FMUL float ptr [0x0061b406]
//   XREF to: 0061b406 (READ)
// 0045d606: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d60b: FISTP dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0045d60e: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045d612: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045d618: FMUL float ptr [0x0061b406]
//   XREF to: 0061b406 (READ)
// 0045d61e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d623: FISTP dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0045d626: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045d62a: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045d630: FMUL float ptr [0x0061b406]
//   XREF to: 0061b406 (READ)
// 0045d636: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d63b: FISTP dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045d63e: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0045d641: PUSH EAX
// 0045d642: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d645: PUSH EAX
// 0045d646: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 0045d64b: ADD ESP,0x8
// 0045d64e: JMP 0x0045d5e5
//   XREF to: 0045d5e5 (UNCONDITIONAL_JUMP)
// 0045d650: CMP byte ptr [0x02d03eba],0x0
//   Label: LAB_0045d650
//   XREF to: 02d03eba (READ)
// 0045d657: JZ 0x0045d675
//   XREF to: 0045d675 (CONDITIONAL_JUMP)
// 0045d659: MOV byte ptr [0x02d03eba],0x0
//   XREF to: 02d03eba (WRITE)
// 0045d660: MOV EAX,0x1
// 0045d665: SUB EAX,dword ptr [0x01e528c0]
//   XREF to: 01e528c0 (READ)
// 0045d66b: MOV [0x01e528c0],EAX
//   XREF to: 01e528c0 (WRITE)
// 0045d670: CALL shape_design.c_calculateVertexNormals_FUN_0045be40
//   XREF to: 0045be40 (UNCONDITIONAL_CALL)
// 0045d675: CMP byte ptr [0x02d03ec4],0x0
//   Label: LAB_0045d675
//   XREF to: 02d03ec4 (READ)
// 0045d67c: JZ 0x0045d695
//   XREF to: 0045d695 (CONDITIONAL_JUMP)
// 0045d67e: MOV byte ptr [0x02d03ec4],0x0
//   XREF to: 02d03ec4 (WRITE)
// 0045d685: MOV EAX,0x1
// 0045d68a: SUB EAX,dword ptr [0x0066ee00]
//   XREF to: 0066ee00 (READ)
// 0045d690: MOV [0x0066ee00],EAX
//   XREF to: 0066ee00 (WRITE)
// 0045d695: CMP byte ptr [0x02d03eb6],0x0
//   Label: LAB_0045d695
//   XREF to: 02d03eb6 (READ)
// 0045d69c: JZ 0x0045d6a7
//   XREF to: 0045d6a7 (CONDITIONAL_JUMP)
// 0045d69e: CMP byte ptr [0x02d03ec2],0x0
//   XREF to: 02d03ec2 (READ)
// 0045d6a5: JNZ 0x0045d6a9
//   XREF to: 0045d6a9 (CONDITIONAL_JUMP)
// 0045d6a7: JMP 0x0045d6c0
//   Label: LAB_0045d6a7
//   XREF to: 0045d6c0 (UNCONDITIONAL_JUMP)
// 0045d6a9: MOV byte ptr [0x02d03eb6],0x0
//   Label: LAB_0045d6a9
//   XREF to: 02d03eb6 (WRITE)
// 0045d6b0: MOV EAX,0x1
// 0045d6b5: SUB EAX,dword ptr [0x01e528c4]
//   XREF to: 01e528c4 (READ)
// 0045d6bb: MOV [0x01e528c4],EAX
//   XREF to: 01e528c4 (WRITE)
// 0045d6c0: CMP byte ptr [0x02d03edc],0x0
//   Label: LAB_0045d6c0
//   XREF to: 02d03edc (READ)
// 0045d6c7: JZ 0x0045d6e0
//   XREF to: 0045d6e0 (CONDITIONAL_JUMP)
// 0045d6c9: MOV byte ptr [0x02d03edc],0x0
//   XREF to: 02d03edc (WRITE)
// 0045d6d0: MOV EAX,0x1
// 0045d6d5: SUB EAX,dword ptr [0x01e66158]
//   XREF to: 01e66158 (READ)
// 0045d6db: MOV [0x01e66158],EAX
//   XREF to: 01e66158 (WRITE)
// 0045d6e0: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045d6e0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045d6e7: JMP 0x0045d6ef
//   XREF to: 0045d6ef (UNCONDITIONAL_JUMP)
// 0045d6e9: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d6e9
//   XREF to: Stack[-0x1c] (READ)
// 0045d6ec: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045d6ef: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d6ef
//   XREF to: Stack[-0x1c] (READ)
// 0045d6f2: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045d6f8: JGE 0x0045d762
//   XREF to: 0045d762 (CONDITIONAL_JUMP)
// 0045d6fa: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045d6fe: FLD float ptr [EAX + 0x1687e8c]
//   XREF to: 01687e8c (DATA)
// 0045d704: FMUL double ptr [0x0061b40e]
//   XREF to: 0061b40e (READ)
// 0045d70a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d70f: FISTP dword ptr [EBP + -0x74]
//   XREF to: Stack[-0x84] (WRITE)
// 0045d712: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045d716: FLD float ptr [EAX + 0x1687e90]
//   XREF to: 01687e90 (DATA)
// 0045d71c: FMUL double ptr [0x0061b40e]
//   XREF to: 0061b40e (READ)
// 0045d722: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d727: FISTP dword ptr [EBP + -0x70]
//   XREF to: Stack[-0x80] (WRITE)
// 0045d72a: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045d72e: FLD float ptr [EAX + 0x1687e94]
//   XREF to: 01687e94 (DATA)
// 0045d734: FMUL double ptr [0x0061b40e]
//   XREF to: 0061b40e (READ)
// 0045d73a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d73f: FISTP dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (WRITE)
// 0045d742: MOV EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 0045d745: PUSH EAX
// 0045d746: MOV EAX,dword ptr [EBP + -0x70]
//   XREF to: Stack[-0x80] (READ)
// 0045d749: PUSH EAX
// 0045d74a: MOV EAX,dword ptr [EBP + -0x74]
//   XREF to: Stack[-0x84] (READ)
// 0045d74d: PUSH EAX
// 0045d74e: CALL engine_light.cpp_calculatePhongLighting_FUN_00505530
//   XREF to: 00505530 (UNCONDITIONAL_CALL)
// 0045d753: ADD ESP,0xc
// 0045d756: IMUL EDX,dword ptr [EBP + -0xc],0x30
//   XREF to: Stack[-0x1c] (READ)
// 0045d75a: MOV dword ptr [EDX + 0x688034],EAX
//   XREF to: 00688034 (DATA)
// 0045d760: JMP 0x0045d6e9
//   XREF to: 0045d6e9 (UNCONDITIONAL_JUMP)
// 0045d762: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045d762
//   XREF to: Stack[-0x1c] (WRITE)
// 0045d769: JMP 0x0045d771
//   XREF to: 0045d771 (UNCONDITIONAL_JUMP)
// 0045d76b: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d76b
//   XREF to: Stack[-0x1c] (READ)
// 0045d76e: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045d771: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d771
//   XREF to: Stack[-0x1c] (READ)
// 0045d774: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045d77a: JGE 0x0045d816
//   XREF to: 0045d816 (CONDITIONAL_JUMP)
// 0045d780: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d783: SHL EDX,0x2
// 0045d786: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d789: MOV dword ptr [EDX + 0x1e6615c],EAX
//   XREF to: 01e6615c (DATA)
// 0045d78f: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045d796: IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30
//   XREF to: 016e99c8 (DATA)
// 0045d79d: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d7a0: SHL EDX,0x2
// 0045d7a3: MOV EAX,dword ptr [EAX + 0x68801c]
//   XREF to: 0068801c (DATA)
// 0045d7a9: MOV dword ptr [EDX + 0x1e799dc],EAX
//   XREF to: 01e799dc (DATA)
// 0045d7af: MOV dword ptr [EBP + -0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 0045d7b6: JMP 0x0045d7be
//   XREF to: 0045d7be (UNCONDITIONAL_JUMP)
// 0045d7b8: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045d7b8
//   XREF to: Stack[-0x18] (READ)
// 0045d7bb: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045d7be: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   Label: LAB_0045d7be
//   XREF to: Stack[-0x1c] (READ)
// 0045d7c5: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d7c8: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045d7ce: JGE 0x0045d811
//   XREF to: 0045d811 (CONDITIONAL_JUMP)
// 0045d7d0: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045d7d7: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d7da: SHL EAX,0x2
// 0045d7dd: ADD EAX,EDX
// 0045d7df: IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30
//   XREF to: 016e99c8 (DATA)
//   XREF to: 016e99cc (DATA)
//   XREF to: 016e99d0 (DATA)
// 0045d7e6: MOV EAX,dword ptr [EAX + 0x68801c]
//   XREF to: 0068801c (DATA)
// 0045d7ec: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045d7ef: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d7f2: SHL EDX,0x2
// 0045d7f5: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d7f8: CMP EAX,dword ptr [EDX + 0x1e799dc]
//   XREF to: 01e799dc (DATA)
// 0045d7fe: JGE 0x0045d80f
//   XREF to: 0045d80f (CONDITIONAL_JUMP)
// 0045d800: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d803: SHL EDX,0x2
// 0045d806: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d809: MOV dword ptr [EDX + 0x1e799dc],EAX
//   XREF to: 01e799dc (DATA)
// 0045d80f: JMP 0x0045d7b8
//   Label: LAB_0045d80f
//   XREF to: 0045d7b8 (UNCONDITIONAL_JUMP)
// 0045d811: JMP 0x0045d76b
//   Label: LAB_0045d811
//   XREF to: 0045d76b (UNCONDITIONAL_JUMP)
// 0045d816: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045d816
//   XREF to: Stack[-0x1c] (WRITE)
// 0045d81d: JMP 0x0045d825
//   XREF to: 0045d825 (UNCONDITIONAL_JUMP)
// 0045d81f: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d81f
//   XREF to: Stack[-0x1c] (READ)
// 0045d822: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045d825: MOV EAX,[0x016e990c]
//   Label: LAB_0045d825
//   XREF to: 016e990c (READ)
// 0045d82a: DEC EAX
// 0045d82b: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d82e: JLE 0x0045d8e2
//   XREF to: 0045d8e2 (CONDITIONAL_JUMP)
// 0045d834: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d837: INC EAX
// 0045d838: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045d83b: JMP 0x0045d843
//   XREF to: 0045d843 (UNCONDITIONAL_JUMP)
// 0045d83d: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045d83d
//   XREF to: Stack[-0x18] (READ)
// 0045d840: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045d843: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045d843
//   XREF to: Stack[-0x18] (READ)
// 0045d846: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045d84c: JGE 0x0045d8dd
//   XREF to: 0045d8dd (CONDITIONAL_JUMP)
// 0045d852: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d855: SHL EAX,0x2
// 0045d858: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d85b: SHL EDX,0x2
// 0045d85e: MOV EAX,dword ptr [EAX + 0x1e799dc]
//   XREF to: 01e799dc (DATA)
// 0045d864: CMP EAX,dword ptr [EDX + 0x1e799dc]
//   XREF to: 01e799dc (DATA)
// 0045d86a: JGE 0x0045d8d8
//   XREF to: 0045d8d8 (CONDITIONAL_JUMP)
// 0045d86c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d86f: SHL EAX,0x2
// 0045d872: MOV EAX,dword ptr [EAX + 0x1e6615c]
//   XREF to: 01e6615c (DATA)
// 0045d878: MOV dword ptr [EBP + -0x7c],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0045d87b: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d87e: SHL EAX,0x2
// 0045d881: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d884: SHL EDX,0x2
// 0045d887: MOV EAX,dword ptr [EAX + 0x1e6615c]
//   XREF to: 01e6615c (DATA)
// 0045d88d: MOV dword ptr [EDX + 0x1e6615c],EAX
//   XREF to: 01e6615c (DATA)
// 0045d893: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d896: SHL EDX,0x2
// 0045d899: MOV EAX,dword ptr [EBP + -0x7c]
//   XREF to: Stack[-0x8c] (READ)
// 0045d89c: MOV dword ptr [EDX + 0x1e6615c],EAX
//   XREF to: 01e6615c (DATA)
// 0045d8a2: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d8a5: SHL EAX,0x2
// 0045d8a8: MOV EAX,dword ptr [EAX + 0x1e799dc]
//   XREF to: 01e799dc (DATA)
// 0045d8ae: MOV dword ptr [EBP + -0x7c],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0045d8b1: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d8b4: SHL EAX,0x2
// 0045d8b7: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d8ba: SHL EDX,0x2
// 0045d8bd: MOV EAX,dword ptr [EAX + 0x1e799dc]
//   XREF to: 01e799dc (DATA)
// 0045d8c3: MOV dword ptr [EDX + 0x1e799dc],EAX
//   XREF to: 01e799dc (DATA)
// 0045d8c9: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d8cc: SHL EDX,0x2
// 0045d8cf: MOV EAX,dword ptr [EBP + -0x7c]
//   XREF to: Stack[-0x8c] (READ)
// 0045d8d2: MOV dword ptr [EDX + 0x1e799dc],EAX
//   XREF to: 01e799dc (DATA)
// 0045d8d8: JMP 0x0045d83d
//   Label: LAB_0045d8d8
//   XREF to: 0045d83d (UNCONDITIONAL_JUMP)
// 0045d8dd: JMP 0x0045d81f
//   Label: LAB_0045d8dd
//   XREF to: 0045d81f (UNCONDITIONAL_JUMP)
// 0045d8e2: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045d8e2
//   XREF to: Stack[-0x1c] (WRITE)
// 0045d8e9: JMP 0x0045d8f1
//   XREF to: 0045d8f1 (UNCONDITIONAL_JUMP)
// 0045d8eb: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d8eb
//   XREF to: Stack[-0x1c] (READ)
// 0045d8ee: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045d8f1: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d8f1
//   XREF to: Stack[-0x1c] (READ)
// 0045d8f4: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045d8fa: JGE 0x0045d912
//   XREF to: 0045d912 (CONDITIONAL_JUMP)
// 0045d8fc: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045d8ff: SHL EAX,0x2
// 0045d902: PUSH dword ptr [EAX + 0x1e6615c]
//   XREF to: 01e6615c (DATA)
// 0045d908: CALL shape_design.c_renderSinglePolygon_FUN_0045ce20
//   XREF to: 0045ce20 (UNCONDITIONAL_CALL)
// 0045d90d: ADD ESP,0x4
// 0045d910: JMP 0x0045d8eb
//   XREF to: 0045d8eb (UNCONDITIONAL_JUMP)
// 0045d912: MOV ESP,EBP
//   Label: LAB_0045d912
// 0045d914: POP EBP
// 0045d915: POP EDI
// 0045d916: POP ESI
// 0045d917: POP EBX
// 0045d918: RET
