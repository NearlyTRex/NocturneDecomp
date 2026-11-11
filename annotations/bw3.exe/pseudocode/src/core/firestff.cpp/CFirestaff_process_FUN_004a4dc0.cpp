// Name: core_firestff.cpp_CFirestaff_process_FUN_004a4dc0
// Address: 004a4dc0
// Address Range: [[004a4dc0, 004a5760]]
// Convention: __cdecl
// Signature: void __cdecl core_firestff_cpp_CFirestaff_process_FUN_004a4dc0(CFirestaff *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_firestff_cpp_CFirestaff_process_FUN_004a4dc0(CFirestaff *this_ptr,float delta_time)

{
  CDemonGlobe *pCVar1;
  CDemonSet *this_ptr_00;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  CDemonActor *this_ptr_01;
  byte bVar7;
  float in_stack_00000010;
  float afStackY_126c [1014];
  float fStack_284;
  float fStack_278;
  float fStack_26c;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_23c;
  float fStack_230;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  CVector3f CStack_20c;
  float fStack_200;
  float afStack_1fc [2];
  CVector3f CStack_1f4;
  float fStack_1e8;
  float afStack_1e4 [4];
  float fStack_1d4;
  float fStack_1d0;
  float afStack_1c4 [4];
  float afStack_1b4 [4];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float afStack_194 [4];
  float afStack_184 [4];
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float afStack_164 [4];
  float afStack_154 [6];
  float afStack_13c [5];
  float afStack_128 [4];
  float afStack_118 [5];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [10];
  float afStack_b8 [6];
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [4];
  float afStack_64 [5];
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr->base,delta_time);
  if (((this_ptr->base).weapon_state == WEAPON_STATE_IN_HAND) ||
     (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                        ((this_ptr->base).carried_by_actor,g_CEnemyClassInfo.name_hash), iVar2 != 0)
     ) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                      ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
    if ((iVar2 == 0) || ((this_ptr->base).ammo_per_shot <= *(int *)(iVar2 + 0x20b80))) {
      iVar2 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handle);
      if (iVar2 == 0) {
        uVar5 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)this_ptr,"wp_firestaff_loop.wav",
                           &(this_ptr->base).base.location.position);
        this_ptr->sfx_handle = uVar5;
      }
      afStack_1c4[0] = 0.0;
      afStack_1c4[1] = 2.5;
      afStack_1c4[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_1e4 + 8);
      afStack_74[3] = fStack_26c;
      afStack_64[(uint)bVar7 * -2] = *(float *)(&stack0xfffffd98 + (uint)bVar7 * -8);
      afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)(&stack0xfffffd9c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      this_ptr->flames[0].base.location.position.x = afStack_74[3];
      this_ptr->flames[0].base.location.position.y = afStack_64[0];
      this_ptr->flames[0].base.location.position.z = afStack_64[1];
      afStack_194[1] = 2.75;
      afStack_194[0] = 0.0;
      afStack_194[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_1b4 + 8);
      afStack_128[3] = fStack_248;
      afStack_118[(uint)bVar7 * -2] =
           *(float *)((int)&stack0xfffffdbc + (uint)bVar7 * 0xfffffffe * 4);
      afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)(&stack0xfffffdc0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      this_ptr->flames[1].base.location.position.x = afStack_128[3];
      this_ptr->flames[1].base.location.position.y = afStack_118[0];
      this_ptr->flames[1].base.location.position.z = afStack_118[1];
      afStack_164[0] = 0.0;
      afStack_164[1] = 3.0;
      afStack_164[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_184 + 8);
      afStack_1b4[2] = fStack_23c;
      afStack_1b4[(uint)bVar7 * -2 + 3] = *(float *)(&stack0xfffffdc8 + (uint)bVar7 * -8);
      afStack_1b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)(&stack0xfffffdcc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      this_ptr->flames[2].base.location.position.x = afStack_1b4[2];
      this_ptr->flames[2].base.location.position.y = afStack_1b4[3];
      this_ptr->flames[2].base.location.position.z = fStack_1a4;
      afStack_128[1] = 3.25;
      afStack_128[2] = 0.0;
      afStack_128[0] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_13c + 5);
      fStack_218 = fStack_230;
      (&stack0xfffffdec)[(uint)bVar7 * 0xfffffffe] =
           (float)*(uint *)(&stack0xfffffdd4 + (uint)bVar7 * -8);
      *(uint *)((int)&stack0xfffffdf0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xfffffdd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      this_ptr->flames[3].base.location.position.x = fStack_218;
      this_ptr->flames[3].base.location.position.y = fStack_214;
      this_ptr->flames[3].base.location.position.z = fStack_210;
      afStack_e0[0] = 0.0;
      afStack_e0[1] = 3.5;
      afStack_e0[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_118 + 0xe);
      fStack_200 = afStack_b8[5];
      afStack_1fc[(uint)bVar7 * -2] = afStack_a0[(uint)bVar7 * -2];
      afStack_1fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      this_ptr->flames[4].base.location.position.x = fStack_200;
      this_ptr->flames[4].base.location.position.y = afStack_1fc[0];
      this_ptr->flames[4].base.location.position.z = afStack_1fc[1];
      afStack_e0[5] = 0.0;
      afStack_e0[3] = 0.0;
      afStack_e0[4] = 3.75;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_118 + 0x11);
      afStack_a0[2] = afStack_118[2];
      afStack_a0[(uint)bVar7 * -2 + 3] = afStack_118[(uint)bVar7 * -2 + 3];
      afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      this_ptr->flames[5].base.location.position.x = afStack_a0[2];
      this_ptr->flames[5].base.location.position.y = afStack_a0[3];
      this_ptr->flames[5].base.location.position.z = fStack_90;
      uStack_260 = 0;
      uStack_25c = 0xc0200000;
      uStack_258 = 0;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xfffffda0);
      fStack_44 = fStack_1e8;
      afStack_40[(uint)bVar7 * -2] = afStack_1e4[(uint)bVar7 * -2];
      afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_1e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      this_ptr->flames[6].base.location.position.x = fStack_44;
      this_ptr->flames[6].base.location.position.y = afStack_40[0];
      this_ptr->flames[6].base.location.position.z = afStack_40[1];
      afStack_64[3] = -2.75;
      afStack_64[4] = 0.0;
      afStack_64[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_64 + 2);
      fStack_f8 = fStack_1d0;
      afStack_118[(uint)bVar7 * -2 + 9] = afStack_1e4[(uint)bVar7 * -2 + 6];
      afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_1e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      this_ptr->flames[7].base.location.position.x = fStack_f8;
      this_ptr->flames[7].base.location.position.y = fStack_f4;
      this_ptr->flames[7].base.location.position.z = fStack_f0;
      uStack_224 = 0;
      uStack_220 = 0xc0400000;
      uStack_21c = 0;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xfffffddc);
      fStack_104 = afStack_1c4[3];
      afStack_118[(uint)bVar7 * -2 + 6] = afStack_1b4[(uint)bVar7 * -2];
      afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_1b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      this_ptr->flames[8].base.location.position.x = fStack_104;
      this_ptr->flames[8].base.location.position.y = fStack_100;
      this_ptr->flames[8].base.location.position.z = fStack_fc;
      afStack_74[1] = -3.25;
      afStack_74[2] = 0.0;
      afStack_74[0] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_a0 + 0xb);
      afStack_184[2] = afStack_13c[2];
      afStack_184[(uint)bVar7 * -2 + 3] = afStack_13c[(uint)bVar7 * -2 + 3];
      afStack_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      this_ptr->flames[9].base.location.position.x = afStack_184[2];
      this_ptr->flames[9].base.location.position.y = afStack_184[3];
      this_ptr->flames[9].base.location.position.z = fStack_174;
      afStack_e0[6] = 0.0;
      afStack_e0[7] = -3.5;
      afStack_e0[8] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_118 + 0x14);
      afStack_164[3] = fStack_284;
      afStack_154[(uint)bVar7 * -2] = *(float *)(&stack0xfffffd80 + (uint)bVar7 * -8);
      afStack_154[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)(&stack0xfffffd84 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      this_ptr->flames[10].base.location.position.x = afStack_164[3];
      this_ptr->flames[10].base.location.position.y = afStack_154[0];
      this_ptr->flames[10].base.location.position.z = afStack_154[1];
      afStack_b8[3] = -3.75;
      afStack_b8[4] = 0.0;
      afStack_b8[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_b8 + 2);
      afStack_154[5] = fStack_278;
      afStack_13c[(uint)bVar7 * -2] = *(float *)(&stack0xfffffd8c + (uint)bVar7 * -8);
      afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)(&stack0xfffffd90 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      this_ptr_01 = &this_ptr->flames[0].base;
      this_ptr->flames[0xb].base.location.position.x = afStack_154[5];
      this_ptr->flames[0xb].base.location.position.y = afStack_13c[0];
      this_ptr->flames[0xb].base.location.position.z = afStack_13c[1];
      do {
        (*((UActorVTable *)(this_ptr_01->actor_name + 0x154))->_ub->process)
                  (this_ptr_01,in_stack_00000010);
        this_ptr_01 = (CDemonActor *)&this_ptr_01[1].next_actor;
      } while (this_ptr_01 != (CDemonActor *)&this_ptr->sfx_handle);
      afStack_154[3] = 3.0;
      afStack_154[2] = 0.0;
      afStack_154[4] = 0.0;
      core_actor_cpp_FUN_00408b00(this_ptr,afStack_154 + 2);
      afStack_194[3] = fStack_8c;
      afStack_184[(uint)bVar7 * -2] = afStack_a0[(uint)bVar7 * -2 + 6];
      afStack_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (&stack0xfffffdac != afStack_1b4 + 0xb) {
        fStack_254 = afStack_194[3];
        fStack_250 = afStack_184[0];
        fStack_24c = afStack_184[1];
      }
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_28 = fStack_14;
      fStack_24 = fVar3;
      fStack_80 = (this_ptr->base).base.location.position.x - fStack_254;
      fStack_7c = (this_ptr->base).base.location.position.y - fStack_250;
      fStack_78 = (this_ptr->base).base.location.position.z - fStack_24c;
      afStack_1e4[2] = fStack_80;
      afStack_1e4[(uint)bVar7 * -2 + 3] = afStack_a0[(uint)bVar7 * -2 + 9];
      afStack_1e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      fStack_1a0 = afStack_1e4[2] + fVar4;
      fStack_19c = afStack_1e4[3] + fStack_28;
      fStack_198 = fStack_1d4 + fStack_24;
      CStack_38.x = afStack_1e4[2] + fVar4;
      afStack_40[(uint)bVar7 * -2 + 3] = afStack_1b4[(uint)bVar7 * -2 + 6];
      afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_1b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (&CStack_20c != (CVector3f *)(afStack_40 + 2)) {
        CStack_20c.x = CStack_38.x;
        CStack_20c.y = CStack_38.y;
        CStack_20c.z = CStack_38.z;
      }
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_1c = fVar3;
      fStack_18 = fStack_14;
      fStack_170 = (this_ptr->base).base.location.position.x + fStack_254;
      fStack_16c = (this_ptr->base).base.location.position.y + fStack_250;
      fStack_168 = (this_ptr->base).base.location.position.z + fStack_24c;
      fStack_ec = fStack_170;
      afStack_118[(uint)bVar7 * -2 + 0xc] = afStack_184[(uint)bVar7 * -2 + 6];
      afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
           afStack_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      afStack_e0[9] = fStack_ec + fVar4;
      afStack_b8[0] = fStack_e8 + fStack_1c;
      afStack_b8[1] = fStack_e4 + fStack_18;
      CStack_50.x = fStack_ec + fVar4;
      *(float *)((int)&CStack_50 + (uint)bVar7 * -8 + 4) = afStack_b8[(uint)bVar7 * -2];
      *(float *)((int)&CStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&CStack_1f4 != (CVector3f *)(afStack_64 + 5)) {
        CStack_1f4.x = CStack_50.x;
        CStack_1f4.y = CStack_50.y;
        CStack_1f4.z = CStack_50.z;
      }
      pCVar1 = this_ptr->globes;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(pCVar1,&CStack_20c);
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.5,8.5);
      core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar1,fVar3);
      iVar2 = (this_ptr->base).render_alpha / 2;
      this_ptr->globes[0].intensity_multiplier = iVar2;
      this_ptr_00 = g_CDemonSetPtr;
      iVar2 = (iVar2 + (iVar2 >> 0x1f) * -0x100) - (uint)((iVar2 >> 0x1f) << 7 < 0);
      iVar6 = iVar2 >> 0x1f;
      this_ptr->globes[0].intensity.bytes[0] =
           (uchar)((int)(((iVar2 >> 8) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2);
      core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_00,pCVar1);
      pCVar1 = this_ptr->globes + 1;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(pCVar1,&CStack_1f4);
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.5,8.5);
      core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar1,fVar3);
      iVar2 = (this_ptr->base).render_alpha / 2;
      this_ptr->globes[1].intensity_multiplier = iVar2;
      iVar2 = (iVar2 + (iVar2 >> 0x1f) * -0x100) - (uint)((iVar2 >> 0x1f) << 7 < 0);
      iVar6 = iVar2 >> 0x1f;
      this_ptr->globes[1].intensity.bytes[0] =
           (uchar)((int)(((iVar2 >> 8) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2);
      core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(g_CDemonSetPtr,pCVar1);
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
    this_ptr->sfx_handle = 0;
  }
  return;
}
