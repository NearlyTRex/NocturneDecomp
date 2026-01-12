// Name: core_gabriela.cpp_FUN_004d4190
// Address: 004d4190
// Address Range: [[004d4190, 004d4833]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d4190()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d4190(uint param_1) */

void core_gabriela_cpp_FUN_004d4190(void)

{
  CHero *pCVar1;
  CDemonSet *this_ptr;
  SMotion *pSVar2;
  CVector3f *pCVar3;
  float fVar4;
  CBoundingBox3D *pCVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  CDemonActor *this_ptr_00;
  CDemonActor *in_stack_00000004;
  float local_11c;
  CBoundingBox3D CStack_110;
  CBoundingBox3D CStack_f8;
  CVector3f CStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  CVector3f local_bc;
  float local_b0 [3];
  CVector3f CStack_a4;
  float local_98;
  float local_94;
  float fStack_90;
  float local_80;
  float local_7c;
  float fStack_78;
  CVector3f CStack_74;
  CVector3f local_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_18;
  
  local_18 = 0.25;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[0x8d].create_event + 0x3c,0,0x2c);
  if (in_stack_00000004[0x179].previous_transform_state.orientation.y != 0.0) {
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    local_80 = (in_stack_00000004->location).position.x -
               (pCVar1->base_character).base_actor.location.position.x;
    local_7c = (in_stack_00000004->location).position.y -
               (pCVar1->base_character).base_actor.location.position.y;
    fStack_78 = (in_stack_00000004->location).position.z -
                (pCVar1->base_character).base_actor.location.position.z;
    local_11c = SQRT(fStack_78 * fStack_78 + local_80 * local_80 + local_7c * local_7c);
    if (in_stack_00000004[0x179].previous_transform_state.orientation.y == 4.2039e-45) {
      local_11c = 0.0;
    }
    if ((float)4 <= local_11c) {
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        ((CPathMap *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x2c),
                         &(in_stack_00000004->location).position,&local_bc,
                         in_stack_00000004->field7_0x6c);
      if (iVar6 != 0) {
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_bc.y - (in_stack_00000004->orient).bank);
        fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
        *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = fVar4;
        if (fVar4 < -local_18) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = -local_18;
        }
        if (local_18 < *(float *)(in_stack_00000004[0x8d].create_event + 0x60)) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = local_18;
        }
        iVar6 = g_LocalHeroIndex;
        in_stack_00000004[0x8d].create_event[0x3c] = '\x01';
        in_stack_00000004[0x8d].create_event[0x3d] = '\0';
        in_stack_00000004[0x8d].create_event[0x3e] = '\0';
        in_stack_00000004[0x8d].create_event[0x3f] = '\0';
        pCVar1 = g_HeroActors[iVar6];
        if (&local_98 != local_b0) {
          local_98 = (in_stack_00000004->location).position.x -
                     (pCVar1->base_character).base_actor.location.position.x;
          local_94 = (in_stack_00000004->location).position.y -
                     (pCVar1->base_character).base_actor.location.position.y;
          fStack_90 = (in_stack_00000004->location).position.z -
                      (pCVar1->base_character).base_actor.location.position.z;
        }
        if ((float)10 <
            SQRT(fStack_90 * fStack_90 + local_98 * local_98 + local_94 * local_94)) {
          in_stack_00000004[0x8d].create_event[0x44] = '\x01';
          in_stack_00000004[0x8d].create_event[0x45] = '\0';
          in_stack_00000004[0x8d].create_event[0x46] = '\0';
          in_stack_00000004[0x8d].create_event[0x47] = '\0';
          return;
        }
      }
    }
    else {
      fVar4 = in_stack_00000004[0x179].previous_transform_state.orientation.y;
      this_ptr_00 = (CDemonActor *)0x0;
      if ((fVar4 == 2.8026e-45) || (fVar4 == 4.2039e-45)) {
        this_ptr_00 = (CDemonActor *)core_hero_cpp_FUN_004f3960();
      }
      if ((this_ptr_00 == (CDemonActor *)0x0) || ((float)30 <= 9999.9)) {
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
        local_68.x = (this_ptr_00->location).position.x - (in_stack_00000004->location).position.x;
        local_68.y = (this_ptr_00->location).position.y - (in_stack_00000004->location).position.y;
        local_68.z = (this_ptr_00->location).position.z - (in_stack_00000004->location).position.z;
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_e0,&local_68);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - (in_stack_00000004->orient).bank);
        fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
        local_20 = -local_18;
        *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = fVar4;
        if (fVar4 < local_20) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = local_20;
        }
        if (local_18 < *(float *)(in_stack_00000004[0x8d].create_event + 0x60)) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = local_18;
        }
        if (((float)-0.050000000000000003 < *(float *)(in_stack_00000004[0x8d].create_event + 0x60)) &&
           ((double)*(float *)(in_stack_00000004[0x8d].create_event + 0x60) < 0.050000000000000003)) {
          pCVar5 = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_f8);
          fStack_d4 = (pCVar5->min).x + (pCVar5->max).x;
          fStack_d0 = (pCVar5->min).y + (pCVar5->max).y;
          fStack_50 = fStack_d4 * 0.5f;
          fStack_cc = (pCVar5->min).z + (pCVar5->max).z;
          fStack_4c = fStack_d0 * 0.5f;
          fStack_48 = fStack_cc * 0.5f;
          CStack_74.x = (in_stack_00000004->location).position.x + fStack_50;
          CStack_74.y = (in_stack_00000004->location).position.y + fStack_4c;
          CStack_74.z = (in_stack_00000004->location).position.z + fStack_48;
          pCVar5 = (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,&CStack_110);
          fStack_2c = (pCVar5->min).x + (pCVar5->max).x;
          fStack_28 = (pCVar5->min).y + (pCVar5->max).y;
          fStack_5c = fStack_2c * 0.5f;
          local_24 = (pCVar5->min).z + (pCVar5->max).z;
          fStack_58 = fStack_28 * 0.5f;
          fStack_54 = local_24 * 0.5f;
          CStack_44.x = (this_ptr_00->location).position.x + fStack_5c;
          CStack_44.y = (this_ptr_00->location).position.y + fStack_58;
          fStack_c8 = CStack_44.x - CStack_74.x;
          fStack_c4 = CStack_44.y - CStack_74.y;
          CStack_44.z = (this_ptr_00->location).position.z + fStack_54;
          local_c0 = CStack_44.z - CStack_74.z;
          fVar4 = SQRT(local_c0 * local_c0 + fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4);
          if (fVar4 <= 0.0) {
            fStack_c4 = 0.0;
            fStack_c8 = 0.0;
            local_c0 = 0.0;
          }
          else {
            fVar4 = 1.0 / fVar4;
            fStack_c8 = fStack_c8 * fVar4;
            fStack_c4 = fStack_c4 * fVar4;
            local_c0 = local_c0 * fVar4;
          }
          fStack_38 = fStack_c8 * 3f;
          fStack_34 = fStack_c4 * 3f;
          fStack_30 = local_c0 * 3f;
          CStack_a4.x = CStack_44.x + fStack_38;
          CStack_a4.y = CStack_44.y + fStack_34;
          CStack_a4.z = CStack_44.z + fStack_30;
          if (&CStack_44 != &CStack_a4) {
            CStack_44.x = CStack_a4.x;
            CStack_44.y = CStack_a4.y;
            CStack_44.z = CStack_a4.z;
          }
          core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
          this_ptr = g_CDemonSetPtr;
          g_CDemonSetPtr->collision_actor = (CDemonActor *)0x0;
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(this_ptr,&CStack_74,&CStack_44);
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
