// Name: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30
// Address: 0044ef30
// Address Range: [[0044ef30, 0044f1de]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30(CDemonCamera * this_ptr, CVector3f * new_position, CMatrix3x3f * rotation_matrix, CMatrix3x3f * transform_matrix)

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
  (this_ptr->transform_state).saved_source_matrix.m[0].x = (this_ptr->source_matrix).m[0].x;
  (this_ptr->transform_state).saved_source_matrix.m[0].y = (this_ptr->source_matrix).m[0].y;
  (this_ptr->transform_state).saved_source_matrix.m[0].z = (this_ptr->source_matrix).m[0].z;
  (this_ptr->transform_state).saved_source_matrix.m[1].x = (this_ptr->source_matrix).m[1].x;
  (this_ptr->transform_state).saved_source_matrix.m[1].y = (this_ptr->source_matrix).m[1].y;
  (this_ptr->transform_state).saved_source_matrix.m[1].z = (this_ptr->source_matrix).m[1].z;
  (this_ptr->transform_state).saved_source_matrix.m[2].x = (this_ptr->source_matrix).m[2].x;
  (this_ptr->transform_state).saved_source_matrix.m[2].y = (this_ptr->source_matrix).m[2].y;
  (this_ptr->transform_state).saved_source_matrix.m[2].z = (this_ptr->source_matrix).m[2].z;
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
       (int)ROUND((float)(this_ptr->base).position.x * 256f);
  (this_ptr->camera_origin).y =
       (int)ROUND((float)(this_ptr->base).position.y * 256f);
  (this_ptr->camera_origin).z =
       (int)ROUND((float)(this_ptr->base).position.z * 256f);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0].z *
          (float10)transform_matrix->m[2].x +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[0].x *
          (float10)transform_matrix->m[0].x +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[0].y *
          (float10)transform_matrix->m[1].x;
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0].x;
  local_1c.x = 6.331086e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(fVar6,transform_matrix));
  iVar4 = SUB84 /* extract 2-byte value */(dVar9,0);
  (this_ptr->source_matrix).m[0].x = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0].z *
          (float10)*(float *)(iVar4 + 0x1c) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[0].y *
          (float10)*(float *)(iVar4 + 0x10) + fVar7 * (float10)*(float *)(iVar4 + 4);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0].x;
  local_1c.y = 6.331148e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84 /* extract 2-byte value */(dVar9,0);
  (this_ptr->source_matrix).m[0].y = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0].z *
          (float10)*(float *)(iVar4 + 0x20) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[0].y *
          (float10)*(float *)(iVar4 + 0x14) + fVar7 * (float10)*(float *)(iVar4 + 8);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1].y;
  local_1c.z = 6.33121e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  pfVar5 = SUB84 /* extract 2-byte value */(dVar9,0);
  (this_ptr->source_matrix).m[0].z = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1].z * (float10)pfVar5[6] +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[1].x * (float10)*pfVar5 +
          fVar7 * (float10)pfVar5[3];
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1].x;
  local_10.x = 6.33127e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84 /* extract 2-byte value */(dVar9,0);
  (this_ptr->source_matrix).m[1].x = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1].z *
          (float10)*(float *)(iVar4 + 0x1c) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[1].y *
          (float10)*(float *)(iVar4 + 0x10) + fVar7 * (float10)*(float *)(iVar4 + 4);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1].x;
  local_10.y = 6.331331e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84 /* extract 2-byte value */(dVar9,0);
  (this_ptr->source_matrix).m[1].y = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1].z *
          (float10)*(float *)(iVar4 + 0x20) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[1].y *
          (float10)*(float *)(iVar4 + 0x14) + fVar7 * (float10)*(float *)(iVar4 + 8);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2].y;
  local_10.z = 6.331393e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  pfVar5 = SUB84 /* extract 2-byte value */(dVar9,0);
  (this_ptr->source_matrix).m[1].z = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2].z * (float10)pfVar5[6] +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[2].x * (float10)*pfVar5 +
          fVar7 * (float10)pfVar5[3];
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2].x;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84 /* extract 2-byte value */(dVar9,0);
  (this_ptr->source_matrix).m[2].x = (int)ROUND(fVar8);
  fVar8 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2].z *
          (float10)*(float *)(iVar4 + 0x1c) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[2].y *
          (float10)*(float *)(iVar4 + 0x10) + fVar7 * (float10)*(float *)(iVar4 + 4);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2].x;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  iVar4 = SUB84 /* extract 2-byte value */(dVar9,0);
  (this_ptr->source_matrix).m[2].y = (int)ROUND(fVar8);
  fVar7 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2].z *
          (float10)*(float *)(iVar4 + 0x20) +
          (float10)(this_ptr->transform_state).saved_source_matrix.m[2].y *
          (float10)*(float *)(iVar4 + 0x14) + fVar7 * (float10)*(float *)(iVar4 + 8);
  crt_math_c_round_FUN_005fe6b0(dVar9);
  (this_ptr->source_matrix).m[2].z = (int)ROUND(fVar7);
  return;
}
