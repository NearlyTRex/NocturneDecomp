// Name: core_actor.cpp_CDemonActor_rayIntersect_FUN_00409170
// Address: 00409170
// Address Range: [[00409170, 0040967a]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_00409170(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_00409170(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

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
  CVector3f *in_stack_fffffed0;
  CDeformableModelInstance *frame_index;
  CVector3f *in_stack_fffffed4;
  CVector3f *ray_origin_00;
  CVector3f *ray_direction_00;
  int triangle_index;
  byte local_118 [8];
  double dStack_110;
  float fStack_108;
  CBoundingBox3D local_fc;
  CBoundingBox3D local_e4;
  uint local_cc [2];
  CBoundingBox3D CStack_c4;
  uint auStack_ac [4];
  float local_9c;
  float local_98 [6];
  byte auStack_80 [12];
  CVector3f CStack_74;
  byte auStack_68 [12];
  float afStack_5c [2];
  CVector3f local_54;
  CVector3f local_48;
  byte local_3c [8];
  float afStack_34 [2];
  byte auStack_2c [12];
  CVector3f CStack_20;
  
  bVar6 = 0;
  if (bbox_type == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00408ec0
            (this_ptr,collision_info,bbox_type,(CBoundingBox3D *)(local_118 + 4));
  pfVar2 = (float *)(local_118 + 4);
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
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar4,pCVar7);
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_004215d0(&local_e4,&local_fc);
  }
  else {
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_004215d0(ray_bbox,&local_fc);
  }
  if (iVar1 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(this_ptr,ray_origin,&local_54);
  auStack_80._8_4_ = local_54.x;
  *(uint *)(auStack_68 + (uint)bVar6 * -8 + -0xc) =
       *(uint *)((int)&local_54 + (uint)bVar6 * -8 + 4);
  *(uint *)(auStack_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -8) =
       *(uint *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
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
      pCVar7 = &local_48;
      (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,(CBoundingBox3D *)(auStack_80 + 8));
      puVar3 = auStack_ac;
      puVar5 = local_cc;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_108 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420ee0
                             (&CStack_c4,pCVar7,in_stack_fffffed0,in_stack_fffffed4);
      goto LAB_0040936d;
    }
  }
  else {
    if ((uint)bbox_type < 3) {
      fStack_108 = (float)core_actor_cpp_rayCylinderIntersect_FUN_004080c0
                                    (collision_info,auStack_80 + 8,local_3c,&local_48);
      goto LAB_0040936d;
    }
    if (bbox_type == 3) {
      fStack_108 = (*((this_ptr->vtable)._ub)->customRayIntersect)
                             (this_ptr,(CVector3f *)(auStack_80 + 8),(CVector3f *)local_3c,
                              &out_hit->normal);
      core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
                (this_ptr,&out_hit->normal,&CStack_20);
      afStack_5c[0] = CStack_20.x;
      afStack_5c[(uint)bVar6 * -2 + 1] = *(float *)((int)&CStack_20 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&CStack_20 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if ((float *)(local_3c + 4) != afStack_5c) {
        local_3c._4_4_ = afStack_5c[0];
        afStack_34[0] = afStack_5c[1];
        afStack_34[1] = local_54.x;
      }
      goto LAB_0040936d;
    }
  }
  _DAT_01d1d400 = "..\\core\\actor.cpp";
  _DAT_01d1d404 = 0x4ac;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonActor::rayIntersect - Invalid collision type!");
LAB_0040936d:
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
        this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                                (collision_info->keyframed_model);
        fStack_108 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00467c00
                               (this_ptr_00,(int)frame_index,ray_origin_00,ray_direction_00,pCVar7);
        local_118 = (byte  [8])(double)fStack_108;
        if ((double)local_118 < 0.0) {
          return 2.0;
        }
        if (1.0 < (double)local_118) {
          return 2.0;
        }
      }
    }
    else {
      fStack_108 = core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0056a870
                             (collision_info->deformable_model,(CVector3f *)auStack_68,
                              (CVector3f *)auStack_2c);
      if (fStack_108 < 0.0) {
        return 2.0;
      }
      if (1.0 < fStack_108) {
        return 2.0;
      }
      out_hit->part_index = _DAT_026b82a4;
      out_hit->lod_index = _DAT_026b82b4;
      triangle_index = _DAT_026b82b8;
      iVar1 = _DAT_026b82b4;
      out_hit->triangle_index = _DAT_026b82b8;
      this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                              (collision_info->deformable_model);
      iVar1 = core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_00567250
                        (this_ptr_01,iVar1,triangle_index);
      out_hit->bone_index = iVar1;
      if ((SLod *)&stack0x00000000 != g_DeformableModelPool[0].lod_info + 4) {
        local_3c._4_4_ = _DAT_026b82a8;
        afStack_34[0] = _DAT_026b82ac;
        afStack_34[1] = _DAT_026b82b0;
      }
    }
  }
  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
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
