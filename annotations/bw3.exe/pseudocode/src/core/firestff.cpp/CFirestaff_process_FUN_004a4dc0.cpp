// Name: core_firestff.cpp_CFirestaff_process_FUN_004a4dc0
// Address: 004a4dc0
// Address Range: [[004a4dc0, 004a5760]]
// Convention: __cdecl
// Signature: void __cdecl core_firestff_cpp_CFirestaff_process_FUN_004a4dc0(CFirestaff *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_firestff_cpp_CFirestaff_process_FUN_004a4dc0(CFirestaff *this_ptr,float delta_time)

{
  CDemonGlobe *pCVar1;
  CDemonSet *this_ptr_00;
  CDemonActor *pCVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  float in_stack_00000010;
  float afStackY_126c [1014];
  CVector3f CStack_284;
  CVector3f CStack_278;
  CVector3f CStack_26c;
  CVector3f CStack_260;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  CVector3f CStack_248;
  CVector3f CStack_23c;
  CVector3f CStack_230;
  CVector3f CStack_224;
  float fStack_218;
  float afStack_214 [2];
  CVector3f CStack_20c;
  float fStack_200;
  float afStack_1fc [2];
  CVector3f CStack_1f4;
  CVector3f CStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [2];
  CVector3f CStack_1d0;
  CVector3f CStack_1c4;
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [4];
  float fStack_198;
  CVector3f CStack_194;
  float fStack_188;
  float afStack_184 [4];
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [2];
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [2];
  CVector3f CStack_134;
  CVector3f CStack_128;
  float fStack_11c;
  float afStack_118 [2];
  CVector3f CStack_110;
  float fStack_104;
  float afStack_100 [4];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  float fStack_bc;
  float afStack_b8 [2];
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [2];
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [2];
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr->base,delta_time);
  if (((this_ptr->base).weapon_state == WEAPON_STATE_IN_HAND) ||
     (pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                         ((this_ptr->base).carried_by_actor,g_CEnemyClassInfo.name_hash),
     pCVar2 != (CDemonActor *)0x0)) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                       ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
    if ((pCVar2 == (CDemonActor *)0x0) ||
       ((this_ptr->base).ammo_per_shot <= *(int *)(pCVar2[0x185].create_event + 0x50))) {
      iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handle);
      if (iVar3 == 0) {
        uVar6 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)this_ptr,"wp_firestaff_loop.wav",
                           &(this_ptr->base).base.location.position);
        this_ptr->sfx_handle = uVar6;
      }
      CStack_1c4.x = 0.0;
      CStack_1c4.y = 2.5;
      CStack_1c4.z = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_1c4,&CStack_26c);
      fStack_68 = CStack_26c.x;
      afStack_64[(uint)bVar8 * -2] = *(float *)((int)&CStack_26c + (uint)bVar8 * -8 + 4);
      afStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_26c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[0].base.location.position.x = fStack_68;
      this_ptr->flames[0].base.location.position.y = afStack_64[0];
      this_ptr->flames[0].base.location.position.z = afStack_64[1];
      CStack_194.y = 2.75;
      CStack_194.x = 0.0;
      CStack_194.z = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_194,&CStack_248);
      fStack_11c = CStack_248.x;
      afStack_118[(uint)bVar8 * -2] = *(float *)((int)&CStack_248 + (uint)bVar8 * -8 + 4);
      afStack_118[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_248 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[1].base.location.position.x = fStack_11c;
      this_ptr->flames[1].base.location.position.y = afStack_118[0];
      this_ptr->flames[1].base.location.position.z = afStack_118[1];
      CStack_164.x = 0.0;
      CStack_164.y = 3.0;
      CStack_164.z = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_164,&CStack_23c);
      fStack_1ac = CStack_23c.x;
      afStack_1a8[(uint)bVar8 * -2] = *(float *)((int)&CStack_23c + (uint)bVar8 * -8 + 4);
      afStack_1a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_23c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[2].base.location.position.x = fStack_1ac;
      this_ptr->flames[2].base.location.position.y = afStack_1a8[0];
      this_ptr->flames[2].base.location.position.z = afStack_1a8[1];
      CStack_128.y = 3.25;
      CStack_128.z = 0.0;
      CStack_128.x = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_128,&CStack_230);
      fStack_218 = CStack_230.x;
      afStack_214[(uint)bVar8 * -2] = *(float *)((int)&CStack_230 + (uint)bVar8 * -8 + 4);
      afStack_214[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_230 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[3].base.location.position.x = fStack_218;
      this_ptr->flames[3].base.location.position.y = afStack_214[0];
      this_ptr->flames[3].base.location.position.z = afStack_214[1];
      CStack_e0.x = 0.0;
      CStack_e0.y = 3.5;
      CStack_e0.z = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_e0,&CStack_a4);
      fStack_200 = CStack_a4.x;
      afStack_1fc[(uint)bVar8 * -2] = *(float *)((int)&CStack_a4 + (uint)bVar8 * -8 + 4);
      afStack_1fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[4].base.location.position.x = fStack_200;
      this_ptr->flames[4].base.location.position.y = afStack_1fc[0];
      this_ptr->flames[4].base.location.position.z = afStack_1fc[1];
      CStack_d4.z = 0.0;
      CStack_d4.x = 0.0;
      CStack_d4.y = 3.75;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_d4,&CStack_110);
      fStack_98 = CStack_110.x;
      afStack_94[(uint)bVar8 * -2] = *(float *)((int)&CStack_110 + (uint)bVar8 * -8 + 4);
      afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_110 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[5].base.location.position.x = fStack_98;
      this_ptr->flames[5].base.location.position.y = afStack_94[0];
      this_ptr->flames[5].base.location.position.z = afStack_94[1];
      CStack_260.x = 0.0;
      CStack_260.y = -2.5;
      CStack_260.z = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_260,&CStack_1e8);
      fStack_44 = CStack_1e8.x;
      afStack_40[(uint)bVar8 * -2] = *(float *)((int)&CStack_1e8 + (uint)bVar8 * -8 + 4);
      afStack_40[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_1e8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[6].base.location.position.x = fStack_44;
      this_ptr->flames[6].base.location.position.y = afStack_40[0];
      this_ptr->flames[6].base.location.position.z = afStack_40[1];
      CStack_5c.y = -2.75;
      CStack_5c.z = 0.0;
      CStack_5c.x = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_5c,&CStack_1d0);
      afStack_100[2] = CStack_1d0.x;
      afStack_100[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_1d0 + (uint)bVar8 * -8 + 4);
      afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&CStack_1d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[7].base.location.position.x = afStack_100[2];
      this_ptr->flames[7].base.location.position.y = afStack_100[3];
      this_ptr->flames[7].base.location.position.z = fStack_f0;
      CStack_224.x = 0.0;
      CStack_224.y = -3.0;
      CStack_224.z = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_224,&CStack_1b8);
      fStack_104 = CStack_1b8.x;
      afStack_100[(uint)bVar8 * -2] = *(float *)((int)&CStack_1b8 + (uint)bVar8 * -8 + 4);
      afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_1b8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[8].base.location.position.x = fStack_104;
      this_ptr->flames[8].base.location.position.y = afStack_100[0];
      this_ptr->flames[8].base.location.position.z = afStack_100[1];
      CStack_74.y = -3.25;
      CStack_74.z = 0.0;
      CStack_74.x = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_74,&CStack_134);
      afStack_184[2] = CStack_134.x;
      afStack_184[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_134 + (uint)bVar8 * -8 + 4);
      afStack_184[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&CStack_134 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[9].base.location.position.x = afStack_184[2];
      this_ptr->flames[9].base.location.position.y = afStack_184[3];
      this_ptr->flames[9].base.location.position.z = fStack_174;
      CStack_c8.x = 0.0;
      CStack_c8.y = -3.5;
      CStack_c8.z = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_c8,&CStack_284);
      fStack_158 = CStack_284.x;
      afStack_154[(uint)bVar8 * -2] = *(float *)((int)&CStack_284 + (uint)bVar8 * -8 + 4);
      afStack_154[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_284 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      this_ptr->flames[10].base.location.position.x = fStack_158;
      this_ptr->flames[10].base.location.position.y = afStack_154[0];
      this_ptr->flames[10].base.location.position.z = afStack_154[1];
      CStack_b0.y = -3.75;
      CStack_b0.z = 0.0;
      CStack_b0.x = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_b0,&CStack_278);
      fStack_140 = CStack_278.x;
      afStack_13c[(uint)bVar8 * -2] = *(float *)((int)&CStack_278 + (uint)bVar8 * -8 + 4);
      afStack_13c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_278 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      pCVar2 = &this_ptr->flames[0].base;
      this_ptr->flames[0xb].base.location.position.x = fStack_140;
      this_ptr->flames[0xb].base.location.position.y = afStack_13c[0];
      this_ptr->flames[0xb].base.location.position.z = afStack_13c[1];
      do {
        (*((UActorVTable *)(pCVar2->actor_name + 0x154))->_ub->process)(pCVar2,in_stack_00000010);
        pCVar2 = (CDemonActor *)&pCVar2[1].next_actor;
      } while (pCVar2 != (CDemonActor *)&this_ptr->sfx_handle);
      CStack_14c.y = 3.0;
      CStack_14c.x = 0.0;
      CStack_14c.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                ((CDemonActor *)this_ptr,&CStack_14c,&CStack_8c);
      fStack_188 = CStack_8c.x;
      afStack_184[(uint)bVar8 * -2] = *(float *)((int)&CStack_8c + (uint)bVar8 * -8 + 4);
      afStack_184[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_8c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if (&fStack_254 != &fStack_188) {
        fStack_254 = fStack_188;
        fStack_250 = afStack_184[0];
        fStack_24c = afStack_184[1];
      }
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_28 = fStack_14;
      fStack_24 = fVar4;
      fStack_80 = (this_ptr->base).base.location.position.x - fStack_254;
      afStack_7c[0] = (this_ptr->base).base.location.position.y - fStack_250;
      afStack_7c[1] = (this_ptr->base).base.location.position.z - fStack_24c;
      fStack_1dc = fStack_80;
      afStack_1d8[(uint)bVar8 * -2] = afStack_7c[(uint)bVar8 * -2];
      afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      afStack_1a8[2] = fStack_1dc + fVar5;
      afStack_1a8[3] = afStack_1d8[0] + fStack_28;
      fStack_198 = afStack_1d8[1] + fStack_24;
      CStack_38.x = fStack_1dc + fVar5;
      afStack_40[(uint)bVar8 * -2 + 3] = afStack_1a8[(uint)bVar8 * -2 + 3];
      afStack_40[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_1a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      if (&CStack_20c != (CVector3f *)(afStack_40 + 2)) {
        CStack_20c.x = CStack_38.x;
        CStack_20c.y = CStack_38.y;
        CStack_20c.z = CStack_38.z;
      }
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_1c = fVar4;
      fStack_18 = fStack_14;
      fStack_170 = (this_ptr->base).base.location.position.x + fStack_254;
      fStack_16c = (this_ptr->base).base.location.position.y + fStack_250;
      fStack_168 = (this_ptr->base).base.location.position.z + fStack_24c;
      fStack_ec = fStack_170;
      afStack_100[(uint)bVar8 * -2 + 6] = afStack_184[(uint)bVar8 * -2 + 6];
      afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_184[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      fStack_bc = fStack_ec + fVar5;
      afStack_b8[0] = fStack_e8 + fStack_1c;
      afStack_b8[1] = fStack_e4 + fStack_18;
      CStack_50.x = fStack_ec + fVar5;
      *(float *)((int)&CStack_50 + (uint)bVar8 * -8 + 4) = afStack_b8[(uint)bVar8 * -2];
      *(float *)((int)&CStack_50 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (&CStack_1f4 != &CStack_50) {
        CStack_1f4.x = CStack_50.x;
        CStack_1f4.y = CStack_50.y;
        CStack_1f4.z = CStack_50.z;
      }
      pCVar1 = this_ptr->globes;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(pCVar1,&CStack_20c);
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.5,8.5);
      core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar1,fVar4);
      iVar3 = (this_ptr->base).render_alpha / 2;
      this_ptr->globes[0].intensity_multiplier = iVar3;
      this_ptr_00 = g_CDemonSetPtr;
      iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
      iVar7 = iVar3 >> 0x1f;
      this_ptr->globes[0].intensity.bytes[0] =
           (uchar)((int)(((iVar3 >> 8) + iVar7 * -4) - (uint)(iVar7 << 1 < 0)) >> 2);
      core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_00,pCVar1);
      pCVar1 = this_ptr->globes + 1;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(pCVar1,&CStack_1f4);
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.5,8.5);
      core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar1,fVar4);
      iVar3 = (this_ptr->base).render_alpha / 2;
      this_ptr->globes[1].intensity_multiplier = iVar3;
      iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
      iVar7 = iVar3 >> 0x1f;
      this_ptr->globes[1].intensity.bytes[0] =
           (uchar)((int)(((iVar3 >> 8) + iVar7 * -4) - (uint)(iVar7 << 1 < 0)) >> 2);
      core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(g_CDemonSetPtr,pCVar1);
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
    this_ptr->sfx_handle = 0;
  }
  return;
}
