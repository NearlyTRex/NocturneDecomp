// Name: core_gabriela.cpp_CGabriella_processAI_FUN_004c7aa0
// Address: 004c7aa0
// Address Range: [[004c7aa0, 004c834e]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_004c7aa0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_004c7aa0(CGabriella *this_ptr,float delta_time)

{
  double dVar1;
  CHero *pCVar2;
  EHeroTask EVar3;
  float fVar4;
  CDemonSet *this_ptr_00;
  float fVar5;
  float fVar6;
  SMotion *pSVar7;
  int iVar8;
  uint *puVar9;
  CDemonActor *unaff_EDI;
  uint *puVar10;
  byte bVar11;
  float afStackY_115c [983];
  CBoundingBox3D *out_box;
  float fVar12;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float local_174;
  float local_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float local_160;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  CVector3f CStack_140;
  float local_134 [2];
  CVector3f local_12c [2];
  CVector3f local_114;
  float afStack_108 [4];
  float fStack_f8;
  float afStack_f4 [5];
  float fStack_e0;
  float afStack_dc [4];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  CVector3f CStack_a4;
  float fStack_98;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_78;
  float local_74 [2];
  CVector3f local_6c [2];
  float fStack_50;
  float afStack_4c [2];
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [5];
  float local_20;
  CEnemy *local_1c;
  float local_18;
  CDemonActor *pCStack_14;
  
  bVar11 = 0;
  local_20 = 0.25;
  memset(&(this_ptr->base).player_input,0,0x30);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    pCVar2 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
    local_168 = (this_ptr->base).base.base.location.position.x -
                (pCVar2->base).base.location.position.x;
    local_164 = (this_ptr->base).base.base.location.position.y -
                (pCVar2->base).base.location.position.y;
    local_160 = (this_ptr->base).base.base.location.position.z -
                (pCVar2->base).base.location.position.z;
    local_cc = local_168;
    afStack_dc[(uint)bVar11 * -2 + 5] =
         *(float *)((int)&stack0xfffffea0 + ((uint)bVar11 * -2 + -1) * 4);
    afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6] =
         *(float *)((int)&stack0xfffffea0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4);
    out_box = (CBoundingBox3D *)
              SQRT(local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8);
    if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
      out_box = (CBoundingBox3D *)0x0;
    }
    if ((float)4 <= (float)out_box) {
      iVar8 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                        (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->path_map,
                         &(this_ptr->base).base.base.location.position,&local_114,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar8 != 0) {
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                             (local_114.y - (this_ptr->base).base.base.orient.vec.y);
        fVar12 = local_18 * 0.3183099f * (float)4;
        afStack_34[2] = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar12;
        if (fVar12 < afStack_34[2]) {
          (this_ptr->base).player_input.turn_speed = afStack_34[2];
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        (this_ptr->base).player_input.action_state.walk = 1;
        pCVar2 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
        local_90 = (this_ptr->base).base.base.location.position.x -
                   (pCVar2->base).base.location.position.x;
        local_8c = (this_ptr->base).base.base.location.position.y -
                   (pCVar2->base).base.location.position.y;
        local_88 = (this_ptr->base).base.base.location.position.z -
                   (pCVar2->base).base.location.position.z;
        local_78 = local_90;
        local_74[(uint)bVar11 * -2] = *(float *)((int)&CStack_a4 + ((uint)bVar11 * -2 + 5) * 4 + 4);
        local_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_a4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 6) * 4 + 4);
        if (afStack_dc + 7 != &local_78) {
          local_c0 = local_78;
          local_bc = local_74[0];
          local_b8 = local_74[1];
        }
        if ((float)10 <
            SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc)) {
          (this_ptr->base).player_input.action_state.run = 1;
          return;
        }
      }
    }
    else {
      fVar12 = 9999.9;
      EVar3 = (this_ptr->base).ai_task;
      local_1c = (CEnemy *)0x0;
      if ((EVar3 == HERO_TASK_KILL) || (EVar3 == HERO_TASK_GUARD)) {
        local_1c = core_hero_cpp_CHero_closestEnemy_FUN_004ec350
                             (&this_ptr->base,(float *)&stack0xfffffe1c);
      }
      if ((local_1c == (CEnemy *)0x0) || ((float)30 <= fVar12)) {
        if (this_ptr->weapon_state_flags != 0) {
          pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             (&(this_ptr->base).base.model.base);
          if (pSVar7->state_index == 0) {
            (this_ptr->base).player_input.action_state.draw = 1;
            return;
          }
        }
      }
      else {
        if (this_ptr->weapon_state_flags == 0) {
          pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             (&(this_ptr->base).base.model.base);
          if (pSVar7->state_index == 0) {
            (this_ptr->base).player_input.action_state.draw = 1;
          }
        }
        CStack_140.z = (local_1c->base).base.location.position.x -
                       (this_ptr->base).base.base.location.position.x;
        local_134[0] = (local_1c->base).base.location.position.y -
                       (this_ptr->base).base.base.location.position.y;
        local_134[1] = (local_1c->base).base.location.position.z -
                       (this_ptr->base).base.base.location.position.z;
        local_12c[0].x = CStack_140.z;
        *(float *)((int)local_12c + (uint)bVar11 * -8 + 4) = local_134[(uint)bVar11 * -2];
        *(float *)((int)local_12c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             local_134[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(local_12c,local_6c);
        local_174 = local_6c[0].x;
        *(uint *)((int)&stack0xfffffe90 + (uint)bVar11 * -8) =
             *(uint *)((int)local_6c + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&stack0xfffffe94 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4) =
             *(uint *)((int)local_6c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                             (local_170 - (this_ptr->base).base.base.orient.vec.y);
        fVar12 = local_18 * 0.3183099f * (float)4;
        afStack_34[3] = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar12;
        if (fVar12 < afStack_34[3]) {
          (this_ptr->base).player_input.turn_speed = afStack_34[3];
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        fVar12 = (this_ptr->base).player_input.turn_speed;
        dVar1 = (double)fVar12;
        if (((float)-0.050000000000000003 < fVar12) && (dVar1 < 0.050000000000000003)) {
          (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                    ((CDemonActor *)this_ptr,SUB84(__BITCAST_UINT64(dVar1),0));
          puVar9 = (uint *)&stack0xfffffe70;
          puVar10 = &stack0xfffffe50;
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          afStack_34[0] = fStack_1a8 + fStack_19c;
          afStack_34[1] = fStack_1a4 + local_198;
          afStack_34[2] = fStack_1a0 + fStack_194;
          fStack_154 = fStack_1a8 + fStack_19c;
          *(float *)((int)&stack0xfffffeb0 + (uint)bVar11 * -8) = afStack_34[(uint)bVar11 * -2 + 1];
          *(float *)((int)&stack0xfffffeb4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4) =
               afStack_34[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
          afStack_f4[0] = fStack_154 * 0.5f;
          afStack_f4[1] = fStack_150 * 0.5f;
          afStack_f4[2] = fStack_14c * 0.5f;
          afStack_dc[0] = fStack_154 * 0.5f;
          afStack_dc[(uint)bVar11 * -2 + 1] = afStack_f4[(uint)bVar11 * -2 + 1];
          afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
               afStack_f4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
          CStack_a4.y = (this_ptr->base).base.base.location.position.x + afStack_dc[0];
          CStack_a4.z = (this_ptr->base).base.base.location.position.y + afStack_dc[1];
          fStack_98 = (this_ptr->base).base.base.location.position.z + afStack_dc[2];
          fStack_148 = CStack_a4.y;
          *(uint *)(&stack0xfffffebc + (uint)bVar11 * -8) =
               *(uint *)((int)&CStack_a4 + ((uint)bVar11 * -2 + 1) * 4 + 4);
          *(uint *)((int)&CStack_140 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4) =
               *(uint *)
                ((int)&CStack_a4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 2) * 4 + 4);
          (*((pCStack_14->vtable)._ub)->getBoundingBox)(pCStack_14,out_box);
          puVar9 = (uint *)&stack0xfffffe30;
          puVar10 = (uint *)&stack0xfffffe40;
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          fStack_e0 = fStack_1b8 + fStack_1ac;
          afStack_dc[0] = fStack_1b4 + fStack_1a8;
          afStack_dc[1] = local_1b0 + fStack_1a4;
          fStack_f8 = fStack_1b8 + fStack_1ac;
          afStack_f4[(uint)bVar11 * -2] = afStack_dc[(uint)bVar11 * -2];
          afStack_f4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          local_170 = fStack_f8 * 0.5f;
          fStack_16c = afStack_f4[0] * 0.5f;
          local_168 = afStack_f4[1] * 0.5f;
          fStack_50 = fStack_f8 * 0.5f;
          afStack_4c[(uint)bVar11 * -2] = *(float *)((int)&stack0xfffffe94 + (uint)bVar11 * -8);
          afStack_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(float *)((int)&stack0xfffffe98 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4);
          local_134[0] = (unaff_EDI->location).position.x + fStack_50;
          local_134[1] = (unaff_EDI->location).position.y + afStack_4c[0];
          local_12c[0].x = (unaff_EDI->location).position.z + afStack_4c[1];
          CStack_44.x = local_134[0];
          *(float *)((int)&CStack_44 + (uint)bVar11 * -8 + 4) = local_134[(uint)bVar11 * -2 + 1];
          *(uint *)((int)&CStack_44 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
               *(uint *)((int)local_12c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          fStack_38 = CStack_44.x - CStack_140.x;
          afStack_34[0] = CStack_44.y - CStack_140.y;
          afStack_34[1] = CStack_44.z - CStack_140.z;
          local_8c = CStack_44.x - CStack_140.x;
          *(float *)((int)&CStack_a4 + ((uint)bVar11 * -2 + 6) * 4 + 4) =
               afStack_34[(uint)bVar11 * -2];
          fVar6 = CStack_44.z;
          fVar5 = CStack_44.y;
          fVar12 = CStack_44.x;
          *(float *)((int)&CStack_a4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 7) * 4 + 4) =
               afStack_34[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          pCStack_14 = (CDemonActor *)
                       SQRT(fStack_84 * fStack_84 + local_8c * local_8c + local_88 * local_88);
          if ((float)pCStack_14 <= 0.0) {
            local_88 = 0.0;
            local_8c = 0.0;
            fStack_84 = 0.0;
          }
          else {
            fVar4 = 1.0 / (float)pCStack_14;
            local_8c = local_8c * fVar4;
            local_88 = local_88 * fVar4;
            fStack_84 = fStack_84 * fVar4;
          }
          local_74[0] = local_8c * 3.0f;
          local_74[1] = local_88 * 3.0f;
          local_6c[0].x = fStack_84 * 3.0f;
          local_c8 = local_8c * 3.0f;
          afStack_dc[(uint)bVar11 * -2 + 6] = local_74[(uint)bVar11 * -2 + 1];
          afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               *(float *)((int)local_6c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          local_114.y = fVar12 + local_c8;
          local_114.z = fVar5 + local_c4;
          afStack_108[0] = fVar6 + local_c0;
          CStack_a4.x = fVar12 + local_c8;
          *(float *)((int)&CStack_a4 + (uint)bVar11 * -8 + 4) = afStack_108[(uint)bVar11 * -2 + -1];
          *(float *)((int)&CStack_a4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4 + 4) =
               afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2];
          if (&CStack_44 != &CStack_a4) {
            CStack_44.x = CStack_a4.x;
            CStack_44.y = CStack_a4.y;
            CStack_44.z = CStack_a4.z;
          }
          core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
          core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
          this_ptr_00 = g_CDemonSetPtr;
          g_CDemonSetPtr->collision_actor = (CDemonActor *)0x0;
          core_setcolid_cpp_CDemonSet_raycast_FUN_00557300(this_ptr_00,&CStack_140,&CStack_44);
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          if (unaff_EDI == g_CDemonSetPtr->collision_actor) {
            (this_ptr->base).player_input.action_state.fire = 1;
            return;
          }
        }
      }
    }
  }
  return;
}
