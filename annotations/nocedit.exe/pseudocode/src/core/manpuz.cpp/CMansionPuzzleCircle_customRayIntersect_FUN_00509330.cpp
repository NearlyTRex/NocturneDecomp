// Name: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330
// Address: 00509330
// Address Range: [[00509330, 0050971c]]
// Convention: __cdecl
// Signature: float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  CMatrix3x3f *this_ptr_00;
  CKeyFramedModel *pCVar1;
  float fVar1;
  CKeyFramedModel *pCVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar2;
  int iVar3;
  SReflector *pSVar4;
  CMatrix3x3f *pCVar5;
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
  int local_30;
  SPanel *local_2c;
  SGem *local_28;
  int *local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->panel_model);
  local_cc.min.x = (pCVar1->bounds).min.x;
  local_cc.min.y = (pCVar1->bounds).min.y;
  local_cc.min.z = (pCVar1->bounds).min.z;
  local_cc.max.x = (pCVar1->bounds).max.x;
  local_cc.max.y = (pCVar1->bounds).max.y;
  local_cc.max.z = (pCVar1->bounds).max.z;
  local_1c = 1.01;
  local_2c = this_ptr->panels;
  local_20 = 0;
  do {
    if (local_2c->exists != 0) {
      local_b4.x = ray_origin->x - (local_2c->local_position).x;
      local_b4.y = ray_origin->y - (local_2c->local_position).y;
      local_b4.z = ray_origin->z - (local_2c->local_position).z;
      pCVar5 = &local_2c->rotation_matrix;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(pCVar5,&local_6c,&local_b4);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar5,&local_3c,ray_direction);
      fVar1 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                        (&local_cc,&local_6c,&local_3c,&local_a8);
      if ((0.0 <= fVar1) && (fVar1 < local_1c)) {
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (pCVar5,&local_90,&local_a8);
        local_1c = fVar1;
        if (out_normal != pCVar4) {
          out_normal->x = pCVar4->x;
          out_normal->y = pCVar4->y;
          out_normal->z = pCVar4->z;
        }
      }
    }
    iVar3 = 0;
    do {
      triangle = (CDemonTriangle *)((int)this_ptr->gems[0].sfx_handles + iVar3 + local_20 + -0x70);
      fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(triangle,ray_origin,ray_direction);
      if ((0.0 <= fVar1) && (fVar1 < local_1c)) {
        local_48.x = -(triangle->normal).x;
        local_48.y = -(triangle->normal).y;
        local_48.z = -(triangle->normal).z;
        local_1c = fVar1;
        if (out_normal != &local_48) {
          out_normal->x = local_48.x;
          out_normal->y = local_48.y;
          out_normal->z = local_48.z;
        }
      }
      iVar3 = iVar3 + 0x38;
    } while (iVar3 != 0x70);
    local_20 = local_20 + 0xb8;
    local_2c = local_2c + 1;
  } while (local_20 != 0x8a0);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&this_ptr->reflector_model);
  if (&local_cc != &pCVar3->bounds) {
    local_cc.min.x = (pCVar3->bounds).min.x;
    local_cc.min.y = (pCVar3->bounds).min.y;
    local_cc.min.z = (pCVar3->bounds).min.z;
  }
  pCVar4 = &(pCVar3->bounds).max;
  if (&local_cc.max != pCVar4) {
    local_cc.max.x = pCVar4->x;
    local_cc.max.y = (pCVar3->bounds).max.y;
    local_cc.max.z = (pCVar3->bounds).max.z;
  }
  pSVar4 = this_ptr->reflectors;
  do {
    if (0.0 < pSVar4->interp_factor) {
      local_9c.x = ray_origin->x - (pSVar4->position).x;
      local_9c.y = ray_origin->y - (pSVar4->position).y;
      local_9c.z = ray_origin->z - (pSVar4->position).z;
      this_ptr_00 = &pSVar4->rotation_matrix;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (this_ptr_00,&local_60,&local_9c);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (this_ptr_00,&local_78,ray_direction);
      fVar1 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                        (&local_cc,&local_60,&local_78,&local_54);
      if ((0.0 <= fVar1) && (fVar1 < local_1c)) {
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (this_ptr_00,&local_84,&local_54);
        local_1c = fVar1;
        if (out_normal != pCVar2) {
          out_normal->x = pCVar2->x;
          out_normal->y = pCVar2->y;
          out_normal->z = pCVar2->z;
        }
      }
    }
    pSVar4 = pSVar4 + 1;
  } while (pSVar4 != (SReflector *)this_ptr->laser_color_r);
  return local_1c;
}
