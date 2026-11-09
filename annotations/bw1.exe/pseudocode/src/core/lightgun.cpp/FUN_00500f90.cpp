// Name: core_lightgun.cpp_FUN_00500f90
// Address: 00500f90
// Address Range: [[00500f90, 0050155c]]
// Convention: unknown
// Signature: void core_lightgun_cpp_FUN_00500f90(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lightgun_cpp_FUN_00500f90(CWeapon *param_1)

{
  byte auVar1 [4];
  int iVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_111c [1009];
  float *pfVar7;
  float fStack_138;
  float fStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  byte auStack_f8 [4];
  float afStack_f4 [2];
  byte auStack_ec [4];
  float afStack_e8 [4];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float afStack_94 [5];
  float fStack_80;
  float afStack_7c [2];
  byte auStack_74 [4];
  float afStack_70 [5];
  float fStack_5c;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  double dStack_38;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar2 == 0) {
    if (*(int *)&param_1[1].field_0x10 == 0) {
      core_weapon_cpp_FUN_005adf90(param_1);
      return;
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
    uStack_11c = uStack_c8;
    *(float *)((int)&stack0xfffffee8 + (uint)bVar5 * 0xfffffffe * 4) =
         afStack_e8[(uint)bVar5 * -2 + 9];
    afStack_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -8] =
         afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    core_actor_cpp_FUN_00408b40(param_1,&stack0xfffffee4);
    auStack_74 = (byte  [4])fStack_134;
    afStack_70[(uint)bVar5 * -2] = *(float *)(&stack0xfffffed0 + (uint)bVar5 * -8);
    afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)(&stack0xfffffed4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    afStack_94[4] = *(float *)&param_1->field_0x2e8;
    afStack_94[2] = 0.0;
    afStack_94[3] = 0.0;
    uStack_28 = afStack_94[4];
    core_actor_cpp_FUN_00408ac0(param_1,afStack_94 + 2);
    fVar3 = afStack_70[0];
    auVar1 = auStack_74;
    fStack_128 = fStack_5c;
    *(float *)((int)&stack0xfffffedc + (uint)bVar5 * -8) = afStack_70[(uint)bVar5 * -2 + 6];
    *(float *)((int)&stack0xfffffee0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    afStack_e8[2] = -fStack_128;
    fStack_80 = (float)auVar1 + fStack_128;
    afStack_7c[0] = fVar3 + fStack_124;
    afStack_7c[1] = afStack_70[1] + fStack_120;
    auStack_ec = (byte  [4])((float)auVar1 + fStack_128);
    afStack_e8[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2];
    afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    afStack_e8[3] = -fStack_124;
    fStack_d8 = -fStack_120;
    fStack_44 = afStack_e8[2];
    afStack_70[(uint)bVar5 * -2 + 0xc] = afStack_e8[(uint)bVar5 * -2 + 3];
    afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if (afStack_e8 + 0xe != afStack_70 + 0xb) {
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
      fVar3 = 1.0 / fStack_20;
      fStack_b0 = fStack_b0 * fVar3;
      fStack_ac = fStack_ac * fVar3;
      fStack_a8 = fStack_a8 * fVar3;
    }
    fVar6 = (float10)fpatan((float10)_DAT_005e6efa / (float10)_DAT_00603014,(float10)1);
    fStack_138 = (float)fVar6;
    (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
    pfVar7 = afStack_70 + 2;
    afStack_70[2] = (float)uStack_50;
    afStack_70[(uint)bVar5 * -2 + 3] = afStack_70[(uint)bVar5 * -2 + 9];
    afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    core_actor_cpp_FUN_00408b40(param_1,pfVar7);
    core_fire_cpp_CFireEffect_createLaserCone_FUN_004b60e0
              (0x01C57074,(CVector3f *)auStack_74,(CVector3f *)auStack_ec,1.0,0xff,0,0,fStack_138)
    ;
    if (*(int *)&param_1[1].field_0x10 != 0) {
      *(uint *)&param_1[1].field_0x10 = 0;
      fVar3 = 1.4013e-45;
      do {
        fVar4 = (float)((int)fVar3 + 1);
        fStack_18 = fVar3;
        core_fire_cpp_CFireEffect_createLaserCone_FUN_004b60e0
                  (0x01C57074,(CVector3f *)auStack_74,(CVector3f *)auStack_ec,1.0,0xff,0,0,
                   (float)(int)fVar3 * fStack_138 * (float)_DAT_005e6f02);
        fVar3 = fVar4;
      } while ((int)fVar4 < 10);
      fVar3 = (float)auStack_ec - (float)auStack_74;
      auStack_f8 = auStack_74;
      afStack_f4[(uint)bVar5 * -2] = afStack_70[(uint)bVar5 * -2];
      afStack_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fStack_bc = fVar3;
      fStack_b8 = afStack_e8[0] - afStack_70[0];
      fStack_b4 = afStack_e8[1] - afStack_70[1];
      fStack_98 = fVar3;
      afStack_94[(uint)bVar5 * -2] = afStack_e8[(uint)bVar5 * -2 + 0xc];
      afStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      fStack_24 = SQRT(afStack_94[1] * afStack_94[1] +
                       fStack_98 * fStack_98 + afStack_94[0] * afStack_94[0]);
      if (0.0 < fStack_24) {
        fVar3 = 1.0 / fStack_24;
        fStack_98 = fStack_98 * fVar3;
        afStack_94[0] = afStack_94[0] * fVar3;
        afStack_94[1] = afStack_94[1] * fVar3;
      }
      else {
        afStack_94[0] = 0.0;
        fStack_98 = 0.0;
        afStack_94[1] = 0.0;
      }
      fStack_1c = *(float *)&param_1[1].field_0x1c * (float)_DAT_005e6f0a;
      fStack_110 = fStack_98 * fStack_1c;
      fStack_10c = afStack_94[0] * fStack_1c;
      fStack_108 = afStack_94[1] * fStack_1c;
      fStack_d4 = fStack_98 * fStack_1c;
      afStack_e8[(uint)bVar5 * -2 + 6] = *(float *)(auStack_ec + (uint)bVar5 * -8 + -0x20);
      afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -8];
      if (&fStack_98 != afStack_e8 + 5) {
        fStack_98 = fStack_d4;
        afStack_94[0] = fStack_d0;
        afStack_94[1] = fStack_cc;
      }
      iVar2 = 0;
      do {
        fStack_a4 = (float)core_actor_cpp_FUN_0040cc00(0xc0a00000,0x40a00000);
        dStack_38 = (double)iVar2 * _DAT_005e6f12;
        fStack_a4 = fStack_a4 * (float)dStack_38;
        fStack_18 = (float)iVar2;
        fStack_18 = (float)core_actor_cpp_FUN_0040cc00(0xc0a00000,0x40a00000);
        fStack_a0 = fStack_18 * (float)dStack_38;
        fStack_18 = (float)core_actor_cpp_FUN_0040cc00(0xc0a00000,0x40a00000);
        fStack_9c = fStack_18 * (float)dStack_38;
        core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                  (0x01C57074,(CVector3f *)auStack_f8,(CVector3f *)&fStack_a4,0xffdc,5000,3,5000);
        iVar2 = iVar2 + 1;
        auStack_f8 = (byte  [4])((float)auStack_f8 + fStack_98);
        afStack_f4[0] = afStack_f4[0] + afStack_94[0];
        afStack_f4[1] = afStack_f4[1] + afStack_94[1];
      } while (iVar2 < 0x40);
    }
  }
  return;
}
