// Name: shape_design.c_calculateVertexNormals_FUN_0045be40
// Address: 0045be40
// Address Range: [[0045be40, 0045bfe8]]
// Convention: __cdecl
// Signature: void shape_design.c_calculateVertexNormals_FUN_0045be40(void)
// Cross-references:
//   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 (004570a0) at 004572a0 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 (00482e40) at 00482e4b [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 00458878 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00459342 [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 00459a00 [UNCONDITIONAL_CALL]
//   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 (0045d5d0) at 0045d670 [UNCONDITIONAL_CALL]
//   shape_design.c_realignObject_FUN_0045ee70 (0045ee70) at 0045f073 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f2ff [UNCONDITIONAL_CALL]
//   shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960 (0048f960) at 0048fa3f [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00 (005d7e00) at 005d80dc [UNCONDITIONAL_CALL]
// Globals:
//   double g_NormalizeThreshold = 0.00100000000000000
//   int g_VertexCount
//   SVertexData[20000] g_VertexNormals
//   undefined4 DAT_01687e90
//   undefined4 DAT_01687e94
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99b8
//   undefined4 DAT_016e99bc
//   undefined4 DAT_016e99c0
// Function calls:
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0

#include "nocturne.h"

void __cdecl shape_design_c_calculateVertexNormals_FUN_0045be40(void)

{
  float fVar1;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_20;
  float local_1c;
  float local_18;
  
  for (local_40 = 0; (int)local_40 < g_PolygonCount; local_40 = local_40 + 1) {
    shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + local_40);
  }
  for (local_40 = 0; (int)local_40 < g_VertexCount; local_40 = local_40 + 1) {
    local_34 = 0;
    local_20 = 0.0;
    local_1c = 0.0;
    local_18 = 0.0;
    for (local_3c = 0; local_3c < g_PolygonCount; local_3c = local_3c + 1) {
      for (local_38 = 0; local_38 < (int)g_ModelPolygonData[local_3c].vertex_indices_count;
          local_38 = local_38 + 1) {
        if (g_ModelPolygonData[local_3c].vertex_indices[local_38] == local_40) {
          local_34 = local_34 + 1;
          local_20 = local_20 + g_ModelPolygonData[local_3c].normal.x;
          local_1c = local_1c + g_ModelPolygonData[local_3c].normal.y;
          local_18 = local_18 + g_ModelPolygonData[local_3c].normal.z;
        }
      }
    }
    if (local_34 != 0) {
      fVar1 = SQRT(local_18 * local_18 + local_1c * local_1c + local_20 * local_20);
      if ((float)g_NormalizeThreshold <= fVar1) {
        local_20 = local_20 / fVar1;
        local_1c = local_1c / fVar1;
        local_18 = local_18 / fVar1;
      }
      else {
        local_18 = 0.0;
        local_1c = 0.0;
        local_20 = 0.0;
      }
      g_VertexNormals[local_40].vertex.x = local_20;
      g_VertexNormals[local_40].vertex.y = local_1c;
      g_VertexNormals[local_40].vertex.z = local_18;
    }
  }
  return;
}


// Assembly code:
// 0045be40: PUSH EBX
//   Label: shape_design.c_calculateVertexNormals_FUN_0045be40
// 0045be41: PUSH ESI
// 0045be42: PUSH EDI
// 0045be43: PUSH EBP
// 0045be44: MOV EBP,ESP
// 0045be46: SUB ESP,0x30
// 0045be4c: MOV dword ptr [EBP + -0x30],0x0
//   XREF to: Stack[-0x40] (WRITE)
// 0045be53: JMP 0x0045be5b
//   XREF to: 0045be5b (UNCONDITIONAL_JUMP)
// 0045be55: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045be55
//   XREF to: Stack[-0x40] (READ)
// 0045be58: INC dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ_WRITE)
// 0045be5b: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045be5b
//   XREF to: Stack[-0x40] (READ)
// 0045be5e: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045be64: JGE 0x0045be7f
//   XREF to: 0045be7f (CONDITIONAL_JUMP)
// 0045be66: IMUL EAX,dword ptr [EBP + -0x30],0x184
//   XREF to: Stack[-0x40] (READ)
// 0045be6d: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0045be72: ADD EAX,EDX
// 0045be74: PUSH EAX
// 0045be75: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 0045be7a: ADD ESP,0x4
// 0045be7d: JMP 0x0045be55
//   XREF to: 0045be55 (UNCONDITIONAL_JUMP)
// 0045be7f: MOV dword ptr [EBP + -0x30],0x0
//   Label: LAB_0045be7f
//   XREF to: Stack[-0x40] (WRITE)
// 0045be86: JMP 0x0045be8e
//   XREF to: 0045be8e (UNCONDITIONAL_JUMP)
// 0045be88: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045be88
//   XREF to: Stack[-0x40] (READ)
// 0045be8b: INC dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ_WRITE)
// 0045be8e: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045be8e
//   XREF to: Stack[-0x40] (READ)
// 0045be91: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045be97: JGE 0x0045bfe2
//   XREF to: 0045bfe2 (CONDITIONAL_JUMP)
// 0045be9d: MOV dword ptr [EBP + -0x24],0x0
//   XREF to: Stack[-0x34] (WRITE)
// 0045bea4: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0045beab: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045beb2: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045beb9: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 0045bec0: JMP 0x0045bec8
//   XREF to: 0045bec8 (UNCONDITIONAL_JUMP)
// 0045bec2: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0045bec2
//   XREF to: Stack[-0x3c] (READ)
// 0045bec5: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 0045bec8: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0045bec8
//   XREF to: Stack[-0x3c] (READ)
// 0045becb: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045bed1: JGE 0x0045bf53
//   XREF to: 0045bf53 (CONDITIONAL_JUMP)
// 0045bed7: IMUL EAX,dword ptr [EBP + -0x2c],0x184
//   XREF to: Stack[-0x3c] (READ)
// 0045bede: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045bee3: ADD EDX,EAX
// 0045bee5: MOV dword ptr [EBP + -0x20],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0045bee8: MOV dword ptr [EBP + -0x28],0x0
//   XREF to: Stack[-0x38] (WRITE)
// 0045beef: JMP 0x0045bef7
//   XREF to: 0045bef7 (UNCONDITIONAL_JUMP)
// 0045bef1: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_0045bef1
//   XREF to: Stack[-0x38] (READ)
// 0045bef4: INC dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ_WRITE)
// 0045bef7: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_0045bef7
//   XREF to: Stack[-0x38] (READ)
// 0045befa: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045befd: CMP EAX,dword ptr [EDX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 0045bf03: JGE 0x0045bf4e
//   XREF to: 0045bf4e (CONDITIONAL_JUMP)
// 0045bf05: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045bf08: SHL EAX,0x2
// 0045bf0b: ADD EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045bf0e: MOV EAX,dword ptr [EAX + 0xb8]
// 0045bf14: CMP EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045bf17: JNZ 0x0045bf4c
//   XREF to: 0045bf4c (CONDITIONAL_JUMP)
// 0045bf19: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0045bf1c: INC dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ_WRITE)
// 0045bf1f: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045bf22: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045bf25: FADD float ptr [EAX + 0xa8]
//   XREF to: 016e99b8 (DATA)
// 0045bf2b: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045bf2e: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045bf31: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045bf34: FADD float ptr [EAX + 0xac]
//   XREF to: 016e99bc (DATA)
// 0045bf3a: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045bf3d: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045bf40: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045bf43: FADD float ptr [EAX + 0xb0]
//   XREF to: 016e99c0 (DATA)
// 0045bf49: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045bf4c: JMP 0x0045bef1
//   Label: LAB_0045bf4c
//   XREF to: 0045bef1 (UNCONDITIONAL_JUMP)
// 0045bf4e: JMP 0x0045bec2
//   Label: LAB_0045bf4e
//   XREF to: 0045bec2 (UNCONDITIONAL_JUMP)
// 0045bf53: CMP dword ptr [EBP + -0x24],0x0
//   Label: LAB_0045bf53
//   XREF to: Stack[-0x34] (READ)
// 0045bf57: JZ 0x0045bfdd
//   XREF to: 0045bfdd (CONDITIONAL_JUMP)
// 0045bf5d: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045bf60: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045bf63: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045bf66: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045bf69: FADDP
// 0045bf6b: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045bf6e: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045bf71: FADDP
// 0045bf73: FSQRT
// 0045bf75: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045bf78: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045bf7b: FCOMP double ptr [0x0061b30e]
//   XREF to: 0061b30e (READ)
// 0045bf81: FNSTSW AX
// 0045bf83: SAHF
// 0045bf84: JNC 0x0045bf9b
//   XREF to: 0045bf9b (CONDITIONAL_JUMP)
// 0045bf86: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045bf8d: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045bf90: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045bf93: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045bf96: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045bf99: JMP 0x0045bfb6
//   XREF to: 0045bfb6 (UNCONDITIONAL_JUMP)
// 0045bf9b: FLD float ptr [EBP + -0x10]
//   Label: LAB_0045bf9b
//   XREF to: Stack[-0x20] (READ)
// 0045bf9e: FDIV float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045bfa1: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045bfa4: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045bfa7: FDIV float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045bfaa: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045bfad: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045bfb0: FDIV float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045bfb3: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045bfb6: IMUL EDX,dword ptr [EBP + -0x30],0x14
//   Label: LAB_0045bfb6
//   XREF to: Stack[-0x40] (READ)
// 0045bfba: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045bfbd: MOV dword ptr [EDX + 0x1687e8c],EAX
//   XREF to: 01687e8c (DATA)
// 0045bfc3: IMUL EDX,dword ptr [EBP + -0x30],0x14
//   XREF to: Stack[-0x40] (READ)
// 0045bfc7: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045bfca: MOV dword ptr [EDX + 0x1687e90],EAX
//   XREF to: 01687e90 (DATA)
// 0045bfd0: IMUL EDX,dword ptr [EBP + -0x30],0x14
//   XREF to: Stack[-0x40] (READ)
// 0045bfd4: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045bfd7: MOV dword ptr [EDX + 0x1687e94],EAX
//   XREF to: 01687e94 (DATA)
// 0045bfdd: JMP 0x0045be88
//   Label: LAB_0045bfdd
//   XREF to: 0045be88 (UNCONDITIONAL_JUMP)
// 0045bfe2: MOV ESP,EBP
//   Label: LAB_0045bfe2
// 0045bfe4: POP EBP
// 0045bfe5: POP EDI
// 0045bfe6: POP ESI
// 0045bfe7: POP EBX
// 0045bfe8: RET
