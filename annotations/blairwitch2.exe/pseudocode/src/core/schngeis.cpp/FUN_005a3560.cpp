// Name: core_schngeis.cpp_FUN_005a3560
// Address: 005a3560
// Address Range: [[005a3560, 005a3b0a]]
// Convention: unknown
// Signature: void core_schngeis_cpp_FUN_005a3560(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_schngeis_cpp_FUN_005a3560(CDemonActor *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_117c [1010];
  float fVar5;
  CVector3f *wind_influence;
  uint *puVar6;
  float *pfVar7;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  uint uStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  byte auStack_164 [4];
  float afStack_160 [6];
  float afStack_148 [2];
  byte auStack_140 [8];
  float fStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  float fStack_128;
  float afStack_124 [5];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  CVector3f CStack_104;
  uint uStack_f8;
  float afStack_f4 [5];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  float fStack_c8;
  uint uStack_bc;
  CVector3f CStack_b0;
  uint uStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  CVector3f CStack_74;
  uint uStack_68;
  float afStack_64 [5];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  byte *puStack_20;
  float fStack_1c;
  CDemonActor *pCStack_14;
  
  bVar4 = 0;
  iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(&param_1[0x62].field_0x210,"Death");
  if ((iVar2 == 0) ||
     (iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(&param_1[0x62].field_0x210,"Animation"),
     iVar2 == 0)) {
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  }
  pCStack_14 = param_1 + 1;
  core_skeleton_cpp_FUN_00546a90(pCStack_14,*(uint *)&param_1[0x67].field_0x1e4);
  puVar6 = &stack0xfffffe78;
  uStack_188 = uStack_d4;
  *(float *)((int)&stack0xfffffe7c + (uint)bVar4 * 0xfffffffe * 4) =
       afStack_f4[(uint)bVar4 * -2 + 9];
  afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
       afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  core_actor_cpp_FUN_00408d70(param_1,puVar6);
  fStack_170 = fStack_c8;
  afStack_160[(uint)bVar4 * -2 + -3] = afStack_f4[(uint)bVar4 * -2 + 0xc];
  afStack_148[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
       afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  core_skeleton_cpp_FUN_00546a90(pCStack_14,*(uint *)&param_1[0x67].field_0x1e8);
  puVar6 = &stack0xfffffe84;
  uStack_17c = uStack_bc;
  *(float *)((int)&stack0xfffffe88 + (uint)bVar4 * 0xfffffffe * 4) =
       afStack_f4[(uint)bVar4 * -2 + 0xf];
  afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -5] =
       afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  core_actor_cpp_FUN_00408d70(param_1,puVar6);
  fStack_38 = afStack_f4[2];
  afStack_64[(uint)bVar4 * -2 + 0xc] = afStack_f4[(uint)bVar4 * -2 + 3];
  afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_50 = fStack_38 - fStack_170;
  fStack_4c = fStack_34 - fStack_16c;
  fStack_48 = fStack_30 - fStack_168;
  auStack_164 = (byte  [4])(fStack_38 - fStack_170);
  afStack_160[(uint)bVar4 * -2] = afStack_64[(uint)bVar4 * -2 + 6];
  afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  fVar1 = fStack_170;
  fVar5 = SQRT(afStack_160[1] * afStack_160[1] +
               (float)auStack_164 * (float)auStack_164 + afStack_160[0] * afStack_160[0]);
  fStack_8c = (float)auStack_164 * _DAT_005f01ba;
  fStack_88 = afStack_160[0] * _DAT_005f01ba;
  fStack_84 = afStack_160[1] * _DAT_005f01ba;
  fStack_e0 = (float)auStack_164 * _DAT_005f01ba;
  afStack_f4[(uint)bVar4 * -2 + 6] = afStack_a0[(uint)bVar4 * -2 + 6];
  afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  afStack_a0[2] = fVar1 + fStack_e0;
  afStack_a0[3] = fStack_16c + fStack_dc;
  fStack_90 = fStack_168 + fStack_d8;
  auStack_140._0_4_ = fVar1 + fStack_e0;
  *(float *)(auStack_140 + (uint)bVar4 * -8 + 4) = afStack_a0[(uint)bVar4 * -2 + 3];
  *(float *)(auStack_140 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_1c = fVar5;
  if (fVar5 <= 0.0) {
    afStack_160[0] = 0.0;
    auStack_164 = (byte  [4])0x0;
    afStack_160[1] = 0.0;
  }
  else {
    fVar5 = 1.0 / fVar5;
    auStack_164 = (byte  [4])((float)auStack_164 * fVar5);
    afStack_160[0] = afStack_160[0] * fVar5;
    afStack_160[1] = afStack_160[1] * fVar5;
  }
  uStack_134 = 0;
  uStack_130 = 0xbf800000;
  uStack_12c = 0;
  afStack_160[0] = afStack_160[0] * _DAT_005f01be;
  afStack_160[1] = afStack_160[1] * _DAT_005f01be;
  auStack_164 = (byte  [4])((float)auStack_164 * _DAT_005f01be);
  if ((uint *)auStack_164 != &uStack_134) {
    afStack_160[0] = -1.0;
    afStack_160[1] = 0.0;
    auStack_164 = (byte  [4])0x0;
  }
  fStack_44 = *(float *)&param_1[0x65].field_0x250 * param_2;
  fStack_40 = *(float *)&param_1[0x65].field_0x254 * param_2;
  fStack_3c = *(float *)&param_1[0x65].field_0x258 * param_2;
  fStack_128 = fStack_44;
  afStack_124[(uint)bVar4 * -2] = afStack_64[(uint)bVar4 * -2 + 9];
  afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  fStack_194 = fStack_128 * _DAT_005f01c2;
  fStack_190 = afStack_124[0] * _DAT_005f01c2;
  fStack_18c = afStack_124[1] * _DAT_005f01c2;
  fStack_110 = fStack_128 * _DAT_005f01c2;
  afStack_124[(uint)bVar4 * -2 + 6] = (&stack0xfffffe70)[(uint)bVar4 * 0xfffffffe];
  afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       *(float *)((int)&stack0xfffffe74 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  iVar2 = core_actor_cpp_FUN_0040d060
                    (SQRT(fStack_108 * fStack_108 +
                          fStack_110 * fStack_110 + fStack_10c * fStack_10c) + (float)_DAT_005f01c6)
  ;
  if (iVar2 != 0) {
    core_gore_cpp_FUN_004c9730
              (g_CGorePtr,(CVector3f *)auStack_140,(CVector3f *)auStack_164,BLOOD_TYPE_ICHOR);
  }
  iVar2 = *(int *)&param_1[0x67].field_0x1fc + -1;
  *(int *)&param_1[0x67].field_0x1fc = iVar2;
  if ((*(int *)&param_1[0x67].field_0x1f8 != 0) && (iVar2 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    uStack_198 = 0x40000000;
    uStack_1a0 = 0;
    uStack_19c = 0xbf000000;
    core_actor_cpp_FUN_00408cf0(param_1,&stack0xfffffe60);
    CStack_74._0_4_ = CStack_b0._0_4_;
    *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    afStack_160[2] = 0.0;
    afStack_160[4] = 0.5;
    afStack_160[3] = 0.2;
    core_xform_cpp_FUN_00591530
              (afStack_160 + 2,&param_1[6].field_0xfc + *(int *)&param_1[0x67].field_0x1e4 * 0x30);
    pfVar7 = afStack_160 + 5;
    afStack_160[5] = afStack_124[2];
    afStack_148[(uint)bVar4 * -2] = afStack_124[(uint)bVar4 * -2 + 3];
    afStack_148[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    core_actor_cpp_FUN_00408d70(param_1,pfVar7);
    iVar2 = 0x4000;
    wind_influence = &CStack_74;
    fVar5 = 1.5;
    CStack_80._0_4_ = CStack_104._0_4_;
    *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_104 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_104 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
              (0x01C3DEB4,&CStack_80,fVar5,wind_influence,iVar2);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  }
  if (*(int *)&param_1[0x67].field_0x1fc == 0) {
    *(uint *)&param_1[0x67].field_0x1fc = 2;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(param_1 + 1);
  if (*(int *)(iVar2 + 0x24) == 0) {
    if (param_1[0x67].field_0xd5 == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[0x67].field_0x1dc);
    }
    else {
      param_2 = *(float *)&param_1[0x67].field_0x1d4 - param_2;
      *(float *)&param_1[0x67].field_0x1d4 = param_2;
      if (param_2 <= 0.0) {
        iVar2 = *(int *)&param_1->field_0x2b0;
        *(uint *)&param_1[0x67].field_0x1d4 = *(uint *)&param_1[0x67].field_0x1d8;
        uVar3 = (**(code **)(iVar2 + 0x34))(param_1,&param_1[0x67].field_0xd5);
        *(uint *)&param_1[0x67].field_0x1dc = uVar3;
      }
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[0x67].field_0x1dc);
  }
  if (*(int *)&param_1[0x62].field_0x190 != 0) {
    puStack_20 = &param_1[0x62].field_0x210;
    iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(puStack_20,"Chasing");
    if ((((iVar2 != 0) &&
         (fVar5 = *(float *)&param_1->field_0x20 -
                  *(float *)(*(int *)&param_1[0x62].field_0x190 + 0x20),
         fVar1 = *(float *)&param_1->field_0x28 -
                 *(float *)(*(int *)&param_1[0x62].field_0x190 + 0x28),
         fStack_24 = SQRT(fVar1 * fVar1 + fVar5 * fVar5), _DAT_005ff350 < fStack_24)) &&
        (fStack_24 <= _DAT_005ff354)) &&
       (pCStack_14 = (CDemonActor *)core_actor_cpp_FUN_0040cf60(0,0x3f800000),
       (float)_DAT_005f01ce < (float)pCStack_14)) {
      core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1[0x62].field_0x190 + 0x20);
      uStack_f8 = uStack_68;
      afStack_f4[(uint)bVar4 * -2] = afStack_64[(uint)bVar4 * -2];
      afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      afStack_f4[0] = 0.0;
      core_vecdir_cpp_FUN_005838f0(&uStack_f8);
      afStack_64[2] = (float)uStack_a4;
      afStack_64[(uint)bVar4 * -2 + 3] = afStack_a0[(uint)bVar4 * -2];
      afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (ABS(afStack_64[3]) < (float)_DAT_005f01d6) {
        unkaddr_0059d350_cpp_FUN_0059d8e0(puStack_20,"LeapAttack");
        return;
      }
    }
  }
  return;
}
