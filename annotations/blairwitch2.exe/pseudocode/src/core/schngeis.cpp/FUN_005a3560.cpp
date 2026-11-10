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
  CDemonActor_vtable *pCVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_117c [1010];
  float fVar6;
  CVector3f *wind_influence;
  uint *puVar7;
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
  CVector3f CStack_164;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  float afStack_148 [2];
  CVector3f CStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [5];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_f8 [3];
  float fStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  float fStack_c8;
  uint uStack_bc;
  float fStack_b0;
  uint uStack_a4;
  float fStack_98;
  float fStack_94;
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
  
  bVar5 = 0;
  iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(&param_1[0x62].field_0x210,"Death");
  if ((iVar3 == 0) ||
     (iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(&param_1[0x62].field_0x210,"Animation"),
     iVar3 == 0)) {
    (*(param_1->vtable)._ub[1].getCarrier)(param_1);
  }
  pCStack_14 = param_1 + 1;
  core_skeleton_cpp_FUN_00546a90(pCStack_14,*(uint *)&param_1[0x67].field_0x1e4);
  puVar7 = &stack0xfffffe78;
  uStack_188 = uStack_d4;
  *(float *)((int)&stack0xfffffe7c + (uint)bVar5 * 0xfffffffe * 4) =
       afStack_124[(uint)bVar5 * -2 + 0x15];
  *(float *)(&stack0xfffffe80 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
  core_actor_cpp_FUN_00408d70(param_1,puVar7);
  fStack_170 = fStack_c8;
  *(float *)((int)&stack0xfffffe94 + (uint)bVar5 * -8) = afStack_124[(uint)bVar5 * -2 + 0x18];
  afStack_148[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -8] =
       afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
  core_skeleton_cpp_FUN_00546a90(pCStack_14,*(uint *)&param_1[0x67].field_0x1e8);
  puVar7 = &stack0xfffffe84;
  uStack_17c = uStack_bc;
  *(float *)((int)&stack0xfffffe88 + (uint)bVar5 * 0xfffffffe * 4) =
       afStack_124[(uint)bVar5 * -2 + 0x1b];
  *(float *)(&stack0xfffffe8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
  core_actor_cpp_FUN_00408d70(param_1,puVar7);
  fStack_38 = fStack_ec;
  afStack_64[(uint)bVar5 * -2 + 0xc] = afStack_124[(uint)bVar5 * -2 + 0xf];
  afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  fStack_50 = fStack_38 - fStack_170;
  fStack_4c = fStack_34 - fStack_16c;
  fStack_48 = fStack_30 - fStack_168;
  CStack_164.x = fStack_38 - fStack_170;
  *(float *)((int)&CStack_164 + (uint)bVar5 * -8 + 4) = afStack_64[(uint)bVar5 * -2 + 6];
  *(float *)((int)&CStack_164 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  fVar2 = fStack_170;
  fVar6 = SQRT(CStack_164.z * CStack_164.z +
               CStack_164.x * CStack_164.x + CStack_164.y * CStack_164.y);
  fStack_8c = CStack_164.x * _DAT_005f01ba;
  fStack_88 = CStack_164.y * _DAT_005f01ba;
  fStack_84 = CStack_164.z * _DAT_005f01ba;
  fStack_e0 = CStack_164.x * _DAT_005f01ba;
  afStack_124[(uint)bVar5 * -2 + 0x12] = afStack_124[(uint)bVar5 * -2 + 0x27];
  afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
       afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28];
  fStack_98 = fVar2 + fStack_e0;
  fStack_94 = fStack_16c + fStack_dc;
  fStack_90 = fStack_168 + fStack_d8;
  CStack_140.x = fVar2 + fStack_e0;
  *(float *)((int)&CStack_140 + (uint)bVar5 * -8 + 4) = afStack_124[(uint)bVar5 * -2 + 0x24];
  *(float *)((int)&CStack_140 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
  fStack_1c = fVar6;
  if (fVar6 <= 0.0) {
    CStack_164.y = 0.0;
    CStack_164.x = 0.0;
    CStack_164.z = 0.0;
  }
  else {
    fVar6 = 1.0 / fVar6;
    CStack_164.x = CStack_164.x * fVar6;
    CStack_164.y = CStack_164.y * fVar6;
    CStack_164.z = CStack_164.z * fVar6;
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
  fStack_44 = *(float *)&param_1[0x65].field_0x250 * param_2;
  fStack_40 = *(float *)&param_1[0x65].field_0x254 * param_2;
  fStack_3c = *(float *)&param_1[0x65].field_0x258 * param_2;
  fStack_128 = fStack_44;
  afStack_124[(uint)bVar5 * -2] = afStack_64[(uint)bVar5 * -2 + 9];
  afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  fStack_194 = fStack_128 * _DAT_005f01c2;
  fStack_190 = afStack_124[0] * _DAT_005f01c2;
  fStack_18c = afStack_124[1] * _DAT_005f01c2;
  fStack_110 = fStack_128 * _DAT_005f01c2;
  afStack_124[(uint)bVar5 * -2 + 6] = (&stack0xfffffe70)[(uint)bVar5 * 0xfffffffe];
  afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       *(float *)((int)&stack0xfffffe74 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  iVar3 = core_actor_cpp_randomChance_FUN_0040d060
                    (SQRT(fStack_108 * fStack_108 +
                          fStack_110 * fStack_110 + fStack_10c * fStack_10c) + (float)_DAT_005f01c6)
  ;
  if (iVar3 != 0) {
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
              (g_CGorePtr,&CStack_140,&CStack_164,BLOOD_TYPE_ICHOR);
  }
  iVar3 = *(int *)&param_1[0x67].field_0x1fc + -1;
  *(int *)&param_1[0x67].field_0x1fc = iVar3;
  if ((*(int *)&param_1[0x67].field_0x1f8 != 0) && (iVar3 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    uStack_198 = 0x40000000;
    uStack_1a0 = 0;
    uStack_19c = 0xbf000000;
    core_actor_cpp_FUN_00408cf0(param_1,&stack0xfffffe60);
    CStack_74.x = fStack_b0;
    *(float *)((int)&CStack_74 + (uint)bVar5 * -8 + 4) = afStack_124[(uint)bVar5 * -2 + 0x1e];
    *(float *)((int)&CStack_74 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
    uStack_158 = 0;
    uStack_150 = 0x3f000000;
    uStack_154 = 0x3e4ccccd;
    core_xform_cpp_FUN_00591530
              (&uStack_158,&param_1[6].field_0xfc + *(int *)&param_1[0x67].field_0x1e4 * 0x30);
    puVar7 = &uStack_14c;
    uStack_14c = afStack_124[2];
    afStack_148[(uint)bVar5 * -2] = afStack_124[(uint)bVar5 * -2 + 3];
    afStack_148[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    core_actor_cpp_FUN_00408d70(param_1,puVar7);
    iVar3 = 0x4000;
    wind_influence = &CStack_74;
    fVar6 = 1.5;
    CStack_80.x = fStack_104;
    *(float *)((int)&CStack_80 + (uint)bVar5 * -8 + 4) = afStack_124[(uint)bVar5 * -2 + 9];
    *(float *)((int)&CStack_80 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
              (0x01C3DEB4,&CStack_80,fVar6,wind_influence,iVar3);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  }
  if (*(int *)&param_1[0x67].field_0x1fc == 0) {
    *(uint *)&param_1[0x67].field_0x1fc = 2;
  }
  iVar3 = core_motion_cpp_FUN_005035c0(param_1 + 1);
  if (*(int *)(iVar3 + 0x24) == 0) {
    if (param_1[0x67].field_0xd5 == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[0x67].field_0x1dc);
    }
    else {
      param_2 = *(float *)&param_1[0x67].field_0x1d4 - param_2;
      *(float *)&param_1[0x67].field_0x1d4 = param_2;
      if (param_2 <= 0.0) {
        pCVar1 = (param_1->vtable)._ub;
        *(uint *)&param_1[0x67].field_0x1d4 = *(uint *)&param_1[0x67].field_0x1d8;
        uVar4 = (*pCVar1->playSound)(param_1,&param_1[0x67].field_0xd5);
        *(uint *)&param_1[0x67].field_0x1dc = uVar4;
      }
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[0x67].field_0x1dc);
  }
  if (*(int *)&param_1[0x62].field_0x190 != 0) {
    puStack_20 = &param_1[0x62].field_0x210;
    iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(puStack_20,"Chasing");
    if ((((iVar3 != 0) &&
         (fVar6 = *(float *)&param_1->field_0x20 -
                  *(float *)(*(int *)&param_1[0x62].field_0x190 + 0x20),
         fVar2 = *(float *)&param_1->field_0x28 -
                 *(float *)(*(int *)&param_1[0x62].field_0x190 + 0x28),
         fStack_24 = SQRT(fVar2 * fVar2 + fVar6 * fVar6), _DAT_005ff350 < fStack_24)) &&
        (fStack_24 <= _DAT_005ff354)) &&
       (pCStack_14 = (CDemonActor *)core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0),
       (float)_DAT_005f01ce < (float)pCStack_14)) {
      core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1[0x62].field_0x190 + 0x20);
      afStack_f8[0] = (float)uStack_68;
      afStack_124[(uint)bVar5 * -2 + 0xc] = afStack_64[(uint)bVar5 * -2];
      afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      afStack_f8[1] = 0.0;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_124 + 0xb);
      afStack_64[2] = (float)uStack_a4;
      afStack_64[(uint)bVar5 * -2 + 3] = afStack_124[(uint)bVar5 * -2 + 0x21];
      afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22];
      if (ABS(afStack_64[3]) < (float)_DAT_005f01d6) {
        unkaddr_0059d350_cpp_FUN_0059d8e0(puStack_20,"LeapAttack");
        return;
      }
    }
  }
  return;
}
