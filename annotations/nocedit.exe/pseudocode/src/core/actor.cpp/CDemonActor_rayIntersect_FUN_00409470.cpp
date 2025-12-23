// Name: core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
// Address: 00409470
// Address Range: [[00409470, 0040983a]]
// Convention: __cdecl
// Signature: float core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_hit_normal, SCollisionInfo * collision_info, int bbox_type, CBoundingBox3D * ray_bbox)

#include "nocturne.h"

float __cdecl
core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
          (CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_hit_normal,SCollisionInfo *collision_info,int bbox_type,
          CBoundingBox3D *ray_bbox)

{
  CDemonSet *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  float fVar3;
  CVector3f *pCVar4;
  CKeyFramedModel *this_ptr_01;
  CDeformableModel *this_ptr_02;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar5;
  CDemonActor *ray_direction_00;
  byte *frame_index;
  CBoundingBox3D *out_box;
  CVector3f *ray_direction_01;
  char *out_normal;
  byte local_a0 [12];
  byte auStack_94 [8];
  CBoundingBox3D CStack_8c;
  byte local_6c [16];
  CBoundingBox3D local_5c;
  byte local_44 [8];
  CVector3f local_3c;
  byte auStack_2c [12];
  CVector3f CStack_20;
  float local_14;
  
  if (bbox_type == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
            (this_ptr,(CBoundingBox3D *)(local_a0 + 4),collision_info,bbox_type);
  if (ray_bbox == (CBoundingBox3D *)0x0) {
    if ((CVector3f *)(local_6c + 0xc) != ray_origin) {
      local_6c._12_4_ = ray_origin->x;
      local_5c.min.x = ray_origin->y;
      local_5c.min.y = ray_origin->z;
    }
    if ((CVector3f *)&local_5c.min.z != ray_origin) {
      local_5c.min.z = ray_origin->x;
      local_5c.max.x = ray_origin->y;
      local_5c.max.y = ray_origin->z;
    }
    local_3c.x = ray_origin->x + ray_direction->x;
    local_3c.y = ray_origin->y + ray_direction->y;
    local_3c.z = ray_origin->z + ray_direction->z;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)(local_6c + 0xc),&local_3c);
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&local_5c,&CStack_8c);
  }
  else {
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                      (ray_bbox,(CBoundingBox3D *)(auStack_94 + 4));
  }
  if (iVar2 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (this_ptr,(CVector3f *)auStack_2c,ray_origin);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (this_ptr,(CVector3f *)(local_44 + 4),ray_direction);
  if ((uint)bbox_type < 2) {
    if (bbox_type != 1) {
LAB_004096d2:
      out_normal = "CDemonActor::rayIntersect - Invalid collision type!";
      g_CurrentFilename = "..\\core\\actor.cpp";
      g_CurrentLineNumber = 0x45b;
      pCVar4 = (CVector3f *)0x4096f1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::rayIntersect - Invalid collision type!");
      goto LAB_004095c9;
    }
    out_normal = (char *)&CStack_20.z;
    pCVar4 = &local_3c;
    out_box = (CBoundingBox3D *)local_6c;
    pCVar5 = (CVector3f *)0x4095ab;
    ray_direction_00 = this_ptr;
    this_ptr_00 = (*this_ptr->vtable->getBoundingBox)(this_ptr,out_box);
    fVar3 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                      (this_ptr_00,pCVar5,(CVector3f *)ray_direction_00,&out_box->min);
  }
  else if ((uint)bbox_type < 3) {
    out_normal = (char *)&CStack_20.z;
    pCVar4 = &local_3c;
    fVar3 = core_actor_cpp_rayCylinderIntersect_FUN_00408340
                      (collision_info,(CVector3f *)(auStack_2c + 8),pCVar4,(CVector3f *)out_normal);
  }
  else {
    if (bbox_type != 3) goto LAB_004096d2;
    out_normal = (char *)&CStack_20.z;
    pCVar4 = &local_3c;
    fVar3 = (*this_ptr->vtable->customRayIntersect)
                      (this_ptr,(CVector3f *)(auStack_2c + 8),pCVar4,(CVector3f *)out_normal);
  }
  auStack_94._4_4_ = fVar3;
LAB_004095c9:
  local_a0._0_8_ = (ulonglong)(float)auStack_94._4_4_;
  if (((double)local_a0._0_8_ < 0.0) || (1.0 < (double)local_a0._0_8_)) {
    return 2.0;
  }
  out_hit_normal[1].y = -NAN;
  out_hit_normal[1].z = -NAN;
  out_hit_normal[2].x = -NAN;
  pCVar1 = g_CDemonSetPtr;
  out_hit_normal[1].x = -NAN;
  if (pCVar1->field71_0x15f6dc == 0) {
    if (collision_info->result_ptr == (void *)0x0) {
      if (collision_info->field9_0x24 != (void *)0x0) {
        ray_direction_01 = &CStack_20;
        pCVar5 = (CVector3f *)local_44;
        frame_index = auStack_2c;
        this_ptr_01 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                (collision_info->field9_0x24);
        CStack_8c.min.y =
             core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0
                       (this_ptr_01,(int)frame_index,pCVar5,ray_direction_01,pCVar4);
        local_a0._0_8_ = (ulonglong)CStack_8c.min.y;
        if ((double)local_a0._0_8_ < 0.0) {
          return 2.0;
        }
        if (1.0 < (double)local_a0._0_8_) {
          return 2.0;
        }
      }
    }
    else {
      CStack_8c.min.x =
           core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
                     (collision_info->result_ptr,(CVector3f *)auStack_2c,(CVector3f *)local_44);
      auStack_94 = (byte  [8])(double)CStack_8c.min.x;
      if ((double)auStack_94 < 0.0) {
        return 2.0;
      }
      if (1.0 < (double)auStack_94) {
        return 2.0;
      }
      out_hit_normal[1].x = (float)g_DeformableModelRayHitPartIndex;
      out_hit_normal[1].y = (float)g_DeformableModelRayHitLodIndex;
      iVar2 = g_DeformableModelRayHitTriangleIndex;
      out_hit_normal[1].z = (float)g_DeformableModelRayHitTriangleIndex;
      this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              (collision_info->result_ptr);
      fVar3 = (float)core_skeleton_cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0
                               (this_ptr_02,iVar2,(int)out_normal);
      out_hit_normal[2].x = fVar3;
      if ((int *)&stack0x00000000 != &g_DeformableModelCount) {
        local_14 = g_DeformableModelRayHitNormal.x;
      }
    }
  }
  pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (this_ptr,(CVector3f *)&local_14,&CStack_20);
  if (out_hit_normal != pCVar4) {
    out_hit_normal->x = pCVar4->x;
    out_hit_normal->y = pCVar4->y;
    out_hit_normal->z = pCVar4->z;
  }
  return CStack_8c.min.x;
}
