// Name: shape_design.c_renderSinglePolygon_FUN_0045ce20
// Address: 0045ce20
// Address Range: [[0045ce20, 0045d1ce]]
// Convention: __cdecl
// Signature: void shape_design.c_renderSinglePolygon_FUN_0045ce20(int polygon_index)
// Cross-references:
//   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 (0045d5d0) at 0045d908 [UNCONDITIONAL_CALL]
//   shape_design.c_renderPolygonsByPart_FUN_004616a0 (004616a0) at 004616dc [UNCONDITIONAL_CALL]
// Globals:
//   float g_NormalScaleFactor = 65535
//   float g_PolygonPlaneDistanceScale = 256
//   double g_UVCoordinateFixedMultiplier = 65536
//   int g_EditorColorMode = 0x5
//   int g_ZBufferEnabled = 0x1
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9915
//   undefined4 DAT_016e9916
//   undefined4 DAT_016e9917
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99b8
//   undefined4 DAT_016e99bc
//   undefined4 DAT_016e99c0
//   undefined4 DAT_016e99c4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a88
//   undefined4 DAT_016e9a8c
//   int g_SelectionBlinkTimer
//   int g_SelectedPolygonIndex
//   int g_SecondaryPolygonIndex
//   int g_GouraudShadingEnabled
//   int g_EditorTextureMode
//   int g_CurrentPartIndex
//   int g_WireframeMode
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_3d.c_processPolygonColor_FUN_00403e30
//   engine_3d.c_renderPolygon_FUN_00403ba0
//   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
//   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0
//   engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60
//   engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
//   engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0
//   engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0

#include "nocturne.h"

void __cdecl shape_design_c_renderSinglePolygon_FUN_0045ce20(int polygon_index)

{
  char cVar1;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  float10 fVar4;
  double dVar5;
  int local_c4;
  uint local_c0;
  int local_bc;
  uint auStack_ac [16];
  SMRGLTextureBasic local_6c [3];
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  if (((g_SelectionBlinkTimer == 0) ||
      ((polygon_index != g_SelectedPolygonIndex && (polygon_index != g_SecondaryPolygonIndex)))) &&
     ((g_WireframeMode == 0 ||
      ((g_CurrentPartIndex == -1 ||
       (g_ModelPolygonData[polygon_index].part_assignment == g_CurrentPartIndex)))))) {
    shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + polygon_index);
    local_c0 = g_ModelPolygonData[polygon_index].vertex_indices_count;
    fVar4 = (float10)g_ModelPolygonData[polygon_index].normal.x * (float10)g_NormalScaleFactor;
    dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,polygon_index * 0x184));
    local_bc = (int)ROUND(fVar4);
    local_c4 = 0x45cee2;
    dVar5 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
    local_c0 = 0x45cf00;
    dVar5 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
    local_bc = 0x45cf24;
    crt_math_c_round_FUN_005fe6b0
              ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
    for (local_18 = 0; local_18 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_18 = local_18 + 1) {
      auStack_ac[local_18] = g_ModelPolygonData[polygon_index].vertex_indices[local_18];
    }
    local_1c = (uint)(g_ModelPolygonData[polygon_index].texture_name[0] == '\0');
    if ((g_ModelPolygonData[polygon_index].polygon_type == 2) &&
       (((g_EditorTextureMode == 0 || (g_EditorTextureMode == 1)) && (local_1c == 0)))) {
      local_6c[0].base.count = 0;
      pcVar2 = g_ModelPolygonData[polygon_index].texture_name;
      pcVar3 = local_6c[0].texture_name;
      do {
        cVar1 = *pcVar2;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      local_bc = 0x45cffe;
      engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(local_6c);
      for (local_18 = 0; local_18 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
          local_18 = local_18 + 1) {
        local_14 = g_ModelPolygonData[polygon_index].vertex_indices[local_18];
        fVar4 = (float10)(float)g_ModelPolygonData[polygon_index].vertex_indices[local_18 + 0x10] *
                (float10)g_UVCoordinateFixedMultiplier;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44(polygon_index * 0x184,local_18 * 4 + polygon_index * 0x184));
        g_RenderVertexBuffer[local_14].u = (float)(int)ROUND(fVar4);
        fVar4 = (float10)g_ModelPolygonData[polygon_index].uv_coordinates[local_18] *
                (float10)g_UVCoordinateFixedMultiplier;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44(polygon_index * 0x184,local_18 * 4 + polygon_index * 0x184));
        g_RenderVertexBuffer[local_14].v = (float)(int)ROUND(fVar4);
      }
      if (g_ZBufferEnabled == 0) {
        engine_3d_c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
                  ((SMRGLHeaderPrimitive *)&local_c4);
      }
      else if (g_GouraudShadingEnabled == 0) {
        engine_3d_c_renderPolygonPlaneMaskedComplex_FUN_00404c60((SMRGLHeaderPrimitive *)&local_c4);
      }
      else {
        engine_3d_c_renderPolygonTextureWrappedStandard_FUN_00405ce0
                  ((SMRGLHeaderPrimitive *)&local_c4);
      }
    }
    else if (local_1c == 0) {
      if (g_EditorTextureMode != 4) {
        local_20 = g_ModelPolygonData[polygon_index].material_id;
        local_bc = 0x45d168;
        engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffdc);
        if (g_GouraudShadingEnabled == 0) {
          if (g_ZBufferEnabled == 0) {
            engine_3d_c_renderPolygonLastPixelMode_FUN_00403ad0((SMRGLHeaderPrimitive *)&local_c4);
          }
          else {
            engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
                      ((SMRGLHeaderPrimitive *)&local_c4);
          }
        }
        else if (g_ZBufferEnabled == 0) {
          engine_3d_c_renderPolygon_FUN_00403ba0((SMRGLHeaderPrimitive *)&local_c4);
        }
        else {
          engine_3d_c_renderPolygonUVMappedComplex_FUN_00404d50((SMRGLHeaderPrimitive *)&local_c4);
        }
      }
    }
    else {
      local_20 = -g_EditorColorMode;
      local_bc = 0x45d111;
      engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xffffffdc);
      if (g_ZBufferEnabled == 0) {
        engine_3d_c_renderPolygonLastPixelMode_FUN_00403ad0((SMRGLHeaderPrimitive *)&local_c4);
      }
      else {
        engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0((SMRGLHeaderPrimitive *)&local_c4);
      }
    }
  }
  return;
}


// Assembly code:
// 0045ce20: PUSH EBX
//   Label: shape_design.c_renderSinglePolygon_FUN_0045ce20
// 0045ce21: PUSH ESI
// 0045ce22: PUSH EDI
// 0045ce23: PUSH EBP
// 0045ce24: MOV EBP,ESP
// 0045ce26: SUB ESP,0xb8
// 0045ce2c: CMP dword ptr [0x01e528ac],0x0
//   XREF to: 01e528ac (READ)
// 0045ce33: JZ 0x0045ce4d
//   XREF to: 0045ce4d (CONDITIONAL_JUMP)
// 0045ce35: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045ce38: CMP EAX,dword ptr [0x01e528b8]
//   XREF to: 01e528b8 (READ)
// 0045ce3e: JZ 0x0045ce4b
//   XREF to: 0045ce4b (CONDITIONAL_JUMP)
// 0045ce40: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045ce43: CMP EAX,dword ptr [0x01e528bc]
//   XREF to: 01e528bc (READ)
// 0045ce49: JNZ 0x0045ce4d
//   XREF to: 0045ce4d (CONDITIONAL_JUMP)
// 0045ce4b: JMP 0x0045ce4f
//   Label: LAB_0045ce4b
//   XREF to: 0045ce4f (UNCONDITIONAL_JUMP)
// 0045ce4d: JMP 0x0045ce54
//   Label: LAB_0045ce4d
//   XREF to: 0045ce54 (UNCONDITIONAL_JUMP)
// 0045ce4f: JMP 0x0045d1c8
//   Label: LAB_0045ce4f
//   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
// 0045ce54: CMP dword ptr [0x01e66158],0x0
//   Label: LAB_0045ce54
//   XREF to: 01e66158 (READ)
// 0045ce5b: JZ 0x0045ce66
//   XREF to: 0045ce66 (CONDITIONAL_JUMP)
// 0045ce5d: CMP dword ptr [0x01e6614c],-0x1
//   XREF to: 01e6614c (READ)
// 0045ce64: JNZ 0x0045ce68
//   XREF to: 0045ce68 (CONDITIONAL_JUMP)
// 0045ce66: JMP 0x0045ce82
//   Label: LAB_0045ce66
//   XREF to: 0045ce82 (UNCONDITIONAL_JUMP)
// 0045ce68: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045ce68
//   XREF to: Stack[0x4] (READ)
// 0045ce6f: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 0045ce75: CMP EAX,dword ptr [0x01e6614c]
//   XREF to: 01e6614c (READ)
// 0045ce7b: JZ 0x0045ce82
//   XREF to: 0045ce82 (CONDITIONAL_JUMP)
// 0045ce7d: JMP 0x0045d1c8
//   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
// 0045ce82: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045ce82
//   XREF to: Stack[0x4] (READ)
// 0045ce89: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0045ce8e: ADD EAX,EDX
// 0045ce90: PUSH EAX
// 0045ce91: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 0045ce96: ADD ESP,0x4
// 0045ce99: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045cea0: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045cea6: MOV dword ptr [EBP + 0xffffff50],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 0045ceac: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045ceb3: FLD float ptr [EAX + 0x16e99b8]
//   XREF to: 016e99b8 (DATA)
// 0045ceb9: FMUL float ptr [0x0061b3ea]
//   XREF to: 0061b3ea (READ)
// 0045cebf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045cec4: FISTP dword ptr [EBP + 0xffffff54]
//   XREF to: Stack[-0xbc] (WRITE)
// 0045ceca: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045ced1: FLD float ptr [EAX + 0x16e99bc]
//   XREF to: 016e99bc (DATA)
// 0045ced7: FMUL float ptr [0x0061b3ea]
//   XREF to: 0061b3ea (READ)
// 0045cedd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045cee2: FISTP dword ptr [EBP + 0xffffff58]
//   XREF to: Stack[-0xb8] (WRITE)
// 0045cee8: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045ceef: FLD float ptr [EAX + 0x16e99c0]
//   XREF to: 016e99c0 (DATA)
// 0045cef5: FMUL float ptr [0x0061b3ea]
//   XREF to: 0061b3ea (READ)
// 0045cefb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045cf00: FISTP dword ptr [EBP + 0xffffff5c]
//   XREF to: Stack[-0xb4] (WRITE)
// 0045cf06: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045cf0d: FLD float ptr [EAX + 0x16e99c4]
//   XREF to: 016e99c4 (DATA)
// 0045cf13: FMUL float ptr [0x0061b3ea]
//   XREF to: 0061b3ea (READ)
// 0045cf19: FMUL float ptr [0x0061b3ee]
//   XREF to: 0061b3ee (READ)
// 0045cf1f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045cf24: FISTP dword ptr [EBP + 0xffffff60]
//   XREF to: Stack[-0xb0] (WRITE)
// 0045cf2a: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045cf31: JMP 0x0045cf39
//   XREF to: 0045cf39 (UNCONDITIONAL_JUMP)
// 0045cf33: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045cf33
//   XREF to: Stack[-0x18] (READ)
// 0045cf36: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045cf39: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045cf39
//   XREF to: Stack[0x4] (READ)
// 0045cf40: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cf43: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045cf49: JGE 0x0045cf6f
//   XREF to: 0045cf6f (CONDITIONAL_JUMP)
// 0045cf4b: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045cf52: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cf55: SHL EAX,0x2
// 0045cf58: ADD EAX,EDX
// 0045cf5a: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cf5d: SHL EDX,0x2
// 0045cf60: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045cf66: MOV dword ptr [EDX + EBP*0x1 + 0xffffff64],EAX
// 0045cf6d: JMP 0x0045cf33
//   XREF to: 0045cf33 (UNCONDITIONAL_JUMP)
// 0045cf6f: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045cf6f
//   XREF to: Stack[0x4] (READ)
// 0045cf76: CMP byte ptr [EAX + 0x16e9914],0x0
//   XREF to: 016e9914 (DATA)
// 0045cf7d: JNZ 0x0045cf88
//   XREF to: 0045cf88 (CONDITIONAL_JUMP)
// 0045cf7f: MOV dword ptr [EBP + -0xc],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 0045cf86: JMP 0x0045cf8f
//   XREF to: 0045cf8f (UNCONDITIONAL_JUMP)
// 0045cf88: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045cf88
//   XREF to: Stack[-0x1c] (WRITE)
// 0045cf8f: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045cf8f
//   XREF to: Stack[0x4] (READ)
// 0045cf96: CMP dword ptr [EAX + 0x16e9910],0x2
//   XREF to: 016e9910 (DATA)
// 0045cf9d: JNZ 0x0045cfb3
//   XREF to: 0045cfb3 (CONDITIONAL_JUMP)
// 0045cf9f: CMP dword ptr [0x01e528c8],0x0
//   XREF to: 01e528c8 (READ)
// 0045cfa6: JZ 0x0045cfb1
//   XREF to: 0045cfb1 (CONDITIONAL_JUMP)
// 0045cfa8: CMP dword ptr [0x01e528c8],0x1
//   XREF to: 01e528c8 (READ)
// 0045cfaf: JNZ 0x0045cfb3
//   XREF to: 0045cfb3 (CONDITIONAL_JUMP)
// 0045cfb1: JMP 0x0045cfb5
//   Label: LAB_0045cfb1
//   XREF to: 0045cfb5 (UNCONDITIONAL_JUMP)
// 0045cfb3: JMP 0x0045cfbb
//   Label: LAB_0045cfb3
//   XREF to: 0045cfbb (UNCONDITIONAL_JUMP)
// 0045cfb5: CMP dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045cfb5
//   XREF to: Stack[-0x1c] (READ)
// 0045cfb9: JZ 0x0045cfc0
//   XREF to: 0045cfc0 (CONDITIONAL_JUMP)
// 0045cfbb: JMP 0x0045d0f7
//   Label: LAB_0045cfbb
//   XREF to: 0045d0f7 (UNCONDITIONAL_JUMP)
// 0045cfc0: MOV dword ptr [EBP + -0x58],0x0
//   Label: LAB_0045cfc0
//   XREF to: Stack[-0x68] (WRITE)
// 0045cfc7: IMUL ESI,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045cfce: MOV EDI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045cfd3: ADD ESI,EDI
// 0045cfd5: ADD ESI,0x4
// 0045cfd8: LEA EDI,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0045cfdb: PUSH EDI
// 0045cfdc: MOV AL,byte ptr [ESI]
//   Label: LAB_0045cfdc
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9916 (DATA)
// 0045cfde: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x64] (DATA)
// 0045cfe0: CMP AL,0x0
// 0045cfe2: JZ 0x0045cff4
//   XREF to: 0045cff4 (CONDITIONAL_JUMP)
// 0045cfe4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 016e9915 (DATA)
//   XREF to: 016e9917 (DATA)
// 0045cfe7: ADD ESI,0x2
// 0045cfea: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x63] (WRITE)
// 0045cfed: ADD EDI,0x2
// 0045cff0: CMP AL,0x0
// 0045cff2: JNZ 0x0045cfdc
//   XREF to: 0045cfdc (CONDITIONAL_JUMP)
// 0045cff4: POP EDI
//   Label: LAB_0045cff4
// 0045cff5: LEA ESI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045cff8: PUSH ESI
// 0045cff9: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 0045cffe: ADD ESP,0x4
// 0045d001: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045d008: JMP 0x0045d010
//   XREF to: 0045d010 (UNCONDITIONAL_JUMP)
// 0045d00a: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045d00a
//   XREF to: Stack[-0x18] (READ)
// 0045d00d: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045d010: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045d010
//   XREF to: Stack[0x4] (READ)
// 0045d017: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d01a: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045d020: JGE 0x0045d0af
//   XREF to: 0045d0af (CONDITIONAL_JUMP)
// 0045d026: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045d02d: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d030: SHL EAX,0x2
// 0045d033: ADD EAX,EDX
// 0045d035: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045d03b: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045d03e: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045d045: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d048: SHL EAX,0x2
// 0045d04b: ADD EAX,EDX
// 0045d04d: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0045d053: FMUL double ptr [0x0061b3f6]
//   XREF to: 0061b3f6 (READ)
// 0045d059: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d05e: FISTP dword ptr [EBP + 0xffffff48]
//   XREF to: Stack[-0xc8] (WRITE)
// 0045d064: IMUL EDX,dword ptr [EBP + -0x4],0x30
//   XREF to: Stack[-0x14] (READ)
// 0045d068: MOV EAX,dword ptr [EBP + 0xffffff48]
//   XREF to: Stack[-0xc8] (READ)
// 0045d06e: MOV dword ptr [EDX + 0x68802c],EAX
//   XREF to: 0068802c (DATA)
// 0045d074: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045d07b: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d07e: SHL EAX,0x2
// 0045d081: ADD EAX,EDX
// 0045d083: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0045d089: FMUL double ptr [0x0061b3f6]
//   XREF to: 0061b3f6 (READ)
// 0045d08f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d094: FISTP dword ptr [EBP + 0xffffff48]
//   XREF to: Stack[-0xc8] (WRITE)
// 0045d09a: IMUL EDX,dword ptr [EBP + -0x4],0x30
//   XREF to: Stack[-0x14] (READ)
// 0045d09e: MOV EAX,dword ptr [EBP + 0xffffff48]
//   XREF to: Stack[-0xc8] (READ)
// 0045d0a4: MOV dword ptr [EDX + 0x688030],EAX
//   XREF to: 00688030 (DATA)
// 0045d0aa: JMP 0x0045d00a
//   XREF to: 0045d00a (UNCONDITIONAL_JUMP)
// 0045d0af: CMP dword ptr [0x0066ee00],0x0
//   Label: LAB_0045d0af
//   XREF to: 0066ee00 (READ)
// 0045d0b6: JZ 0x0045d0e3
//   XREF to: 0045d0e3 (CONDITIONAL_JUMP)
// 0045d0b8: CMP dword ptr [0x01e528c0],0x0
//   XREF to: 01e528c0 (READ)
// 0045d0bf: JZ 0x0045d0d2
//   XREF to: 0045d0d2 (CONDITIONAL_JUMP)
// 0045d0c1: LEA EAX,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0045d0c7: PUSH EAX
// 0045d0c8: CALL engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0
//   XREF to: 00405ce0 (UNCONDITIONAL_CALL)
// 0045d0cd: ADD ESP,0x4
// 0045d0d0: JMP 0x0045d0e1
//   XREF to: 0045d0e1 (UNCONDITIONAL_JUMP)
// 0045d0d2: LEA EAX,[EBP + 0xffffff4c]
//   Label: LAB_0045d0d2
//   XREF to: Stack[-0xc4] (DATA)
// 0045d0d8: PUSH EAX
// 0045d0d9: CALL engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60
//   XREF to: 00404c60 (UNCONDITIONAL_CALL)
// 0045d0de: ADD ESP,0x4
// 0045d0e1: JMP 0x0045d0f2
//   Label: LAB_0045d0e1
//   XREF to: 0045d0f2 (UNCONDITIONAL_JUMP)
// 0045d0e3: LEA EAX,[EBP + 0xffffff4c]
//   Label: LAB_0045d0e3
//   XREF to: Stack[-0xc4] (DATA)
// 0045d0e9: PUSH EAX
// 0045d0ea: CALL engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
//   XREF to: 00404a40 (UNCONDITIONAL_CALL)
// 0045d0ef: ADD ESP,0x4
// 0045d0f2: JMP 0x0045d1c8
//   Label: LAB_0045d0f2
//   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
// 0045d0f7: CMP dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045d0f7
//   XREF to: Stack[-0x1c] (READ)
// 0045d0fb: JZ 0x0045d142
//   XREF to: 0045d142 (CONDITIONAL_JUMP)
// 0045d0fd: MOV EAX,[0x0066edf8]
//   XREF to: 0066edf8 (READ)
// 0045d102: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045d105: NEG dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0045d108: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 0045d10b: PUSH EAX
// 0045d10c: CALL engine_3d.c_processPolygonColor_FUN_00403e30
//   XREF to: 00403e30 (UNCONDITIONAL_CALL)
// 0045d111: ADD ESP,0x4
// 0045d114: CMP dword ptr [0x0066ee00],0x0
//   XREF to: 0066ee00 (READ)
// 0045d11b: JZ 0x0045d12e
//   XREF to: 0045d12e (CONDITIONAL_JUMP)
// 0045d11d: LEA EAX,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0045d123: PUSH EAX
// 0045d124: CALL engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
//   XREF to: 00404ae0 (UNCONDITIONAL_CALL)
// 0045d129: ADD ESP,0x4
// 0045d12c: JMP 0x0045d13d
//   XREF to: 0045d13d (UNCONDITIONAL_JUMP)
// 0045d12e: LEA EAX,[EBP + 0xffffff4c]
//   Label: LAB_0045d12e
//   XREF to: Stack[-0xc4] (DATA)
// 0045d134: PUSH EAX
// 0045d135: CALL engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0
//   XREF to: 00403ad0 (UNCONDITIONAL_CALL)
// 0045d13a: ADD ESP,0x4
// 0045d13d: JMP 0x0045d1c8
//   Label: LAB_0045d13d
//   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
// 0045d142: CMP dword ptr [0x01e528c8],0x4
//   Label: LAB_0045d142
//   XREF to: 01e528c8 (READ)
// 0045d149: JZ 0x0045d1c8
//   XREF to: 0045d1c8 (CONDITIONAL_JUMP)
// 0045d14f: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045d156: MOV EAX,dword ptr [EAX + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 0045d15c: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045d15f: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 0045d162: PUSH EAX
// 0045d163: CALL engine_3d.c_processPolygonColor_FUN_00403e30
//   XREF to: 00403e30 (UNCONDITIONAL_CALL)
// 0045d168: ADD ESP,0x4
// 0045d16b: CMP dword ptr [0x01e528c0],0x0
//   XREF to: 01e528c0 (READ)
// 0045d172: JZ 0x0045d19f
//   XREF to: 0045d19f (CONDITIONAL_JUMP)
// 0045d174: CMP dword ptr [0x0066ee00],0x0
//   XREF to: 0066ee00 (READ)
// 0045d17b: JZ 0x0045d18e
//   XREF to: 0045d18e (CONDITIONAL_JUMP)
// 0045d17d: LEA EAX,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0045d183: PUSH EAX
// 0045d184: CALL engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50
//   XREF to: 00404d50 (UNCONDITIONAL_CALL)
// 0045d189: ADD ESP,0x4
// 0045d18c: JMP 0x0045d19d
//   XREF to: 0045d19d (UNCONDITIONAL_JUMP)
// 0045d18e: LEA EAX,[EBP + 0xffffff4c]
//   Label: LAB_0045d18e
//   XREF to: Stack[-0xc4] (DATA)
// 0045d194: PUSH EAX
// 0045d195: CALL engine_3d.c_renderPolygon_FUN_00403ba0
//   XREF to: 00403ba0 (UNCONDITIONAL_CALL)
// 0045d19a: ADD ESP,0x4
// 0045d19d: JMP 0x0045d1c8
//   Label: LAB_0045d19d
//   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
// 0045d19f: CMP dword ptr [0x0066ee00],0x0
//   Label: LAB_0045d19f
//   XREF to: 0066ee00 (READ)
// 0045d1a6: JZ 0x0045d1b9
//   XREF to: 0045d1b9 (CONDITIONAL_JUMP)
// 0045d1a8: LEA EAX,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0045d1ae: PUSH EAX
// 0045d1af: CALL engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
//   XREF to: 00404ae0 (UNCONDITIONAL_CALL)
// 0045d1b4: ADD ESP,0x4
// 0045d1b7: JMP 0x0045d1c8
//   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
// 0045d1b9: LEA EAX,[EBP + 0xffffff4c]
//   Label: LAB_0045d1b9
//   XREF to: Stack[-0xc4] (DATA)
// 0045d1bf: PUSH EAX
// 0045d1c0: CALL engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0
//   XREF to: 00403ad0 (UNCONDITIONAL_CALL)
// 0045d1c5: ADD ESP,0x4
// 0045d1c8: MOV ESP,EBP
//   Label: LAB_0045d1c8
// 0045d1ca: POP EBP
// 0045d1cb: POP EDI
// 0045d1cc: POP ESI
// 0045d1cd: POP EBX
// 0045d1ce: RET
