// Name: core_fire.cpp_CFireEffect_traceLaser_FUN_0049db20
// Address: 0049db20
// Address Range: [[0049db20, 0049e356]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_0049db20(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo laser_info,int recursion_depth)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_0049db20(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo laser_info,int recursion_depth)

{
  SLaserInfo laser_info_00;
  SLaserInfo laser_info_01;
  CCharacter *this_ptr_00;
  int iVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  SLaserInfo *pSVar5;
  byte bVar6;
  float10 fVar7;
  float afStackY_1148 [987];
  byte auVar8 [12];
  byte in_stack_fffffe30 [44];
  byte auVar9 [12];
  uint in_stack_fffffe5c;
  uint in_stack_fffffe60;
  uint in_stack_fffffe64;
  uint in_stack_fffffe68;
  uint in_stack_fffffe6c;
  uint uVar10;
  CDemonSet *pCVar11;
  uint uVar12;
  CDemonSet *pCVar13;
  uint uVar14;
  float fVar15;
  float local_168;
  CVector3f CStack_160;
  float local_154;
  float local_150 [4];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_124;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  CVector3f local_100;
  float local_f4;
  float local_f0 [4];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  CVector3f local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [5];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f local_64;
  CVector3f local_58;
  float fStack_4c;
  float afStack_48 [5];
  int local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  CDemonActor *local_20;
  float local_18;
  
  bVar6 = 0;
  if (recursion_depth < 3) {
    local_34 = recursion_depth + 1;
    while( true ) {
      uVar10 = 0x49db6b;
      pCVar11 = g_CDemonSetPtr;
      core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0
                (g_CDemonSetPtr,laser_info.laser_type,laser_info.color.r,laser_info.color.g,
                 laser_info.color.b);
      puVar3 = (uint *)((int)origin + (uint)bVar6 * -8 + 4);
      local_100.x = origin->x;
      *(uint *)((int)&local_100 + (uint)bVar6 * -8 + 4) = *puVar3;
      *(uint *)((int)&local_100 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           puVar3[(uint)bVar6 * -2 + 1];
      local_118 = local_100.x + direction->x;
      local_114 = local_100.y + direction->y;
      local_110 = local_100.z + direction->z;
      local_64.x = local_118;
      *(float *)((int)&local_64 + (uint)bVar6 * -8 + 4) = local_150[(uint)bVar6 * -2 + 0xf];
      pCVar13 = g_CDemonSetPtr;
      *(float *)((int)&local_64 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           local_150[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      uVar12 = 0x49dbcb;
      local_18 = (float)core_setcolid_cpp_FUN_00535ee0();
      if ((local_18 < 0.0) || (1.0 <= local_18)) {
        local_138 = -direction->y;
        local_134 = -direction->z;
        local_13c = -direction->x;
        local_d0.x = -direction->x;
        local_f0[(uint)bVar6 * -2 + 9] = local_150[(uint)bVar6 * -2 + 6];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             local_150[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        if (&local_58 != (CVector3f *)(local_f0 + 8)) {
          local_58.x = local_d0.x;
          local_58.y = local_d0.y;
          local_58.z = local_d0.z;
        }
        local_2c = SQRT(local_58.z * local_58.z + local_58.x * local_58.x + local_58.y * local_58.y)
        ;
        if (local_2c <= 0.0) {
          local_58.y = 0.0;
          local_58.x = 0.0;
          local_58.z = 0.0;
        }
        else {
          fVar15 = 1.0 / local_2c;
          local_58.x = local_58.x * fVar15;
          local_58.y = local_58.y * fVar15;
          local_58.z = local_58.z * fVar15;
        }
      }
      else {
        local_150[2] = direction->x * local_18;
        local_150[3] = direction->y * local_18;
        local_140 = direction->z * local_18;
        local_c4 = local_150[2];
        local_f0[(uint)bVar6 * -2 + 0xc] = local_150[(uint)bVar6 * -2 + 3];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             local_150[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        local_b8 = origin->x + local_c4;
        local_b4 = origin->y + local_c0;
        local_b0 = origin->z + local_bc;
        local_ac.x = local_b8;
        local_f0[(uint)bVar6 * -2 + 0x12] = local_f0[(uint)bVar6 * -2 + 0xf];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        if (&local_64 != (CVector3f *)(local_f0 + 0x11)) {
          local_64.x = local_ac.x;
          local_64.y = local_ac.y;
          local_64.z = local_ac.z;
        }
        if (&local_58 != &g_CDemonSetPtr->collision_normal) {
          local_58.x = (g_CDemonSetPtr->collision_normal).x;
          local_58.y = (g_CDemonSetPtr->collision_normal).y;
          local_58.z = (g_CDemonSetPtr->collision_normal).z;
        }
      }
      local_20 = g_CDemonSetPtr->collision_actor;
      laser_info.reflectivity = 0.0;
      laser_info.stored_angle = 0.0;
      laser_info.transparency = 0.0;
      if (g_CDemonSetPtr->collision_actor != (CDemonActor *)0x0) {
        core_actor_cpp_FUN_00408de0();
        local_f0[2] = afStack_84[2];
        local_f0[(uint)bVar6 * -2 + 3] = afStack_84[(uint)bVar6 * -2 + 3];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        if (&laser_info.local_origin != (CVector3f *)(local_f0 + 2)) {
          laser_info.local_origin.x = local_f0[2];
          laser_info.local_origin.y = local_f0[3];
          laser_info.local_origin.z = local_e0;
        }
        core_actor_cpp_FUN_00408de0();
        local_154 = local_124;
        local_150[(uint)bVar6 * -2] = local_150[(uint)bVar6 * -2 + 0xc];
        local_150[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             local_150[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        if (&laser_info.local_hit_position != (CVector3f *)&local_154) {
          laser_info.local_hit_position.x = local_154;
          laser_info.local_hit_position.y = local_150[0];
          laser_info.local_hit_position.z = local_150[1];
        }
        core_actor_cpp_FUN_00408d30();
        local_10c = local_130;
        local_150[(uint)bVar6 * -2 + 0x12] = local_150[(uint)bVar6 * -2 + 9];
        local_150[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             local_150[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        if (&laser_info.local_normal != (CVector3f *)(local_150 + 0x11)) {
          laser_info.local_normal.x = local_10c;
          laser_info.local_normal.y = local_108;
          laser_info.local_normal.z = local_104;
        }
        if ((recursion_depth == 0) && (laser_info.is_hero_weapon != 0)) {
          this_ptr_00 = (CCharacter *)
                        core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (local_20,g_CCharacterClassInfo.name_hash);
          if (this_ptr_00 != (CCharacter *)0x0) {
            iVar1 = (*(((this_ptr_00->base).vtable._uc)->_uc).isInvulnerable)(this_ptr_00);
            if (iVar1 != 0) {
              laser_info.color.b = recursion_depth;
              laser_info.color.g = 0xff;
              laser_info.color.r = 0xff;
            }
          }
        }
        pfVar4 = (float *)((int)direction + (uint)bVar6 * -8 + 4);
        local_f4 = direction->x;
        local_f0[(uint)bVar6 * -2] = *pfVar4;
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = pfVar4[(uint)bVar6 * -2 + 1];
        local_30 = SQRT(local_f0[1] * local_f0[1] + local_f4 * local_f4 + local_f0[0] * local_f0[0])
        ;
        if (local_30 <= 0.0) {
          local_f0[0] = 0.0;
          local_f4 = 0.0;
          local_f0[1] = 0.0;
        }
        else {
          fVar15 = 1.0 / local_30;
          local_f4 = local_f4 * fVar15;
          local_f0[0] = local_f0[0] * fVar15;
          local_f0[1] = local_f0[1] * fVar15;
        }
        fVar15 = local_f0[1] * direction->z + local_f4 * direction->x + local_f0[0] * direction->y;
        if ((float)_DAT_005d57f2 < fVar15) {
          if (fVar15 < 1.0) {
            fVar7 = (float10)fVar15;
            acos();
            fStack_24 = (float)fVar7;
          }
          else {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = 3.1415927;
        }
        laser_info.incidence_angle = fStack_24;
        pCVar13 = (CDemonSet *)0x49df37;
        (*((local_20->vtable)._ub)->onLaserHit)(local_20,&laser_info);
      }
      local_168 = 0.0;
      if (laser_info.is_damaging != 0) {
        local_168 = laser_info.intensity;
      }
      if (0.0 < laser_info.transparency) {
        fStack_28 = (local_58.z * direction->z +
                    local_58.x * direction->x + local_58.y * direction->y) * _DAT_005d57e6;
        fStack_dc = local_58.x * fStack_28;
        fStack_d8 = local_58.y * fStack_28;
        fStack_d4 = local_58.z * fStack_28;
        fStack_88 = local_58.x * fStack_28;
        afStack_84[(uint)bVar6 * -2] = local_f0[(uint)bVar6 * -2 + 6];
        afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        fStack_4c = fStack_88 - direction->x;
        afStack_48[0] = afStack_84[0] - direction->y;
        afStack_48[1] = afStack_84[1] - direction->z;
        CStack_160.x = fStack_4c;
        *(float *)((int)&CStack_160 + (uint)bVar6 * -8 + 4) = afStack_48[(uint)bVar6 * -2];
        *(float *)((int)&CStack_160 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        fStack_70 = -CStack_160.x;
        fStack_6c = -CStack_160.y;
        fStack_68 = -CStack_160.z;
        CStack_a0.x = -CStack_160.x;
        local_f0[(uint)bVar6 * -2 + 0x15] = afStack_84[(uint)bVar6 * -2 + 6];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
             afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        if (&CStack_160 != (CVector3f *)(local_f0 + 0x14)) {
          CStack_160.x = CStack_a0.x;
          CStack_160.y = CStack_a0.y;
          CStack_160.z = CStack_a0.z;
        }
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(g_CDemonSetPtr);
        fVar15 = 6.784602e-39;
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        pSVar5 = &laser_info;
        pfVar4 = (float *)&stack0xfffffe30;
        iVar1 = local_34;
        for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar4 = pSVar5->intensity;
          pSVar5 = (SLaserInfo *)((int)pSVar5 + (uint)bVar6 * -8 + 4);
          pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
        }
        laser_info_00.local_hit_position.x = (float)in_stack_fffffe5c;
        auVar8 = in_stack_fffffe30._12_12_;
        auVar9 = in_stack_fffffe30._32_12_;
        laser_info_00.intensity = (float)in_stack_fffffe30._0_4_;
        laser_info_00.beam_width = (float)in_stack_fffffe30._4_4_;
        laser_info_00.laser_type = in_stack_fffffe30._8_4_;
        laser_info_00.color.r = auVar8._0_4_;
        laser_info_00.color.g = auVar8._4_4_;
        laser_info_00.color.b = auVar8._8_4_;
        laser_info_00.is_hero_weapon = in_stack_fffffe30._24_4_;
        laser_info_00.is_damaging = in_stack_fffffe30._28_4_;
        laser_info_00.local_origin.x = (float)auVar9._0_4_;
        laser_info_00.local_origin.y = (float)auVar9._4_4_;
        laser_info_00.local_origin.z = (float)auVar9._8_4_;
        laser_info_00.local_hit_position.y = (float)in_stack_fffffe60;
        laser_info_00.local_hit_position.z = (float)in_stack_fffffe64;
        laser_info_00.local_normal.x = (float)in_stack_fffffe68;
        laser_info_00.local_normal.y = (float)in_stack_fffffe6c;
        laser_info_00.local_normal.z = (float)uVar10;
        laser_info_00.incidence_angle = (float)pCVar11;
        laser_info_00.reflectivity = (float)uVar12;
        laser_info_00.stored_angle = (float)pCVar13;
        laser_info_00.transparency = fVar15;
        core_fire_cpp_CFireEffect_traceLaser_FUN_0049db20
                  (this_ptr,&local_64,&CStack_160,laser_info_00,iVar1);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(g_CDemonSetPtr);
        local_168 = (1.0 - laser_info.transparency) * (float)_DAT_005d57ea * local_168;
      }
      if (laser_info.reflectivity <= 0.0) goto LAB_0049e1ac;
      if ((laser_info.reflectivity != 1.0) ||
         (laser_info.stored_angle != laser_info.incidence_angle)) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,local_20);
    }
    puVar3 = (uint *)((int)direction + (uint)bVar6 * -8 + 4);
    CStack_94.x = direction->x;
    *(uint *)((int)&CStack_94 + (uint)bVar6 * -8 + 4) = *puVar3;
    pCVar13 = g_CDemonSetPtr;
    *(uint *)((int)&CStack_94 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         puVar3[(uint)bVar6 * -2 + 1];
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(pCVar13);
    uVar14 = 0x49e164;
    pCVar13 = g_CDemonSetPtr;
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,local_20);
    iVar1 = recursion_depth + 1;
    pSVar5 = &laser_info;
    pfVar4 = (float *)&stack0xfffffe30;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = pSVar5->intensity;
      pSVar5 = (SLaserInfo *)((int)pSVar5 + (uint)bVar6 * -8 + 4);
      pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    }
    laser_info_01.local_hit_position.x = (float)in_stack_fffffe5c;
    auVar8 = in_stack_fffffe30._12_12_;
    auVar9 = in_stack_fffffe30._32_12_;
    laser_info_01.intensity = (float)in_stack_fffffe30._0_4_;
    laser_info_01.beam_width = (float)in_stack_fffffe30._4_4_;
    laser_info_01.laser_type = in_stack_fffffe30._8_4_;
    laser_info_01.color.r = auVar8._0_4_;
    laser_info_01.color.g = auVar8._4_4_;
    laser_info_01.color.b = auVar8._8_4_;
    laser_info_01.is_hero_weapon = in_stack_fffffe30._24_4_;
    laser_info_01.is_damaging = in_stack_fffffe30._28_4_;
    laser_info_01.local_origin.x = (float)auVar9._0_4_;
    laser_info_01.local_origin.y = (float)auVar9._4_4_;
    laser_info_01.local_origin.z = (float)auVar9._8_4_;
    laser_info_01.local_hit_position.y = (float)in_stack_fffffe60;
    laser_info_01.local_hit_position.z = (float)in_stack_fffffe64;
    laser_info_01.local_normal.x = (float)in_stack_fffffe68;
    laser_info_01.local_normal.y = (float)in_stack_fffffe6c;
    laser_info_01.local_normal.z = (float)uVar10;
    laser_info_01.incidence_angle = (float)pCVar11;
    laser_info_01.reflectivity = (float)uVar12;
    laser_info_01.stored_angle = (float)uVar14;
    laser_info_01.transparency = (float)pCVar13;
    core_fire_cpp_CFireEffect_traceLaser_FUN_0049db20
              (this_ptr,&local_64,&CStack_94,laser_info_01,iVar1);
    local_168 = (1.0 - laser_info.reflectivity) * (float)_DAT_005d57ea * local_168;
LAB_0049e1ac:
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_0049d770
              (this_ptr,&local_100,&local_64,laser_info.intensity,local_168,&local_58,
               laser_info.color.r,laser_info.color.g,laser_info.color.b,laser_info.beam_width);
  }
  return;
}
