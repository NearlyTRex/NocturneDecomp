// Name: shape_design.c_findClosestPolygonToMouse_FUN_00466250
// Address: 00466250
// Address Range: [[00466250, 0046660c]]
// Convention: __cdecl
// Signature: int shape_design.c_findClosestPolygonToMouse_FUN_00466250(void)
// Cross-references:
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464b4f [UNCONDITIONAL_CALL]
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464db4 [UNCONDITIONAL_CALL]
// Globals:
//   float g_MouseWorldToScreenScale = 256
//   float g_MouseNormalToFixedPoint = 65535
//   float g_MousePlaneDistanceScale = 256
//   TerminatedCString s_mX_d_mY_d_0061c716
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 DAT_00688024+3
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   SPolygonScreenData[20000] g_PolygonScreenCache
//   undefined4 DAT_015c48c8
//   undefined4 DAT_015c48cc
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99b8
//   undefined4 DAT_016e99bc
//   undefined4 DAT_016e99c0
//   undefined4 DAT_016e99c4
//   undefined4 DAT_016e99c8
//   int g_MouseX
//   int g_MouseY
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawTextColor_FUN_00402430
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_matrix.c_transformToCache_FUN_0050cd70

#include "nocturne.h"

int __cdecl shape_design_c_findClosestPolygonToMouse_FUN_00466250(void)

{
  int iVar1;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  double dVar3;
  SClipPlane local_f0 [5];
  char local_a0 [80];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  if (g_PolygonCount == 0) {
    local_50 = -1;
  }
  else {
    for (local_4c = 0; local_4c < g_VertexCount; local_4c = local_4c + 1) {
      dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,local_4c * 0x14));
      dVar3 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),local_4c * 0x14));
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),local_4c * 0x14));
      engine_matrix_c_transformToCache_FUN_0050cd70(local_4c,(CVector3i *)&stack0xfffffefc);
      in_EDX = extraout_EDX;
    }
    for (local_4c = 0; local_4c < g_PolygonCount; local_4c = local_4c + 1) {
      local_38 = local_4c;
      local_48 = 0;
      for (local_3c = 0; local_3c < (int)g_ModelPolygonData[local_4c].vertex_indices_count;
          local_3c = local_3c + 1) {
        if ((int)(g_RenderVertexBuffer[g_ModelPolygonData[local_4c].vertex_indices[local_3c]].
                  projected_vertex.screen_x & -0x80000000) != 0) {
          local_48 = 1;
        }
      }
      if (local_48 == 0) {
        local_30 = 0;
        for (local_3c = 0; local_3c < (int)g_ModelPolygonData[local_4c].vertex_indices_count;
            local_3c = local_3c + 1) {
          local_30 = local_30 +
                     (g_RenderVertexBuffer[g_ModelPolygonData[local_4c].vertex_indices[local_3c]].
                      projected_vertex.screen_x >> 0x10);
        }
        g_PolygonScreenCache[local_4c].center_x =
             local_30 / (int)g_ModelPolygonData[local_4c].vertex_indices_count;
        local_30 = 0;
        for (local_3c = 0; local_3c < (int)g_ModelPolygonData[local_4c].vertex_indices_count;
            local_3c = local_3c + 1) {
          local_30 = local_30 +
                     (g_RenderVertexBuffer[g_ModelPolygonData[local_4c].vertex_indices[local_3c]].
                      projected_vertex.screen_y >> 0x10);
        }
        g_PolygonScreenCache[local_4c].center_y =
             local_30 / (int)g_ModelPolygonData[local_4c].vertex_indices_count;
      }
      else {
        g_PolygonScreenCache[local_4c].center_x = g_WindowWidth * 2;
        g_PolygonScreenCache[local_4c].center_y = g_WindowHeight * 2;
      }
    }
    local_14 = 0x40000000;
    local_34 = 0xffffffff;
    local_28 = -1;
    local_24 = -1;
    local_20 = -1;
    for (local_4c = 0; local_4c < g_PolygonCount; local_4c = local_4c + 1) {
      local_38 = local_4c;
      local_44 = g_MouseX - g_PolygonScreenCache[local_4c].center_x;
      local_40 = g_MouseY - g_PolygonScreenCache[local_4c].center_y;
      local_18 = local_44 * local_44 + local_40 * local_40;
      fVar2 = (float10)g_ModelPolygonData[local_4c].normal.x * (float10)g_MouseNormalToFixedPoint;
      dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(local_18,local_4c * 0x184));
      local_f0[0].A = (int)ROUND(fVar2);
      fVar2 = (float10)g_ModelPolygonData[local_38].normal.y * (float10)g_MouseNormalToFixedPoint;
      dVar3 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),local_38 * 0x184));
      local_f0[0].B = (int)ROUND(fVar2);
      fVar2 = (float10)g_ModelPolygonData[local_38].normal.z * (float10)g_MouseNormalToFixedPoint;
      dVar3 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),local_38 * 0x184));
      local_f0[0].C = (int)ROUND(fVar2);
      fVar2 = (float10)g_ModelPolygonData[local_38].plane_distance *
              (float10)g_MouseNormalToFixedPoint * (float10)g_MousePlaneDistanceScale;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),local_38 * 0x184));
      local_f0[0].D = (int)ROUND(fVar2);
      if ((local_18 < local_14) &&
         (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(local_f0), iVar1 != 0)) {
        local_14 = local_18;
        g_PolygonScreenCache[local_4c].distance_squared = local_18;
        local_20 = local_24;
        local_24 = local_28;
        local_28 = local_4c;
      }
    }
    local_34 = local_28;
    local_1c = 1;
    local_3c = local_28;
    crt_stdio_c_sprintf_FUN_005fdbd0(local_a0,"mX: %d  mY: %d",g_MouseX,g_MouseY);
    engine_2d_c_drawTextColor_FUN_00402430(local_a0,0,g_WindowHeight + -0x37);
    local_50 = local_34;
  }
  return local_50;
}


// Assembly code:
// 00466250: PUSH EBX
//   Label: shape_design.c_findClosestPolygonToMouse_FUN_00466250
// 00466251: PUSH ESI
// 00466252: PUSH EDI
// 00466253: PUSH EBP
// 00466254: MOV EBP,ESP
// 00466256: SUB ESP,0xf4
// 0046625c: CMP dword ptr [0x016e990c],0x0
//   XREF to: 016e990c (READ)
// 00466263: JNZ 0x00466271
//   XREF to: 00466271 (CONDITIONAL_JUMP)
// 00466265: MOV dword ptr [EBP + -0x40],0xffffffff
//   XREF to: Stack[-0x50] (WRITE)
// 0046626c: JMP 0x00466603
//   XREF to: 00466603 (UNCONDITIONAL_JUMP)
// 00466271: MOV dword ptr [EBP + -0x3c],0x0
//   Label: LAB_00466271
//   XREF to: Stack[-0x4c] (WRITE)
// 00466278: JMP 0x00466280
//   XREF to: 00466280 (UNCONDITIONAL_JUMP)
// 0046627a: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_0046627a
//   XREF to: Stack[-0x4c] (READ)
// 0046627d: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00466280: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00466280
//   XREF to: Stack[-0x4c] (READ)
// 00466283: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466289: JGE 0x004662f1
//   XREF to: 004662f1 (CONDITIONAL_JUMP)
// 0046628b: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046628f: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466295: FMUL float ptr [0x0061c70a]
//   XREF to: 0061c70a (READ)
// 0046629b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004662a0: FISTP dword ptr [EBP + 0xffffff0c]
//   XREF to: Stack[-0x104] (WRITE)
// 004662a6: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 004662aa: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004662b0: FMUL float ptr [0x0061c70a]
//   XREF to: 0061c70a (READ)
// 004662b6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004662bb: FISTP dword ptr [EBP + 0xffffff10]
//   XREF to: Stack[-0x100] (WRITE)
// 004662c1: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 004662c5: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 004662cb: FMUL float ptr [0x0061c70a]
//   XREF to: 0061c70a (READ)
// 004662d1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004662d6: FISTP dword ptr [EBP + 0xffffff14]
//   XREF to: Stack[-0xfc] (WRITE)
// 004662dc: LEA EAX,[EBP + 0xffffff0c]
//   XREF to: Stack[-0x104] (DATA)
// 004662e2: PUSH EAX
// 004662e3: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004662e6: PUSH EAX
// 004662e7: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004662ec: ADD ESP,0x8
// 004662ef: JMP 0x0046627a
//   XREF to: 0046627a (UNCONDITIONAL_JUMP)
// 004662f1: MOV dword ptr [EBP + -0x3c],0x0
//   Label: LAB_004662f1
//   XREF to: Stack[-0x4c] (WRITE)
// 004662f8: JMP 0x00466300
//   XREF to: 00466300 (UNCONDITIONAL_JUMP)
// 004662fa: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_004662fa
//   XREF to: Stack[-0x4c] (READ)
// 004662fd: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00466300: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00466300
//   XREF to: Stack[-0x4c] (READ)
// 00466303: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00466309: JGE 0x0046646f
//   XREF to: 0046646f (CONDITIONAL_JUMP)
// 0046630f: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00466312: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00466315: MOV dword ptr [EBP + -0x38],0x0
//   XREF to: Stack[-0x48] (WRITE)
// 0046631c: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 00466323: JMP 0x0046632b
//   XREF to: 0046632b (UNCONDITIONAL_JUMP)
// 00466325: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_00466325
//   XREF to: Stack[-0x3c] (READ)
// 00466328: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 0046632b: IMUL EDX,dword ptr [EBP + -0x28],0x184
//   Label: LAB_0046632b
//   XREF to: Stack[-0x38] (READ)
// 00466332: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00466335: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0046633b: JGE 0x00466365
//   XREF to: 00466365 (CONDITIONAL_JUMP)
// 0046633d: IMUL EDX,dword ptr [EBP + -0x28],0x184
//   XREF to: Stack[-0x38] (READ)
// 00466344: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00466347: SHL EAX,0x2
// 0046634a: ADD EAX,EDX
// 0046634c: IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30
//   XREF to: 016e99c8 (DATA)
// 00466353: TEST byte ptr [EAX + 0x688027],0x80
//   XREF to: 00688027 (DATA)
// 0046635a: JZ 0x00466363
//   XREF to: 00466363 (CONDITIONAL_JUMP)
// 0046635c: MOV dword ptr [EBP + -0x38],0x1
//   XREF to: Stack[-0x48] (WRITE)
// 00466363: JMP 0x00466325
//   Label: LAB_00466363
//   XREF to: 00466325 (UNCONDITIONAL_JUMP)
// 00466365: CMP dword ptr [EBP + -0x38],0x0
//   Label: LAB_00466365
//   XREF to: Stack[-0x48] (READ)
// 00466369: JZ 0x00466392
//   XREF to: 00466392 (CONDITIONAL_JUMP)
// 0046636b: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00466370: ADD EAX,EAX
// 00466372: IMUL EDX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 00466376: MOV dword ptr [EDX + 0x15c48c4],EAX
//   XREF to: 015c48c4 (DATA)
// 0046637c: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00466381: ADD EAX,EAX
// 00466383: IMUL EDX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 00466387: MOV dword ptr [EDX + 0x15c48c8],EAX
//   XREF to: 015c48c8 (DATA)
// 0046638d: JMP 0x0046646a
//   XREF to: 0046646a (UNCONDITIONAL_JUMP)
// 00466392: MOV dword ptr [EBP + -0x20],0x0
//   Label: LAB_00466392
//   XREF to: Stack[-0x30] (WRITE)
// 00466399: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 004663a0: JMP 0x004663a8
//   XREF to: 004663a8 (UNCONDITIONAL_JUMP)
// 004663a2: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_004663a2
//   XREF to: Stack[-0x3c] (READ)
// 004663a5: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 004663a8: IMUL EDX,dword ptr [EBP + -0x28],0x184
//   Label: LAB_004663a8
//   XREF to: Stack[-0x38] (READ)
// 004663af: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004663b2: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 004663b8: JGE 0x004663de
//   XREF to: 004663de (CONDITIONAL_JUMP)
// 004663ba: IMUL EDX,dword ptr [EBP + -0x28],0x184
//   XREF to: Stack[-0x38] (READ)
// 004663c1: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004663c4: SHL EAX,0x2
// 004663c7: ADD EAX,EDX
// 004663c9: IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30
//   XREF to: 016e99c8 (DATA)
// 004663d0: MOV EAX,dword ptr [EAX + 0x688024]
//   XREF to: 00688024 (DATA)
// 004663d6: SAR EAX,0x10
// 004663d9: ADD dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (READ_WRITE)
// 004663dc: JMP 0x004663a2
//   XREF to: 004663a2 (UNCONDITIONAL_JUMP)
// 004663de: IMUL ECX,dword ptr [EBP + -0x28],0x184
//   Label: LAB_004663de
//   XREF to: Stack[-0x38] (READ)
// 004663e5: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004663e8: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004663eb: SAR EDX,0x1f
// 004663ee: IDIV dword ptr [ECX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 004663f4: IMUL ECX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 004663f8: MOV dword ptr [ECX + 0x15c48c4],EAX
//   XREF to: 015c48c4 (DATA)
// 004663fe: MOV dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (WRITE)
// 00466405: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 0046640c: JMP 0x00466414
//   XREF to: 00466414 (UNCONDITIONAL_JUMP)
// 0046640e: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0046640e
//   XREF to: Stack[-0x3c] (READ)
// 00466411: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 00466414: IMUL EDX,dword ptr [EBP + -0x28],0x184
//   Label: LAB_00466414
//   XREF to: Stack[-0x38] (READ)
// 0046641b: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046641e: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00466424: JGE 0x0046644a
//   XREF to: 0046644a (CONDITIONAL_JUMP)
// 00466426: IMUL EDX,dword ptr [EBP + -0x28],0x184
//   XREF to: Stack[-0x38] (READ)
// 0046642d: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00466430: SHL EAX,0x2
// 00466433: ADD EAX,EDX
// 00466435: IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30
//   XREF to: 016e99c8 (DATA)
// 0046643c: MOV EAX,dword ptr [EAX + 0x688028]
//   XREF to: 00688028 (DATA)
// 00466442: SAR EAX,0x10
// 00466445: ADD dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (READ_WRITE)
// 00466448: JMP 0x0046640e
//   XREF to: 0046640e (UNCONDITIONAL_JUMP)
// 0046644a: IMUL ECX,dword ptr [EBP + -0x28],0x184
//   Label: LAB_0046644a
//   XREF to: Stack[-0x38] (READ)
// 00466451: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00466454: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00466457: SAR EDX,0x1f
// 0046645a: IDIV dword ptr [ECX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00466460: IMUL ECX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 00466464: MOV dword ptr [ECX + 0x15c48c8],EAX
//   XREF to: 015c48c8 (DATA)
// 0046646a: JMP 0x004662fa
//   Label: LAB_0046646a
//   XREF to: 004662fa (UNCONDITIONAL_JUMP)
// 0046646f: MOV dword ptr [EBP + -0x4],0x40000000
//   Label: LAB_0046646f
//   XREF to: Stack[-0x14] (WRITE)
// 00466476: MOV dword ptr [EBP + -0x24],0xffffffff
//   XREF to: Stack[-0x34] (WRITE)
// 0046647d: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00466480: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00466483: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00466486: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00466489: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046648c: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0046648f: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 00466496: JMP 0x0046649e
//   XREF to: 0046649e (UNCONDITIONAL_JUMP)
// 00466498: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00466498
//   XREF to: Stack[-0x4c] (READ)
// 0046649b: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 0046649e: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_0046649e
//   XREF to: Stack[-0x4c] (READ)
// 004664a1: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 004664a7: JGE 0x004665af
//   XREF to: 004665af (CONDITIONAL_JUMP)
// 004664ad: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004664b0: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004664b3: IMUL EDX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 004664b7: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004664bc: SUB EAX,dword ptr [EDX + 0x15c48c4]
//   XREF to: 015c48c4 (DATA)
// 004664c2: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004664c5: IMUL EDX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 004664c9: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004664ce: SUB EAX,dword ptr [EDX + 0x15c48c8]
//   XREF to: 015c48c8 (DATA)
// 004664d4: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004664d7: MOV EDX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 004664da: IMUL EDX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 004664de: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 004664e1: IMUL EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 004664e5: ADD EDX,EAX
// 004664e7: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004664ea: IMUL EAX,dword ptr [EBP + -0x28],0x184
//   XREF to: Stack[-0x38] (READ)
// 004664f1: FLD float ptr [EAX + 0x16e99b8]
//   XREF to: 016e99b8 (DATA)
// 004664f7: FMUL float ptr [0x0061c70e]
//   XREF to: 0061c70e (READ)
// 004664fd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00466502: FISTP dword ptr [EBP + 0xffffff20]
//   XREF to: Stack[-0xf0] (WRITE)
// 00466508: IMUL EAX,dword ptr [EBP + -0x28],0x184
//   XREF to: Stack[-0x38] (READ)
// 0046650f: FLD float ptr [EAX + 0x16e99bc]
//   XREF to: 016e99bc (DATA)
// 00466515: FMUL float ptr [0x0061c70e]
//   XREF to: 0061c70e (READ)
// 0046651b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00466520: FISTP dword ptr [EBP + 0xffffff24]
//   XREF to: Stack[-0xec] (WRITE)
// 00466526: IMUL EAX,dword ptr [EBP + -0x28],0x184
//   XREF to: Stack[-0x38] (READ)
// 0046652d: FLD float ptr [EAX + 0x16e99c0]
//   XREF to: 016e99c0 (DATA)
// 00466533: FMUL float ptr [0x0061c70e]
//   XREF to: 0061c70e (READ)
// 00466539: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046653e: FISTP dword ptr [EBP + 0xffffff28]
//   XREF to: Stack[-0xe8] (WRITE)
// 00466544: IMUL EAX,dword ptr [EBP + -0x28],0x184
//   XREF to: Stack[-0x38] (READ)
// 0046654b: FLD float ptr [EAX + 0x16e99c4]
//   XREF to: 016e99c4 (DATA)
// 00466551: FMUL float ptr [0x0061c70e]
//   XREF to: 0061c70e (READ)
// 00466557: FMUL float ptr [0x0061c712]
//   XREF to: 0061c712 (READ)
// 0046655d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00466562: FISTP dword ptr [EBP + 0xffffff2c]
//   XREF to: Stack[-0xe4] (WRITE)
// 00466568: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046656b: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046656e: JGE 0x00466583
//   XREF to: 00466583 (CONDITIONAL_JUMP)
// 00466570: LEA EAX,[EBP + 0xffffff20]
//   XREF to: Stack[-0xf0] (DATA)
// 00466576: PUSH EAX
// 00466577: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0046657c: ADD ESP,0x4
// 0046657f: TEST EAX,EAX
// 00466581: JNZ 0x00466585
//   XREF to: 00466585 (CONDITIONAL_JUMP)
// 00466583: JMP 0x004665aa
//   Label: LAB_00466583
//   XREF to: 004665aa (UNCONDITIONAL_JUMP)
// 00466585: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00466585
//   XREF to: Stack[-0x18] (READ)
// 00466588: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046658b: IMUL EDX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046658f: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00466592: MOV dword ptr [EDX + 0x15c48cc],EAX
//   XREF to: 015c48cc (DATA)
// 00466598: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046659b: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0046659e: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004665a1: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004665a4: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004665a7: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004665aa: JMP 0x00466498
//   Label: LAB_004665aa
//   XREF to: 00466498 (UNCONDITIONAL_JUMP)
// 004665af: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_004665af
//   XREF to: Stack[-0x28] (READ)
// 004665b2: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004665b5: MOV dword ptr [EBP + -0xc],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 004665bc: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004665bf: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004665c2: PUSH dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004665c8: PUSH dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004665ce: MOV EAX,0x61c716
//   XREF to: 0061c716 (DATA)
// 004665d3: PUSH EAX
//   XREF to: 0061c716 (DATA)
// 004665d4: LEA EAX,[EBP + 0xffffff70]
//   XREF to: Stack[-0xa0] (DATA)
// 004665da: PUSH EAX
// 004665db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004665e0: ADD ESP,0x10
// 004665e3: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004665e8: SUB EAX,0x37
// 004665eb: PUSH EAX
// 004665ec: PUSH 0x0
// 004665ee: LEA EAX,[EBP + 0xffffff70]
//   XREF to: Stack[-0xa0] (DATA)
// 004665f4: PUSH EAX
// 004665f5: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 004665fa: ADD ESP,0xc
// 004665fd: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00466600: MOV dword ptr [EBP + -0x40],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00466603: MOV EAX,dword ptr [EBP + -0x40]
//   Label: LAB_00466603
//   XREF to: Stack[-0x50] (READ)
// 00466606: MOV ESP,EBP
// 00466608: POP EBP
// 00466609: POP EDI
// 0046660a: POP ESI
// 0046660b: POP EBX
// 0046660c: RET
