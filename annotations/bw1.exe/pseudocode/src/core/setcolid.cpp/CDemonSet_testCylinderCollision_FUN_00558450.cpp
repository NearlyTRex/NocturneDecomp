// Name: core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00558450
// Address: 00558450
// Address Range: [[00558450, 00558eac]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00558450(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00558450(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y)

{
  CDemonActor *actor;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  ECollisionType bounding_box_type;
  CKeyFramedModel *this_ptr_00;
  int iVar9;
  CBoundingBox3D *pCVar10;
  uint *puVar11;
  float *pfVar12;
  uint *puVar13;
  byte bVar14;
  float afStackY_108c [859];
  CDemonActor *in_stack_fffffd08;
  float *in_stack_fffffd0c;
  double dStack_2a0;
  SIntersectXZCylinder SStack_258;
  byte auStack_1fc [88];
  float local_1a4;
  float local_1a0;
  float local_19c;
  byte local_198 [80];
  float local_148;
  SCollisionInfo local_144;
  uint auStack_114 [6];
  byte auStack_fc [32];
  float local_dc;
  float local_d8;
  CBoundingBox3D local_d4;
  CBoundingBox3D CStack_bc;
  float fStack_a4;
  float afStack_a0 [2];
  CVector3f CStack_98;
  byte auStack_84 [8];
  float afStack_7c [4];
  float fStack_6c;
  CVector3f CStack_68;
  float fStack_54;
  CVector3f aCStack_50 [4];
  int local_1c;
  CDemonSet *local_18;
  
  bVar14 = 0;
  core_dtrace_cpp_initIntersectionCylinder_FUN_0048c230
            ((SIntersectXZCylinder *)(auStack_1fc + 0x54),start_x,start_z,dir_x,dir_z,radius,
             bottom_y,top_y);
  if ((ABS(dir_x) != 0.0) || (ABS(dir_z) != 0.0)) {
    core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_0048c300
              (&g_CDemonRaytraceInstance,(SIntersectXZCylinder *)(auStack_1fc + 0x54));
  }
  this_ptr->ground_type = 1;
  this_ptr->collision_part_index = -1;
  this_ptr->collision_bone_index = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
    local_dc = (float)local_198._0_4_ - (float)local_198._16_4_;
    local_d4.min.y = (float)local_198._0_4_ + (float)local_198._16_4_;
    if ((float)local_198._8_4_ <= 0.0) {
      local_dc = local_dc + (float)local_198._8_4_;
    }
    else {
      local_d4.min.y = local_d4.min.y + (float)local_198._8_4_;
    }
    local_d8 = (float)local_198._24_4_;
    local_d4.min.x = (float)local_198._4_4_ - (float)local_198._16_4_;
    local_d4.max.x = (float)local_198._4_4_ + (float)local_198._16_4_;
    local_d4.min.z = (float)local_198._20_4_;
    if ((float)local_198._12_4_ <= 0.0) {
      local_d4.min.x = local_d4.min.x + (float)local_198._12_4_;
    }
    else {
      local_d4.max.x = local_d4.max.x + (float)local_198._12_4_;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0((SCollisionInfo *)(local_198 + 0x4c));
    local_198._76_4_ = (this_ptr->ray_query).ray_type;
    local_148 = (float)(this_ptr->ray_query).laser_type;
    local_144.ray_query.ray_type = (this_ptr->ray_query).laser_color.r;
    local_144.ray_query.laser_type = (this_ptr->ray_query).laser_color.g;
    local_144.ray_query.laser_color.r = (this_ptr->ray_query).laser_color.b;
    local_1c = 0;
    if (0 < this_ptr->collidable_actor_count) {
      local_18 = this_ptr;
      do {
        actor = local_18->collidable_actors[0];
        fVar8 = (float)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00557db0(this_ptr,actor);
        if ((fVar8 == 0.0) &&
           (local_144.cylinder_top_y = fVar8, local_144.cylinder_radius = fVar8,
           bounding_box_type =
                (*((actor->vtable)._ub)->getCollisionType)
                          (actor,(SCollisionInfo *)(local_198 + 0x4c)),
           bounding_box_type != COLLISION_TYPE_NONE)) {
          core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00408ec0
                    (actor,&local_144,bounding_box_type,&CStack_bc);
          pCVar10 = &CStack_bc;
          pfVar12 = (float *)(auStack_fc + 0x10);
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar12 = (pCVar10->min).x;
            pCVar10 = (CBoundingBox3D *)((int)pCVar10 + ((uint)bVar14 * -2 + 1) * 4);
            pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
          }
          iVar9 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_004215d0
                            (&local_d4,(CBoundingBox3D *)(auStack_fc + 0x10));
          if (iVar9 != 0) {
            if (local_144.keyframed_model == (CKeyFramedModelInstance *)0x0) {
              if (bounding_box_type < COLLISION_TYPE_CYLINDER) {
                if (bounding_box_type == COLLISION_TYPE_MESH) {
                  (*((actor->vtable)._ub)->getBoundingBox)(actor,(CBoundingBox3D *)&actor->location)
                  ;
                  puVar11 = auStack_114;
                  puVar13 = (uint *)auStack_fc;
                  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar13 = *puVar11;
                    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
                    puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
                  }
                  iVar9 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_005580d0
                                    (this_ptr,(SIntersectXZCylinder *)local_198,
                                     (CBoundingBox3D *)auStack_fc,(CVector3f *)in_stack_fffffd08,
                                     (CMatrix3x3f *)in_stack_fffffd0c);
                  if (iVar9 != 0) {
                    this_ptr->collision_actor = actor;
                  }
                }
                else {
LAB_00558e17:
                  _DAT_01d1d400 = "..\\core\\setcolid.cpp";
                  _DAT_01d1d404 = 0x3f1;
                  core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid collision type!");
                }
              }
              else if (bounding_box_type < COLLISION_TYPE_CUSTOM) {
                local_144.cylinder_bottom_y =
                     local_144.cylinder_bottom_y + (actor->location).position.y;
                local_144.cylinder_top_y = local_144.cylinder_top_y + (actor->location).position.y;
                fVar8 = (actor->location).position.x;
                fVar1 = (actor->location).position.z;
                if ((local_144.cylinder_bottom_y < (float)local_198._28_4_) &&
                   ((float)local_198._32_4_ < local_144.cylinder_top_y)) {
                  fVar2 = fVar8 - (float)local_198._8_4_;
                  fVar4 = fVar1 - (float)local_198._12_4_;
                  fVar5 = local_144.cylinder_radius + (float)local_198._24_4_;
                  fVar6 = fVar5 * fVar5;
                  fVar3 = fVar4 * fVar4 + fVar2 * fVar2;
                  if (fVar6 <= fVar3) {
                    fVar2 = fVar4 * (float)local_198._48_4_ + fVar2 * (float)local_198._44_4_;
                    if (0.0 < fVar2) {
                      fVar5 = (float)local_198._44_4_ * fVar2 + (float)local_198._8_4_;
                      fVar3 = fVar8 - fVar5;
                      fVar4 = (float)local_198._48_4_ * fVar2 + (float)local_198._12_4_;
                      fVar2 = fVar1 - fVar4;
                      fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
                      if (fVar2 < fVar6) {
                        fVar2 = SQRT(fVar6 - fVar2);
                        fVar5 = fVar5 - (float)local_198._44_4_ * fVar2;
                        fVar4 = fVar4 - (float)local_198._48_4_ * fVar2;
                        if (ABS((float)local_198._16_4_) <= ABS((float)local_198._20_4_)) {
                          fVar2 = (fVar4 - (float)local_198._12_4_) / (float)local_198._20_4_;
                        }
                        else {
                          fVar2 = (fVar5 - (float)local_198._8_4_) / (float)local_198._16_4_;
                        }
                        if (((0.0 <= fVar2) && (fVar2 < local_1a0)) && (fVar2 <= 1.0)) {
                          local_19c = fVar5 - fVar8;
                          local_198._4_4_ = fVar4 - fVar1;
                          local_198._0_4_ = 0.0;
                          this_ptr->collision_actor = actor;
                          local_1a0 = fVar2;
                        }
                      }
                    }
                  }
                  else {
                    dStack_2a0 = SQRT((double)fVar3) - (double)fVar5;
                    if (_DAT_005f0ec5 < dStack_2a0) {
                      dStack_2a0 = -0.001;
                    }
                    if ((float)dStack_2a0 < local_1a0) {
                      local_19c = -fVar2;
                      local_198._4_4_ = -fVar4;
                      local_198._0_4_ = 0.0;
                      this_ptr->collision_actor = actor;
                      local_1a0 = (float)dStack_2a0;
                    }
                  }
                }
              }
              else {
                if (bounding_box_type != COLLISION_TYPE_CUSTOM) goto LAB_00558e17;
                CStack_98.x = (float)local_198._8_4_;
                CStack_98.z = (float)local_198._12_4_;
                CStack_98.y = (float)local_144.keyframed_model;
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                          (actor,&CStack_98,(CVector3f *)(auStack_84 + 4));
                uVar7 = local_198._20_4_;
                aCStack_50[0].x = (float)local_198._16_4_;
                fStack_a4 = (float)auStack_84._4_4_;
                afStack_a0[(uint)bVar14 * -2] = afStack_7c[(uint)bVar14 * -2];
                afStack_a0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                     afStack_7c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
                aCStack_50[0].z = (float)uVar7;
                aCStack_50[0].y = 0.0;
                core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
                          (actor,aCStack_50,&CStack_68);
                afStack_7c[2] = CStack_68.x;
                afStack_7c[(uint)bVar14 * -2 + 3] =
                     *(float *)((int)&CStack_68 + (uint)bVar14 * -8 + 4);
                afStack_7c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
                     *(float *)((int)&CStack_68 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
                core_dtrace_cpp_initIntersectionCylinder_FUN_0048c230
                          (&SStack_258,fStack_a4,afStack_a0[1],afStack_7c[2],fStack_6c,radius,
                           bottom_y - (actor->location).position.y,
                           top_y - (actor->location).position.y);
                SStack_258.closest_t = local_1a0;
                (*((actor->vtable)._ub)->customIntersectCylinderXZ)(actor,&SStack_258);
                if (SStack_258.push_normal.y < (float)local_198._0_4_) {
                  local_198._0_4_ = SStack_258.push_normal.y;
                  in_stack_fffffd0c = &SStack_258.push_normal.z;
                  in_stack_fffffd08 = actor;
                  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                            (actor,(CVector3f *)in_stack_fffffd0c,(CVector3f *)auStack_84);
                  fStack_54 = (float)auStack_84._0_4_;
                  *(float *)((int)aCStack_50 + (uint)bVar14 * -8) =
                       afStack_7c[(uint)bVar14 * -2 + -1];
                  *(float *)((int)aCStack_50 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 4) =
                       afStack_7c[(uint)bVar14 * -2 + (uint)bVar14 * -2];
                  if ((float *)(local_198 + 4) != &fStack_54) {
                    local_198._4_4_ = fStack_54;
                    local_198._8_4_ = aCStack_50[0].x;
                    local_198._12_4_ = aCStack_50[0].y;
                  }
                  this_ptr->collision_actor = actor;
                }
              }
            }
            else {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                                      (local_144.keyframed_model);
              if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                _DAT_01d1d400 = "..\\core\\setcolid.cpp";
                _DAT_01d1d404 = 0x389;
                core_main_c_displayErrorAndQuit_FUN_005030e0("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision");
              }
              core_dtrace_cpp_initIntersectionCylinder_FUN_0048c230
                        ((SIntersectXZCylinder *)auStack_1fc,
                         (float)local_198._8_4_ - (actor->location).position.x,
                         (float)local_198._12_4_ - (actor->location).position.z,
                         (float)local_198._16_4_,(float)local_198._20_4_,radius,
                         bottom_y - (actor->location).position.y,
                         top_y - (actor->location).position.y);
              auStack_1fc._0_4_ = local_1a0;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00468160
                        (this_ptr_00,0,(SIntersectXZCylinder *)auStack_1fc,&(actor->orient).vec);
              if ((float)auStack_1fc._0_4_ < local_1a0) {
                if (&local_19c != (float *)(auStack_1fc + 4)) {
                  local_19c = (float)auStack_1fc._4_4_;
                  local_198._0_4_ = auStack_1fc._8_4_;
                  local_198._4_4_ = auStack_1fc._12_4_;
                }
                this_ptr->collision_actor = actor;
                local_1a0 = (float)auStack_1fc._0_4_;
              }
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->collidable_actor_count);
    }
  }
  if ((float)auStack_1fc._84_4_ <= 1.0) {
    fVar8 = SQRT(local_19c * local_19c + local_1a0 * local_1a0 + local_1a4 * local_1a4);
    if (0.0 < fVar8) {
      fVar8 = 1.0 / fVar8;
      local_1a4 = local_1a4 * fVar8;
      local_1a0 = local_1a0 * fVar8;
      local_19c = local_19c * fVar8;
    }
    else {
      local_1a0 = 0.0;
      local_1a4 = 0.0;
      local_19c = 0.0;
    }
    if (&this_ptr->collision_normal != (CVector3f *)&local_1a4) {
      (this_ptr->collision_normal).x = local_1a4;
      (this_ptr->collision_normal).y = local_1a0;
      (this_ptr->collision_normal).z = local_19c;
      return (float)auStack_1fc._84_4_;
    }
  }
  return (float)auStack_1fc._84_4_;
}
