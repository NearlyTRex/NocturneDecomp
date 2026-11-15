// Name: core_actor.cpp_CDemonActor_rayIntersect_FUN_004091b0
// Address: 004091b0
// Address Range: [[004091b0, 004096ba]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_004091b0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_004091b0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

{
  CKeyFramedModel *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  CBoundingBox3D *pCVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1084 [977];
  CVector3f *pCVar7;
  byte *puVar8;
  CDeformableModelInstance *frame_index;
  CVector3f *ray_origin_00;
  CVector3f *ray_direction_00;
  int triangle_index;
  ulonglong local_118;
  double dStack_110;
  float fStack_108;
  CBoundingBox3D local_fc;
  CBoundingBox3D local_e4;
  uint local_cc [2];
  byte auStack_c4 [24];
  uint auStack_ac [4];
  float local_9c;
  float local_98 [6];
  byte auStack_80 [12];
  CVector3f CStack_74;
  byte auStack_68 [12];
  float afStack_5c [2];
  CVector3f local_54;
  byte local_48 [12];
  byte local_3c [8];
  float afStack_34 [2];
  byte auStack_2c [12];
  CVector3f CStack_20;
  
  bVar6 = 0;
  if (bbox_type == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_00408f00(this_ptr,collision_info,bbox_type);
  pfVar2 = (float *)((int)&local_118 + 4);
  pCVar4 = &local_fc;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar4->min).x = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar6 * -2 + 1;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  if (ray_bbox == (CBoundingBox3D *)0x0) {
    if (&local_e4 != (CBoundingBox3D *)ray_origin) {
      local_e4.min.x = ray_origin->x;
      local_e4.min.y = ray_origin->y;
      local_e4.min.z = ray_origin->z;
    }
    if (&local_e4.max != ray_origin) {
      local_e4.max.x = ray_origin->x;
      local_e4.max.y = ray_origin->y;
      local_e4.max.z = ray_origin->z;
    }
    local_9c = ray_origin->x + ray_direction->x;
    pCVar7 = (CVector3f *)(auStack_2c + 8);
    local_98[0] = ray_origin->y + ray_direction->y;
    pCVar4 = &local_e4;
    local_98[1] = ray_origin->z + ray_direction->z;
    auStack_2c._8_4_ = local_9c;
    *(float *)((int)&CStack_20 + (uint)bVar6 * -8) = local_98[(uint)bVar6 * -2];
    *(float *)((int)&CStack_20 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) =
         local_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(pCVar4,pCVar7);
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041e910(&local_e4,&local_fc);
  }
  else {
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041e910(ray_bbox,&local_fc);
  }
  if (iVar1 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(this_ptr,ray_origin,&local_54);
  auStack_80._8_4_ = local_54.x;
  *(uint *)(auStack_68 + (uint)bVar6 * -8 + -0xc) =
       *(uint *)(local_48 + (uint)bVar6 * -8 + -8);
  *(uint *)(auStack_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -8) =
       *(uint *)(local_48 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -4);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
            (this_ptr,ray_direction,(CVector3f *)(auStack_68 + 8));
  local_3c._0_4_ = auStack_68._8_4_;
  *(float *)(local_3c + (uint)bVar6 * -8 + 4) = afStack_5c[(uint)bVar6 * -2];
  afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
       afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  out_hit->part_index = -1;
  out_hit->lod_index = -1;
  out_hit->triangle_index = -1;
  out_hit->bone_index = -1;
  if ((uint)bbox_type < 2) {
    if (bbox_type == 1) {
      puVar8 = local_48;
      (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,(CBoundingBox3D *)(auStack_80 + 8));
      puVar3 = auStack_ac;
      puVar5 = local_cc;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_108 = (float)core_box_cpp_FUN_0041e220(auStack_c4,puVar8);
      goto LAB_004093ad;
    }
  }
  else {
    if ((uint)bbox_type < 3) {
      fStack_108 = (float)core_actor_cpp_rayCylinderIntersect_FUN_00408100
                                    (collision_info,auStack_80 + 8,local_3c,local_48);
      goto LAB_004093ad;
    }
    if (bbox_type == 3) {
      fStack_108 = (*((this_ptr->vtable)._ub)->customRayIntersect)
                             (this_ptr,(CVector3f *)(auStack_80 + 8),(CVector3f *)local_3c,
                              &out_hit->normal);
      core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
                (this_ptr,&out_hit->normal,&CStack_20);
      afStack_5c[0] = CStack_20.x;
      afStack_5c[(uint)bVar6 * -2 + 1] = *(float *)((int)&CStack_20 + (uint)bVar6 * -8 + 4);
      *(uint *)(local_48 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -0xc) =
           *(uint *)((int)&CStack_20 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if ((float *)(local_3c + 4) != afStack_5c) {
        local_3c._4_4_ = afStack_5c[0];
        afStack_34[0] = afStack_5c[1];
        afStack_34[1] = local_54.x;
      }
      goto LAB_004093ad;
    }
  }
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x4ac;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonActor::rayIntersect - Invalid collision type!");
LAB_004093ad:
  dStack_110 = (double)fStack_108;
  if ((dStack_110 < 0.0) || (1.0 < dStack_110)) {
    return 2.0;
  }
  if (g_CDemonSetPtr->skip_exact_collisions == 0) {
    frame_index = collision_info->deformable_model;
    if (frame_index == (CDeformableModelInstance *)0x0) {
      if (collision_info->keyframed_model != (CKeyFramedModelInstance *)0x0) {
        pCVar7 = (CVector3f *)(local_3c + 4);
        ray_direction_00 = (CVector3f *)auStack_2c;
        ray_origin_00 = (CVector3f *)auStack_68;
        this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                                (collision_info->keyframed_model);
        fStack_108 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004618a0
                               (this_ptr_00,(int)frame_index,ray_origin_00,ray_direction_00,pCVar7);
        local_118 = (double)fStack_108;
        if (local_118 < 0.0) {
          return 2.0;
        }
        if (1.0 < local_118) {
          return 2.0;
        }
      }
    }
    else {
      fStack_108 = core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0054f400
                             (collision_info->deformable_model,(CVector3f *)auStack_68,
                              (CVector3f *)auStack_2c);
      if (fStack_108 < 0.0) {
        return 2.0;
      }
      if (1.0 < fStack_108) {
        return 2.0;
      }
      out_hit->part_index = _DAT_0272af44;
      out_hit->lod_index = _DAT_0272af54;
      triangle_index = _DAT_0272af58;
      iVar1 = _DAT_0272af54;
      out_hit->triangle_index = _DAT_0272af58;
      this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                              (collision_info->deformable_model);
      iVar1 = core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0054bde0
                        (this_ptr_01,iVar1,triangle_index);
      out_hit->bone_index = iVar1;
      if ((SLod *)&stack0x00000000 != g_DeformableModelPool[0].lod_info + 4) {
        local_3c._4_4_ = _DAT_0272af48;
        afStack_34[0] = _DAT_0272af4c;
        afStack_34[1] = _DAT_0272af50;
      }
    }
  }
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
            (this_ptr,(CVector3f *)(local_3c + 4),&CStack_74);
  auStack_80._0_4_ = CStack_74.x;
  *(uint *)(auStack_80 + (uint)bVar6 * -8 + 4) =
       *(uint *)(auStack_68 + (uint)bVar6 * -8 + -8);
  *(uint *)(auStack_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)(auStack_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -4);
  if (out_hit != (SActorRayHit *)auStack_80) {
    (out_hit->normal).x = (float)auStack_80._0_4_;
    (out_hit->normal).y = (float)auStack_80._4_4_;
    (out_hit->normal).z = (float)auStack_80._8_4_;
  }
  return fStack_108;
}
