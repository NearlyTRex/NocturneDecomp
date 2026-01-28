// Name: core_gabriela.cpp_FUN_004d4190
// Address: 004d4190
// Address Range: [[004d4190, 004d4833]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004d4190(void)

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d4190(uint param_1) */

void core_gabriela_cpp_FUN_004d4190(void)

{
  CHero *pCVar1;
  CDemonSet *this_ptr;
  SMotion *pSVar2;
  CVector3f *pCVar3;
  CBoundingBox3D *pCVar4;
  int iVar5;
  float fVar6;
  CDemonActor *this_ptr_00;
  CDemonActor *in_stack_00000004;
  float fVar7;
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
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[0x8d].create_event + 0x3c,0,0x2c);
  if (in_stack_00000004[0x179].previous_transform_state.orientation.y != 0.0) {
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    local_84 = (in_stack_00000004->location).position.x - (pCVar1->base).base.location.position.x;
    local_80 = (in_stack_00000004->location).position.y - (pCVar1->base).base.location.position.y;
    local_7c = (in_stack_00000004->location).position.z - (pCVar1->base).base.location.position.z;
    fVar6 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if (in_stack_00000004[0x179].previous_transform_state.orientation.y == 4.2039e-45) {
      fVar6 = 0.0;
    }
    if ((float)4 <= fVar6) {
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        ((CPathMap *)(g_HeroActors[g_LocalHeroIndex]->unk2 + 0x2c),
                         &(in_stack_00000004->location).position,&local_c0,in_stack_00000004->unk1);
      if (iVar5 != 0) {
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_c0.y - (in_stack_00000004->orient).bank);
        fVar6 = fVar6 * (float)0.31830988619288902 * (float)4;
        *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = fVar6;
        if (fVar6 < -local_1c) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = -local_1c;
        }
        if (local_1c < *(float *)(in_stack_00000004[0x8d].create_event + 0x60)) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = local_1c;
        }
        iVar5 = g_LocalHeroIndex;
        in_stack_00000004[0x8d].create_event[0x3c] = '\x01';
        in_stack_00000004[0x8d].create_event[0x3d] = '\0';
        in_stack_00000004[0x8d].create_event[0x3e] = '\0';
        in_stack_00000004[0x8d].create_event[0x3f] = '\0';
        pCVar1 = g_HeroActors[iVar5];
        if (&local_9c != local_b4) {
          local_9c = (in_stack_00000004->location).position.x -
                     (pCVar1->base).base.location.position.x;
          local_98.x = (in_stack_00000004->location).position.y -
                       (pCVar1->base).base.location.position.y;
          local_98.y = (in_stack_00000004->location).position.z -
                       (pCVar1->base).base.location.position.z;
        }
        if ((float)10 <
            SQRT(local_98.y * local_98.y + local_9c * local_9c + local_98.x * local_98.x)) {
          in_stack_00000004[0x8d].create_event[0x44] = '\x01';
          in_stack_00000004[0x8d].create_event[0x45] = '\0';
          in_stack_00000004[0x8d].create_event[0x46] = '\0';
          in_stack_00000004[0x8d].create_event[0x47] = '\0';
          return;
        }
      }
    }
    else {
      fVar7 = 9999.9;
      fVar6 = in_stack_00000004[0x179].previous_transform_state.orientation.y;
      this_ptr_00 = (CDemonActor *)0x0;
      if ((fVar6 == 2.8026e-45) || (fVar6 == 4.2039e-45)) {
        this_ptr_00 = (CDemonActor *)core_hero_cpp_FUN_004f3960();
      }
      if ((this_ptr_00 == (CDemonActor *)0x0) || ((float)30 <= fVar7)) {
        if (in_stack_00000004[0x179].previous_transform_state.orientation.z != 0.0) {
          pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             ((CMotionController *)(in_stack_00000004 + 1));
          if (pSVar2->state_index == 0) {
            in_stack_00000004[0x8d].create_event[0x54] = '\x01';
            in_stack_00000004[0x8d].create_event[0x55] = '\0';
            in_stack_00000004[0x8d].create_event[0x56] = '\0';
            in_stack_00000004[0x8d].create_event[0x57] = '\0';
            return;
          }
        }
      }
      else {
        if (in_stack_00000004[0x179].previous_transform_state.orientation.z == 0.0) {
          pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             ((CMotionController *)(in_stack_00000004 + 1));
          if (pSVar2->state_index == 0) {
            in_stack_00000004[0x8d].create_event[0x54] = '\x01';
            in_stack_00000004[0x8d].create_event[0x55] = '\0';
            in_stack_00000004[0x8d].create_event[0x56] = '\0';
            in_stack_00000004[0x8d].create_event[0x57] = '\0';
          }
        }
        local_6c._0_4_ =
             (this_ptr_00->location).position.x - (in_stack_00000004->location).position.x;
        local_6c._4_4_ =
             (this_ptr_00->location).position.y - (in_stack_00000004->location).position.y;
        local_64 = (this_ptr_00->location).position.z - (in_stack_00000004->location).position.z;
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_e4,(CVector3f *)local_6c);
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar3->y - (in_stack_00000004->orient).bank);
        fVar6 = local_18 * (float)0.31830988619288902 * (float)4;
        local_24 = -local_1c;
        *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = fVar6;
        if (fVar6 < local_24) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = local_24;
        }
        if (local_1c < *(float *)(in_stack_00000004[0x8d].create_event + 0x60)) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = local_1c;
        }
        if (((float)-0.050000000000000003 < *(float *)(in_stack_00000004[0x8d].create_event + 0x60)) &&
           ((double)*(float *)(in_stack_00000004[0x8d].create_event + 0x60) < 0.050000000000000003)) {
          pCVar4 = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                             (in_stack_00000004,(CBoundingBox3D *)(auStack_10c + 0x10));
          fStack_d0 = (pCVar4->min).x + (pCVar4->max).x;
          fStack_cc = (pCVar4->min).y + (pCVar4->max).y;
          fStack_4c = fStack_d0 * 0.5f;
          fStack_c8 = (pCVar4->min).z + (pCVar4->max).z;
          fStack_48 = fStack_cc * 0.5f;
          fStack_44 = fStack_c8 * 0.5f;
          fStack_70 = (in_stack_00000004->location).position.x + fStack_4c;
          local_6c._0_4_ = (in_stack_00000004->location).position.y + fStack_48;
          local_6c._4_4_ = (in_stack_00000004->location).position.z + fStack_44;
          pCVar4 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                             (this_ptr_00,(CBoundingBox3D *)auStack_10c);
          local_20 = (pCVar4->min).x + (pCVar4->max).x;
          local_1c = (pCVar4->min).y + (pCVar4->max).y;
          fStack_50 = local_20 * 0.5f;
          local_18 = (pCVar4->min).z + (pCVar4->max).z;
          fStack_4c = local_1c * 0.5f;
          fStack_48 = local_18 * 0.5f;
          CStack_38.x = (this_ptr_00->location).position.x + fStack_50;
          CStack_38.y = (this_ptr_00->location).position.y + fStack_4c;
          local_c0.y = CStack_38.x - (float)local_6c._4_4_;
          local_c0.z = CStack_38.y - local_64;
          CStack_38.z = (this_ptr_00->location).position.z + fStack_48;
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
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
          this_ptr = g_CDemonSetPtr;
          g_CDemonSetPtr->collision_actor = (CDemonActor *)0x0;
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (this_ptr,(CVector3f *)(local_6c + 4),&CStack_38);
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          if (this_ptr_00 == g_CDemonSetPtr->collision_actor) {
            in_stack_00000004[0x8d].create_event[0x48] = '\x01';
            in_stack_00000004[0x8d].create_event[0x49] = '\0';
            in_stack_00000004[0x8d].create_event[0x4a] = '\0';
            in_stack_00000004[0x8d].create_event[0x4b] = '\0';
            return;
          }
        }
      }
    }
  }
  return;
}
