// Name: core_lightpis.cpp_CLightPis_renderAimBeam_FUN_005026f0
// Address: 005026f0
// Address Range: [[005026f0, 00502cbc]]
// Convention: __cdecl
// Signature: void __cdecl core_lightpis_cpp_CLightPis_renderAimBeam_FUN_005026f0(CLightPis *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lightpis_cpp_CLightPis_renderAimBeam_FUN_005026f0(CLightPis *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_111c [1009];
  uint *puVar6;
  float fStack_138;
  float fStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  uint uStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [5];
  float fStack_80;
  float afStack_7c [2];
  CVector3f CStack_74;
  uint uStack_68;
  float afStack_64 [5];
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  double dStack_38;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 == 0) {
    if (this_ptr->hit_enemy == 0) {
      core_weapon_cpp_CWeapon_renderAimBeam_FUN_005adf90(&this_ptr->base);
      return;
    }
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    uStack_11c = uStack_c8;
    *(float *)((int)&stack0xfffffee8 + (uint)bVar4 * 0xfffffffe * 4) =
         afStack_dc[(uint)bVar4 * -2 + 6];
    *(float *)(&stack0xfffffeec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_actor_cpp_FUN_00408b40(this_ptr,&stack0xfffffee4);
    CStack_74.x = fStack_134;
    *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xfffffed0 + (uint)bVar4 * -8);
    *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)(&stack0xfffffed4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    afStack_94[4] = (this_ptr->base).bolt_velocity;
    afStack_94[2] = 0.0;
    afStack_94[3] = 0.0;
    fStack_28 = afStack_94[4];
    core_actor_cpp_FUN_00408ac0(this_ptr,afStack_94 + 2);
    fVar3 = CStack_74.y;
    fVar2 = CStack_74.x;
    fStack_128 = afStack_64[2];
    *(float *)((int)&stack0xfffffedc + (uint)bVar4 * -8) = afStack_64[(uint)bVar4 * -2 + 3];
    *(float *)((int)&stack0xfffffee0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_e0 = -fStack_128;
    fStack_80 = fVar2 + fStack_128;
    afStack_7c[0] = fVar3 + fStack_124;
    afStack_7c[1] = CStack_74.z + fStack_120;
    CStack_ec.x = fVar2 + fStack_128;
    *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + 4) = afStack_7c[(uint)bVar4 * -2];
    *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    afStack_dc[0] = -fStack_124;
    afStack_dc[1] = -fStack_120;
    fStack_44 = fStack_e0;
    afStack_64[(uint)bVar4 * -2 + 9] = afStack_dc[(uint)bVar4 * -2];
    afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (afStack_dc + 0xb != afStack_64 + 8) {
      fStack_b0 = fStack_44;
      fStack_ac = fStack_40;
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
    fVar5 = (float10)fpatan((float10)_DAT_005e7022 / (float10)_DAT_00603174,(float10)1);
    fStack_138 = (float)fVar5;
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    puVar6 = &uStack_68;
    uStack_68 = uStack_50;
    afStack_64[(uint)bVar4 * -2] = afStack_64[(uint)bVar4 * -2 + 6];
    afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_actor_cpp_FUN_00408b40(this_ptr,puVar6);
    core_fire_cpp_CFireEffect_createLaserCone_FUN_004b60e0
              (0x01C57074,&CStack_74,&CStack_ec,1.0,0xff,0,0,fStack_138);
    if (this_ptr->hit_enemy != 0) {
      this_ptr->hit_enemy = 0;
      fVar2 = 1.4013e-45;
      do {
        fVar3 = (float)((int)fVar2 + 1);
        fStack_18 = fVar2;
        core_fire_cpp_CFireEffect_createLaserCone_FUN_004b60e0
                  (0x01C57074,&CStack_74,&CStack_ec,1.0,0xff,0,0,
                   (float)(int)fVar2 * fStack_138 * (float)_DAT_005e702a);
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
      fStack_1c = this_ptr->beam_length * (float)_DAT_005e7032;
      fStack_110 = fStack_98 * fStack_1c;
      fStack_10c = afStack_94[0] * fStack_1c;
      fStack_108 = afStack_94[1] * fStack_1c;
      afStack_dc[2] = fStack_98 * fStack_1c;
      afStack_dc[(uint)bVar4 * -2 + 3] = *(float *)((int)&stack0xfffffef4 + (uint)bVar4 * -8);
      afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           *(float *)((int)&stack0xfffffef8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (&fStack_98 != afStack_dc + 2) {
        fStack_98 = afStack_dc[2];
        afStack_94[0] = afStack_dc[3];
        afStack_94[1] = fStack_cc;
      }
      iVar1 = 0;
      do {
        CStack_a4.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
        dStack_38 = (double)iVar1 * _DAT_005e703a;
        CStack_a4.x = CStack_a4.x * (float)dStack_38;
        fStack_18 = (float)iVar1;
        fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
        CStack_a4.y = fStack_18 * (float)dStack_38;
        fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
        CStack_a4.z = fStack_18 * (float)dStack_38;
        core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                  (0x01C57074,&CStack_f8,&CStack_a4,0xffdc,5000,3,5000);
        iVar1 = iVar1 + 1;
        CStack_f8.x = CStack_f8.x + fStack_98;
        CStack_f8.y = CStack_f8.y + afStack_94[0];
        CStack_f8.z = CStack_f8.z + afStack_94[1];
      } while (iVar1 < 0x40);
    }
  }
  return;
}
