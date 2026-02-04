// Name: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330
// Address: 00509330
// Address Range: [[00509330, 0050971c]]
// Convention: __cdecl
// Signature: float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330 (CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *out_normal)

#include "nocturne.h"

float __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330
          (CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_normal)

{
  char *this_ptr_00;
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  char *pcVar4;
  CDemonTriangle *triangle;
  CBoundingBox3D local_cc;
  CVector3f local_b4;
  CVector3f local_a8;
  CVector3f local_9c;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  char *local_30;
  int *local_2c;
  char *local_28;
  char *local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->panel_model);
  local_cc.min.x = (pCVar1->bounds_min).x;
  local_cc.min.y = (pCVar1->bounds_min).y;
  local_cc.min.z = (pCVar1->bounds_min).z;
  local_cc.max.x = (pCVar1->bounds_max).x;
  local_cc.max.y = (pCVar1->bounds_max).y;
  local_cc.max.z = (pCVar1->bounds_max).z;
  local_28 = this_ptr->unk3 + 0x458;
  local_1c = 1.01;
  local_2c = &this_ptr->exists;
  local_20 = 0;
  do {
    if (*local_2c != 0) {
      local_b4.x = ray_origin->x - (float)local_2c[3];
      local_b4.y = ray_origin->y - (float)local_2c[4];
      local_b4.z = ray_origin->z - (float)local_2c[5];
      pcVar4 = (char *)(local_2c + 9);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                ((CMatrix3x3f *)pcVar4,&local_6c,&local_b4);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                ((CMatrix3x3f *)pcVar4,&local_3c,ray_direction);
      local_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                           (&local_cc,&local_6c,&local_3c,&local_a8);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           ((CMatrix3x3f *)pcVar4,&local_90,&local_a8);
        if (out_normal != pCVar2) {
          out_normal->x = pCVar2->x;
          out_normal->y = pCVar2->y;
          out_normal->z = pCVar2->z;
        }
      }
    }
    local_30 = local_28 + local_20;
    iVar3 = 0;
    do {
      triangle = (CDemonTriangle *)(local_30 + iVar3 + 0x3c);
      local_18 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                           (triangle,ray_origin,ray_direction);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_48.x = -(triangle->normal).x;
        local_48.y = -(triangle->normal).y;
        local_48.z = -(triangle->normal).z;
        local_1c = local_18;
        if (out_normal != &local_48) {
          out_normal->x = local_48.x;
          out_normal->y = local_48.y;
          out_normal->z = local_48.z;
        }
      }
      iVar3 = iVar3 + 0x38;
    } while (iVar3 != 0x70);
    local_20 = local_20 + 0xb8;
    local_2c = local_2c + 0x19;
  } while (local_20 != 0x8a0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model3);
  if (&local_cc != (CBoundingBox3D *)&pCVar1->bounds_min) {
    local_cc.min.x = (pCVar1->bounds_min).x;
    local_cc.min.y = (pCVar1->bounds_min).y;
    local_cc.min.z = (pCVar1->bounds_min).z;
  }
  if (&local_cc.max != &pCVar1->bounds_max) {
    local_cc.max.x = (pCVar1->bounds_max).x;
    local_cc.max.y = (pCVar1->bounds_max).y;
    local_cc.max.z = (pCVar1->bounds_max).z;
  }
  pcVar4 = this_ptr->unk3 + 0xcf8;
  local_24 = this_ptr->unk3 + 0xdb8;
  do {
    if (0.0 < *(float *)(pcVar4 + 0x18)) {
      local_9c.x = ray_origin->x - *(float *)(pcVar4 + 0x1c);
      local_9c.y = ray_origin->y - *(float *)(pcVar4 + 0x20);
      local_9c.z = ray_origin->z - *(float *)(pcVar4 + 0x24);
      this_ptr_00 = pcVar4 + 0x34;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                ((CMatrix3x3f *)this_ptr_00,&local_60,&local_9c);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                ((CMatrix3x3f *)this_ptr_00,&local_78,ray_direction);
      local_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                           (&local_cc,&local_60,&local_78,&local_54);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           ((CMatrix3x3f *)this_ptr_00,&local_84,&local_54);
        if (out_normal != pCVar2) {
          out_normal->x = pCVar2->x;
          out_normal->y = pCVar2->y;
          out_normal->z = pCVar2->z;
        }
      }
    }
    pcVar4 = pcVar4 + 0x60;
  } while (pcVar4 != local_24);
  return local_1c;
}
