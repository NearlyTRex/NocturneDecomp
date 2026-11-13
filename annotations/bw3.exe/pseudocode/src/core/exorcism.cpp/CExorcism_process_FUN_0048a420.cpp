// Name: core_exorcism.cpp_CExorcism_process_FUN_0048a420
// Address: 0048a420
// Address Range: [[0048a420, 0048b011]]
// Convention: __cdecl
// Signature: void __cdecl core_exorcism_cpp_CExorcism_process_FUN_0048a420(CExorcism *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_exorcism_cpp_CExorcism_process_FUN_0048a420(CExorcism *this_ptr,float delta_time)

{
  float fVar1;
  CCharacter *pCVar2;
  int iVar3;
  int unaff_ESI;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float afStackY_11d4 [982];
  CExorcism *this_ptr_00;
  float *pfVar7;
  int iVar8;
  CBoundingBox3D *in_stack_fffffda4;
  CVector3f *euler_angles;
  float flame_type;
  float flame_style;
  float fStack_230;
  float fStack_228;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  CVector3f CStack_19c;
  float fStack_18c;
  float afStack_188 [2];
  CVector3f CStack_180;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [2];
  CVector3f CStack_15c;
  uint uStack_150;
  float fStack_144;
  float fStack_140;
  byte auStack_13c [8];
  float afStack_134 [4];
  float afStack_124 [4];
  float fStack_114;
  float afStack_110 [2];
  byte auStack_108 [12];
  float afStack_fc [6];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  float fStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float afStack_ac [2];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_8c;
  float afStack_88 [4];
  uint uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  float afStack_28 [4];
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar7 = afStack_c0 + 5;
  fStack_b0 = CStack_e4.z;
  afStack_c0[(uint)bVar6 * -2 + 5] = *(float *)((int)&CStack_d8 + (uint)bVar6 * -8);
  afStack_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 6] =
       *(float *)((int)&CStack_d8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
  fStack_1d8 = (float)auStack_108._8_4_;
  *(float *)((int)&stack0xfffffe2c + (uint)bVar6 * -8) = afStack_fc[(uint)bVar6 * -2];
  this_ptr_00 = this_ptr;
  *(float *)(&stack0xfffffe30 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr_00->base,in_stack_0000000c);
  this_ptr->fire_cooldown = this_ptr->fire_cooldown - in_stack_00000014;
  if (this_ptr->fire_cooldown <= 0.0) {
    this_ptr->fire_cooldown = 0.0;
  }
  if (this_ptr->is_firing == 0) {
    if (this_ptr->was_firing_prev_frame != 0) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(_DAT_01c6e35c);
      _DAT_01c6e35c = 0;
    }
  }
  else {
    core_actor_cpp_castToClassHash_FUN_0040c840
              ((this_ptr->base).carried_by_actor,g_CAsgayaClassInfo.name_hash);
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    pfVar7 = afStack_124;
    afStack_134[3] = fStack_c4;
    afStack_124[(uint)bVar6 * -2] = afStack_c0[(uint)bVar6 * -2];
    afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
    auStack_108._8_4_ = fStack_40;
    afStack_fc[(uint)bVar6 * -2] = afStack_3c[(uint)bVar6 * -2];
    afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    if (&CStack_19c != (CVector3f *)(auStack_108 + 8)) {
      CStack_19c.x = (float)auStack_108._8_4_;
      CStack_19c.y = afStack_fc[0];
      CStack_19c.z = afStack_fc[1];
    }
    if (unaff_ESI == 0) {
      core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
                (0x01C73654,&CStack_19c,(CVector3f *)&DAT_02cfd900,1,0,2);
      iVar8 = 7;
      iVar3 = 4;
    }
    else {
      iVar8 = 4;
      iVar3 = 3;
    }
    core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
              (0x01C73654,&CStack_19c,(CVector3f *)&DAT_02cfd900,1,0,iVar8);
    this_ptr->zap_timer = this_ptr->zap_timer - in_stack_00000018;
    if (this_ptr->zap_timer <= 0.0) {
      if (afStack_188 + 4 != &stack0xfffffe34) {
        CStack_180.z = fStack_1cc;
        CStack_174.x = fStack_1c8;
        CStack_174.y = fStack_1c4;
      }
      pCVar2 = this_ptr->target;
      if ((pCVar2 == (CCharacter *)0x0) || (pCVar2->hit_points <= 0.0)) {
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        afStack_134[1] = fStack_144;
        afStack_134[(uint)bVar6 * -2 + 2] = (&fStack_140)[(uint)bVar6 * -2];
        afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3] =
             *(float *)(auStack_13c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        CStack_34.y = afStack_134[2];
        afStack_28[0] = afStack_124[0];
        pfVar7 = &fStack_18c;
        CStack_34.z = afStack_134[3] + _DAT_005bdd4e;
        fStack_18c = afStack_134[2];
        afStack_188[(uint)bVar6 * -2] = afStack_28[(uint)bVar6 * -2 + -1];
        afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        CStack_180.x = fStack_1d4;
        afStack_188[(uint)bVar6 * -2 + 3] = *(float *)(&stack0xfffffe30 + (uint)bVar6 * -8);
        afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             *(float *)((int)&stack0xfffffe34 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4);
        if (&CStack_15c != (CVector3f *)(afStack_188 + 2)) {
          CStack_15c.x = CStack_180.x;
          CStack_15c.y = CStack_180.y;
          CStack_15c.z = CStack_180.z;
        }
      }
      else {
        (*((pCVar2->base).vtable._ub)->getBoundingBox)(&pCVar2->base,in_stack_fffffda4);
        puVar4 = (uint *)&stack0xfffffde8;
        puVar5 = (uint *)&stack0xfffffdf8;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        fStack_1ac = fStack_200 + fStack_1f4;
        fStack_1a8 = fStack_1fc + fStack_1f0;
        fStack_1a4 = fStack_1f8 + fStack_1ec;
        fStack_1dc = fStack_200 + fStack_1f4;
        *(uint *)((int)&stack0xfffffe28 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xfffffe58 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xfffffe2c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xfffffe58 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
        fStack_1a0 = fStack_1dc * _DAT_005bdd52;
        CStack_19c.x = fStack_1d8 * _DAT_005bdd52;
        CStack_19c.y = fStack_1d4 * _DAT_005bdd52;
        fStack_74 = fStack_1dc * _DAT_005bdd52;
        afStack_88[(uint)bVar6 * -2 + 6] = *(float *)((int)&CStack_19c + (uint)bVar6 * -8);
        afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             *(float *)((int)&CStack_19c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
        if (afStack_c0 + 7 != afStack_88 + 5) {
          fStack_a4 = fStack_74;
          fStack_a0 = fStack_70;
          fStack_9c = fStack_6c;
        }
        pCVar2 = this_ptr->target;
        fStack_8c = (pCVar2->base).location.position.x + fStack_a4;
        afStack_88[0] = (pCVar2->base).location.position.y + fStack_a0;
        afStack_88[1] = (pCVar2->base).location.position.z + fStack_9c;
        afStack_88[2] = fStack_8c;
        afStack_88[(uint)bVar6 * -2 + 3] = afStack_88[(uint)bVar6 * -2];
        afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if (&CStack_15c.y != afStack_88 + 2) {
          CStack_15c.y = afStack_88[2];
          CStack_15c.z = afStack_88[3];
          uStack_150 = uStack_78;
        }
        CStack_15c.z = fStack_a0 * _DAT_005bdd52 + CStack_15c.z;
      }
      fStack_b0 = CStack_15c.y - CStack_174.y;
      afStack_ac[0] = CStack_15c.z - CStack_174.z;
      afStack_c0[3] = CStack_15c.x - CStack_174.x;
      fStack_168 = CStack_15c.x - CStack_174.x;
      afStack_164[(uint)bVar6 * -2] = afStack_c0[(uint)bVar6 * -2 + 4];
      afStack_164[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
      if (&stack0xfffffe44 != &fStack_168) {
        fStack_1bc = fStack_168;
        fStack_1b8 = afStack_164[0];
        fStack_1b4 = afStack_164[1];
      }
      fStack_1bc = fStack_1bc * _DAT_005bdd56;
      fStack_1b8 = fStack_1b8 * _DAT_005bdd56;
      fStack_1b4 = fStack_1b4 * _DAT_005bdd56;
      fStack_114 = CStack_174.x + fStack_1bc;
      afStack_110[0] = CStack_174.y + fStack_1b8;
      afStack_110[1] = CStack_174.z + fStack_1b4;
      CStack_d8.x = fStack_114;
      *(float *)((int)&CStack_d8 + (uint)bVar6 * -8 + 4) = afStack_110[(uint)bVar6 * -2];
      *(float *)((int)&CStack_d8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_110[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if ((CVector3f *)auStack_108 != &CStack_d8) {
        auStack_108._0_4_ = CStack_d8.x;
        auStack_108._4_4_ = CStack_d8.y;
        auStack_108._8_4_ = CStack_d8.z;
      }
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
      fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
      afStack_28[2] = fStack_18;
      auStack_108._0_4_ = (float)auStack_108._0_4_ + fVar1;
      afStack_28[3] = fStack_14;
      auStack_108._4_4_ = (float)auStack_108._4_4_ + fStack_18;
      auStack_108._8_4_ = (float)auStack_108._8_4_ + fStack_14;
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_174,(CVector3f *)auStack_108,0,0.25,1.25,iVar3,0.25,0xffff);
      fStack_60 = CStack_15c.x - CStack_174.x;
      fStack_5c = CStack_15c.y - CStack_174.y;
      fStack_58 = CStack_15c.z - CStack_174.z;
      fStack_6c = CStack_15c.x - CStack_174.x;
      afStack_88[(uint)bVar6 * -2 + 8] = afStack_88[(uint)bVar6 * -2 + 0xb];
      afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
           afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xc];
      if (&stack0xfffffe44 != afStack_88 + 7) {
        fStack_1bc = fStack_6c;
        fStack_1b8 = fStack_68;
        fStack_1b4 = fStack_64;
      }
      fStack_1bc = fStack_1bc * _DAT_005bdd5a;
      fStack_1b8 = fStack_1b8 * _DAT_005bdd5a;
      fStack_1b4 = fStack_1b4 * _DAT_005bdd5a;
      fStack_1ec = CStack_174.x + fStack_1bc;
      fStack_1e8 = CStack_174.y + fStack_1b8;
      fStack_1e4 = CStack_174.z + fStack_1b4;
      auStack_13c._4_4_ = fStack_1ec;
      afStack_134[(uint)bVar6 * -2] = *(float *)((int)&stack0xfffffe18 + (uint)bVar6 * -8);
      afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&stack0xfffffe34 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + -6) * 4);
      if (&CStack_e4 != (CVector3f *)(auStack_13c + 4)) {
        CStack_e4.x = (float)auStack_13c._4_4_;
        CStack_e4.y = afStack_134[0];
        CStack_e4.z = afStack_134[1];
      }
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
      fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
      CStack_e4.x = CStack_e4.x + fVar1;
      CStack_e4.y = CStack_e4.y + fStack_14;
      CStack_e4.z = CStack_e4.z + fStack_18;
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,(CVector3f *)auStack_108,&CStack_e4,0,1.25,1.25,iVar3,0.25,0xffff);
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_e4,&CStack_15c,0,1.25,0.25,iVar3,0.25,0xffff);
      this_ptr->zap_timer = 0.05;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
                (this_ptr->globes,(CVector3f *)auStack_108);
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(this_ptr->globes + 1,&CStack_e4);
    }
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(g_CDemonSetPtr,this_ptr->globes);
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(g_CDemonSetPtr,this_ptr->globes + 1);
    if ((this_ptr->target != (CCharacter *)0x0) && (0.0 < this_ptr->target->hit_points)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffda8);
      fStack_230 = 1.4013e-44;
      fStack_228 = 1.55544e-43;
      (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr->target->base).vtable._uc)->_uc).processDamage)
                (this_ptr->target,(SDamageInfo *)&stack0xfffffdac);
      pCVar2 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
      if (pCVar2 != (CCharacter *)0x0) {
        (*(((pCVar2->base).vtable._uc)->_uc).processDamage)(pCVar2,(SDamageInfo *)&stack0xfffffdb4);
      }
      this_ptr->target->bind_time = 0.1;
      if (in_stack_00000010 == 0) {
        this_ptr->target->bind_type = 2;
      }
      else {
        this_ptr->target->bind_type = 1;
      }
      if (this_ptr->target->hit_points <= 0.0) {
        if ((pCVar2 != (CCharacter *)0x0) && (0.0 < pCVar2->hit_points)) {
          pCVar2->hit_points = this_ptr->hero_health;
        }
        flame_style = 8.40779e-45;
        pCVar2 = this_ptr->target;
        flame_type = 0.0;
        fStack_40 = (pCVar2->base).location.position.x;
        fVar1 = 1.4013e-45;
        afStack_3c[1] = (pCVar2->base).location.position.z;
        euler_angles = &CStack_34;
        afStack_3c[0] = (pCVar2->base).location.position.y + _DAT_005bdd62;
        auStack_13c._0_4_ = fStack_40;
        *(float *)(auStack_13c + (uint)bVar6 * -8 + 4) = afStack_3c[(uint)bVar6 * -2];
        afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
             afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        CStack_34.x = 0.0;
        CStack_34.y = 3.0;
        CStack_34.z = 0.0;
        core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
                  (0x01C73654,(CVector3f *)auStack_13c,euler_angles,(int)fVar1,(int)flame_type,
                   (int)flame_style);
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,(CDemonActor *)this_ptr,"wp_exorcism_success.wav",
                   &(this_ptr->base).base.location.position);
        this_ptr->target = (CCharacter *)0x0;
      }
    }
  }
  iVar3 = this_ptr->is_firing;
  this_ptr->is_firing = 0;
  this_ptr->was_firing_prev_frame = iVar3;
  return;
}
