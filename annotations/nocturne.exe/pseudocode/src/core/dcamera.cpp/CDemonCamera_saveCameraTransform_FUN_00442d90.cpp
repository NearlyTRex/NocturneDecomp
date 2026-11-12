// Name: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_00442d90
// Address: 00442d90
// Address Range: [[00442d90, 00443047]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_00442d90(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_00442d90(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)

{
  UVector3 *pUVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  CVector3f *pCVar5;
  double dVar6;
  CVector3f CStack_1c;
  CVector3f CStack_10;
  
  pUVar1 = &(this_ptr->transform_state).saved_camera_position;
  (this_ptr->transform_state).saved_camera_origin.x = (this_ptr->camera_origin).x;
  (this_ptr->transform_state).saved_camera_origin.y = (this_ptr->camera_origin).y;
  (this_ptr->transform_state).saved_camera_origin.z = (this_ptr->camera_origin).z;
  if ((CVector3f *)pUVar1 != &this_ptr->position) {
    (pUVar1->f).x = (this_ptr->position).x;
    (this_ptr->transform_state).saved_camera_position.f.y = (this_ptr->position).y;
    (this_ptr->transform_state).saved_camera_position.f.z = (this_ptr->position).z;
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
  pCVar2 = &this_ptr->position;
  CStack_1c.x = new_position->x - pCVar2->x;
  CStack_1c.y = new_position->y - (this_ptr->position).y;
  CStack_1c.z = new_position->z - (this_ptr->position).z;
  pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                     (rotation_matrix,&CStack_10,&CStack_1c);
  if (pCVar2 != pCVar5) {
    pCVar2->x = pCVar5->x;
    (this_ptr->position).y = pCVar5->y;
    (this_ptr->position).z = pCVar5->z;
  }
  (this_ptr->camera_origin).x = (int)ROUND((this_ptr->position).x * 256.0f);
  (this_ptr->camera_origin).y = (int)ROUND((this_ptr->position).y * 256.0f);
  (this_ptr->camera_origin).z = (int)ROUND((this_ptr->position).z * 256.0f);
  iVar3 = (this_ptr->transform_state).saved_source_matrix.m[0].x;
  dVar6 = round
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[0].z *
                              rotation_matrix->m[2].x +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[0].x *
                             rotation_matrix->m[0].x +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[0].y *
                             rotation_matrix->m[1].x));
  (this_ptr->source_matrix).m[0].x = (int)ROUND(dVar6);
  iVar4 = (this_ptr->transform_state).saved_source_matrix.m[0].x;
  dVar6 = round
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[0].z *
                              rotation_matrix->m[2].y +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[0].y *
                             rotation_matrix->m[1].y + (float)iVar3 * rotation_matrix->m[0].y));
  (this_ptr->source_matrix).m[0].y = (int)ROUND(dVar6);
  iVar3 = (this_ptr->transform_state).saved_source_matrix.m[1].y;
  dVar6 = round
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[0].z *
                              rotation_matrix->m[2].z +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[0].y *
                             rotation_matrix->m[1].z + (float)iVar4 * rotation_matrix->m[0].z));
  (this_ptr->source_matrix).m[0].z = (int)ROUND(dVar6);
  iVar4 = (this_ptr->transform_state).saved_source_matrix.m[1].x;
  dVar6 = round
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[1].z *
                              rotation_matrix->m[2].x +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[1].x *
                             rotation_matrix->m[0].x + (float)iVar3 * rotation_matrix->m[1].x));
  (this_ptr->source_matrix).m[1].x = (int)ROUND(dVar6);
  iVar3 = (this_ptr->transform_state).saved_source_matrix.m[1].x;
  dVar6 = round
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[1].z *
                              rotation_matrix->m[2].y +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[1].y *
                             rotation_matrix->m[1].y + (float)iVar4 * rotation_matrix->m[0].y));
  (this_ptr->source_matrix).m[1].y = (int)ROUND(dVar6);
  iVar4 = (this_ptr->transform_state).saved_source_matrix.m[2].y;
  dVar6 = round
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[1].z *
                              rotation_matrix->m[2].z +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[1].y *
                             rotation_matrix->m[1].z + (float)iVar3 * rotation_matrix->m[0].z));
  (this_ptr->source_matrix).m[1].z = (int)ROUND(dVar6);
  iVar3 = (this_ptr->transform_state).saved_source_matrix.m[2].x;
  dVar6 = round
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[2].z *
                              rotation_matrix->m[2].x +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[2].x *
                             rotation_matrix->m[0].x + (float)iVar4 * rotation_matrix->m[1].x));
  (this_ptr->source_matrix).m[2].x = (int)ROUND(dVar6);
  iVar4 = (this_ptr->transform_state).saved_source_matrix.m[2].x;
  dVar6 = round
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[2].z *
                              rotation_matrix->m[2].y +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[2].y *
                             rotation_matrix->m[1].y + (float)iVar3 * rotation_matrix->m[0].y));
  (this_ptr->source_matrix).m[2].y = (int)ROUND(dVar6);
  dVar6 = round
                    ((double)((float)(this_ptr->transform_state).saved_source_matrix.m[2].z *
                              rotation_matrix->m[2].z +
                             (float)(this_ptr->transform_state).saved_source_matrix.m[2].y *
                             rotation_matrix->m[1].z + (float)iVar4 * rotation_matrix->m[0].z));
  (this_ptr->source_matrix).m[2].z = (int)ROUND(dVar6);
  return;
}
