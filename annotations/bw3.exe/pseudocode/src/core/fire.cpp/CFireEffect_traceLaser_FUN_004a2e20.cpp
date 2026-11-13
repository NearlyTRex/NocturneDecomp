// Name: core_fire.cpp_CFireEffect_traceLaser_FUN_004a2e20
// Address: 004a2e20
// Address Range: [[004a2e20, 004a36df]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_004a2e20(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo laser_info,int recursion_depth)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_004a2e20(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo laser_info,int recursion_depth)

{
  SLaserInfo laser_info_00;
  SLaserInfo laser_info_01;
  int iVar1;
  CCharacter *pCVar2;
  int iVar3;
  uint *puVar4;
  SLaserInfo *pSVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_1148 [987];
  byte auVar9 [12];
  byte in_stack_fffffe30 [44];
  byte auVar10 [12];
  uint in_stack_fffffe5c;
  uint in_stack_fffffe60;
  uint in_stack_fffffe64;
  uint in_stack_fffffe68;
  uint in_stack_fffffe6c;
  uint uVar11;
  CDemonSet *pCVar12;
  uint uVar13;
  uint uVar14;
  CDemonSet *pCVar15;
  float fVar16;
  float local_168;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_124;
  float local_120;
  float local_11c;
  CVector3f local_118;
  float local_10c;
  float afStack_108 [4];
  float local_f8;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  float local_b8;
  float local_b4 [4];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float afStack_78 [4];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_30;
  uint local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  CDemonActor *local_18;
  float local_14;
  
  bVar7 = 0;
  if (recursion_depth < 3) {
    local_30 = recursion_depth + 1;
    while( true ) {
      uVar11 = 0x4a2e6b;
      pCVar12 = g_CDemonSetPtr;
      core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0
                (g_CDemonSetPtr,laser_info.laser_type,laser_info.color.r,laser_info.color.g,
                 laser_info.color.b);
      puVar4 = (uint *)((int)origin + (uint)bVar7 * -8 + 4);
      local_e8.x = origin->x;
      *(uint *)((int)&local_e8 + (uint)bVar7 * -8 + 4) = *puVar4;
      *(uint *)((int)&local_e8 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8) =
           puVar4[(uint)bVar7 * -2 + 1];
      afStack_108[2] = local_e8.x + direction->x;
      afStack_108[3] = local_e8.y + direction->y;
      local_f8 = local_e8.z + direction->z;
      local_c4.x = afStack_108[2];
      *(float *)((int)&local_c4 + (uint)bVar7 * -8 + 4) = afStack_108[(uint)bVar7 * -2 + 3];
      pCVar15 = g_CDemonSetPtr;
      *(float *)((int)&local_c4 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8) =
           afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      uVar13 = 0x4a2edd;
      local_14 = (float)core_setcolid_cpp_FUN_0053ccc0();
      if ((local_14 < 0.0) || (1.0 <= local_14)) {
        local_54 = -direction->y;
        local_50 = -direction->z;
        local_58 = -direction->x;
        local_d0.x = -direction->x;
        *(float *)((int)&local_d0 + (uint)bVar7 * -8 + 4) = afStack_78[(uint)bVar7 * -2 + 9];
        *(float *)((int)&local_d0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4 + 4) =
             afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
        if (&local_f4 != &local_d0) {
          local_f4.x = local_d0.x;
          local_f4.y = local_d0.y;
          local_f4.z = local_d0.z;
        }
        local_28 = SQRT(local_f4.z * local_f4.z + local_f4.x * local_f4.x + local_f4.y * local_f4.y)
        ;
        if (local_28 <= 0.0) {
          local_f4.y = 0.0;
          local_f4.x = 0.0;
          local_f4.z = 0.0;
        }
        else {
          fVar16 = 1.0 / local_28;
          local_f4.x = local_f4.x * fVar16;
          local_f4.y = local_f4.y * fVar16;
          local_f4.z = local_f4.z * fVar16;
        }
      }
      else {
        local_a0 = direction->x * local_14;
        local_9c = direction->y * local_14;
        local_98 = direction->z * local_14;
        local_64 = local_a0;
        afStack_78[(uint)bVar7 * -2 + 6] = local_b4[(uint)bVar7 * -2 + 6];
        afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             local_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        afStack_78[2] = origin->x + local_64;
        afStack_78[3] = origin->y + local_60;
        local_68 = origin->z + local_5c;
        local_118.x = afStack_78[2];
        *(float *)((int)&local_118 + (uint)bVar7 * -8 + 4) = afStack_78[(uint)bVar7 * -2 + 3];
        *(float *)((int)&local_118 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8) =
             afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        if (&local_c4 != &local_118) {
          local_c4.x = local_118.x;
          local_c4.y = local_118.y;
          local_c4.z = local_118.z;
        }
        if (&local_f4 != &g_CDemonSetPtr->collision_normal) {
          local_f4.x = (g_CDemonSetPtr->collision_normal).x;
          local_f4.y = (g_CDemonSetPtr->collision_normal).y;
          local_f4.z = (g_CDemonSetPtr->collision_normal).z;
        }
      }
      local_18 = g_CDemonSetPtr->collision_actor;
      iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      local_2c = *(uint *)(iVar1 + 0x20b8c);
      *(uint *)(iVar1 + 0x20b8c) = 0;
      laser_info.reflectivity = 0.0;
      laser_info.stored_angle = 0.0;
      laser_info.transparency = 0.0;
      if (local_18 != (CDemonActor *)0x0) {
        core_actor_cpp_FUN_00408bf0();
        local_124 = local_7c;
        (&stack0xfffffee0)[(uint)bVar7 * 0xfffffffe] = afStack_78[(uint)bVar7 * -2];
        (&stack0xfffffee0)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        if (&laser_info.local_origin != (CVector3f *)&stack0xfffffedc) {
          laser_info.local_origin.x = local_124;
          laser_info.local_origin.y = local_120;
          laser_info.local_origin.z = local_11c;
        }
        core_actor_cpp_FUN_00408bf0();
        local_154 = local_130;
        (&stack0xfffffeb0)[(uint)bVar7 * 0xfffffffe] = (&stack0xfffffec8)[(uint)bVar7 * -2 + 3];
        (&stack0xfffffeb0)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             (&stack0xfffffec8)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        if (&laser_info.local_hit_position != (CVector3f *)&stack0xfffffeac) {
          laser_info.local_hit_position.x = local_154;
          laser_info.local_hit_position.y = local_150;
          laser_info.local_hit_position.z = local_14c;
        }
        core_actor_cpp_FUN_00408b40();
        local_13c = local_10c;
        (&stack0xfffffec8)[(uint)bVar7 * 0xfffffffe] = afStack_108[(uint)bVar7 * -2];
        (&stack0xfffffec8)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        if (&laser_info.local_normal != (CVector3f *)&stack0xfffffec4) {
          laser_info.local_normal.x = local_13c;
          laser_info.local_normal.y = local_138;
          laser_info.local_normal.z = local_134;
        }
        if ((((recursion_depth == 0) && (laser_info.is_hero_weapon != 0)) &&
            (pCVar2 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (local_18,g_CCharacterClassInfo.name_hash),
            pCVar2 != (CCharacter *)0x0)) &&
           (iVar1 = (*(((pCVar2->base).vtable._uc)->_uc).isInvulnerable)(pCVar2), iVar1 != 0)) {
          laser_info.color.b = recursion_depth;
          laser_info.color.g = 0xff;
          laser_info.color.r = 0xff;
        }
        pCVar2 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840(local_18,g_CEnemyClassInfo.name_hash);
        if ((pCVar2 != (CCharacter *)0x0) &&
           (iVar3 = (*(((pCVar2->base).vtable._uc)->_uc).isInvulnerable)(pCVar2),
           iVar1 = _DAT_01d5ba14, iVar3 == 0)) {
          *(CCharacter **)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b8c) = pCVar2;
          iVar1 = *(int *)(iVar1 * 4 + 0x1d5ba04);
          if (local_28 == *(float *)(iVar1 + 0x20b8c)) {
            return;
          }
          *(uint *)(iVar1 + 0x20b90) = 0;
          return;
        }
        puVar4 = (uint *)((int)direction + (uint)bVar7 * -8 + 4);
        fStack_148 = direction->x;
        (&stack0xfffffeb0)[(uint)bVar7 * -2 + 3] = (float)*puVar4;
        (&stack0xfffffeb0)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             (float)puVar4[(uint)bVar7 * -2 + 1];
        fStack_24 = SQRT(fStack_140 * fStack_140 + fStack_148 * fStack_148 + fStack_144 * fStack_144
                        );
        if (fStack_24 <= 0.0) {
          fStack_144 = 0.0;
          fStack_148 = 0.0;
          fStack_140 = 0.0;
        }
        else {
          fVar16 = 1.0 / fStack_24;
          fStack_148 = fStack_148 * fVar16;
          fStack_144 = fStack_144 * fVar16;
          fStack_140 = fStack_140 * fVar16;
        }
        fVar16 = fStack_140 * direction->z + fStack_148 * direction->x + fStack_144 * direction->y;
        if ((float)_DAT_005c09f0 < fVar16) {
          if (fVar16 < 1.0) {
            fVar8 = (float10)fVar16;
            acos();
            fStack_1c = (float)fVar8;
          }
          else {
            fStack_1c = 0.0;
          }
        }
        else {
          fStack_1c = 3.1415927;
        }
        laser_info.incidence_angle = fStack_1c;
        pCVar15 = (CDemonSet *)0x4a363f;
        (*((local_18->vtable)._ub)->onLaserHit)(local_18,&laser_info);
      }
      local_168 = 0.0;
      if (laser_info.is_damaging != 0) {
        local_168 = laser_info.intensity;
      }
      if (0.0 < laser_info.transparency) {
        local_20 = (local_f4.z * direction->z +
                   local_f4.x * direction->x + local_f4.y * direction->y) * _DAT_005c09e4;
        fVar16 = local_f4.x * local_20;
        local_b8 = fVar16;
        local_b4[0] = local_f4.y * local_20;
        local_b4[1] = local_f4.z * local_20;
        *(float *)((int)&stack0xfffffea4 + (uint)bVar7 * -8) = local_b4[(uint)bVar7 * -2];
        *(float *)((int)&stack0xfffffea8 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
             local_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        local_b4[2] = fVar16 - direction->x;
        local_b4[3] = local_15c - direction->y;
        local_a4 = local_158 - direction->z;
        local_dc.x = local_b4[2];
        *(float *)((int)&local_dc + (uint)bVar7 * -8 + 4) = local_b4[(uint)bVar7 * -2 + 3];
        *(float *)((int)&local_dc + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8) =
             local_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        local_4c = -local_dc.x;
        local_48 = -local_dc.y;
        local_44 = -local_dc.z;
        local_94.x = -local_dc.x;
        local_b4[(uint)bVar7 * -2 + 9] = afStack_78[(uint)bVar7 * -2 + 0xc];
        local_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        if (&local_dc != (CVector3f *)(local_b4 + 8)) {
          local_dc.x = local_94.x;
          local_dc.y = local_94.y;
          local_dc.z = local_94.z;
        }
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(g_CDemonSetPtr);
        fVar16 = 6.813704e-39;
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
        pSVar5 = &laser_info;
        pfVar6 = (float *)&stack0xfffffe30;
        iVar1 = local_30;
        for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = pSVar5->intensity;
          pSVar5 = (SLaserInfo *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
          pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
        }
        laser_info_00.local_hit_position.x = (float)in_stack_fffffe5c;
        auVar9 = in_stack_fffffe30._12_12_;
        auVar10 = in_stack_fffffe30._32_12_;
        laser_info_00.intensity = (float)in_stack_fffffe30._0_4_;
        laser_info_00.beam_width = (float)in_stack_fffffe30._4_4_;
        laser_info_00.laser_type = in_stack_fffffe30._8_4_;
        laser_info_00.color.r = auVar9._0_4_;
        laser_info_00.color.g = auVar9._4_4_;
        laser_info_00.color.b = auVar9._8_4_;
        laser_info_00.is_hero_weapon = in_stack_fffffe30._24_4_;
        laser_info_00.is_damaging = in_stack_fffffe30._28_4_;
        laser_info_00.local_origin.x = (float)auVar10._0_4_;
        laser_info_00.local_origin.y = (float)auVar10._4_4_;
        laser_info_00.local_origin.z = (float)auVar10._8_4_;
        laser_info_00.local_hit_position.y = (float)in_stack_fffffe60;
        laser_info_00.local_hit_position.z = (float)in_stack_fffffe64;
        laser_info_00.local_normal.x = (float)in_stack_fffffe68;
        laser_info_00.local_normal.y = (float)in_stack_fffffe6c;
        laser_info_00.local_normal.z = (float)uVar11;
        laser_info_00.incidence_angle = (float)pCVar12;
        laser_info_00.reflectivity = (float)uVar13;
        laser_info_00.stored_angle = (float)pCVar15;
        laser_info_00.transparency = fVar16;
        core_fire_cpp_CFireEffect_traceLaser_FUN_004a2e20
                  (this_ptr,&local_c4,&local_dc,laser_info_00,iVar1);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(g_CDemonSetPtr);
        local_168 = (1.0 - laser_info.transparency) * (float)_DAT_005c09e8 * local_168;
      }
      if (laser_info.reflectivity <= 0.0) goto LAB_004a32cf;
      if ((laser_info.reflectivity != 1.0) ||
         (laser_info.stored_angle != laser_info.incidence_angle)) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,local_18);
    }
    puVar4 = (uint *)((int)direction + (uint)bVar7 * -8 + 4);
    local_88.x = direction->x;
    *(uint *)((int)&local_88 + (uint)bVar7 * -8 + 4) = *puVar4;
    pCVar15 = g_CDemonSetPtr;
    *(uint *)((int)&local_88 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         puVar4[(uint)bVar7 * -2 + 1];
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(pCVar15);
    uVar14 = 0x4a3287;
    pCVar15 = g_CDemonSetPtr;
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,local_18);
    iVar1 = recursion_depth + 1;
    pSVar5 = &laser_info;
    pfVar6 = (float *)&stack0xfffffe30;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = pSVar5->intensity;
      pSVar5 = (SLaserInfo *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
      pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
    }
    laser_info_01.local_hit_position.x = (float)in_stack_fffffe5c;
    auVar9 = in_stack_fffffe30._12_12_;
    auVar10 = in_stack_fffffe30._32_12_;
    laser_info_01.intensity = (float)in_stack_fffffe30._0_4_;
    laser_info_01.beam_width = (float)in_stack_fffffe30._4_4_;
    laser_info_01.laser_type = in_stack_fffffe30._8_4_;
    laser_info_01.color.r = auVar9._0_4_;
    laser_info_01.color.g = auVar9._4_4_;
    laser_info_01.color.b = auVar9._8_4_;
    laser_info_01.is_hero_weapon = in_stack_fffffe30._24_4_;
    laser_info_01.is_damaging = in_stack_fffffe30._28_4_;
    laser_info_01.local_origin.x = (float)auVar10._0_4_;
    laser_info_01.local_origin.y = (float)auVar10._4_4_;
    laser_info_01.local_origin.z = (float)auVar10._8_4_;
    laser_info_01.local_hit_position.y = (float)in_stack_fffffe60;
    laser_info_01.local_hit_position.z = (float)in_stack_fffffe64;
    laser_info_01.local_normal.x = (float)in_stack_fffffe68;
    laser_info_01.local_normal.y = (float)in_stack_fffffe6c;
    laser_info_01.local_normal.z = (float)uVar11;
    laser_info_01.incidence_angle = (float)pCVar12;
    laser_info_01.reflectivity = (float)uVar13;
    laser_info_01.stored_angle = (float)uVar14;
    laser_info_01.transparency = (float)pCVar15;
    core_fire_cpp_CFireEffect_traceLaser_FUN_004a2e20
              (this_ptr,&local_c4,&local_88,laser_info_01,iVar1);
    local_168 = (1.0 - laser_info.reflectivity) * (float)_DAT_005c09e8 * local_168;
LAB_004a32cf:
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_004a2aa0
              (this_ptr,&local_e8,&local_c4,laser_info.intensity,local_168,&local_f4,
               laser_info.color.r,laser_info.color.g,laser_info.color.b,laser_info.beam_width);
  }
  return;
}
