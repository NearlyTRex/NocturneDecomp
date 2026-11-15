// Name: core_schngeis.cpp_FUN_005a3560
// Address: 005a3560
// Address Range: [[005a3560, 005a3b0a]]
// Convention: unknown
// Signature: void core_schngeis_cpp_FUN_005a3560(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_schngeis_cpp_FUN_005a3560(CDemonActor *param_1,float param_2)

{
  int *piVar1;
  CDemonActor_vtable *pCVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  SMotion *pSVar7;
  float fVar8;
  byte bVar9;
  float afStackY_117c [1010];
  CVector3f *pCVar10;
  CVector3f CStack_1a0;
  float fStack_194;
  float afStack_190 [2];
  CVector3f CStack_188;
  CVector3f CStack_17c;
  float fStack_170;
  float afStack_16c [2];
  CVector3f CStack_164;
  CVector3f CStack_158;
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [2];
  CVector3f CStack_104;
  float afStack_f8 [3];
  CVector3f CStack_ec;
  float fStack_e0;
  float afStack_dc [2];
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  uint uStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  uint uStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  int *piStack_20;
  float fStack_1c;
  CDeformableModelInstance *pCStack_14;
  
  bVar9 = 0;
  piVar1 = &param_1[0x62].particle_systems[2].stop_after_fade;
  iVar5 = core_muzzle_cpp_FUN_0059daa0(piVar1,"Death");
  if ((iVar5 == 0) ||
     (iVar5 = core_muzzle_cpp_FUN_0059daa0(piVar1,"Animation"), iVar5 == 0)) {
    (*(param_1->vtable)._ub[1].getCarrier)(param_1);
  }
  pCStack_14 = (CDeformableModelInstance *)(param_1 + 1);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (pCStack_14,(int)param_1[0x67].particle_systems[2].position.z,&CStack_d4);
  pCVar10 = &CStack_188;
  CStack_188.x = CStack_d4.x;
  *(uint *)((int)&CStack_188 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&CStack_d4 + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&CStack_188 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)&CStack_d4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(param_1,pCVar10,&CStack_c8);
  fStack_170 = CStack_c8.x;
  afStack_16c[(uint)bVar9 * -2] = *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4);
  afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (pCStack_14,(int)param_1[0x67].particle_systems[2].fade_current,&CStack_bc);
  pCVar10 = &CStack_17c;
  CStack_17c.x = CStack_bc.x;
  *(uint *)((int)&CStack_17c + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&CStack_bc + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&CStack_17c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)&CStack_bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(param_1,pCVar10,&CStack_ec);
  fStack_38 = CStack_ec.x;
  afStack_58[(uint)bVar9 * -2 + 9] = *(float *)((int)&CStack_ec + (uint)bVar9 * -8 + 4);
  afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       *(float *)((int)&CStack_ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  afStack_58[2] = fStack_38 - fStack_170;
  afStack_58[3] = fStack_34 - afStack_16c[0];
  fStack_48 = fStack_30 - afStack_16c[1];
  CStack_164.x = fStack_38 - fStack_170;
  *(float *)((int)&CStack_164 + (uint)bVar9 * -8 + 4) = afStack_58[(uint)bVar9 * -2 + 3];
  *(float *)((int)&CStack_164 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  fVar4 = fStack_170;
  fVar8 = SQRT(CStack_164.z * CStack_164.z +
               CStack_164.x * CStack_164.x + CStack_164.y * CStack_164.y);
  fStack_8c = CStack_164.x * _DAT_005f01ba;
  fStack_88 = CStack_164.y * _DAT_005f01ba;
  fStack_84 = CStack_164.z * _DAT_005f01ba;
  fStack_e0 = CStack_164.x * _DAT_005f01ba;
  afStack_dc[(uint)bVar9 * -2] = afStack_a0[(uint)bVar9 * -2 + 6];
  afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  afStack_a0[2] = fVar4 + fStack_e0;
  afStack_a0[3] = afStack_16c[0] + afStack_dc[0];
  fStack_90 = afStack_16c[1] + afStack_dc[1];
  CStack_140.x = fVar4 + fStack_e0;
  *(float *)((int)&CStack_140 + (uint)bVar9 * -8 + 4) = afStack_a0[(uint)bVar9 * -2 + 3];
  *(float *)((int)&CStack_140 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  fStack_1c = fVar8;
  if (fVar8 <= 0.0) {
    CStack_164.y = 0.0;
    CStack_164.x = 0.0;
    CStack_164.z = 0.0;
  }
  else {
    fVar8 = 1.0 / fVar8;
    CStack_164.x = CStack_164.x * fVar8;
    CStack_164.y = CStack_164.y * fVar8;
    CStack_164.z = CStack_164.z * fVar8;
  }
  CStack_134.x = 0.0;
  CStack_134.y = -1.0;
  CStack_134.z = 0.0;
  CStack_164.y = CStack_164.y * _DAT_005f01be;
  CStack_164.z = CStack_164.z * _DAT_005f01be;
  CStack_164.x = CStack_164.x * _DAT_005f01be;
  if (&CStack_164 != &CStack_134) {
    CStack_164.y = -1.0;
    CStack_164.z = 0.0;
    CStack_164.x = 0.0;
  }
  fStack_44 = param_1[0x65].particle_systems[3].fade_timer * param_2;
  fStack_40 = (float)param_1[0x65].particle_systems[3].stop_after_fade * param_2;
  fStack_3c = (float)param_1[0x65].particle_systems[3].standalone * param_2;
  fStack_128 = fStack_44;
  afStack_124[(uint)bVar9 * -2] = afStack_58[(uint)bVar9 * -2 + 6];
  afStack_124[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  fStack_194 = fStack_128 * _DAT_005f01c2;
  afStack_190[0] = afStack_124[0] * _DAT_005f01c2;
  afStack_190[1] = afStack_124[1] * _DAT_005f01c2;
  fStack_110 = fStack_128 * _DAT_005f01c2;
  afStack_10c[(uint)bVar9 * -2] = afStack_190[(uint)bVar9 * -2];
  afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  iVar5 = core_actor_cpp_randomChance_FUN_0040d060
                    (SQRT(afStack_10c[1] * afStack_10c[1] +
                          fStack_110 * fStack_110 + afStack_10c[0] * afStack_10c[0]) +
                     (float)_DAT_005f01c6);
  if (iVar5 != 0) {
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
              (g_CGorePtr,&CStack_140,&CStack_164,BLOOD_TYPE_ICHOR);
  }
  iVar6 = *(int *)&param_1[0x67].particle_systems[2].field_0x20 + -1;
  iVar5 = param_1[0x67].particle_systems[2].next_particle;
  *(int *)&param_1[0x67].particle_systems[2].field_0x20 = iVar6;
  if ((iVar5 != 0) && (iVar6 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    CStack_1a0.z = 2.0;
    CStack_1a0.x = 0.0;
    CStack_1a0.y = -0.5;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(param_1,&CStack_1a0,&CStack_b0);
    CStack_74.x = CStack_b0.x;
    *(uint *)((int)&CStack_74 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    CStack_158.x = 0.0;
    CStack_158.z = 0.5;
    CStack_158.y = 0.2;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&CStack_158,
               (CMatrix3x4f *)
               (param_1[6].footstep_sound_code +
               (int)param_1[0x67].particle_systems[2].position.z * 0x30 + -0x24),&CStack_11c);
    pCVar10 = &CStack_14c;
    CStack_14c.x = CStack_11c.x;
    *(uint *)((int)&CStack_14c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_11c + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_14c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&CStack_11c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(param_1,pCVar10,&CStack_104);
    iVar5 = 0x4000;
    pCVar10 = &CStack_74;
    fVar8 = 1.5;
    CStack_80.x = CStack_104.x;
    *(float *)((int)&CStack_80 + (uint)bVar9 * -8 + 4) = afStack_f8[(uint)bVar9 * -2 + -2];
    *(float *)((int)&CStack_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_f8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -1];
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
              (0x01C3DEB4,&CStack_80,fVar8,pCVar10,iVar5);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  }
  if (*(int *)&param_1[0x67].particle_systems[2].field_0x20 == 0) {
    *(uint *)&param_1[0x67].particle_systems[2].field_0x20 = 2;
  }
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     ((CMotionController *)(param_1 + 1));
  if (pSVar7->state_index == 0) {
    if (param_1[0x67].create_event[0x5d] == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050((uint)param_1[0x67].particle_systems[2].position.x);
    }
    else {
      pvVar3 = (void *)((float)param_1[0x67].particle_systems[1].particles - param_2);
      param_1[0x67].particle_systems[1].particles = pvVar3;
      if ((float)pvVar3 <= 0.0) {
        pCVar2 = (param_1->vtable)._ub;
        param_1[0x67].particle_systems[1].particles = param_1[0x67].particle_systems[1].vtable;
        fVar8 = (float)(*pCVar2->playSound)(param_1,param_1[0x67].create_event + 0x5d);
        param_1[0x67].particle_systems[2].position.x = fVar8;
      }
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050((uint)param_1[0x67].particle_systems[2].position.x);
  }
  if (param_1[0x62].particle_systems[0].particles != (void *)0x0) {
    piStack_20 = &param_1[0x62].particle_systems[2].stop_after_fade;
    iVar5 = core_muzzle_cpp_FUN_0059daa0(piStack_20,"Chasing");
    if ((((iVar5 != 0) &&
         (pvVar3 = param_1[0x62].particle_systems[0].particles,
         fVar8 = (param_1->location).position.x - *(float *)((int)pvVar3 + 0x20),
         fVar4 = (param_1->location).position.z - *(float *)((int)pvVar3 + 0x28),
         fStack_24 = SQRT(fVar4 * fVar4 + fVar8 * fVar8), _DAT_005ff350 < fStack_24)) &&
        (fStack_24 <= _DAT_005ff354)) &&
       (pCStack_14 = (CDeformableModelInstance *)
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0),
       (float)_DAT_005f01ce < (float)pCStack_14)) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                (param_1,(CVector3f *)((int)param_1[0x62].particle_systems[0].particles + 0x20),
                 &CStack_68);
      afStack_f8[0] = CStack_68.x;
      afStack_f8[(uint)bVar9 * -2 + 1] = *(float *)((int)&CStack_68 + (uint)bVar9 * -8 + 4);
      afStack_f8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 2] =
           *(float *)((int)&CStack_68 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      afStack_f8[1] = 0.0;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_f8);
      uStack_5c = uStack_a4;
      afStack_58[(uint)bVar9 * -2] = afStack_a0[(uint)bVar9 * -2];
      afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if (ABS(afStack_58[0]) < (float)_DAT_005f01d6) {
        core_muzzle_cpp_FUN_0059d8e0(piStack_20,"LeapAttack");
        return;
      }
    }
  }
  return;
}
