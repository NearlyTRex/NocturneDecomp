// Name: core_lightgun.cpp_CLightGun_renderAimBeam_FUN_004e3b10
// Address: 004e3b10
// Address Range: [[004e3b10, 004e40dc]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_renderAimBeam_FUN_004e3b10(CLightGun *this_ptr)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_renderAimBeam_FUN_004e3b10(CLightGun *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_111c [1009];
  CVector3f *input_local_point;
  float fStack_138;
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
  float afStack_dc [4];
  float fStack_cc;
  float fStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [2];
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [2];
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [4];
  float fStack_3c;
  double dStack_38;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(g_CDemonRenderer_PTR_0060b280)
  ;
  if (iVar1 == 0) {
    if (this_ptr->hit_enemy == 0) {
      core_weapon_cpp_CWeapon_renderAimBeam_FUN_0058a440(&this_ptr->base);
      return;
    }
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    CStack_11c.x = fStack_c8;
    *(float *)((int)&CStack_11c + (uint)bVar4 * -8 + 4) = afStack_dc[(uint)bVar4 * -2 + 6];
    *(float *)((int)&CStack_11c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,&CStack_11c,&CStack_134);
    CStack_74.x = CStack_134.x;
    *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_134 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_134 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    CStack_8c.z = (this_ptr->base).bolt_velocity;
    CStack_8c.x = 0.0;
    CStack_8c.y = 0.0;
    fStack_28 = CStack_8c.z;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              ((CDemonActor *)this_ptr,&CStack_8c,&CStack_5c);
    fVar3 = CStack_74.y;
    fVar2 = CStack_74.x;
    fStack_128 = CStack_5c.x;
    afStack_124[(uint)bVar4 * -2] = *(float *)((int)&CStack_5c + (uint)bVar4 * -8 + 4);
    afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    fStack_e0 = -fStack_128;
    fStack_80 = fVar2 + fStack_128;
    afStack_7c[0] = fVar3 + afStack_124[0];
    afStack_7c[1] = CStack_74.z + afStack_124[1];
    CStack_ec.x = fVar2 + fStack_128;
    *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + 4) = afStack_7c[(uint)bVar4 * -2];
    *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    afStack_dc[0] = -afStack_124[0];
    afStack_dc[1] = -afStack_124[1];
    afStack_4c[2] = fStack_e0;
    afStack_4c[(uint)bVar4 * -2 + 3] = afStack_dc[(uint)bVar4 * -2];
    afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (afStack_dc + 0xb != afStack_4c + 2) {
      fStack_b0 = afStack_4c[2];
      fStack_ac = afStack_4c[3];
      fStack_a8 = fStack_3c;
    }
    fStack_20 = SQRT(fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac);
    if (fStack_20 <= 0.0) {
      fStack_ac = 0.0;
      fStack_b0 = 0.0;
      fStack_a8 = 0.0;
    }
    else {
      fVar2 = 1.0 / fStack_20;
      fStack_b0 = fStack_b0 * fVar2;
      fStack_ac = fStack_ac * fVar2;
      fStack_a8 = fStack_a8 * fVar2;
    }
    fVar5 = (float10)fpatan((float10)18 / (float10)56.0f,(float10)1);
    fStack_138 = (float)fVar5;
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    input_local_point = &CStack_68;
    CStack_68.x = fStack_50;
    *(float *)((int)&CStack_68 + (uint)bVar4 * -8 + 4) = afStack_4c[(uint)bVar4 * -2];
    *(float *)((int)&CStack_68 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,input_local_point,&CStack_104);
    core_fire_cpp_CFireEffect_createLaserCone_FUN_0049d7e0
              (g_CFireEffect_PTR_00614d30,&CStack_74,&CStack_ec,1.0,0xff,0,0,fStack_138);
    if (this_ptr->hit_enemy != 0) {
      this_ptr->hit_enemy = 0;
      fVar2 = 1.4013e-45;
      do {
        fVar3 = (float)((int)fVar2 + 1);
        fStack_18 = fVar2;
        core_fire_cpp_CFireEffect_createLaserCone_FUN_0049d7e0
                  (g_CFireEffect_PTR_00614d30,&CStack_74,&CStack_ec,1.0,0xff,0,0,
                   (float)(int)fVar2 * fStack_138 * (float)0.10000000000000001);
        fVar2 = fVar3;
      } while ((int)fVar3 < 10);
      fVar2 = CStack_ec.x - CStack_74.x;
      CStack_f8.x = CStack_74.x;
      *(uint *)((int)&CStack_f8 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&CStack_f8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      fStack_bc = fVar2;
      fStack_b8 = CStack_ec.y - CStack_74.y;
      fStack_b4 = CStack_ec.z - CStack_74.z;
      fStack_98 = fVar2;
      afStack_94[(uint)bVar4 * -2] = afStack_dc[(uint)bVar4 * -2 + 9];
      afStack_94[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      fStack_24 = SQRT(afStack_94[1] * afStack_94[1] +
                       fStack_98 * fStack_98 + afStack_94[0] * afStack_94[0]);
      if (0.0 < fStack_24) {
        fVar2 = 1.0 / fStack_24;
        fStack_98 = fStack_98 * fVar2;
        afStack_94[0] = afStack_94[0] * fVar2;
        afStack_94[1] = afStack_94[1] * fVar2;
      }
      else {
        afStack_94[0] = 0.0;
        fStack_98 = 0.0;
        afStack_94[1] = 0.0;
      }
      fStack_1c = this_ptr->beam_length * (float)0.015625;
      fStack_110 = fStack_98 * fStack_1c;
      afStack_10c[0] = afStack_94[0] * fStack_1c;
      afStack_10c[1] = afStack_94[1] * fStack_1c;
      afStack_dc[2] = fStack_98 * fStack_1c;
      afStack_dc[(uint)bVar4 * -2 + 3] = afStack_10c[(uint)bVar4 * -2];
      afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&fStack_98 != afStack_dc + 2) {
        fStack_98 = afStack_dc[2];
        afStack_94[0] = afStack_dc[3];
        afStack_94[1] = fStack_cc;
      }
      iVar1 = 0;
      do {
        CStack_a4.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
        dStack_38 = (double)iVar1 * 0.14999999999999999;
        CStack_a4.x = CStack_a4.x * (float)dStack_38;
        fStack_18 = (float)iVar1;
        fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
        CStack_a4.y = fStack_18 * (float)dStack_38;
        fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
        CStack_a4.z = fStack_18 * (float)dStack_38;
        core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                  (g_CFireEffect_PTR_00614d30,&CStack_f8,&CStack_a4,0xffdc,5000,3,5000);
        iVar1 = iVar1 + 1;
        CStack_f8.x = CStack_f8.x + fStack_98;
        CStack_f8.y = CStack_f8.y + afStack_94[0];
        CStack_f8.z = CStack_f8.z + afStack_94[1];
      } while (iVar1 < 0x40);
    }
  }
  return;
}
