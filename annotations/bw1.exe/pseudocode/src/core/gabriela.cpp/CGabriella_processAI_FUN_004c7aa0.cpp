// Name: core_gabriela.cpp_CGabriella_processAI_FUN_004c7aa0
// Address: 004c7aa0
// Address Range: [[004c7aa0, 004c834e]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_004c7aa0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_004c7aa0(CGabriella *this_ptr,float delta_time)

{
  double dVar1;
  EHeroTask EVar2;
  float fVar3;
  CDemonSet *this_ptr_00;
  float fVar4;
  float fVar5;
  SMotion *pSVar6;
  int iVar7;
  uint *puVar8;
  CDemonActor *unaff_EDI;
  uint *puVar9;
  byte bVar10;
  float afStackY_115c [983];
  CBoundingBox3D *out_box;
  float fVar11;
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
  
  bVar10 = 0;
  local_20 = 0.25;
  memset(&(this_ptr->base).player_input,0,0x30);
  if ((this_ptr->base).ai_task != HERO_TASK_STAND) {
    iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_168 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar7 + 0x20);
    local_164 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar7 + 0x24);
    local_160 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar7 + 0x28);
    local_cc = local_168;
    afStack_dc[(uint)bVar10 * -2 + 5] =
         *(float *)((int)&stack0xfffffea0 + ((uint)bVar10 * -2 + -1) * 4);
    afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 6] =
         *(float *)((int)&stack0xfffffea0 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4);
    out_box = (CBoundingBox3D *)
              SQRT(local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8);
    if ((this_ptr->base).ai_task == HERO_TASK_GUARD) {
      out_box = (CBoundingBox3D *)0x0;
    }
    if ((float)_DAT_005e103c <= (float)out_box) {
      iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                        ((CPathMap *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0xc208),
                         &(this_ptr->base).base.base.location.position,&local_114,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar7 != 0) {
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                             (local_114.y - (this_ptr->base).base.base.orient.vec.y);
        fVar11 = local_18 * _DAT_005e1044 * (float)_DAT_005e103c;
        afStack_34[2] = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar11;
        if (fVar11 < afStack_34[2]) {
          (this_ptr->base).player_input.turn_speed = afStack_34[2];
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        (this_ptr->base).player_input.action_state.walk = 1;
        iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        local_90 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar7 + 0x20);
        local_8c = (this_ptr->base).base.base.location.position.y - *(float *)(iVar7 + 0x24);
        local_88 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar7 + 0x28);
        local_78 = local_90;
        local_74[(uint)bVar10 * -2] = *(float *)((int)&CStack_a4 + ((uint)bVar10 * -2 + 5) * 4 + 4);
        local_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)((int)&CStack_a4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 6) * 4 + 4);
        if (afStack_dc + 7 != &local_78) {
          local_c0 = local_78;
          local_bc = local_74[0];
          local_b8 = local_74[1];
        }
        if ((float)_DAT_005e104c <
            SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc)) {
          (this_ptr->base).player_input.action_state.run = 1;
          return;
        }
      }
    }
    else {
      fVar11 = 9999.9;
      EVar2 = (this_ptr->base).ai_task;
      local_1c = (CEnemy *)0x0;
      if ((EVar2 == HERO_TASK_KILL) || (EVar2 == HERO_TASK_GUARD)) {
        local_1c = core_hero_cpp_CHero_closestEnemy_FUN_004ec350
                             (&this_ptr->base,(float *)&stack0xfffffe1c);
      }
      if ((local_1c == (CEnemy *)0x0) || ((float)_DAT_005e1054 <= fVar11)) {
        if (this_ptr->weapon_state_flags != 0) {
          pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             (&(this_ptr->base).base.model.base);
          if (pSVar6->state_index == 0) {
            (this_ptr->base).player_input.action_state.draw = 1;
            return;
          }
        }
      }
      else {
        if (this_ptr->weapon_state_flags == 0) {
          pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             (&(this_ptr->base).base.model.base);
          if (pSVar6->state_index == 0) {
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
        *(float *)((int)local_12c + (uint)bVar10 * -8 + 4) = local_134[(uint)bVar10 * -2];
        *(float *)((int)local_12c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             local_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(local_12c,local_6c);
        local_174 = local_6c[0].x;
        *(uint *)((int)&stack0xfffffe90 + (uint)bVar10 * -8) =
             *(uint *)((int)local_6c + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&stack0xfffffe94 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4) =
             *(uint *)((int)local_6c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                             (local_170 - (this_ptr->base).base.base.orient.vec.y);
        fVar11 = local_18 * _DAT_005e1044 * (float)_DAT_005e103c;
        afStack_34[3] = -local_20;
        (this_ptr->base).player_input.turn_speed = fVar11;
        if (fVar11 < afStack_34[3]) {
          (this_ptr->base).player_input.turn_speed = afStack_34[3];
        }
        if (local_20 < (this_ptr->base).player_input.turn_speed) {
          (this_ptr->base).player_input.turn_speed = local_20;
        }
        fVar11 = (this_ptr->base).player_input.turn_speed;
        dVar1 = (double)fVar11;
        if (((float)_DAT_005e105c < fVar11) && (dVar1 < _DAT_005e1064)) {
          (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                    ((CDemonActor *)this_ptr,SUB84(__BITCAST_UINT64(dVar1),0));
          puVar8 = (uint *)&stack0xfffffe70;
          puVar9 = &stack0xfffffe50;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          afStack_34[0] = fStack_1a8 + fStack_19c;
          afStack_34[1] = fStack_1a4 + local_198;
          afStack_34[2] = fStack_1a0 + fStack_194;
          fStack_154 = fStack_1a8 + fStack_19c;
          *(float *)((int)&stack0xfffffeb0 + (uint)bVar10 * -8) = afStack_34[(uint)bVar10 * -2 + 1];
          *(float *)((int)&stack0xfffffeb4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4) =
               afStack_34[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
          afStack_f4[0] = fStack_154 * _DAT_005e106c;
          afStack_f4[1] = fStack_150 * _DAT_005e106c;
          afStack_f4[2] = fStack_14c * _DAT_005e106c;
          afStack_dc[0] = fStack_154 * _DAT_005e106c;
          afStack_dc[(uint)bVar10 * -2 + 1] = afStack_f4[(uint)bVar10 * -2 + 1];
          afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2] =
               afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
          CStack_a4.y = (this_ptr->base).base.base.location.position.x + afStack_dc[0];
          CStack_a4.z = (this_ptr->base).base.base.location.position.y + afStack_dc[1];
          fStack_98 = (this_ptr->base).base.base.location.position.z + afStack_dc[2];
          fStack_148 = CStack_a4.y;
          *(uint *)(&stack0xfffffebc + (uint)bVar10 * -8) =
               *(uint *)((int)&CStack_a4 + ((uint)bVar10 * -2 + 1) * 4 + 4);
          *(uint *)((int)&CStack_140 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4) =
               *(uint *)
                ((int)&CStack_a4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 2) * 4 + 4);
          (*((pCStack_14->vtable)._ub)->getBoundingBox)(pCStack_14,out_box);
          puVar8 = (uint *)&stack0xfffffe30;
          puVar9 = (uint *)&stack0xfffffe40;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          fStack_e0 = fStack_1b8 + fStack_1ac;
          afStack_dc[0] = fStack_1b4 + fStack_1a8;
          afStack_dc[1] = local_1b0 + fStack_1a4;
          fStack_f8 = fStack_1b8 + fStack_1ac;
          afStack_f4[(uint)bVar10 * -2] = afStack_dc[(uint)bVar10 * -2];
          afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          local_170 = fStack_f8 * _DAT_005e106c;
          fStack_16c = afStack_f4[0] * _DAT_005e106c;
          local_168 = afStack_f4[1] * _DAT_005e106c;
          fStack_50 = fStack_f8 * _DAT_005e106c;
          afStack_4c[(uint)bVar10 * -2] = *(float *)((int)&stack0xfffffe94 + (uint)bVar10 * -8);
          afStack_4c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               *(float *)((int)&stack0xfffffe98 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4);
          local_134[0] = (unaff_EDI->location).position.x + fStack_50;
          local_134[1] = (unaff_EDI->location).position.y + afStack_4c[0];
          local_12c[0].x = (unaff_EDI->location).position.z + afStack_4c[1];
          CStack_44.x = local_134[0];
          *(float *)((int)&CStack_44 + (uint)bVar10 * -8 + 4) = local_134[(uint)bVar10 * -2 + 1];
          *(uint *)((int)&CStack_44 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4 + 8) =
               *(uint *)((int)local_12c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          fStack_38 = CStack_44.x - CStack_140.x;
          afStack_34[0] = CStack_44.y - CStack_140.y;
          afStack_34[1] = CStack_44.z - CStack_140.z;
          local_8c = CStack_44.x - CStack_140.x;
          *(float *)((int)&CStack_a4 + ((uint)bVar10 * -2 + 6) * 4 + 4) =
               afStack_34[(uint)bVar10 * -2];
          fVar5 = CStack_44.z;
          fVar4 = CStack_44.y;
          fVar11 = CStack_44.x;
          *(float *)((int)&CStack_a4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 7) * 4 + 4) =
               afStack_34[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          pCStack_14 = (CDemonActor *)
                       SQRT(fStack_84 * fStack_84 + local_8c * local_8c + local_88 * local_88);
          if ((float)pCStack_14 <= 0.0) {
            local_88 = 0.0;
            local_8c = 0.0;
            fStack_84 = 0.0;
          }
          else {
            fVar3 = 1.0 / (float)pCStack_14;
            local_8c = local_8c * fVar3;
            local_88 = local_88 * fVar3;
            fStack_84 = fStack_84 * fVar3;
          }
          local_74[0] = local_8c * _DAT_005e1070;
          local_74[1] = local_88 * _DAT_005e1070;
          local_6c[0].x = fStack_84 * _DAT_005e1070;
          local_c8 = local_8c * _DAT_005e1070;
          afStack_dc[(uint)bVar10 * -2 + 6] = local_74[(uint)bVar10 * -2 + 1];
          afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
               *(float *)((int)local_6c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          local_114.y = fVar11 + local_c8;
          local_114.z = fVar4 + local_c4;
          afStack_108[0] = fVar5 + local_c0;
          CStack_a4.x = fVar11 + local_c8;
          *(float *)((int)&CStack_a4 + (uint)bVar10 * -8 + 4) = afStack_108[(uint)bVar10 * -2 + -1];
          *(float *)((int)&CStack_a4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + 4) =
               afStack_108[(uint)bVar10 * -2 + (uint)bVar10 * -2];
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
