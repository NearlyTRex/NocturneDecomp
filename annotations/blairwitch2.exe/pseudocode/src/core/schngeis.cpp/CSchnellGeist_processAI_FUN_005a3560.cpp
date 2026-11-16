// Name: core_schngeis.cpp_CSchnellGeist_processAI_FUN_005a3560
// Address: 005a3560
// Address Range: [[005a3560, 005a3b0a]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_processAI_FUN_005a3560(CSchnellGeist *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_schngeis_cpp_CSchnellGeist_processAI_FUN_005a3560(CSchnellGeist *this_ptr,float delta_time)

{
  SStateMachine *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  CCharacter *pCVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  uint uVar6;
  byte bVar7;
  float afStackY_117c [1010];
  float fVar8;
  CVector3f *pCVar9;
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
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  float fStack_e0;
  float afStack_dc [2];
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  SStateMachine *pSStack_20;
  float fStack_1c;
  CDeformableModelInstance *pCStack_14;
  
  bVar7 = 0;
  this_ptr_00 = &(this_ptr->base).state_machine;
  iVar4 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Death");
  if ((iVar4 == 0) ||
     (iVar4 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Animation"),
     iVar4 == 0)) {
    (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  }
  pCStack_14 = &(this_ptr->base).base.base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (pCStack_14,this_ptr->tongue_bone,&CStack_d4);
  pCVar9 = &CStack_188;
  CStack_188.x = CStack_d4.x;
  *(uint *)((int)&CStack_188 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_188 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar9,&CStack_c8);
  fStack_170 = CStack_c8.x;
  afStack_16c[(uint)bVar7 * -2] = *(float *)((int)&CStack_c8 + (uint)bVar7 * -8 + 4);
  afStack_16c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)((int)&CStack_c8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (pCStack_14,this_ptr->dummy07_bone,&CStack_bc);
  pCVar9 = &CStack_17c;
  CStack_17c.x = CStack_bc.x;
  *(uint *)((int)&CStack_17c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_bc + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_17c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar9,&CStack_ec);
  fStack_38 = CStack_ec.x;
  afStack_58[(uint)bVar7 * -2 + 9] = *(float *)((int)&CStack_ec + (uint)bVar7 * -8 + 4);
  afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       *(float *)((int)&CStack_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  afStack_58[2] = fStack_38 - fStack_170;
  afStack_58[3] = fStack_34 - afStack_16c[0];
  fStack_48 = fStack_30 - afStack_16c[1];
  CStack_164.x = fStack_38 - fStack_170;
  *(float *)((int)&CStack_164 + (uint)bVar7 * -8 + 4) = afStack_58[(uint)bVar7 * -2 + 3];
  *(float *)((int)&CStack_164 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  fVar3 = fStack_170;
  fVar8 = SQRT(CStack_164.z * CStack_164.z +
               CStack_164.x * CStack_164.x + CStack_164.y * CStack_164.y);
  afStack_94[2] = CStack_164.x * _DAT_005f01ba;
  afStack_94[3] = CStack_164.y * _DAT_005f01ba;
  fStack_84 = CStack_164.z * _DAT_005f01ba;
  fStack_e0 = CStack_164.x * _DAT_005f01ba;
  afStack_dc[(uint)bVar7 * -2] = afStack_94[(uint)bVar7 * -2 + 3];
  afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  fStack_98 = fVar3 + fStack_e0;
  afStack_94[0] = afStack_16c[0] + afStack_dc[0];
  afStack_94[1] = afStack_16c[1] + afStack_dc[1];
  CStack_140.x = fVar3 + fStack_e0;
  *(float *)((int)&CStack_140 + (uint)bVar7 * -8 + 4) = afStack_94[(uint)bVar7 * -2];
  *(float *)((int)&CStack_140 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
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
  fStack_44 = (this_ptr->base).move_velocity.x * delta_time;
  fStack_40 = (this_ptr->base).move_velocity.y * delta_time;
  fStack_3c = (this_ptr->base).move_velocity.z * delta_time;
  fStack_128 = fStack_44;
  afStack_124[(uint)bVar7 * -2] = afStack_58[(uint)bVar7 * -2 + 6];
  afStack_124[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  fStack_194 = fStack_128 * _DAT_005f01c2;
  afStack_190[0] = afStack_124[0] * _DAT_005f01c2;
  afStack_190[1] = afStack_124[1] * _DAT_005f01c2;
  fStack_110 = fStack_128 * _DAT_005f01c2;
  afStack_10c[(uint)bVar7 * -2] = afStack_190[(uint)bVar7 * -2];
  afStack_10c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  iVar4 = core_actor_cpp_randomChance_FUN_0040d060
                    (SQRT(afStack_10c[1] * afStack_10c[1] +
                          fStack_110 * fStack_110 + afStack_10c[0] * afStack_10c[0]) +
                     (float)_DAT_005f01c6);
  if (iVar4 != 0) {
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
              (g_CGorePtr,&CStack_140,&CStack_164,BLOOD_TYPE_ICHOR);
  }
  iVar4 = this_ptr->blood_frame_counter + -1;
  this_ptr->blood_frame_counter = iVar4;
  if ((this_ptr->breath_state != 0) && (iVar4 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    CStack_1a0.z = 2.0;
    CStack_1a0.x = 0.0;
    CStack_1a0.y = -0.5;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              ((CDemonActor *)this_ptr,&CStack_1a0,&CStack_b0);
    CStack_74.x = CStack_b0.x;
    *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_b0 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_b0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    CStack_158.x = 0.0;
    CStack_158.z = 0.5;
    CStack_158.y = 0.2;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&CStack_158,
               (this_ptr->base).base.base.model.bone_transform.bone_model_matrices +
               this_ptr->tongue_bone,&CStack_11c);
    pCVar9 = &CStack_14c;
    CStack_14c.x = CStack_11c.x;
    *(uint *)((int)&CStack_14c + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_11c + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_14c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_11c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar9,&CStack_104);
    iVar4 = 0x4000;
    pCVar9 = &CStack_74;
    fVar8 = 1.5;
    CStack_80.x = CStack_104.x;
    *(uint *)((int)&CStack_80 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_104 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_104 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
              (0x01C3DEB4,&CStack_80,fVar8,pCVar9,iVar4);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  }
  if (this_ptr->blood_frame_counter == 0) {
    this_ptr->blood_frame_counter = 2;
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  if (pSVar5->state_index == 0) {
    if ((this_ptr->base).idle_sound[0] == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050((this_ptr->base).idle_sfx_handle);
    }
    else {
      fVar8 = (this_ptr->base).idle_sound_timer - delta_time;
      (this_ptr->base).idle_sound_timer = fVar8;
      if (fVar8 <= 0.0) {
        pCVar1 = (this_ptr->base).base.base.base.vtable._ub;
        (this_ptr->base).idle_sound_timer = (this_ptr->base).idle_sound_interval;
        uVar6 = (*pCVar1->playSound)((CDemonActor *)this_ptr,(this_ptr->base).idle_sound);
        (this_ptr->base).idle_sfx_handle = uVar6;
      }
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050((this_ptr->base).idle_sfx_handle);
  }
  if ((this_ptr->base).base.victim != (CCharacter *)0x0) {
    pSStack_20 = &(this_ptr->base).state_machine;
    iVar4 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSStack_20,"Chasing");
    if ((((iVar4 != 0) &&
         (pCVar2 = (this_ptr->base).base.victim,
         fVar8 = (this_ptr->base).base.base.base.location.position.x -
                 (pCVar2->base).location.position.x,
         fVar3 = (this_ptr->base).base.base.base.location.position.z -
                 (pCVar2->base).location.position.z, fStack_24 = SQRT(fVar3 * fVar3 + fVar8 * fVar8)
         , _DAT_005ff350 < fStack_24)) && (fStack_24 <= _DAT_005ff354)) &&
       (pCStack_14 = (CDeformableModelInstance *)
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0),
       (float)_DAT_005f01ce < (float)pCStack_14)) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                ((CDemonActor *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position,
                 &CStack_68);
      CStack_f8.x = CStack_68.x;
      *(uint *)((int)&CStack_f8 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_68 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      CStack_f8.y = 0.0;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_f8,&CStack_a4);
      fStack_5c = CStack_a4.x;
      afStack_58[(uint)bVar7 * -2] = *(float *)((int)&CStack_a4 + (uint)bVar7 * -8 + 4);
      afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)((int)&CStack_a4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if (ABS(afStack_58[0]) < (float)_DAT_005f01d6) {
        core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(pSStack_20,"LeapAttack");
        return;
      }
    }
  }
  return;
}
