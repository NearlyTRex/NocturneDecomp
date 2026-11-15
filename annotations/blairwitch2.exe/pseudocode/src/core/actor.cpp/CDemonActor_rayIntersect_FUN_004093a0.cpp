// Name: core_actor.cpp_CDemonActor_rayIntersect_FUN_004093a0
// Address: 004093a0
// Address Range: [[004093a0, 0040982a]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_004093a0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_004093a0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

{
  CDemonSet *pCVar1;
  CKeyFramedModel *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_106c [976];
  CDeformableModelInstance *frame_index;
  CVector3f *ray_direction_00;
  int lod_level;
  CVector3f *pCVar8;
  float local_100;
  CBoundingBox3D local_fc;
  float local_e4 [8];
  uint auStack_c4 [4];
  uint local_b4 [6];
  CBoundingBox3D local_9c;
  CBoundingBox3D local_84;
  float local_6c;
  float local_68 [2];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  byte auStack_3c [16];
  float afStack_2c [2];
  CVector3f CStack_24;
  float local_14;
  
  bVar7 = 0;
  if (bbox_type == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_004090f0();
  pfVar3 = local_e4;
  pCVar5 = &local_9c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar5->min).x = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  if (ray_bbox == (CBoundingBox3D *)0x0) {
    if (&local_fc != (CBoundingBox3D *)ray_origin) {
      local_fc.min.x = ray_origin->x;
      local_fc.min.y = ray_origin->y;
      local_fc.min.z = ray_origin->z;
    }
    if (&local_fc.max != ray_origin) {
      local_fc.max.x = ray_origin->x;
      local_fc.max.y = ray_origin->y;
      local_fc.max.z = ray_origin->z;
    }
    local_6c = ray_origin->x + ray_direction->x;
    pCVar8 = &local_84.max;
    local_68[0] = ray_origin->y + ray_direction->y;
    pCVar5 = &local_fc;
    local_68[1] = ray_origin->z + ray_direction->z;
    local_84.max.x = local_6c;
    *(float *)((int)&local_84 + (uint)bVar7 * -8 + 0x10) = local_68[(uint)bVar7 * -2];
    *(float *)((int)&local_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 0x14) =
         local_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar5,pCVar8);
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041b660(&local_fc,&local_9c);
  }
  else {
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041b660(ray_bbox,&local_9c);
  }
  if (iVar2 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
            (this_ptr,ray_origin,(CVector3f *)(auStack_3c + 0xc));
  local_84.min.x = (float)auStack_3c._12_4_;
  *(float *)((int)&local_84 + (uint)bVar7 * -8 + 4) = afStack_2c[(uint)bVar7 * -2];
  *(float *)((int)&local_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30(this_ptr,ray_direction,&local_54);
  local_48.x = local_54.x;
  *(uint *)(auStack_3c + (uint)bVar7 * -8 + -8) =
       *(uint *)((int)&local_54 + (uint)bVar7 * -8 + 4);
  *(uint *)(auStack_3c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4) =
       *(uint *)((int)&local_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  if ((uint)bbox_type < 2) {
    if (bbox_type == 1) {
      (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_84);
      puVar4 = auStack_c4;
      puVar6 = local_b4;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      local_100 = (float)core_box_cpp_FUN_0041af70();
      local_14 = local_100;
      goto LAB_0040957e;
    }
  }
  else {
    if ((uint)bbox_type < 3) {
      local_100 = (float)core_actor_cpp_rayCylinderIntersect_FUN_00408290(collision_info);
      local_14 = local_100;
      goto LAB_0040957e;
    }
    if (bbox_type == 3) {
      local_100 = (*((this_ptr->vtable)._ub)->customRayIntersect)
                            (this_ptr,&local_84.min,&local_48,&local_60);
      local_14 = local_100;
      goto LAB_0040957e;
    }
  }
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0x4ab;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonActor::rayIntersect - Invalid collision type!");
LAB_0040957e:
  if ((local_100 < 0.0) || (1.0 < local_100)) {
    return 2.0;
  }
  out_hit->lod_index = -1;
  out_hit->triangle_index = -1;
  out_hit->bone_index = -1;
  pCVar1 = g_CDemonSetPtr;
  out_hit->part_index = -1;
  if (pCVar1->skip_exact_collisions == 0) {
    frame_index = collision_info->deformable_model;
    if (frame_index == (CDeformableModelInstance *)0x0) {
      if (collision_info->keyframed_model != (CKeyFramedModelInstance *)0x0) {
        pCVar8 = &local_60;
        ray_direction_00 = &local_48;
        pCVar5 = &local_84;
        this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                                (collision_info->keyframed_model);
        local_100 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_0044f020
                              (this_ptr_00,(int)frame_index,&pCVar5->min,ray_direction_00,pCVar8);
        if (local_100 < 0.0) {
          return 2.0;
        }
        local_14 = local_100;
        if (1.0 < local_100) {
          return 2.0;
        }
      }
    }
    else {
      local_100 = core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0
                            (collision_info->deformable_model,&local_84.min,&local_48);
      if (local_100 < 0.0) {
        return 2.0;
      }
      if (1.0 < local_100) {
        return 2.0;
      }
      out_hit->part_index = _DAT_020ccfdc;
      out_hit->lod_index = _DAT_020ccfec;
      iVar2 = _DAT_020ccff0;
      out_hit->triangle_index = _DAT_020ccff0;
      lod_level = _DAT_020ccfec;
      local_14 = local_100;
      this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                              (collision_info->deformable_model);
      iVar2 = core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0
                        (this_ptr_01,lod_level,iVar2);
      out_hit->bone_index = iVar2;
      if ((SVert **)&stack0x00000000 != g_DeformableModelPool[0].vertex_data_ptr + 3) {
        local_60.x = _DAT_020ccfe0;
        local_60.y = _DAT_020ccfe4;
        local_60.z = _DAT_020ccfe8;
      }
    }
  }
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(this_ptr,&local_60,&CStack_24);
  auStack_3c._0_4_ = CStack_24.x;
  *(uint *)(auStack_3c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_24 + (uint)bVar7 * -8 + 4);
  *(uint *)(auStack_3c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_24 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  if (out_hit != (SActorRayHit *)auStack_3c) {
    (out_hit->normal).x = (float)auStack_3c._0_4_;
    (out_hit->normal).y = (float)auStack_3c._4_4_;
    (out_hit->normal).z = (float)auStack_3c._8_4_;
  }
  return local_100;
}
