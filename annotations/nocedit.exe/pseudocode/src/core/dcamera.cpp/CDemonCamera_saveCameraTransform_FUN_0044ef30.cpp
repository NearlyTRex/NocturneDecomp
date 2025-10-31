// Name: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30
// Address: 0044ef30
// Address Range: [[0044ef30, 0044f1de]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30(CDemonCamera * this_ptr, CVector3f * new_position, CMatrix3x3f * rotation_matrix, CMatrix3x3f * transform_matrix)
// Globals:
//   float g_CameraFixedPointScale = 256
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30
          (CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,
          CMatrix3x3f *transform_matrix)

{
  CVector3i *pCVar1;
  CVector3i *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  float *pfVar5;
  float extraout_EDX;
  float fVar6;
  BADSPACEBASE *in_ESP;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  CVector3f local_1c;
  CVector3f local_10;
  
  pCVar2 = &(this_ptr->transform_state).saved_camera_position;
  pCVar1 = &(this_ptr->base).position;
  (this_ptr->transform_state).saved_camera_origin.x = (this_ptr->camera_origin).x;
  (this_ptr->transform_state).saved_camera_origin.y = (this_ptr->camera_origin).y;
  (this_ptr->transform_state).saved_camera_origin.z = (this_ptr->camera_origin).z;
  if (pCVar2 != pCVar1) {
    pCVar2->x = pCVar1->x;
    (this_ptr->transform_state).saved_camera_position.y = (this_ptr->base).position.y;
    (this_ptr->transform_state).saved_camera_position.z = (this_ptr->base).position.z;
  }
  (this_ptr->transform_state).saved_source_matrix.m[0][0] = (this_ptr->source_matrix).m[0][0];
  (this_ptr->transform_state).saved_source_matrix.m[0][1] = (this_ptr->source_matrix).m[0][1];
  (this_ptr->transform_state).saved_source_matrix.m[0][2] = (this_ptr->source_matrix).m[0][2];
  (this_ptr->transform_state).saved_source_matrix.m[1][0] = (this_ptr->source_matrix).m[1][0];
  (this_ptr->transform_state).saved_source_matrix.m[1][1] = (this_ptr->source_matrix).m[1][1];
  (this_ptr->transform_state).saved_source_matrix.m[1][2] = (this_ptr->source_matrix).m[1][2];
  (this_ptr->transform_state).saved_source_matrix.m[2][0] = (this_ptr->source_matrix).m[2][0];
  (this_ptr->transform_state).saved_source_matrix.m[2][1] = (this_ptr->source_matrix).m[2][1];
  (this_ptr->transform_state).saved_source_matrix.m[2][2] = (this_ptr->source_matrix).m[2][2];
  pCVar1 = &(this_ptr->base).position;
  local_1c.x = new_position->x - (float)pCVar1->x;
  local_1c.y = new_position->y - (float)(this_ptr->base).position.y;
  local_1c.z = new_position->z - (float)(this_ptr->base).position.z;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     (rotation_matrix,&local_10,&local_1c);
  fVar6 = extraout_EDX;
  if ((CVector3f *)pCVar1 != pCVar3) {
    pCVar1->x = (int)pCVar3->x;
    (this_ptr->base).position.y = (int)pCVar3->y;
    fVar6 = pCVar3->z;
    (this_ptr->base).position.z = (int)fVar6;
  }
  (this_ptr->camera_origin).x =
       (int)ROUND((float)(this_ptr->base).position.x * g_CameraFixedPointScale);
  (this_ptr->camera_origin).y =
       (int)ROUND((float)(this_ptr->base).position.y * g_CameraFixedPointScale);
  (this_ptr->camera_origin).z =
       (int)ROUND((float)(this_ptr->base).position.z * g_CameraFixedPointScale);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0][2] *
          (float10)transform_matrix->m[2].x +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[0][0] *
          (float10)transform_matrix->m[0].x +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[0][1] *
          (float10)transform_matrix->m[1].x;
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0][0];
  local_1c.x = 6.331086e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(fVar6,transform_matrix));
  iVar4 = SUB84(dVar9,0);
  (this_ptr->source_matrix).m[0][0] = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0][2] *
          (float10)*(float *)(iVar4 + 0x1c) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[0][1] *
          (float10)*(float *)(iVar4 + 0x10) + fVar7 * (float10)*(float *)(iVar4 + 4);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0][0];
  local_1c.y = 6.331148e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84(dVar9,0);
  (this_ptr->source_matrix).m[0][1] = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0][2] *
          (float10)*(float *)(iVar4 + 0x20) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[0][1] *
          (float10)*(float *)(iVar4 + 0x14) + fVar7 * (float10)*(float *)(iVar4 + 8);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1][1];
  local_1c.z = 6.33121e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  pfVar5 = SUB84(dVar9,0);
  (this_ptr->source_matrix).m[0][2] = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1][2] * (float10)pfVar5[6] +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[1][0] * (float10)*pfVar5 +
          fVar7 * (float10)pfVar5[3];
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1][0];
  local_10.x = 6.33127e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84(dVar9,0);
  (this_ptr->source_matrix).m[1][0] = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1][2] *
          (float10)*(float *)(iVar4 + 0x1c) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[1][1] *
          (float10)*(float *)(iVar4 + 0x10) + fVar7 * (float10)*(float *)(iVar4 + 4);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1][0];
  local_10.y = 6.331331e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84(dVar9,0);
  (this_ptr->source_matrix).m[1][1] = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1][2] *
          (float10)*(float *)(iVar4 + 0x20) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[1][1] *
          (float10)*(float *)(iVar4 + 0x14) + fVar7 * (float10)*(float *)(iVar4 + 8);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2][1];
  local_10.z = 6.331393e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  pfVar5 = SUB84(dVar9,0);
  (this_ptr->source_matrix).m[1][2] = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2][2] * (float10)pfVar5[6] +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[2][0] * (float10)*pfVar5 +
          fVar7 * (float10)pfVar5[3];
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2][0];
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84(dVar9,0);
  (this_ptr->source_matrix).m[2][0] = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2][2] *
          (float10)*(float *)(iVar4 + 0x1c) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[2][1] *
          (float10)*(float *)(iVar4 + 0x10) + fVar7 * (float10)*(float *)(iVar4 + 4);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2][0];
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84(dVar9,0);
  (this_ptr->source_matrix).m[2][1] = (int)ROUND(fVar8);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2][2] *
          (float10)*(float *)(iVar4 + 0x20) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[2][1] *
          (float10)*(float *)(iVar4 + 0x14) + fVar7 * (float10)*(float *)(iVar4 + 8);
  crt_math_c_round_FUN_005fe6b0(dVar9);
  (this_ptr->source_matrix).m[2][2] = (int)ROUND(fVar7);
  return;
}


// Assembly code:
// 0044ef30: PUSH EBP
//   Label: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30
// 0044ef31: SUB ESP,0x18
// 0044ef34: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0044ef38: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0044ef3c: PUSH EDI
// 0044ef3d: PUSH ESI
// 0044ef3e: PUSH EBX
// 0044ef3f: LEA EAX,[EBP + 0x1498]
// 0044ef45: LEA EDI,[EBP + 0x148c]
// 0044ef4b: LEA ESI,[EBP + 0x16c]
// 0044ef51: LEA EBX,[EBP + 0x4]
// 0044ef54: MOVSD ES:EDI,ESI
// 0044ef55: MOVSD ES:EDI,ESI
// 0044ef56: MOVSD ES:EDI,ESI
// 0044ef57: CMP EAX,EBX
// 0044ef59: JZ 0x0044ef6b
//   XREF to: 0044ef6b (CONDITIONAL_JUMP)
// 0044ef5b: MOV ECX,dword ptr [EBX]
// 0044ef5d: MOV dword ptr [EAX],ECX
// 0044ef5f: MOV ECX,dword ptr [EBX + 0x4]
// 0044ef62: MOV dword ptr [EAX + 0x4],ECX
// 0044ef65: MOV ECX,dword ptr [EBX + 0x8]
// 0044ef68: MOV dword ptr [EAX + 0x8],ECX
// 0044ef6b: MOV EAX,dword ptr [EBP + 0x178]
//   Label: LAB_0044ef6b
// 0044ef71: MOV dword ptr [EBP + 0x14a4],EAX
// 0044ef77: MOV EAX,dword ptr [EBP + 0x17c]
// 0044ef7d: MOV dword ptr [EBP + 0x14a8],EAX
// 0044ef83: MOV EAX,dword ptr [EBP + 0x180]
// 0044ef89: MOV dword ptr [EBP + 0x14ac],EAX
// 0044ef8f: MOV EAX,dword ptr [EBP + 0x184]
// 0044ef95: MOV dword ptr [EBP + 0x14b0],EAX
// 0044ef9b: MOV EAX,dword ptr [EBP + 0x188]
// 0044efa1: MOV dword ptr [EBP + 0x14b4],EAX
// 0044efa7: MOV EAX,dword ptr [EBP + 0x18c]
// 0044efad: MOV dword ptr [EBP + 0x14b8],EAX
// 0044efb3: MOV EAX,dword ptr [EBP + 0x190]
// 0044efb9: MOV dword ptr [EBP + 0x14bc],EAX
// 0044efbf: MOV EAX,dword ptr [EBP + 0x194]
// 0044efc5: MOV dword ptr [EBP + 0x14c0],EAX
// 0044efcb: MOV EAX,dword ptr [EBP + 0x198]
// 0044efd1: MOV dword ptr [EBP + 0x14c4],EAX
// 0044efd7: LEA EBX,[EBP + 0x4]
// 0044efda: FLD float ptr [EDX]
// 0044efdc: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0044efe0: FSUB float ptr [EBX]
// 0044efe2: PUSH EAX
// 0044efe3: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (WRITE)
// 0044efe7: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x10] (DATA)
// 0044efeb: FLD float ptr [EDX + 0x4]
// 0044efee: FSUB float ptr [EBX + 0x4]
// 0044eff1: PUSH EAX
// 0044eff2: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 0044eff6: FLD float ptr [EDX + 0x8]
// 0044eff9: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0xc] (READ)
// 0044effd: FSUB float ptr [EBX + 0x8]
// 0044f000: PUSH EDX
// 0044f001: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (WRITE)
// 0044f005: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0044f00a: ADD ESP,0xc
// 0044f00d: CMP EBX,EAX
// 0044f00f: JZ 0x0044f021
//   XREF to: 0044f021 (CONDITIONAL_JUMP)
// 0044f011: MOV EDX,dword ptr [EAX]
// 0044f013: MOV dword ptr [EBX],EDX
// 0044f015: MOV EDX,dword ptr [EAX + 0x4]
// 0044f018: MOV dword ptr [EBX + 0x4],EDX
// 0044f01b: MOV EDX,dword ptr [EAX + 0x8]
// 0044f01e: MOV dword ptr [EBX + 0x8],EDX
// 0044f021: LEA EAX,[EBP + 0x4]
//   Label: LAB_0044f021
// 0044f024: LEA EBX,[EBP + 0x16c]
// 0044f02a: FLD float ptr [EAX]
// 0044f02c: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0044f032: FISTP dword ptr [EBX]
// 0044f034: FLD float ptr [EAX + 0x4]
// 0044f037: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0044f03d: FISTP dword ptr [EBX + 0x4]
// 0044f040: FLD float ptr [EAX + 0x8]
// 0044f043: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0044f049: FISTP dword ptr [EBX + 0x8]
// 0044f04c: POP EBX
// 0044f04d: POP ESI
// 0044f04e: POP EDI
// 0044f04f: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0044f053: FILD dword ptr [EBP + 0x14a8]
// 0044f059: FMUL float ptr [EAX + 0xc]
// 0044f05c: FILD dword ptr [EBP + 0x14a4]
// 0044f062: FMUL float ptr [EAX]
// 0044f064: FADDP
// 0044f066: FILD dword ptr [EBP + 0x14ac]
// 0044f06c: FMUL float ptr [EAX + 0x18]
// 0044f06f: FADDP
// 0044f071: FILD dword ptr [EBP + 0x14a4]
// 0044f077: FXCH
// 0044f079: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044f07e: FISTP dword ptr [EBP + 0x178]
// 0044f084: FMUL float ptr [EAX + 0x4]
// 0044f087: FILD dword ptr [EBP + 0x14a8]
// 0044f08d: FMUL float ptr [EAX + 0x10]
// 0044f090: FADDP
// 0044f092: FILD dword ptr [EBP + 0x14ac]
// 0044f098: FMUL float ptr [EAX + 0x1c]
// 0044f09b: FADDP
// 0044f09d: FILD dword ptr [EBP + 0x14a4]
// 0044f0a3: FXCH
// 0044f0a5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044f0aa: FISTP dword ptr [EBP + 0x17c]
// 0044f0b0: FMUL float ptr [EAX + 0x8]
// 0044f0b3: FILD dword ptr [EBP + 0x14a8]
// 0044f0b9: FMUL float ptr [EAX + 0x14]
// 0044f0bc: FADDP
// 0044f0be: FILD dword ptr [EBP + 0x14ac]
// 0044f0c4: FMUL float ptr [EAX + 0x20]
// 0044f0c7: FADDP
// 0044f0c9: FILD dword ptr [EBP + 0x14b4]
// 0044f0cf: FXCH
// 0044f0d1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044f0d6: FISTP dword ptr [EBP + 0x180]
// 0044f0dc: FMUL float ptr [EAX + 0xc]
// 0044f0df: FILD dword ptr [EBP + 0x14b0]
// 0044f0e5: FMUL float ptr [EAX]
// 0044f0e7: FADDP
// 0044f0e9: FILD dword ptr [EBP + 0x14b8]
// 0044f0ef: FMUL float ptr [EAX + 0x18]
// 0044f0f2: FADDP
// 0044f0f4: FILD dword ptr [EBP + 0x14b0]
// 0044f0fa: FXCH
// 0044f0fc: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044f101: FISTP dword ptr [EBP + 0x184]
// 0044f107: FMUL float ptr [EAX + 0x4]
// 0044f10a: FILD dword ptr [EBP + 0x14b4]
// 0044f110: FMUL float ptr [EAX + 0x10]
// 0044f113: FADDP
// 0044f115: FILD dword ptr [EBP + 0x14b8]
// 0044f11b: FMUL float ptr [EAX + 0x1c]
// 0044f11e: FADDP
// 0044f120: FILD dword ptr [EBP + 0x14b0]
// 0044f126: FXCH
// 0044f128: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044f12d: FISTP dword ptr [EBP + 0x188]
// 0044f133: FMUL float ptr [EAX + 0x8]
// 0044f136: FILD dword ptr [EBP + 0x14b4]
// 0044f13c: FMUL float ptr [EAX + 0x14]
// 0044f13f: FADDP
// 0044f141: FILD dword ptr [EBP + 0x14b8]
// 0044f147: FMUL float ptr [EAX + 0x20]
// 0044f14a: FADDP
// 0044f14c: FILD dword ptr [EBP + 0x14c0]
// 0044f152: FXCH
// 0044f154: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044f159: FISTP dword ptr [EBP + 0x18c]
// 0044f15f: FMUL float ptr [EAX + 0xc]
// 0044f162: FILD dword ptr [EBP + 0x14bc]
// 0044f168: FMUL float ptr [EAX]
// 0044f16a: FADDP
// 0044f16c: FILD dword ptr [EBP + 0x14c4]
// 0044f172: FMUL float ptr [EAX + 0x18]
// 0044f175: FADDP
// 0044f177: FILD dword ptr [EBP + 0x14bc]
// 0044f17d: FXCH
// 0044f17f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044f184: FISTP dword ptr [EBP + 0x190]
// 0044f18a: FMUL float ptr [EAX + 0x4]
// 0044f18d: FILD dword ptr [EBP + 0x14c0]
// 0044f193: FMUL float ptr [EAX + 0x10]
// 0044f196: FADDP
// 0044f198: FILD dword ptr [EBP + 0x14c4]
// 0044f19e: FMUL float ptr [EAX + 0x1c]
// 0044f1a1: FADDP
// 0044f1a3: FILD dword ptr [EBP + 0x14bc]
// 0044f1a9: FXCH
// 0044f1ab: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044f1b0: FISTP dword ptr [EBP + 0x194]
// 0044f1b6: FMUL float ptr [EAX + 0x8]
// 0044f1b9: FILD dword ptr [EBP + 0x14c0]
// 0044f1bf: FMUL float ptr [EAX + 0x14]
// 0044f1c2: FADDP
// 0044f1c4: FILD dword ptr [EBP + 0x14c4]
// 0044f1ca: FMUL float ptr [EAX + 0x20]
// 0044f1cd: FADDP
// 0044f1cf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044f1d4: FISTP dword ptr [EBP + 0x198]
// 0044f1da: ADD ESP,0x18
// 0044f1dd: POP EBP
// 0044f1de: RET
