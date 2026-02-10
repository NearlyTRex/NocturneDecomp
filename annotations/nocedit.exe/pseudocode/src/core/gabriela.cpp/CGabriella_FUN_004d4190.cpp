// Name: core_gabriela.cpp_CGabriella_FUN_004d4190
// Address: 004d4190
// Address Range: [[004d4190, 004d4833]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_FUN_004d4190(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d4190(CGabriella *this_ptr)

{
  CHero *pCVar1;
  CDemonSet *this_ptr_00;
  SMotion *pSVar2;
  CVector3f *pCVar3;
  CBoundingBox3D *pCVar4;
  int iVar5;
  CDemonActor *this_ptr_01;
  float fVar6;
  byte auStack_10c [40];
  CVector3f local_e4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f local_c0;
  float local_b4 [6];
  float local_9c;
  CVector3f local_98;
  float local_84;
  float local_80;
  float local_7c;
  float fStack_70;
  byte local_6c [8];
  float local_64;
  float fStack_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_1c = 0.25;
  memset(&(this_ptr->base).action_bindings,0,0x2c);
  if ((this_ptr->base).ai_task != 0) {
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    local_84 = (this_ptr->base).base.base.location.position.x -
               (pCVar1->base).base.location.position.x;
    local_80 = (this_ptr->base).base.base.location.position.y -
               (pCVar1->base).base.location.position.y;
    local_7c = (this_ptr->base).base.base.location.position.z -
               (pCVar1->base).base.location.position.z;
    fVar6 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if ((this_ptr->base).ai_task == 3) {
      fVar6 = 0.0;
    }
    if ((float)4 <= fVar6) {
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (&g_HeroActors[g_LocalHeroIndex]->path_map,
                         &(this_ptr->base).base.base.location.position,&local_c0,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar5 != 0) {
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_c0.y - (this_ptr->base).base.base.orient.vec.y);
        fVar6 = fVar6 * (float)0.31830988619288902 * (float)4;
        *(float *)((this_ptr->base).unk2 + 4) = fVar6;
        if (fVar6 < -local_1c) {
          *(float *)((this_ptr->base).unk2 + 4) = -local_1c;
        }
        if (local_1c < *(float *)((this_ptr->base).unk2 + 4)) {
          *(float *)((this_ptr->base).unk2 + 4) = local_1c;
        }
        iVar5 = g_LocalHeroIndex;
        (this_ptr->base).action_bindings.walk_key = 1;
        pCVar1 = g_HeroActors[iVar5];
        if (&local_9c != local_b4) {
          local_9c = (this_ptr->base).base.base.location.position.x -
                     (pCVar1->base).base.location.position.x;
          local_98.x = (this_ptr->base).base.base.location.position.y -
                       (pCVar1->base).base.location.position.y;
          local_98.y = (this_ptr->base).base.base.location.position.z -
                       (pCVar1->base).base.location.position.z;
        }
        if ((float)10 <
            SQRT(local_98.y * local_98.y + local_9c * local_9c + local_98.x * local_98.x)) {
          (this_ptr->base).action_bindings.run_key = 1;
          return;
        }
      }
    }
    else {
      fVar6 = 9999.9;
      iVar5 = (this_ptr->base).ai_task;
      this_ptr_01 = (CDemonActor *)0x0;
      if ((iVar5 == 2) || (iVar5 == 3)) {
        this_ptr_01 = (CDemonActor *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base);
      }
      if ((this_ptr_01 == (CDemonActor *)0x0) || ((float)30 <= fVar6)) {
        if (this_ptr->weapon_state_flags != 0) {
          pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(this_ptr->base).base.model.motion_controller);
          if (pSVar2->state_index == 0) {
            (this_ptr->base).action_bindings.draw_key = 1;
            return;
          }
        }
      }
      else {
        if (this_ptr->weapon_state_flags == 0) {
          pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(this_ptr->base).base.model.motion_controller);
          if (pSVar2->state_index == 0) {
            (this_ptr->base).action_bindings.draw_key = 1;
          }
        }
        local_6c._0_4_ =
             (this_ptr_01->location).position.x - (this_ptr->base).base.base.location.position.x;
        local_6c._4_4_ =
             (this_ptr_01->location).position.y - (this_ptr->base).base.base.location.position.y;
        local_64 = (this_ptr_01->location).position.z -
                   (this_ptr->base).base.base.location.position.z;
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_e4,(CVector3f *)local_6c);
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar3->y - (this_ptr->base).base.base.orient.vec.y);
        fVar6 = local_18 * (float)0.31830988619288902 * (float)4;
        local_24 = -local_1c;
        *(float *)((this_ptr->base).unk2 + 4) = fVar6;
        if (fVar6 < local_24) {
          *(float *)((this_ptr->base).unk2 + 4) = local_24;
        }
        if (local_1c < *(float *)((this_ptr->base).unk2 + 4)) {
          *(float *)((this_ptr->base).unk2 + 4) = local_1c;
        }
        fVar6 = *(float *)((this_ptr->base).unk2 + 4);
        if (((float)-0.050000000000000003 < fVar6) && ((double)fVar6 < 0.050000000000000003)) {
          pCVar4 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr,(CBoundingBox3D *)(auStack_10c + 0x10));
          fStack_d0 = (pCVar4->min).x + (pCVar4->max).x;
          fStack_cc = (pCVar4->min).y + (pCVar4->max).y;
          fStack_4c = fStack_d0 * 0.5f;
          fStack_c8 = (pCVar4->min).z + (pCVar4->max).z;
          fStack_48 = fStack_cc * 0.5f;
          fStack_44 = fStack_c8 * 0.5f;
          fStack_70 = (this_ptr->base).base.base.location.position.x + fStack_4c;
          local_6c._0_4_ = (this_ptr->base).base.base.location.position.y + fStack_48;
          local_6c._4_4_ = (this_ptr->base).base.base.location.position.z + fStack_44;
          pCVar4 = (*((this_ptr_01->vtable)._ub)->getBoundingBox)
                             (this_ptr_01,(CBoundingBox3D *)auStack_10c);
          local_20 = (pCVar4->min).x + (pCVar4->max).x;
          local_1c = (pCVar4->min).y + (pCVar4->max).y;
          fStack_50 = local_20 * 0.5f;
          local_18 = (pCVar4->min).z + (pCVar4->max).z;
          fStack_4c = local_1c * 0.5f;
          fStack_48 = local_18 * 0.5f;
          CStack_38.x = (this_ptr_01->location).position.x + fStack_50;
          CStack_38.y = (this_ptr_01->location).position.y + fStack_4c;
          local_c0.y = CStack_38.x - (float)local_6c._4_4_;
          local_c0.z = CStack_38.y - local_64;
          CStack_38.z = (this_ptr_01->location).position.z + fStack_48;
          fStack_60 = CStack_38.z - fStack_60;
          auStack_10c._4_4_ =
               SQRT(fStack_60 * fStack_60 + local_c0.y * local_c0.y + local_c0.z * local_c0.z);
          if ((float)auStack_10c._4_4_ <= 0.0) {
            local_c0.z = 0.0;
            local_c0.y = 0.0;
            local_b4[0] = 0.0;
          }
          else {
            local_b4[0] = 1.0 / (float)auStack_10c._4_4_;
            local_c0.y = local_c0.y * local_b4[0];
            local_c0.z = local_c0.z * local_b4[0];
            local_b4[0] = fStack_60 * local_b4[0];
          }
          fStack_2c = local_c0.y * 3.0f;
          fStack_28 = local_c0.z * 3.0f;
          local_24 = local_b4[0] * 3.0f;
          local_98.x = CStack_38.x + fStack_2c;
          local_98.y = CStack_38.y + fStack_28;
          local_98.z = CStack_38.z + local_24;
          if (&CStack_38 != &local_98) {
            CStack_38.x = local_98.x;
            CStack_38.y = local_98.y;
            CStack_38.z = local_98.z;
          }
          core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
          this_ptr_00 = g_CDemonSetPtr;
          g_CDemonSetPtr->collision_actor = (CDemonActor *)0x0;
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (this_ptr_00,(CVector3f *)(local_6c + 4),&CStack_38);
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          if (this_ptr_01 == g_CDemonSetPtr->collision_actor) {
            (this_ptr->base).action_bindings.fire_key = 1;
            return;
          }
        }
      }
    }
  }
  return;
}
