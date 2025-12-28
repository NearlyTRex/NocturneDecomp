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
  CVector3f *pCVar3;
  CKeyFramedModel *this_ptr_01;
  CDeformableModel *this_ptr_02;
  float fVar4;
  BADSPACEBASE *in_ESP;
  byte *frame_index;
  CVector3f *ray_origin_00;
  CVector3f *ray_direction_00;
  char *out_normal;
  CVector3f *in_stack_ffffff50;
  byte auStack_a4 [8];
  CBoundingBox3D local_9c;
  byte auStack_7c [16];
  CBoundingBox3D local_6c;
  byte local_54 [8];
  CVector3f CStack_4c;
  byte local_3c [12];
  byte local_30 [12];
  CVector3f CStack_24;
  
  if (bbox_type == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
            (this_ptr,&local_9c,collision_info,bbox_type);
  if (ray_bbox == (CBoundingBox3D *)0x0) {
    if ((CVector3f *)(auStack_7c + 0xc) != ray_origin) {
      auStack_7c._12_4_ = ray_origin->x;
      local_6c.min.x = ray_origin->y;
      local_6c.min.y = ray_origin->z;
    }
    if ((CVector3f *)&local_6c.min.z != ray_origin) {
      local_6c.min.z = ray_origin->x;
      local_6c.max.x = ray_origin->y;
      local_6c.max.y = ray_origin->z;
    }
    CStack_4c.x = ray_origin->x + ray_direction->x;
    CStack_4c.y = ray_origin->y + ray_direction->y;
    CStack_4c.z = ray_origin->z + ray_direction->z;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)(auStack_7c + 0xc),&CStack_4c)
    ;
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&local_6c,&local_9c);
  }
  else {
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                      (ray_bbox,(CBoundingBox3D *)(auStack_a4 + 4));
  }
  if (iVar2 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (this_ptr,(CVector3f *)local_3c,ray_origin);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (this_ptr,(CVector3f *)(local_54 + 4),ray_direction);
  if ((uint)bbox_type < 2) {
    if (bbox_type == 1) {
      out_normal = local_30 + 8;
      pCVar3 = &CStack_4c;
      this_ptr_00 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)auStack_7c);
      auStack_7c._8_4_ =
           core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                     (this_ptr_00,pCVar3,(CVector3f *)out_normal,in_stack_ffffff50);
      goto LAB_004095c9;
    }
  }
  else {
    if ((uint)bbox_type < 3) {
      out_normal = local_30 + 8;
      pCVar3 = &CStack_4c;
      auStack_7c._8_4_ =
           core_actor_cpp_rayCylinderIntersect_FUN_00408340
                     (collision_info,(CVector3f *)(local_3c + 8),pCVar3,(CVector3f *)out_normal);
      goto LAB_004095c9;
    }
    if (bbox_type == 3) {
      out_normal = local_30 + 8;
      pCVar3 = &CStack_4c;
      auStack_7c._8_4_ =
           (*this_ptr->vtable->customRayIntersect)
                     (this_ptr,(CVector3f *)(local_3c + 8),pCVar3,(CVector3f *)out_normal);
      goto LAB_004095c9;
    }
  }
  out_normal = "CDemonActor::rayIntersect - Invalid collision type!";
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 0x45b;
  pCVar3 = (CVector3f *)0x4096f1;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::rayIntersect - Invalid collision type!");
LAB_004095c9:
  if (((float)auStack_a4._4_4_ < 0.0) || (1.0 < (float)auStack_a4._4_4_)) {
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
        ray_direction_00 = (CVector3f *)local_30;
        ray_origin_00 = (CVector3f *)local_54;
        frame_index = local_3c;
        this_ptr_01 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                (collision_info->field9_0x24);
        local_9c.min.y =
             core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0
                       (this_ptr_01,(int)frame_index,ray_origin_00,ray_direction_00,pCVar3);
        if (local_9c.min.y < 0.0) {
          return 2.0;
        }
        if (1.0 < local_9c.min.y) {
          return 2.0;
        }
      }
    }
    else {
      local_9c.min.x =
           core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
                     (collision_info->result_ptr,(CVector3f *)local_3c,(CVector3f *)local_54);
      auStack_a4 = (byte  [8])(double)local_9c.min.x;
      if ((double)auStack_a4 < 0.0) {
        return 2.0;
      }
      if (1.0 < (double)auStack_a4) {
        return 2.0;
      }
      out_hit_normal[1].x = (float)g_DeformableModelRayHitPartIndex;
      out_hit_normal[1].y = (float)g_DeformableModelRayHitLodIndex;
      iVar2 = g_DeformableModelRayHitTriangleIndex;
      out_hit_normal[1].z = (float)g_DeformableModelRayHitTriangleIndex;
      this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              (collision_info->result_ptr);
      fVar4 = (float)core_skeleton_cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0
                               (this_ptr_02,iVar2,(int)out_normal);
      out_hit_normal[2].x = fVar4;
      if ((SLod *)&stack0x00000000 != g_DeformableModelPool[0].lod_info + 1) {
        CStack_24.x = g_DeformableModelRayHitNormal.x;
        CStack_24.y = g_DeformableModelRayHitNormal.y;
        CStack_24.z = g_DeformableModelRayHitNormal.z;
      }
    }
  }
  pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (this_ptr,&CStack_24,(CVector3f *)local_30);
  if (out_hit_normal != pCVar3) {
    out_hit_normal->x = pCVar3->x;
    out_hit_normal->y = pCVar3->y;
    out_hit_normal->z = pCVar3->z;
  }
  return local_9c.min.x;
}
