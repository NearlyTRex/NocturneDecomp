// Name: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
// Address: 00461ee0
// Address Range: [[00461ee0, 00462048]]
// Convention: __cdecl
// Signature: double shape_design.c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon * polygon_ptr)
// Cross-references:
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00464576 [UNCONDITIONAL_CALL]
//   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 (00462190) at 00462436 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 00460130 [UNCONDITIONAL_CALL]
// Globals:
//   double g_RadiansToDegrees2 = 57.2957795130800
//   SVertexData[20000] g_LoadedVertices
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c
// Function calls:
//   shape_design.c_clampedArccos_FUN_00461c50
//   shape_design.c_normalizeVertex_FUN_00461e60

#include "nocturne.h"

double __cdecl
shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon *polygon_ptr)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  double dVar7;
  float afStackY_2034 [2021];
  float fVar8;
  float fStack_90;
  double local_7c;
  double local_74;
  double local_6c;
  float local_64;
  float local_60 [4];
  float local_50;
  float local_4c [4];
  float local_3c;
  float local_38 [4];
  double local_28;
  int local_18;
  uint local_14;
  
  bVar6 = 0;
  local_28 = 0.0;
  local_14 = polygon_ptr->vertex_indices_count;
  for (local_18 = 0; local_18 < (int)local_14; local_18 = local_18 + 1) {
    pfVar3 = (float *)(polygon_ptr->vertex_indices[local_18 % (int)local_14] * 0x14 + 0x1626410 +
                      (uint)bVar6 * -8);
    local_50 = g_LoadedVertices[polygon_ptr->vertex_indices[local_18 % (int)local_14]].vertex.x;
    pfVar5 = local_4c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1;
    pfVar4 = pfVar3 + (uint)bVar6 * -2 + 1;
    local_4c[(uint)bVar6 * -2] = *pfVar3;
    *pfVar5 = *pfVar4;
    pfVar5[(uint)bVar6 * -2 + 1] = pfVar4[(uint)bVar6 * -2 + 1];
    (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pfVar3 = (float *)(polygon_ptr->vertex_indices[(local_18 + 1) % (int)local_14] * 0x14 +
                       0x1626410 + (uint)bVar6 * -8);
    local_3c = g_LoadedVertices[polygon_ptr->vertex_indices[(local_18 + 1) % (int)local_14]].vertex.
               x;
    pfVar5 = local_38 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1;
    pfVar4 = pfVar3 + (uint)bVar6 * -2 + 1;
    local_38[(uint)bVar6 * -2] = *pfVar3;
    *pfVar5 = *pfVar4;
    pfVar5[(uint)bVar6 * -2 + 1] = pfVar4[(uint)bVar6 * -2 + 1];
    (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pfVar3 = (float *)(polygon_ptr->vertex_indices[(local_18 + 2) % (int)local_14] * 0x14 +
                       0x1626410 + (uint)bVar6 * -8);
    local_64 = g_LoadedVertices[polygon_ptr->vertex_indices[(local_18 + 2) % (int)local_14]].vertex.
               x;
    pfVar5 = local_60 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1;
    pfVar4 = pfVar3 + (uint)bVar6 * -2 + 1;
    local_60[(uint)bVar6 * -2] = *pfVar3;
    *pfVar5 = *pfVar4;
    pfVar5[(uint)bVar6 * -2 + 1] = pfVar4[(uint)bVar6 * -2 + 1];
    (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    fVar8 = SUB84((double)(local_50 - local_3c),0);
    fStack_90 = (float)((ulonglong)(double)(local_50 - local_3c) >> 0x20);
    fVar1 = local_4c[0] - local_38[0];
    fVar2 = local_4c[1] - local_38[1];
    local_7c = (double)(local_64 - local_3c);
    local_74 = (double)(local_60[0] - local_38[0]);
    local_6c = (double)(local_60[1] - local_38[1]);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&stack0xffffff6c);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_7c);
    dVar7 = shape_design_c_clampedArccos_FUN_00461c50
                      ((double)CONCAT44(fVar8,(int)((ulonglong)
                                                    ((double)fVar2 * local_6c +
                                                    (double)CONCAT44(fStack_90,fVar8) * local_7c +
                                                    (double)fVar1 * local_74) >> 0x20)));
    local_28 = dVar7 + local_28;
  }
  return local_28 * g_RadiansToDegrees2;
}


// Assembly code:
// 00461ee0: PUSH EBX
//   Label: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
// 00461ee1: PUSH ESI
// 00461ee2: PUSH EDI
// 00461ee3: PUSH EBP
// 00461ee4: MOV EBP,ESP
// 00461ee6: SUB ESP,0x8c
// 00461eec: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 00461ef3: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 00461efa: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461efd: MOV EAX,dword ptr [EAX + 0xa4]
// 00461f03: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00461f06: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00461f0d: JMP 0x00461f15
//   XREF to: 00461f15 (UNCONDITIONAL_JUMP)
// 00461f0f: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00461f0f
//   XREF to: Stack[-0x18] (READ)
// 00461f12: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00461f15: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00461f15
//   XREF to: Stack[-0x18] (READ)
// 00461f18: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461f1b: JGE 0x00462030
//   XREF to: 00462030 (CONDITIONAL_JUMP)
// 00461f21: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461f24: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461f27: SAR EDX,0x1f
// 00461f2a: IDIV dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461f2d: SHL EDX,0x2
// 00461f30: ADD EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461f33: IMUL ESI,dword ptr [EDX + 0xb8],0x14
// 00461f3a: LEA EDI,[EBP + -0x40]
//   XREF to: Stack[-0x50] (DATA)
// 00461f3d: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00461f43: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 00461f44: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 00461f45: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 00461f46: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 00461f47: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 00461f48: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461f4b: INC EDX
// 00461f4c: MOV EAX,EDX
// 00461f4e: SAR EDX,0x1f
// 00461f51: IDIV dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461f54: SHL EDX,0x2
// 00461f57: ADD EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461f5a: IMUL ESI,dword ptr [EDX + 0xb8],0x14
// 00461f61: LEA EDI,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 00461f64: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00461f6a: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 00461f6b: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 00461f6c: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 00461f6d: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 00461f6e: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 00461f6f: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461f72: ADD EDX,0x2
// 00461f75: MOV EAX,EDX
// 00461f77: SAR EDX,0x1f
// 00461f7a: IDIV dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461f7d: SHL EDX,0x2
// 00461f80: ADD EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461f83: IMUL ESI,dword ptr [EDX + 0xb8],0x14
// 00461f8a: LEA EDI,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 00461f8d: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00461f93: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 00461f94: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 00461f95: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 00461f96: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 00461f97: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 00461f98: FLD float ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 00461f9b: FSUB float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00461f9e: FSTP double ptr [EBP + 0xffffff7c]
//   XREF to: Stack[-0x94] (WRITE)
// 00461fa4: FLD float ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00461fa7: FSUB float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00461faa: FSTP double ptr [EBP + -0x7c]
//   XREF to: Stack[-0x8c] (WRITE)
// 00461fad: FLD float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00461fb0: FSUB float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00461fb3: FSTP double ptr [EBP + -0x74]
//   XREF to: Stack[-0x84] (WRITE)
// 00461fb6: FLD float ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 00461fb9: FSUB float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00461fbc: FSTP double ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (WRITE)
// 00461fbf: FLD float ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 00461fc2: FSUB float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00461fc5: FSTP double ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (WRITE)
// 00461fc8: FLD float ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 00461fcb: FSUB float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00461fce: FSTP double ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (WRITE)
// 00461fd1: LEA EDX,[EBP + 0xffffff7c]
//   XREF to: Stack[-0x94] (DATA)
// 00461fd7: PUSH EDX
// 00461fd8: CALL shape_design.c_normalizeVertex_FUN_00461e60
//   XREF to: 00461e60 (UNCONDITIONAL_CALL)
// 00461fdd: ADD ESP,0x4
// 00461fe0: LEA EDX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00461fe3: PUSH EDX
// 00461fe4: CALL shape_design.c_normalizeVertex_FUN_00461e60
//   XREF to: 00461e60 (UNCONDITIONAL_CALL)
// 00461fe9: ADD ESP,0x4
// 00461fec: FLD double ptr [EBP + -0x7c]
//   XREF to: Stack[-0x8c] (READ)
// 00461fef: FMUL double ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 00461ff2: FLD double ptr [EBP + 0xffffff7c]
//   XREF to: Stack[-0x94] (READ)
// 00461ff8: FMUL double ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 00461ffb: FADDP
// 00461ffd: FLD double ptr [EBP + -0x74]
//   XREF to: Stack[-0x84] (READ)
// 00462000: FMUL double ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 00462003: FADDP
// 00462005: SUB ESP,0x8
// 00462008: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa4] (DATA)
// 0046200b: CALL shape_design.c_clampedArccos_FUN_00461c50
//   XREF to: 00461c50 (UNCONDITIONAL_CALL)
// 00462010: MOV dword ptr [EBP + 0xffffff74],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 00462016: MOV dword ptr [EBP + 0xffffff78],EDX
//   XREF to: Stack[-0x98] (WRITE)
// 0046201c: FLD double ptr [EBP + 0xffffff74]
//   XREF to: Stack[-0x9c] (READ)
// 00462022: ADD ESP,0x8
// 00462025: FADD double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00462028: FSTP double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0046202b: JMP 0x00461f0f
//   XREF to: 00461f0f (UNCONDITIONAL_JUMP)
// 00462030: FLD double ptr [EBP + -0x18]
//   Label: LAB_00462030
//   XREF to: Stack[-0x28] (READ)
// 00462033: FMUL double ptr [0x0061bfbe]
//   XREF to: 0061bfbe (READ)
// 00462039: FSTP double ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0046203c: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046203f: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462042: MOV ESP,EBP
// 00462044: POP EBP
// 00462045: POP EDI
// 00462046: POP ESI
// 00462047: POP EBX
// 00462048: RET
