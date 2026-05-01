// Name: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30
// Address: 0044ef30
// MANUAL RECONSTRUCTION
// Address Range: [[0044ef30, 0044f1de]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)

{
  UVector3 *pUVar2;
  int iVar5;
  int iVar6;
  CVector3f *pCVar5;
  CVector3f local_1c;
  CVector3f local_10;
  UVector3 *pUVar1;
  CVector3i *pCVar2;
  int iVar3;
  int iVar4;
  
  pCVar2 = &(this_ptr->transform_state).saved_camera_position;
  pUVar1 = &(this_ptr->base).position;
  (this_ptr->transform_state).saved_camera_origin.x = (this_ptr->camera_origin).x;
  (this_ptr->transform_state).saved_camera_origin.y = (this_ptr->camera_origin).y;
  (this_ptr->transform_state).saved_camera_origin.z = (this_ptr->camera_origin).z;
  if (pCVar2 != (CVector3i *)pUVar1) {
    pCVar2->x = (int)(pUVar1->f).x;
    (this_ptr->transform_state).saved_camera_position.y = (int)(this_ptr->base).position.f.y;
    (this_ptr->transform_state).saved_camera_position.z = (int)(this_ptr->base).position.f.z;
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
  pUVar2 = &(this_ptr->base).position;
  local_1c.x = new_position->x - (pUVar2->f).x;
  local_1c.y = new_position->y - (this_ptr->base).position.f.y;
  local_1c.z = new_position->z - (this_ptr->base).position.f.z;
  pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     (rotation_matrix,&local_10,&local_1c);
  if ((CVector3f *)pUVar2 != pCVar5) {
    (pUVar2->f).x = pCVar5->x;
    (this_ptr->base).position.f.y = pCVar5->y;
    (this_ptr->base).position.f.z = pCVar5->z;
  }
  (this_ptr->camera_origin).x =
       (int)ROUND((this_ptr->base).position.f.x * 256.0f);
  (this_ptr->camera_origin).y =
       (int)ROUND((this_ptr->base).position.f.y * 256.0f);
  (this_ptr->camera_origin).z =
       (int)ROUND((this_ptr->base).position.f.z * 256.0f);
  iVar3 = (this_ptr->transform_state).saved_source_matrix.m[0].x;
  (this_ptr->source_matrix).m[0].x =
       (int)ROUND(ROUND((float)(this_ptr->transform_state).saved_source_matrix.m[0].z *
                        rotation_matrix->m[2].x +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[0].x *
                        rotation_matrix->m[0].x +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[0].y *
                        rotation_matrix->m[1].x));
  iVar4 = (this_ptr->transform_state).saved_source_matrix.m[0].x;
  (this_ptr->source_matrix).m[0].y =
       (int)ROUND(ROUND((float)(this_ptr->transform_state).saved_source_matrix.m[0].z *
                        rotation_matrix->m[2].y +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[0].y *
                        rotation_matrix->m[1].y + (float)iVar3 * rotation_matrix->m[0].y));
  iVar5 = (this_ptr->transform_state).saved_source_matrix.m[1].y;
  (this_ptr->source_matrix).m[0].z =
       (int)ROUND(ROUND((float)(this_ptr->transform_state).saved_source_matrix.m[0].z *
                        rotation_matrix->m[2].z +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[0].y *
                        rotation_matrix->m[1].z + (float)iVar4 * rotation_matrix->m[0].z));
  iVar6 = (this_ptr->transform_state).saved_source_matrix.m[1].x;
  (this_ptr->source_matrix).m[1].x =
       (int)ROUND(ROUND((float)(this_ptr->transform_state).saved_source_matrix.m[1].z *
                        rotation_matrix->m[2].x +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[1].x *
                        rotation_matrix->m[0].x + (float)iVar5 * rotation_matrix->m[1].x));
  iVar5 = (this_ptr->transform_state).saved_source_matrix.m[1].x;
  (this_ptr->source_matrix).m[1].y =
       (int)ROUND(ROUND((float)(this_ptr->transform_state).saved_source_matrix.m[1].z *
                        rotation_matrix->m[2].y +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[1].y *
                        rotation_matrix->m[1].y + (float)iVar6 * rotation_matrix->m[0].y));
  iVar6 = (this_ptr->transform_state).saved_source_matrix.m[2].y;
  (this_ptr->source_matrix).m[1].z =
       (int)ROUND(ROUND((float)(this_ptr->transform_state).saved_source_matrix.m[1].z *
                        rotation_matrix->m[2].z +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[1].y *
                        rotation_matrix->m[1].z + (float)iVar5 * rotation_matrix->m[0].z));
  iVar5 = (this_ptr->transform_state).saved_source_matrix.m[2].x;
  (this_ptr->source_matrix).m[2].x =
       (int)ROUND(ROUND((float)(this_ptr->transform_state).saved_source_matrix.m[2].z *
                        rotation_matrix->m[2].x +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[2].x *
                        rotation_matrix->m[0].x + (float)iVar6 * rotation_matrix->m[1].x));
  iVar6 = (this_ptr->transform_state).saved_source_matrix.m[2].x;
  (this_ptr->source_matrix).m[2].y =
       (int)ROUND(ROUND((float)(this_ptr->transform_state).saved_source_matrix.m[2].z *
                        rotation_matrix->m[2].y +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[2].y *
                        rotation_matrix->m[1].y + (float)iVar5 * rotation_matrix->m[0].y));
  (this_ptr->source_matrix).m[2].z =
       (int)ROUND(ROUND((float)(this_ptr->transform_state).saved_source_matrix.m[2].z *
                        rotation_matrix->m[2].z +
                        (float)(this_ptr->transform_state).saved_source_matrix.m[2].y *
                        rotation_matrix->m[1].z + (float)iVar6 * rotation_matrix->m[0].z));
  return;
}
