// Name: engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
// Address: 00501bc0
// Address Range: [[00501bc0, 00501d34]]
// Convention: __cdecl
// Signature: void engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0(CVector3i * vertex_data, SSurfaceNormal * output)
// Cross-references:
//   core_bodypart.cpp_FUN_0041a050 (0041a050) at 0041a43a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60 (00477e60) at 00477ed5 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0 (004824f0) at 00482567 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005702b0 (005702b0) at 005706b6 [UNCONDITIONAL_CALL]
//   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 (00501f30) at 0050228b [UNCONDITIONAL_CALL]
//   engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320 (00502320) at 00502381 [UNCONDITIONAL_CALL]
// Globals:
//   double g_NormalTo16BitScale2 = 65535

#include "nocturne.h"

void __cdecl
engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(CVector3i *vertex_data,SSurfaceNormal *output)

{
  CVector3i *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_20;
  
  pCVar1 = vertex_data + output->vertex_index_2;
  iVar3 = output->vertex_index_1;
  fVar9 = (float)(pCVar1->x - vertex_data[iVar3].x);
  fVar11 = (float)(pCVar1->y - vertex_data[iVar3].y);
  fVar5 = (float)(pCVar1->z - vertex_data[iVar3].z);
  iVar3 = output->vertex_index_3;
  fVar7 = (float)(vertex_data[iVar3].z - pCVar1->z);
  fVar8 = (float)(vertex_data[iVar3].y - pCVar1->y);
  fVar6 = fVar11 * fVar7 - fVar8 * fVar5;
  fVar10 = (float)(vertex_data[iVar3].x - pCVar1->x);
  fVar5 = fVar10 * fVar5 - fVar9 * fVar7;
  fVar7 = fVar9 * fVar8 - fVar10 * fVar11;
  local_20 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
  if (ABS(local_20) == 0.0) {
    local_20 = 65535.0;
  }
  local_20 = 1.0 / local_20;
  fVar8 = (float)g_NormalTo16BitScale2;
  fVar6 = fVar6 * local_20 * fVar8;
  fVar5 = fVar5 * local_20 * fVar8;
  fVar8 = fVar8 * fVar7 * local_20;
  iVar4 = output->vertex_index_1;
  iVar3 = vertex_data[iVar4].y;
  iVar2 = vertex_data[iVar4].x;
  iVar4 = vertex_data[iVar4].z;
  output->normal_x = (int)ROUND(fVar6);
  output->normal_y = (int)ROUND(fVar5);
  output->normal_z = (int)ROUND(fVar8);
  output->dot_product =
       (int)ROUND((float)iVar4 * fVar8 + (float)iVar2 * fVar6 + (float)iVar3 * fVar5);
  return;
}


// Assembly code:
// 00501bc0: PUSH EBX
//   Label: engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
// 00501bc1: PUSH ESI
// 00501bc2: PUSH EDI
// 00501bc3: PUSH EBP
// 00501bc4: MOV EBP,ESP
// 00501bc6: SUB ESP,0x38
// 00501bc9: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00501bcc: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00501bcf: MOV EDX,dword ptr [EAX + 0x24]
// 00501bd2: LEA EAX,[EDX*0x4 + 0x0]
// 00501bd9: SUB EAX,EDX
// 00501bdb: SHL EAX,0x2
// 00501bde: LEA EDX,[EAX + EBX*0x1]
// 00501be1: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00501be4: MOV ECX,dword ptr [EAX + 0x18]
// 00501be7: LEA EAX,[ECX*0x4 + 0x0]
// 00501bee: SUB EAX,ECX
// 00501bf0: MOV ECX,dword ptr [EDX]
// 00501bf2: SUB ECX,dword ptr [EBX + EAX*0x4]
// 00501bf5: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x4]
// 00501bf9: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00501bfc: MOV ECX,dword ptr [EDX + 0x4]
// 00501bff: SUB ECX,EDI
// 00501c01: MOV dword ptr [EBP + -0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00501c04: MOV ECX,dword ptr [EDX + 0x8]
// 00501c07: MOV ESI,dword ptr [EBX + EAX*0x4 + 0x8]
// 00501c0b: MOV EAX,ECX
// 00501c0d: SUB EAX,ESI
// 00501c0f: FILD dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00501c12: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00501c15: FILD dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00501c18: FILD dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00501c1b: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00501c1e: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00501c21: MOV ECX,dword ptr [ECX + 0x30]
// 00501c24: LEA EAX,[ECX*0x4 + 0x0]
// 00501c2b: SUB EAX,ECX
// 00501c2d: MOV EDI,dword ptr [EDX]
// 00501c2f: MOV ECX,dword ptr [EBX + EAX*0x4]
// 00501c32: SUB ECX,EDI
// 00501c34: FLD ST0
// 00501c36: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00501c39: MOV EDI,dword ptr [EDX + 0x8]
// 00501c3c: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4]
// 00501c40: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8]
// 00501c44: MOV ESI,dword ptr [EDX + 0x4]
// 00501c47: SUB EAX,EDI
// 00501c49: SUB ECX,ESI
// 00501c4b: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00501c4e: MOV dword ptr [EBP + -0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00501c51: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00501c54: FXCH
// 00501c56: FMUL ST1
// 00501c58: FILD dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00501c5b: FLD ST0
// 00501c5d: FMUL float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00501c60: FSUBP ST2,ST0
// 00501c62: FILD dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00501c65: FXCH ST2
// 00501c67: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 00501c6a: FLD ST1
// 00501c6c: FMUL float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00501c6f: FLD ST5
// 00501c71: FMULP ST4
// 00501c73: FSUBRP ST3,ST0
// 00501c75: FXCH ST2
// 00501c77: FSTP float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 00501c7a: FXCH ST3
// 00501c7c: FMULP
// 00501c7e: FXCH ST2
// 00501c80: FMULP
// 00501c82: FSUBP
// 00501c84: FSTP float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 00501c87: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00501c8a: FMUL ST0
// 00501c8c: FLD float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00501c8f: FMUL ST0
// 00501c91: FADDP
// 00501c93: FLD float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00501c96: FMUL ST0
// 00501c98: FADDP
// 00501c9a: FSQRT
// 00501c9c: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00501c9f: TEST dword ptr [EBP + -0x10],0x7fffffff
//   XREF to: Stack[-0x20] (READ)
// 00501ca6: JNZ 0x00501caf
//   XREF to: 00501caf (CONDITIONAL_JUMP)
// 00501ca8: MOV dword ptr [EBP + -0x10],0x477fff00
//   XREF to: Stack[-0x20] (WRITE)
// 00501caf: FLD1
//   Label: LAB_00501caf
// 00501cb1: FDIV float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00501cb4: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00501cb7: FMUL ST1
// 00501cb9: FLD double ptr [0x00630ca0]
//   XREF to: 00630ca0 (READ)
// 00501cbf: FXCH
// 00501cc1: FMUL ST1
// 00501cc3: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 00501cc6: FLD float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00501cc9: FMUL ST2
// 00501ccb: FMUL ST1
// 00501ccd: FSTP float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 00501cd0: FLD float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00501cd3: FMULP ST2
// 00501cd5: FMULP
// 00501cd7: FSTP float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 00501cda: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00501cdd: MOV EDX,dword ptr [EDX + 0x18]
// 00501ce0: LEA EAX,[EDX*0x4 + 0x0]
// 00501ce7: SUB EAX,EDX
// 00501ce9: FILD dword ptr [EBX + EAX*0x4 + 0x4]
// 00501ced: FMUL float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00501cf0: FILD dword ptr [EBX + EAX*0x4]
// 00501cf3: FMUL float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00501cf6: FADDP
// 00501cf8: FILD dword ptr [EBX + EAX*0x4 + 0x8]
// 00501cfc: FMUL float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00501cff: FADDP
// 00501d01: FSTP float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 00501d04: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00501d0a: FLD float ptr [EBP + 0xffffffe4]
//   XREF to: Stack[-0x2c] (READ)
// 00501d10: FISTP dword ptr [EBX + 0x8]
// 00501d13: FLD float ptr [EBP + 0xffffffcc]
//   XREF to: Stack[-0x44] (READ)
// 00501d19: FISTP dword ptr [EBX + 0xc]
// 00501d1c: FLD float ptr [EBP + 0xffffffd0]
//   XREF to: Stack[-0x40] (READ)
// 00501d22: FISTP dword ptr [EBX + 0x10]
// 00501d25: FLD float ptr [EBP + 0xffffffd4]
//   XREF to: Stack[-0x3c] (READ)
// 00501d2b: FISTP dword ptr [EBX + 0x14]
// 00501d2e: MOV ESP,EBP
// 00501d30: POP EBP
// 00501d31: POP EDI
// 00501d32: POP ESI
// 00501d33: POP EBX
// 00501d34: RET
