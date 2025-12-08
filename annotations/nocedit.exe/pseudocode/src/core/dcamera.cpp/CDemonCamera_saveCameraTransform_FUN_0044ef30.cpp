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
  int extraout_EAX;
  int extraout_EAX_00;
  float *extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  float *extraout_EAX_04;
  int extraout_EAX_05;
  int extraout_EAX_06;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
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
  if ((CVector3f *)pCVar1 != pCVar3) {
    pCVar1->x = (int)pCVar3->x;
    (this_ptr->base).position.y = (int)pCVar3->y;
    (this_ptr->base).position.z = (int)pCVar3->z;
  }
  (this_ptr->camera_origin).x =
       (int)ROUND((float)(this_ptr->base).position.x * 256f);
  (this_ptr->camera_origin).y =
       (int)ROUND((float)(this_ptr->base).position.y * 256f);
  (this_ptr->camera_origin).z =
       (int)ROUND((float)(this_ptr->base).position.z * 256f);
  fVar4 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0].x;
  local_1c.x = 6.331086e-39;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[0].z *
                              transform_matrix->m[2].x +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[0].x *
                             transform_matrix->m[0].x +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[0].y *
                             transform_matrix->m[1].x));
  (this_ptr->source_matrix).m[0].x = (int)ROUND(dVar6);
  fVar5 = (float10)(this_ptr->transform_state).saved_source_matrix.m[0].x;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)(this_ptr->transform_state).saved_source_matrix.m[0].z *
                              (float10)*(float *)(extraout_EAX + 0x1c) +
                             (float10)(this_ptr->transform_state).saved_source_matrix.m[0].y *
                             (float10)*(float *)(extraout_EAX + 0x10) +
                             fVar4 * (float10)*(float *)(extraout_EAX + 4)));
  (this_ptr->source_matrix).m[0].y = (int)ROUND(dVar6);
  fVar4 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1].y;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)(this_ptr->transform_state).saved_source_matrix.m[0].z *
                              (float10)*(float *)(extraout_EAX_00 + 0x20) +
                             (float10)(this_ptr->transform_state).saved_source_matrix.m[0].y *
                             (float10)*(float *)(extraout_EAX_00 + 0x14) +
                             fVar5 * (float10)*(float *)(extraout_EAX_00 + 8)));
  (this_ptr->source_matrix).m[0].z = (int)ROUND(dVar6);
  fVar5 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1].x;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)(this_ptr->transform_state).saved_source_matrix.m[1].z *
                              (float10)extraout_EAX_01[6] +
                             (float10)(this_ptr->transform_state).saved_source_matrix.m[1].x *
                             (float10)*extraout_EAX_01 + fVar4 * (float10)extraout_EAX_01[3]));
  (this_ptr->source_matrix).m[1].x = (int)ROUND(dVar6);
  fVar4 = (float10)(this_ptr->transform_state).saved_source_matrix.m[1].x;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)(this_ptr->transform_state).saved_source_matrix.m[1].z *
                              (float10)*(float *)(extraout_EAX_02 + 0x1c) +
                             (float10)(this_ptr->transform_state).saved_source_matrix.m[1].y *
                             (float10)*(float *)(extraout_EAX_02 + 0x10) +
                             fVar5 * (float10)*(float *)(extraout_EAX_02 + 4)));
  (this_ptr->source_matrix).m[1].y = (int)ROUND(dVar6);
  fVar5 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2].y;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)(this_ptr->transform_state).saved_source_matrix.m[1].z *
                              (float10)*(float *)(extraout_EAX_03 + 0x20) +
                             (float10)(this_ptr->transform_state).saved_source_matrix.m[1].y *
                             (float10)*(float *)(extraout_EAX_03 + 0x14) +
                             fVar4 * (float10)*(float *)(extraout_EAX_03 + 8)));
  (this_ptr->source_matrix).m[1].z = (int)ROUND(dVar6);
  fVar4 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2].x;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)(this_ptr->transform_state).saved_source_matrix.m[2].z *
                              (float10)extraout_EAX_04[6] +
                             (float10)(this_ptr->transform_state).saved_source_matrix.m[2].x *
                             (float10)*extraout_EAX_04 + fVar5 * (float10)extraout_EAX_04[3]));
  (this_ptr->source_matrix).m[2].x = (int)ROUND(dVar6);
  fVar5 = (float10)(this_ptr->transform_state).saved_source_matrix.m[2].x;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)(this_ptr->transform_state).saved_source_matrix.m[2].z *
                              (float10)*(float *)(extraout_EAX_05 + 0x1c) +
                             (float10)(this_ptr->transform_state).saved_source_matrix.m[2].y *
                             (float10)*(float *)(extraout_EAX_05 + 0x10) +
                             fVar4 * (float10)*(float *)(extraout_EAX_05 + 4)));
  (this_ptr->source_matrix).m[2].y = (int)ROUND(dVar6);
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)(this_ptr->transform_state).saved_source_matrix.m[2].z *
                              (float10)*(float *)(extraout_EAX_06 + 0x20) +
                             (float10)(this_ptr->transform_state).saved_source_matrix.m[2].y *
                             (float10)*(float *)(extraout_EAX_06 + 0x14) +
                             fVar5 * (float10)*(float *)(extraout_EAX_06 + 8)));
  (this_ptr->source_matrix).m[2].z = (int)ROUND(dVar6);
  return;
}
