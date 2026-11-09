// Name: core_exorcism.cpp_FUN_0048a420
// Address: 0048a420
// Address Range: [[0048a420, 0048b011]]
// Convention: unknown
// Signature: void core_exorcism_cpp_FUN_0048a420(CWeapon *param_1,float param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_exorcism_cpp_FUN_0048a420(CWeapon *param_1,float param_2,uint param_3,float param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_11e0 [982];
  CWeapon *this_ptr;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  SDamageInfo aSStack_264 [4];
  float fStack_260;
  uint uStack_23c;
  uint uStack_234;
  CWeapon *pCStack_230;
  uint uStack_22c;
  float afStack_228 [6];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float afStack_1f4 [4];
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float afStack_1b8 [4];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  float afStack_194 [4];
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float afStack_170 [4];
  float fStack_160;
  uint uStack_15c;
  float afStack_158 [5];
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  float fStack_134;
  uint uStack_130;
  float afStack_12c [3];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  byte auStack_114 [8];
  float fStack_10c;
  float fStack_108;
  float afStack_104 [5];
  byte auStack_f0 [8];
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [5];
  uint uStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float fStack_5c;
  uint uStack_58;
  float afStack_54 [4];
  float afStack_44 [4];
  uint uStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  pfVar5 = afStack_c8 + 6;
  fStack_b0 = afStack_e0[0];
  afStack_c8[(uint)bVar7 * -2 + 7] = afStack_e0[(uint)bVar7 * -2 + 1];
  afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8] =
       afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
  core_actor_cpp_FUN_00408b80(param_1,pfVar5);
  fStack_1dc = afStack_104[0];
  afStack_1f4[(uint)bVar7 * -2 + 7] = afStack_104[(uint)bVar7 * -2 + 1];
  this_ptr = param_1;
  afStack_1f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8] =
       afStack_104[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
  core_weapon_cpp_FUN_0057b160(this_ptr,param_2);
  *(float *)&param_1[1].field_0x14 = *(float *)&param_1[1].field_0x14 - param_4;
  if (*(float *)&param_1[1].field_0x14 <= 0.0) {
    *(uint *)&param_1[1].field_0x14 = 0;
  }
  if (*(int *)&param_1[1].field_0x4 == 0) {
    if (*(int *)(param_1 + 1) != 0) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(_DAT_01c6e35c);
      _DAT_01c6e35c = 0;
    }
  }
  else {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&param_1->field_0x304,g_CAsgayaClassInfo.name_hash);
    (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
    pfVar5 = afStack_158 + 0xb;
    afStack_12c[0] = (float)uStack_cc;
    afStack_158[(uint)bVar7 * -2 + 0xc] = afStack_c8[(uint)bVar7 * -2];
    afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_actor_cpp_FUN_00408b80(param_1,pfVar5);
    fStack_108 = afStack_54[3];
    afStack_104[(uint)bVar7 * -2] = afStack_44[(uint)bVar7 * -2];
    afStack_104[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_44[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if (afStack_1b8 + 5 != &fStack_108) {
      fStack_1a4 = fStack_108;
      fStack_1a0 = afStack_104[0];
      uStack_19c = afStack_104[1];
    }
    if (iVar1 == 0) {
      core_fire_cpp_FUN_004a3af0(0x01C73654,afStack_1b8 + 5,&DAT_02cfd900,1,0,2);
      uVar8 = 7;
      uVar4 = 4;
    }
    else {
      uVar8 = 4;
      uVar4 = 3;
    }
    core_fire_cpp_FUN_004a3af0(0x01C73654,afStack_1b8 + 5,&DAT_02cfd900,1,0,uVar8);
    *(float *)&param_1[1].field_0x10 = *(float *)&param_1[1].field_0x10 - param_4;
    if (*(float *)&param_1[1].field_0x10 <= 0.0) {
      if (afStack_194 + 5 != afStack_1f4 + 8) {
        fStack_180 = fStack_1d4;
        fStack_17c = fStack_1d0;
        fStack_178 = fStack_1cc;
      }
      iVar3 = *(int *)&param_1[1].field_0x8;
      if ((iVar3 == 0) || (*(float *)(iVar3 + 0x2538) <= 0.0)) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
        uStack_138 = afStack_158[2];
        afStack_158[(uint)bVar7 * -2 + 9] = afStack_158[(uint)bVar7 * -2 + 3];
        afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        afStack_44[2] = (float)uStack_138;
        uStack_34 = uStack_130;
        puVar10 = &uStack_198;
        afStack_44[3] = fStack_134 + _DAT_005bdd4e;
        uStack_198 = uStack_138;
        afStack_194[(uint)bVar7 * -2] = afStack_44[(uint)bVar7 * -2 + 3];
        afStack_194[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_44[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        core_actor_cpp_FUN_00408b80(param_1,puVar10);
        afStack_194[2] = fStack_1e0;
        afStack_194[(uint)bVar7 * -2 + 3] = afStack_1f4[(uint)bVar7 * -2 + 6];
        afStack_194[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_1f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        if (afStack_170 + 2 != afStack_194 + 2) {
          afStack_170[2] = afStack_194[2];
          afStack_170[3] = afStack_194[3];
          fStack_160 = fStack_184;
        }
      }
      else {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
        pfVar5 = afStack_228;
        pfVar6 = &fStack_210;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
          pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
        }
        fStack_1bc = fStack_210 + fStack_204;
        afStack_1b8[0] = fStack_20c + fStack_200;
        afStack_1b8[1] = fStack_208 + fStack_1fc;
        afStack_1f4[2] = fStack_210 + fStack_204;
        afStack_1f4[(uint)bVar7 * -2 + 3] = afStack_1b8[(uint)bVar7 * -2];
        afStack_1f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        afStack_1b8[2] = afStack_1f4[2] * _DAT_005bdd52;
        afStack_1b8[3] = afStack_1f4[3] * _DAT_005bdd52;
        fStack_1a8 = fStack_1e4 * _DAT_005bdd52;
        fStack_84 = afStack_1f4[2] * _DAT_005bdd52;
        afStack_98[(uint)bVar7 * -2 + 6] = afStack_1b8[(uint)bVar7 * -2 + 3];
        afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        if (afStack_c8 + 5 != afStack_98 + 5) {
          fStack_b4 = fStack_84;
          fStack_b0 = fStack_80;
          fStack_ac = fStack_7c;
        }
        iVar3 = *(int *)&param_1[1].field_0x8;
        fStack_9c = *(float *)(iVar3 + 0x20) + fStack_b4;
        afStack_98[0] = *(float *)(iVar3 + 0x24) + fStack_b0;
        afStack_98[1] = *(float *)(iVar3 + 0x28) + fStack_ac;
        afStack_98[2] = fStack_9c;
        afStack_98[(uint)bVar7 * -2 + 3] = afStack_98[(uint)bVar7 * -2];
        afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        if (afStack_170 + 2 != afStack_98 + 2) {
          afStack_170[2] = afStack_98[2];
          afStack_170[3] = afStack_98[3];
          fStack_160 = fStack_88;
        }
        afStack_170[3] = fStack_b0 * _DAT_005bdd52 + afStack_170[3];
      }
      afStack_c8[3] = afStack_170[3] - fStack_17c;
      fStack_b8 = fStack_160 - fStack_178;
      afStack_c8[2] = afStack_170[2] - fStack_180;
      fStack_174 = afStack_170[2] - fStack_180;
      afStack_170[(uint)bVar7 * -2] = afStack_c8[(uint)bVar7 * -2 + 3];
      afStack_170[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if (afStack_1f4 + 0xb != &fStack_174) {
        fStack_1c8 = fStack_174;
        fStack_1c4 = afStack_170[0];
        fStack_1c0 = afStack_170[1];
      }
      fStack_1c8 = fStack_1c8 * _DAT_005bdd56;
      fStack_1c4 = fStack_1c4 * _DAT_005bdd56;
      fStack_1c0 = fStack_1c0 * _DAT_005bdd56;
      fStack_120 = fStack_180 + fStack_1c8;
      fStack_11c = fStack_17c + fStack_1c4;
      fStack_118 = fStack_178 + fStack_1c0;
      fStack_e4 = fStack_120;
      afStack_e0[(uint)bVar7 * -2] = afStack_158[(uint)bVar7 * -2 + 0xf];
      afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      if ((float *)auStack_114 != &fStack_e4) {
        auStack_114._0_4_ = fStack_e4;
        auStack_114._4_4_ = afStack_e0[0];
        fStack_10c = afStack_e0[1];
      }
      fStack_20 = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_24 = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
      fVar2 = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_2c = fStack_24;
      auStack_114._0_4_ = (float)auStack_114._0_4_ + fVar2;
      fStack_28 = fStack_20;
      auStack_114._4_4_ = (float)auStack_114._4_4_ + fStack_24;
      fStack_10c = fStack_10c + fStack_20;
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,afStack_194 + 5,auStack_114,0,0x3e800000,0x3fa00000,uVar4,0x3e800000,
                 0xffff);
      fStack_6c = afStack_170[2] - fStack_180;
      fStack_68 = afStack_170[3] - fStack_17c;
      fStack_64 = fStack_160 - fStack_178;
      fStack_78 = afStack_170[2] - fStack_180;
      afStack_98[(uint)bVar7 * -2 + 9] = afStack_98[(uint)bVar7 * -2 + 0xc];
      afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      if (afStack_1f4 + 0xb != afStack_98 + 8) {
        fStack_1c8 = fStack_78;
        fStack_1c4 = fStack_74;
        fStack_1c0 = fStack_70;
      }
      fStack_1c8 = fStack_1c8 * _DAT_005bdd5a;
      fStack_1c4 = fStack_1c4 * _DAT_005bdd5a;
      fStack_1c0 = fStack_1c0 * _DAT_005bdd5a;
      fStack_1f8 = fStack_180 + fStack_1c8;
      afStack_1f4[0] = fStack_17c + fStack_1c4;
      afStack_1f4[1] = fStack_178 + fStack_1c0;
      fStack_144 = fStack_1f8;
      afStack_158[(uint)bVar7 * -2 + 6] = afStack_1f4[(uint)bVar7 * -2];
      afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_1f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if ((float *)auStack_f0 != afStack_158 + 5) {
        auStack_f0._0_4_ = fStack_144;
        auStack_f0._4_4_ = fStack_140;
        fStack_e8 = fStack_13c;
      }
      fStack_24 = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_20 = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
      fVar2 = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_18 = fStack_20;
      auStack_f0._0_4_ = (float)auStack_f0._0_4_ + fVar2;
      fStack_14 = fStack_24;
      auStack_f0._4_4_ = (float)auStack_f0._4_4_ + fStack_20;
      fStack_e8 = fStack_e8 + fStack_24;
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,auStack_114,auStack_f0,0,0x3fa00000,0x3fa00000,uVar4,0x3e800000,0xffff
                );
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,auStack_f0,afStack_170 + 2,0,0x3fa00000,0x3e800000,uVar4,0x3e800000,
                 0xffff);
      *(uint *)&param_1[1].field_0x10 = 0x3d4ccccd;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
                ((CDemonGlobe *)&param_1[1].field_0x18,(CVector3f *)auStack_114);
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
                ((CDemonGlobe *)&param_1[1].field_0x58,(CVector3f *)auStack_f0);
    }
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
              (g_CDemonSetPtr,(CDemonGlobe *)&param_1[1].field_0x18);
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
              (g_CDemonSetPtr,(CDemonGlobe *)&param_1[1].field_0x58);
    if ((*(int *)&param_1[1].field_0x8 != 0) &&
       (0.0 < *(float *)(*(int *)&param_1[1].field_0x8 + 0x2538))) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_264);
      fStack_260 = param_4 * _DAT_005bdd5e;
      uStack_23c = 10;
      uStack_234 = 0x6f;
      pCStack_230 = param_1;
      uStack_22c = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
      (**(code **)(*(int *)(*(int *)&param_1[1].field_0x8 + 0x154) + 0x108))
                (*(int *)&param_1[1].field_0x8,aSStack_264);
      iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)&param_1->field_0x304,g_CHeroClassInfo.name_hash);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(iVar3,aSStack_264);
      }
      *(uint *)(*(int *)&param_1[1].field_0x8 + 0x3254) = 0x3dcccccd;
      if (iVar1 == 0) {
        *(uint *)(*(int *)&param_1[1].field_0x8 + 0x3258) = 2;
      }
      else {
        *(uint *)(*(int *)&param_1[1].field_0x8 + 0x3258) = 1;
      }
      if (*(float *)(*(int *)&param_1[1].field_0x8 + 0x2538) <= 0.0) {
        if ((iVar3 != 0) && (0.0 < *(float *)(iVar3 + 0x2538))) {
          *(uint *)(iVar3 + 0x2538) = *(uint *)&param_1[1].field_0xc;
        }
        uVar9 = 6;
        iVar1 = *(int *)&param_1[1].field_0x8;
        uVar8 = 0;
        uVar4 = 1;
        uStack_60 = *(uint *)(iVar1 + 0x20);
        uStack_58 = *(uint *)(iVar1 + 0x28);
        pfVar5 = afStack_98 + 0x11;
        fStack_5c = *(float *)(iVar1 + 0x24) + _DAT_005bdd62;
        uStack_15c = *(uint *)(iVar1 + 0x20);
        afStack_158[(uint)bVar7 * -2] = afStack_98[(uint)bVar7 * -2 + 0xf];
        afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
        afStack_54[0] = 0.0;
        afStack_54[1] = 3.0;
        afStack_54[2] = 0.0;
        core_fire_cpp_FUN_004a3af0(0x01C73654,&uStack_15c,pfVar5,uVar4,uVar8,uVar9);
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,(CDemonActor *)param_1,"wp_exorcism_success.wav",
                   (CVector3f *)&param_1->field_0x20);
        *(uint *)&param_1[1].field_0x8 = 0;
      }
    }
  }
  uVar4 = *(uint *)&param_1[1].field_0x4;
  *(uint *)&param_1[1].field_0x4 = 0;
  *(uint *)(param_1 + 1) = uVar4;
  return;
}
