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
  CVector3f *ray_origin_00;
  byte *frame_index;
  CVector3f *pCVar5;
  CVector3f *in_stack_ffffff5c;
  int in_stack_ffffff60;
  byte local_9c [12];
  ulonglong uStack_90;
  float fStack_88;
  float local_84;
  byte auStack_74 [16];
  float local_64;
  float local_60;
  CVector3f local_5c;
  byte local_48 [8];
  CVector3f local_40;
  byte auStack_34 [12];
  byte auStack_28 [12];
  CVector3f CStack_1c;
  
  if (bbox_type == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
            (this_ptr,(CBoundingBox3D *)local_9c,collision_info,bbox_type);
  if (ray_bbox == (CBoundingBox3D *)0x0) {
    if ((CVector3f *)(auStack_74 + 0xc) != ray_origin) {
      auStack_74._12_4_ = ray_origin->x;
      local_64 = ray_origin->y;
      local_60 = ray_origin->z;
    }
    if (&local_5c != ray_origin) {
      local_5c.x = ray_origin->x;
      local_5c.y = ray_origin->y;
      local_5c.z = ray_origin->z;
    }
    local_48._4_4_ = ray_origin->x + ray_direction->x;
    local_40.x = ray_origin->y + ray_direction->y;
    local_40.y = ray_origin->z + ray_direction->z;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240
              ((CBoundingBox3D *)(auStack_74 + 0xc),(CVector3f *)(local_48 + 4));
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                      ((CBoundingBox3D *)(auStack_74 + 0xc),(CBoundingBox3D *)(local_9c + 4));
  }
  else {
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                      (ray_bbox,(CBoundingBox3D *)(local_9c + 4));
  }
  if (iVar2 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (this_ptr,(CVector3f *)auStack_34,ray_origin);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (this_ptr,(CVector3f *)local_48,ray_direction);
  if ((uint)bbox_type < 2) {
    if (bbox_type != 1) {
LAB_004096d2:
      g_CurrentFilename = "..\\core\\actor.cpp";
      g_CurrentLineNumber = 0x45b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::rayIntersect - Invalid collision type!");
      goto LAB_004095c9;
    }
    pCVar5 = (CVector3f *)(auStack_28 + 8);
    pCVar4 = (CVector3f *)(local_48 + 4);
    ray_origin_00 = (CVector3f *)(auStack_34 + 8);
    this_ptr_00 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)auStack_74);
    fVar3 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                      (this_ptr_00,ray_origin_00,pCVar4,pCVar5);
  }
  else if ((uint)bbox_type < 3) {
    fVar3 = core_actor_cpp_rayCylinderIntersect_FUN_00408340
                      (collision_info,(CVector3f *)(auStack_34 + 8),(CVector3f *)(local_48 + 4),
                       (CVector3f *)(auStack_28 + 8));
  }
  else {
    if (bbox_type != 3) goto LAB_004096d2;
    fVar3 = (*this_ptr->vtable->customRayIntersect)
                      (this_ptr,(CVector3f *)(auStack_34 + 8),(CVector3f *)(local_48 + 4),
                       (CVector3f *)(auStack_28 + 8));
  }
  uStack_90 = (double)CONCAT44 /* combine 2-byte values */(fVar3,(float)uStack_90);
LAB_004095c9:
  local_9c._0_8_ = (ulonglong)uStack_90._4_4_;
  if (((double)local_9c._0_8_ < 0.0) || (1.0 < (double)local_9c._0_8_)) {
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
        pCVar5 = &CStack_1c;
        pCVar4 = &local_40;
        frame_index = auStack_28;
        this_ptr_01 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                (collision_info->field9_0x24);
        local_84 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0
                             (this_ptr_01,(int)frame_index,pCVar4,pCVar5,in_stack_ffffff5c);
        local_9c._0_8_ = (ulonglong)local_84;
        if ((double)local_9c._0_8_ < 0.0) {
          return 2.0;
        }
        if (1.0 < (double)local_9c._0_8_) {
          return 2.0;
        }
      }
    }
    else {
      fStack_88 = core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
                            (collision_info->result_ptr,(CVector3f *)auStack_28,&local_40);
      uStack_90 = (double)fStack_88;
      if (uStack_90 < 0.0) {
        return 2.0;
      }
      if (1.0 < uStack_90) {
        return 2.0;
      }
      out_hit_normal[1].x = (float)g_DeformableModelRayHitPartIndex;
      out_hit_normal[1].y = (float)g_DeformableModelRayHitLodIndex;
      iVar2 = g_DeformableModelRayHitTriangleIndex;
      out_hit_normal[1].z = (float)g_DeformableModelRayHitTriangleIndex;
      this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              (collision_info->result_ptr);
      fVar3 = (float)core_skeleton_cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0
                               (this_ptr_02,iVar2,in_stack_ffffff60);
      out_hit_normal[2].x = fVar3;
    }
  }
  pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (this_ptr,(CVector3f *)&stack0xfffffff0,&CStack_1c);
  if (out_hit_normal != pCVar4) {
    out_hit_normal->x = pCVar4->x;
    out_hit_normal->y = pCVar4->y;
    out_hit_normal->z = pCVar4->z;
  }
  return fStack_88;
}
