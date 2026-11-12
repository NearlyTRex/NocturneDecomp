// Name: core_gabriela.cpp_FUN_004aeb00
// Address: 004aeb00
// Address Range: [[004aeb00, 004af3ae]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004aeb00(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004aeb00(CDemonActor *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint *puVar6;
  CDemonActor *unaff_EDI;
  uint *puVar7;
  byte bVar8;
  float afStackY_115c [983];
  CBoundingBox3D *out_box;
  float fVar9;
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
  uint local_174;
  float local_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float local_160;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
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
  float fStack_a4;
  float afStack_a0 [4];
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_78;
  float local_74 [9];
  float fStack_50;
  float afStack_4c [4];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_20;
  int local_1c;
  float local_18;
  CDemonActor *pCStack_14;
  
  bVar8 = 0;
  local_20 = 0.25;
  memset(&param_1[0x62].particle_systems[0].fade_duration,0,0x34);
  if (*(int *)(param_1[0xdd].create_event + 0x5c) != 0) {
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_168 = (param_1->location).position.x - *(float *)(iVar5 + 0x20);
    local_164 = (param_1->location).position.y - *(float *)(iVar5 + 0x24);
    local_160 = (param_1->location).position.z - *(float *)(iVar5 + 0x28);
    local_cc = local_168;
    afStack_dc[(uint)bVar8 * -2 + 5] =
         *(float *)((int)&stack0xfffffea0 + ((uint)bVar8 * -2 + -1) * 4);
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6] =
         *(float *)((int)&stack0xfffffea0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4);
    out_box = (CBoundingBox3D *)
              SQRT(local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8);
    if (*(int *)(param_1[0xdd].create_event + 0x5c) == 3) {
      out_box = (CBoundingBox3D *)0x0;
    }
    if ((float)_DAT_005d6fc3 <= (float)out_box) {
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        ((CPathMap *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x10a9c),
                         &(param_1->location).position,&local_114,param_1->direction_hint);
      if (iVar5 != 0) {
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_114.y - (param_1->orient).vec.y);
        fVar9 = local_18 * _DAT_005d6fcb * (float)_DAT_005d6fc3;
        local_2c = -local_20;
        param_1[0x62].particle_systems[1].active = (int)fVar9;
        if (fVar9 < local_2c) {
          param_1[0x62].particle_systems[1].active = (int)local_2c;
        }
        if (local_20 < (float)param_1[0x62].particle_systems[1].active) {
          param_1[0x62].particle_systems[1].active = (int)local_20;
        }
        param_1[0x62].particle_systems[0].fade_duration = 1.4013e-45;
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        local_90 = (param_1->location).position.x - *(float *)(iVar5 + 0x20);
        local_8c = (param_1->location).position.y - *(float *)(iVar5 + 0x24);
        local_88 = (param_1->location).position.z - *(float *)(iVar5 + 0x28);
        local_78 = local_90;
        local_74[(uint)bVar8 * -2] = afStack_a0[(uint)bVar8 * -2 + 5];
        local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6];
        if (afStack_dc + 7 != afStack_a0 + 10) {
          local_c0 = local_78;
          local_bc = local_74[0];
          local_b8 = local_74[1];
        }
        if ((float)_DAT_005d6fd3 <
            SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc)) {
          param_1[0x62].particle_systems[0].stop_after_fade = 1;
          return;
        }
      }
    }
    else {
      fVar9 = 9999.9;
      local_1c = 0;
      if ((*(int *)(param_1[0xdd].create_event + 0x5c) == 2) ||
         (*(int *)(param_1[0xdd].create_event + 0x5c) == 3)) {
        local_1c = core_hero_cpp_FUN_004d00c0(param_1,&stack0xfffffe1c);
      }
      if ((local_1c == 0) || ((float)_DAT_005d6fdb <= fVar9)) {
        if (param_1[0xdd].standing_platform != (CPlatform *)0x0) {
          iVar5 = core_motion_cpp_FUN_005035c0(param_1 + 1);
          if (*(int *)(iVar5 + 0x24) == 0) {
            param_1[0x62].particle_systems[1].position.x = 1.4013e-45;
            return;
          }
        }
      }
      else {
        if (param_1[0xdd].standing_platform == (CPlatform *)0x0) {
          iVar5 = core_motion_cpp_FUN_005035c0(param_1 + 1);
          if (*(int *)(iVar5 + 0x24) == 0) {
            param_1[0x62].particle_systems[1].position.x = 1.4013e-45;
          }
        }
        local_138 = *(float *)(local_1c + 0x20) - (param_1->location).position.x;
        local_134 = *(float *)(local_1c + 0x24) - (param_1->location).position.y;
        local_130 = *(float *)(local_1c + 0x28) - (param_1->location).position.z;
        local_12c = local_138;
        (&stack0xfffffed4)[(uint)bVar8 * -2 + 1] =
             (float)*(uint *)((int)&stack0xfffffecc + (uint)bVar8 * -8);
        (&stack0xfffffed4)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2] =
             (float)*(uint *)
                     ((int)&stack0xfffffed0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xfffffed4);
        local_174 = local_74[2];
        *(float *)((int)&stack0xfffffe90 + (uint)bVar8 * -8) = local_74[(uint)bVar8 * -2 + 3];
        *(float *)((int)&stack0xfffffe94 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4) =
             local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (local_170 - (param_1->orient).vec.y);
        fVar9 = local_18 * _DAT_005d6fcb * (float)_DAT_005d6fc3;
        local_28 = -local_20;
        param_1[0x62].particle_systems[1].active = (int)fVar9;
        if (fVar9 < local_28) {
          param_1[0x62].particle_systems[1].active = (int)local_28;
        }
        if (local_20 < (float)param_1[0x62].particle_systems[1].active) {
          param_1[0x62].particle_systems[1].active = (int)local_20;
        }
        fVar9 = (float)param_1[0x62].particle_systems[1].active;
        dVar1 = (double)fVar9;
        if (((float)_DAT_005d6fe3 < fVar9) && (dVar1 < _DAT_005d6feb)) {
          (*((param_1->vtable)._ub)->getBoundingBox)(param_1,SUB84(__BITCAST_UINT64(dVar1),0));
          puVar6 = (uint *)&stack0xfffffe70;
          puVar7 = &stack0xfffffe50;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          fStack_34 = fStack_1a8 + fStack_19c;
          fStack_30 = fStack_1a4 + local_198;
          local_2c = fStack_1a0 + fStack_194;
          fStack_154 = fStack_1a8 + fStack_19c;
          *(float *)((int)&stack0xfffffeb0 + (uint)bVar8 * -8) = afStack_4c[(uint)bVar8 * -2 + 7];
          *(float *)((int)&stack0xfffffeb4 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4) =
               afStack_4c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 8];
          afStack_f4[0] = fStack_154 * _DAT_005d6ff3;
          afStack_f4[1] = fStack_150 * _DAT_005d6ff3;
          afStack_f4[2] = fStack_14c * _DAT_005d6ff3;
          afStack_dc[0] = fStack_154 * _DAT_005d6ff3;
          afStack_dc[(uint)bVar8 * -2 + 1] = afStack_f4[(uint)bVar8 * -2 + 1];
          afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2] =
               afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
          afStack_a0[0] = (param_1->location).position.x + afStack_dc[0];
          afStack_a0[1] = (param_1->location).position.y + afStack_dc[1];
          afStack_a0[2] = (param_1->location).position.z + afStack_dc[2];
          fStack_148 = afStack_a0[0];
          *(float *)(&stack0xfffffebc + (uint)bVar8 * -8) = afStack_a0[(uint)bVar8 * -2 + 1];
          *(float *)((int)&stack0xfffffec0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4) =
               afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
          (*((pCStack_14->vtable)._ub)->getBoundingBox)(pCStack_14,out_box);
          puVar6 = (uint *)&stack0xfffffe30;
          puVar7 = (uint *)&stack0xfffffe40;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          fStack_e0 = fStack_1b8 + fStack_1ac;
          afStack_dc[0] = fStack_1b4 + fStack_1a8;
          afStack_dc[1] = local_1b0 + fStack_1a4;
          fStack_f8 = fStack_1b8 + fStack_1ac;
          afStack_f4[(uint)bVar8 * -2] = afStack_dc[(uint)bVar8 * -2];
          afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          local_170 = fStack_f8 * _DAT_005d6ff3;
          fStack_16c = afStack_f4[0] * _DAT_005d6ff3;
          local_168 = afStack_f4[1] * _DAT_005d6ff3;
          fStack_50 = fStack_f8 * _DAT_005d6ff3;
          afStack_4c[(uint)bVar8 * -2] = *(float *)((int)&stack0xfffffe94 + (uint)bVar8 * -8);
          afStack_4c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)&stack0xfffffe98 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4);
          local_134 = (unaff_EDI->location).position.x + fStack_50;
          local_130 = (unaff_EDI->location).position.y + afStack_4c[0];
          local_12c = (unaff_EDI->location).position.z + afStack_4c[1];
          afStack_4c[2] = local_134;
          afStack_4c[(uint)bVar8 * -2 + 3] = *(float *)((int)&stack0xfffffed0 + (uint)bVar8 * -8);
          afStack_4c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               (&stack0xfffffed4)[(uint)bVar8 * -2 + (uint)bVar8 * -2];
          fStack_38 = afStack_4c[2] - fStack_140;
          fStack_34 = afStack_4c[3] - fStack_13c;
          fStack_30 = fStack_3c - local_138;
          local_8c = afStack_4c[2] - fStack_140;
          afStack_a0[(uint)bVar8 * -2 + 6] = afStack_4c[(uint)bVar8 * -2 + 6];
          fVar4 = fStack_3c;
          fVar3 = afStack_4c[3];
          fVar9 = afStack_4c[2];
          afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_4c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
          pCStack_14 = (CDemonActor *)
                       SQRT(fStack_84 * fStack_84 + local_8c * local_8c + local_88 * local_88);
          if ((float)pCStack_14 <= 0.0) {
            local_88 = 0.0;
            local_8c = 0.0;
            fStack_84 = 0.0;
          }
          else {
            fVar2 = 1.0 / (float)pCStack_14;
            local_8c = local_8c * fVar2;
            local_88 = local_88 * fVar2;
            fStack_84 = fStack_84 * fVar2;
          }
          local_74[0] = local_8c * _DAT_005d6ff7;
          local_74[1] = local_88 * _DAT_005d6ff7;
          local_74[2] = fStack_84 * _DAT_005d6ff7;
          local_c8 = local_8c * _DAT_005d6ff7;
          afStack_dc[(uint)bVar8 * -2 + 6] = local_74[(uint)bVar8 * -2 + 1];
          afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
          local_114.y = fVar9 + local_c8;
          local_114.z = fVar3 + local_c4;
          afStack_108[0] = fVar4 + local_c0;
          fStack_a4 = fVar9 + local_c8;
          afStack_a0[(uint)bVar8 * -2] = afStack_108[(uint)bVar8 * -2 + -1];
          afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_108[(uint)bVar8 * -2 + (uint)bVar8 * -2];
          if (afStack_4c + 2 != &fStack_a4) {
            afStack_4c[2] = fStack_a4;
            afStack_4c[3] = afStack_a0[0];
            fStack_3c = afStack_a0[1];
          }
          core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
          g_CDemonSetPtr->collision_actor = (CDemonActor *)0x0;
          core_setcolid_cpp_FUN_00535ee0();
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
          if (unaff_EDI == g_CDemonSetPtr->collision_actor) {
            param_1[0x62].particle_systems[0].standalone = 1;
            return;
          }
        }
      }
    }
  }
  return;
}
