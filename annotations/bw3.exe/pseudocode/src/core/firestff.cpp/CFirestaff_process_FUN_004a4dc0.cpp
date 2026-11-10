// Name: core_firestff.cpp_CFirestaff_process_FUN_004a4dc0
// Address: 004a4dc0
// Address Range: [[004a4dc0, 004a5760]]
// Convention: __cdecl
// Signature: void __cdecl core_firestff_cpp_CFirestaff_process_FUN_004a4dc0(CFirestaff *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_firestff_cpp_CFirestaff_process_FUN_004a4dc0(CFirestaff *this_ptr,float delta_time)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  byte *puVar6;
  byte bVar7;
  uint in_stack_00000010;
  float afStackY_126c [1014];
  uint uStack_284;
  uint uStack_278;
  uint uStack_26c;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  uint uStack_248;
  uint uStack_23c;
  uint uStack_230;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  float fStack_214;
  uint uStack_210;
  CVector3f CStack_20c;
  uint uStack_200;
  float afStack_1fc [2];
  CVector3f CStack_1f4;
  uint uStack_1e8;
  float afStack_1e4 [4];
  float fStack_1d4;
  uint uStack_1d0;
  float afStack_1c4 [4];
  float afStack_1b4 [4];
  uint uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float afStack_194 [4];
  float afStack_184 [4];
  uint uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float afStack_164 [4];
  uint auStack_154 [6];
  float afStack_13c [5];
  float afStack_128 [4];
  float afStack_118 [5];
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [10];
  float afStack_b8 [6];
  float afStack_a0 [4];
  uint uStack_90;
  float fStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [4];
  float afStack_64 [5];
  CVector3f CStack_50;
  uint uStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  core_weapon_cpp_CWeapon_process_FUN_0057b160((CWeapon *)this_ptr,delta_time);
  if ((*(int *)&this_ptr->field_0x2d4 == 2) ||
     (iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)&this_ptr->field_0x304,g_CEnemyClassInfo.name_hash),
     iVar1 != 0)) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&this_ptr->field_0x304,g_CHeroClassInfo.name_hash);
    if ((iVar1 == 0) || (*(int *)&this_ptr->field_0x58c <= *(int *)(iVar1 + 0x20b80))) {
      iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0x25c4);
      if (iVar1 == 0) {
        uVar4 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)this_ptr,"wp_firestaff_loop.wav",
                           (CVector3f *)&this_ptr->field_0x20);
        *(uint *)&this_ptr->field_0x25c4 = uVar4;
      }
      afStack_1c4[0] = 0.0;
      afStack_1c4[1] = 2.5;
      afStack_1c4[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_1e4 + 8);
      afStack_74[3] = (float)uStack_26c;
      afStack_64[(uint)bVar7 * -2] = *(float *)(&stack0xfffffd98 + (uint)bVar7 * -8);
      afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)(&stack0xfffffd9c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(float *)&this_ptr->field_0x634 = afStack_74[3];
      *(float *)&this_ptr->field_0x638 = afStack_64[0];
      *(float *)&this_ptr->field_0x63c = afStack_64[1];
      afStack_194[1] = 2.75;
      afStack_194[0] = 0.0;
      afStack_194[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_1b4 + 8);
      afStack_128[3] = (float)uStack_248;
      afStack_118[(uint)bVar7 * -2] =
           *(float *)((int)&stack0xfffffdbc + (uint)bVar7 * 0xfffffffe * 4);
      afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)(&stack0xfffffdc0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(float *)&this_ptr->field_0x8d8 = afStack_128[3];
      *(float *)&this_ptr->field_0x8dc = afStack_118[0];
      *(float *)&this_ptr->field_0x8e0 = afStack_118[1];
      afStack_164[0] = 0.0;
      afStack_164[1] = 3.0;
      afStack_164[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_184 + 8);
      afStack_1b4[2] = (float)uStack_23c;
      afStack_1b4[(uint)bVar7 * -2 + 3] = *(float *)(&stack0xfffffdc8 + (uint)bVar7 * -8);
      afStack_1b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)(&stack0xfffffdcc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(float *)&this_ptr->field_0xb7c = afStack_1b4[2];
      *(float *)&this_ptr->field_0xb80 = afStack_1b4[3];
      *(uint *)&this_ptr->field_0xb84 = uStack_1a4;
      afStack_128[1] = 3.25;
      afStack_128[2] = 0.0;
      afStack_128[0] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_13c + 5);
      uStack_218 = uStack_230;
      (&stack0xfffffdec)[(uint)bVar7 * 0xfffffffe] =
           (float)*(uint *)(&stack0xfffffdd4 + (uint)bVar7 * -8);
      *(uint *)((int)&stack0xfffffdf0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xfffffdd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)&this_ptr->field_0xe20 = uStack_218;
      *(float *)&this_ptr->field_0xe24 = fStack_214;
      *(uint *)&this_ptr->field_0xe28 = uStack_210;
      afStack_e0[0] = 0.0;
      afStack_e0[1] = 3.5;
      afStack_e0[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_118 + 0xe);
      uStack_200 = afStack_b8[5];
      afStack_1fc[(uint)bVar7 * -2] = afStack_a0[(uint)bVar7 * -2];
      afStack_1fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      *(uint *)&this_ptr->field_0x10c4 = uStack_200;
      *(float *)&this_ptr->field_0x10c8 = afStack_1fc[0];
      *(float *)&this_ptr->field_0x10cc = afStack_1fc[1];
      afStack_e0[5] = 0.0;
      afStack_e0[3] = 0.0;
      afStack_e0[4] = 3.75;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_118 + 0x11);
      afStack_a0[2] = afStack_118[2];
      afStack_a0[(uint)bVar7 * -2 + 3] = afStack_118[(uint)bVar7 * -2 + 3];
      afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      *(float *)&this_ptr->field_0x1368 = afStack_a0[2];
      *(float *)&this_ptr->field_0x136c = afStack_a0[3];
      *(uint *)&this_ptr->field_0x1370 = uStack_90;
      uStack_260 = 0;
      uStack_25c = 0xc0200000;
      uStack_258 = 0;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xfffffda0);
      uStack_44 = uStack_1e8;
      afStack_40[(uint)bVar7 * -2] = afStack_1e4[(uint)bVar7 * -2];
      afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_1e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      *(uint *)&this_ptr->field_0x160c = uStack_44;
      *(float *)&this_ptr->field_0x1610 = afStack_40[0];
      *(float *)&this_ptr->field_0x1614 = afStack_40[1];
      afStack_64[3] = -2.75;
      afStack_64[4] = 0.0;
      afStack_64[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_64 + 2);
      uStack_f8 = uStack_1d0;
      afStack_118[(uint)bVar7 * -2 + 9] = afStack_1e4[(uint)bVar7 * -2 + 6];
      afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_1e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      *(uint *)&this_ptr->field_0x18b0 = uStack_f8;
      *(uint *)&this_ptr->field_0x18b4 = uStack_f4;
      *(uint *)&this_ptr->field_0x18b8 = uStack_f0;
      uStack_224 = 0;
      uStack_220 = 0xc0400000;
      uStack_21c = 0;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xfffffddc);
      uStack_104 = afStack_1c4[3];
      afStack_118[(uint)bVar7 * -2 + 6] = afStack_1b4[(uint)bVar7 * -2];
      afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_1b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      *(uint *)&this_ptr->field_0x1b54 = uStack_104;
      *(uint *)&this_ptr->field_0x1b58 = uStack_100;
      *(uint *)&this_ptr->field_0x1b5c = uStack_fc;
      afStack_74[1] = -3.25;
      afStack_74[2] = 0.0;
      afStack_74[0] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_a0 + 0xb);
      afStack_184[2] = afStack_13c[2];
      afStack_184[(uint)bVar7 * -2 + 3] = afStack_13c[(uint)bVar7 * -2 + 3];
      afStack_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      *(float *)&this_ptr->field_0x1df8 = afStack_184[2];
      *(float *)&this_ptr->field_0x1dfc = afStack_184[3];
      *(uint *)&this_ptr->field_0x1e00 = uStack_174;
      afStack_e0[6] = 0.0;
      afStack_e0[7] = -3.5;
      afStack_e0[8] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_118 + 0x14);
      afStack_164[3] = (float)uStack_284;
      auStack_154[(uint)bVar7 * -2] = *(uint *)(&stack0xfffffd80 + (uint)bVar7 * -8);
      auStack_154[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(uint *)(&stack0xfffffd84 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(float *)&this_ptr->field_0x209c = afStack_164[3];
      *(uint *)&this_ptr->field_0x20a0 = auStack_154[0];
      *(uint *)&this_ptr->field_0x20a4 = auStack_154[1];
      afStack_b8[3] = -3.75;
      afStack_b8[4] = 0.0;
      afStack_b8[2] = 0.0;
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_b8 + 2);
      auStack_154[5] = uStack_278;
      afStack_13c[(uint)bVar7 * -2] = *(float *)(&stack0xfffffd8c + (uint)bVar7 * -8);
      afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)(&stack0xfffffd90 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      puVar6 = &this_ptr->field_0x614;
      *(uint *)&this_ptr->field_0x2340 = auStack_154[5];
      *(float *)&this_ptr->field_0x2344 = afStack_13c[0];
      *(float *)&this_ptr->field_0x2348 = afStack_13c[1];
      do {
        (**(code **)(*(int *)(puVar6 + 0x154) + 0xc))(puVar6,in_stack_00000010);
        puVar6 = puVar6 + 0x2a4;
      } while (puVar6 != &this_ptr->field_0x25c4);
      auStack_154[3] = 0x40400000;
      auStack_154[2] = 0;
      auStack_154[4] = 0;
      core_actor_cpp_FUN_00408b00(this_ptr,auStack_154 + 2);
      afStack_194[3] = fStack_8c;
      afStack_184[(uint)bVar7 * -2] = afStack_a0[(uint)bVar7 * -2 + 6];
      afStack_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (&stack0xfffffdac != afStack_1b4 + 0xb) {
        fStack_254 = afStack_194[3];
        fStack_250 = afStack_184[0];
        fStack_24c = afStack_184[1];
      }
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_28 = fStack_14;
      fStack_24 = fVar2;
      fStack_80 = *(float *)&this_ptr->field_0x20 - fStack_254;
      fStack_7c = *(float *)&this_ptr->field_0x24 - fStack_250;
      fStack_78 = *(float *)&this_ptr->field_0x28 - fStack_24c;
      afStack_1e4[2] = fStack_80;
      afStack_1e4[(uint)bVar7 * -2 + 3] = afStack_a0[(uint)bVar7 * -2 + 9];
      afStack_1e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      fStack_1a0 = afStack_1e4[2] + fVar3;
      fStack_19c = afStack_1e4[3] + fStack_28;
      fStack_198 = fStack_1d4 + fStack_24;
      CStack_38.x = afStack_1e4[2] + fVar3;
      afStack_40[(uint)bVar7 * -2 + 3] = afStack_1b4[(uint)bVar7 * -2 + 6];
      afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_1b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (&CStack_20c != (CVector3f *)(afStack_40 + 2)) {
        CStack_20c.x = CStack_38.x;
        CStack_20c.y = CStack_38.y;
        CStack_20c.z = CStack_38.z;
      }
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_1c = fVar2;
      fStack_18 = fStack_14;
      fStack_170 = *(float *)&this_ptr->field_0x20 + fStack_254;
      fStack_16c = *(float *)&this_ptr->field_0x24 + fStack_250;
      fStack_168 = *(float *)&this_ptr->field_0x28 + fStack_24c;
      fStack_ec = fStack_170;
      afStack_118[(uint)bVar7 * -2 + 0xc] = afStack_184[(uint)bVar7 * -2 + 6];
      afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
           afStack_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      afStack_e0[9] = fStack_ec + fVar3;
      afStack_b8[0] = fStack_e8 + fStack_1c;
      afStack_b8[1] = fStack_e4 + fStack_18;
      CStack_50.x = fStack_ec + fVar3;
      *(float *)((int)&CStack_50 + (uint)bVar7 * -8 + 4) = afStack_b8[(uint)bVar7 * -2];
      *(float *)((int)&CStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&CStack_1f4 != (CVector3f *)(afStack_64 + 5)) {
        CStack_1f4.x = CStack_50.x;
        CStack_1f4.y = CStack_50.y;
        CStack_1f4.z = CStack_50.z;
      }
      puVar6 = &this_ptr->field_0x594;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0((CDemonGlobe *)puVar6,&CStack_20c);
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.5,8.5);
      core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)puVar6,fVar2);
      iVar1 = *(int *)&this_ptr->field_0x588 / 2;
      *(int *)&this_ptr->field_0x5d0 = iVar1;
      this_ptr_00 = g_CDemonSetPtr;
      iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
      iVar5 = iVar1 >> 0x1f;
      this_ptr->field_0x5b0 =
           (char)((int)(((iVar1 >> 8) + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2);
      core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_00,(CDemonGlobe *)puVar6);
      puVar6 = &this_ptr->field_0x5d4;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0((CDemonGlobe *)puVar6,&CStack_1f4);
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.5,8.5);
      core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)puVar6,fVar2);
      iVar1 = *(int *)&this_ptr->field_0x588 / 2;
      *(int *)&this_ptr->field_0x610 = iVar1;
      iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
      iVar5 = iVar1 >> 0x1f;
      this_ptr->field_0x5f0 =
           (char)((int)(((iVar1 >> 8) + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2);
      core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(g_CDemonSetPtr,(CDemonGlobe *)puVar6);
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x25c4);
    *(uint *)&this_ptr->field_0x25c4 = 0;
  }
  return;
}
