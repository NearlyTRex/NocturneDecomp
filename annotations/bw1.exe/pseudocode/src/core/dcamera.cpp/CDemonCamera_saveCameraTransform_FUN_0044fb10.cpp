// Name: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044fb10
// Address: 0044fb10
// Address Range: [[0044fb10, 0044fde1]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_0044fb10(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_0044fb10(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)

{
  UVector3 *pUVar1;
  UVector3 *pUVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  double dVar6;
  float afStackY_1010 [1010];
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  CVector3f CStack_10;
  
  bVar5 = 0;
  pUVar2 = &(this_ptr->transform_state).saved_camera_position;
  pUVar1 = &(this_ptr->base).position;
  (this_ptr->transform_state).saved_camera_origin.x = (this_ptr->camera_origin).x;
  (this_ptr->transform_state).saved_camera_origin.y = (this_ptr->camera_origin).y;
  (this_ptr->transform_state).saved_camera_origin.z = (this_ptr->camera_origin).z;
  if (pUVar2 != pUVar1) {
    (pUVar2->f).x = (pUVar1->f).x;
    (this_ptr->transform_state).saved_camera_position.f.y = (this_ptr->base).position.f.y;
    (this_ptr->transform_state).saved_camera_position.f.z = (this_ptr->base).position.f.z;
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
  pUVar1 = &(this_ptr->base).position;
  CStack_34.x = new_position->x - (pUVar1->f).x;
  CStack_34.y = new_position->y - (this_ptr->base).position.f.y;
  CStack_34.z = new_position->z - (this_ptr->base).position.f.z;
  afStack_24[2] = CStack_34.x;
  afStack_24[3] = CStack_34.y;
  fStack_14 = CStack_34.z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
            (rotation_matrix,&CStack_34,&CStack_10);
  fStack_28 = CStack_10.x;
  afStack_24[(uint)bVar5 * -2] = *(float *)((int)&CStack_10 + (uint)bVar5 * -8 + 4);
  afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_10 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (pUVar1 != (UVector3 *)&fStack_28) {
    (pUVar1->f).x = fStack_28;
    (this_ptr->base).position.f.y = afStack_24[0];
    (this_ptr->base).position.f.z = afStack_24[1];
  }
  (this_ptr->camera_origin).x = (int)ROUND((this_ptr->base).position.f.x * 256.0f);
  (this_ptr->camera_origin).y = (int)ROUND((this_ptr->base).position.f.y * 256.0f);
  (this_ptr->camera_origin).z = (int)ROUND((this_ptr->base).position.f.z * 256.0f);
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
