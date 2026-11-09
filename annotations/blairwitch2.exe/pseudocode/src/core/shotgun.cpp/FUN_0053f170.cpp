// Name: core_shotgun.cpp_FUN_0053f170
// Address: 0053f170
// Address Range: [[0053f170, 0053f989]]
// Convention: unknown
// Signature: undefined4 core_shotgun_cpp_FUN_0053f170(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_shotgun_cpp_FUN_0053f170(CWeapon *param_1)

{
  int iVar1;
  float fVar2;
  CGlass *this_ptr;
  CTrigger *this_ptr_00;
  float fVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1130 [995];
  float *pfVar7;
  CWeapon *this_ptr_01;
  CMatrix3x3f *rotation_matrix;
  uint uStack_184;
  float fStack_180;
  uint uStack_17c;
  float fStack_178;
  uint uStack_174;
  uint uStack_170;
  float fStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  CWeapon *pCStack_150;
  uint uStack_14c;
  float fStack_148;
  float afStack_144 [4];
  uint uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float afStack_118 [3];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f4;
  float fStack_e8;
  float afStack_e4 [4];
  uint uStack_d4;
  float fStack_d0;
  float afStack_c4 [3];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [4];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [5];
  uint uStack_64;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CTrigger *pCStack_30;
  CFlameCan *pCStack_2c;
  float fStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0xe8))(param_1);
  pfVar7 = afStack_78 + 2;
  afStack_78[2] = (float)uStack_64;
  afStack_78[(uint)bVar4 * -2 + 3] = afStack_78[(uint)bVar4 * -2 + 6];
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_FUN_00408d70(param_1,pfVar7);
  fStack_e8 = fStack_100;
  afStack_e4[(uint)bVar4 * -2] = afStack_144[(uint)bVar4 * -2 + 0x12];
  this_ptr_01 = param_1;
  afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_144[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(this_ptr_01);
  if (iVar1 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)param_1,"shotgun-noammo.wav",
               (CVector3f *)&fStack_e8);
    return 0;
  }
  fVar5 = (float10)fptan((float10)*(float *)(param_1 + 1) * (float10)_DAT_005e67f1 *
                         (float10)_DAT_005e67f5);
  fStack_44 = (float)(fVar5 * (float10)*(float *)&param_1->field_0x444);
  fStack_34 = (float)core_actor_cpp_FUN_0040cfc0(10,0xf);
  iStack_40 = 0;
  if (0 < (int)fStack_34) {
    do {
      fStack_38 = (float)core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
      fStack_14 = fStack_38;
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0,fStack_44);
      fVar5 = (float10)fcos((float10)fStack_38);
      fVar6 = (float10)fsin((float10)fStack_38);
      fStack_88 = (float)(fVar5 * (float10)fStack_14);
      fStack_84 = (float)(fVar6 * (float10)fStack_14);
      fStack_80 = *(float *)&param_1->field_0x444;
      core_actor_cpp_FUN_00408cf0(param_1,afStack_a8 + 8);
      fStack_130 = fStack_f4;
      afStack_144[(uint)bVar4 * -2 + 6] = afStack_144[(uint)bVar4 * -2 + 0x15];
      afStack_144[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_144[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
      if (afStack_a8 + 8 != afStack_144 + 5) {
        fStack_88 = fStack_130;
        fStack_84 = fStack_12c;
        fStack_80 = fStack_128;
      }
      fStack_124 = fStack_e8 + fStack_88;
      fStack_120 = afStack_e4[0] + fStack_84;
      fStack_11c = afStack_e4[1] + fStack_80;
      afStack_c4[0] = fStack_e8 + fStack_88;
      afStack_e4[(uint)bVar4 * -2 + 9] = afStack_144[(uint)bVar4 * -2 + 9];
      afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           afStack_144[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      fVar3 = afStack_e4[0];
      fVar2 = fStack_e8;
      fStack_3c = (float)_DAT_005e6805 / *(float *)&param_1->field_0x444;
      afStack_a8[2] = fStack_88 * fStack_3c;
      afStack_a8[3] = fStack_84 * fStack_3c;
      fStack_98 = fStack_80 * fStack_3c;
      fStack_148 = fStack_88 * fStack_3c;
      afStack_144[(uint)bVar4 * -2] = afStack_a8[(uint)bVar4 * -2 + 3];
      afStack_144[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      fStack_7c = fVar2 - fStack_148;
      afStack_78[0] = fVar3 - afStack_144[0];
      afStack_78[1] = afStack_e4[1] - afStack_144[1];
      afStack_118[0] = fVar2 - fStack_148;
      afStack_144[(uint)bVar4 * -2 + 0xc] = afStack_78[(uint)bVar4 * -2];
      afStack_144[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)param_1);
      if (*(CDemonActor **)&param_1->field_0x460 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x460);
      }
      iStack_20 = 0;
      do {
        fVar2 = (float)core_setcolid_cpp_FUN_00535ee0
                                 (g_CDemonSetPtr,afStack_144 + 0xb,afStack_e4 + 8);
        fStack_14 = fVar2;
        if ((fVar2 < 0.0) || (1.0 < fVar2)) break;
        iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                               g_CCharacterClassInfo.name_hash);
        if ((iStack_18 != 0) &&
           (iVar1 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18), 0 < iVar1)) {
          iStack_18 = 0;
        }
        this_ptr = (CGlass *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                              g_CGlassClassInfo.name_hash);
        this_ptr_00 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                                 g_CTriggerClassInfo.name_hash);
        pCStack_30 = this_ptr_00;
        pCStack_24 = (CCrate *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                                g_CCrateClassInfo.name_hash);
        pCStack_2c = (CFlameCan *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                                g_CFlameCanClassInfo.name_hash);
        fVar3 = (float)(**(code **)(*(int *)&param_1->field_0x2b0 + 0xf4))(param_1);
        fStack_14 = fStack_34;
        fStack_28 = ((1.0 - fVar2) * fVar3) / (float)(int)fStack_34;
        if (iStack_18 == 0) {
          if (this_ptr == (CGlass *)0x0) {
            if (this_ptr_00 == (CTrigger *)0x0) {
              if (pCStack_24 == (CCrate *)0x0) {
                if (pCStack_2c == (CFlameCan *)0x0) {
                  core_fire_cpp_FUN_0049cd50
                            (0x01C3DEB4,(CVector3f *)&g_CDemonSetPtr->field_0x14d138,
                             (CVector3f *)&g_CDemonSetPtr->field_0x14d128,
                             *(int *)&g_CDemonSetPtr->field_0x14d134,
                             *(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
                  break;
                }
                core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(pCStack_2c);
              }
              else {
                core_crate_cpp_FUN_0043a350(pCStack_24);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_00);
              iVar1 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                                (this_ptr_00,(CDemonActor *)param_1);
              if (iVar1 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_00,fStack_28);
              }
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,(CDemonActor *)pCStack_30);
            }
          }
          else {
            iVar1 = core_glass_cpp_FUN_004c72d0(this_ptr);
            if (iVar1 == 0) break;
            core_glass_cpp_FUN_004c6d40(this_ptr,&g_CDemonSetPtr->field_0x14d138);
          }
        }
        else {
          iVar1 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0xe8))(iStack_18);
          if (iVar1 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&uStack_184);
          uStack_184 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
          fStack_180 = fStack_28;
          uStack_17c = 0x3ecccccd;
          fStack_10c = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                       *(float *)&g_CDemonSetPtr->field_0x14d110;
          fStack_108 = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                       *(float *)&g_CDemonSetPtr->field_0x14d114;
          fStack_104 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                       *(float *)&g_CDemonSetPtr->field_0x14d118;
          fStack_b8 = fStack_10c;
          afStack_e4[(uint)bVar4 * -2 + 0xc] = afStack_144[(uint)bVar4 * -2 + 0xf];
          afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
               afStack_144[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
          fStack_1c = (float)_DAT_005e680d /
                      SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
          fStack_94 = fStack_b8 * fStack_1c;
          fStack_90 = fStack_b4 * fStack_1c;
          fStack_8c = fStack_b0 * fStack_1c;
          afStack_144[2] = fStack_b8 * fStack_1c;
          afStack_144[(uint)bVar4 * -2 + 3] = afStack_a8[(uint)bVar4 * -2 + 6];
          afStack_144[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          if (&fStack_178 != afStack_144 + 2) {
            fStack_178 = afStack_144[2];
            uStack_174 = afStack_144[3];
            uStack_170 = uStack_134;
          }
          core_actor_cpp_FUN_00408de0(iStack_18,&g_CDemonSetPtr->field_0x14d138);
          afStack_e4[2] = fStack_d0;
          afStack_e4[(uint)bVar4 * -2 + 3] = afStack_e4[(uint)bVar4 * -2 + 6];
          afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          if (&fStack_168 != afStack_e4 + 2) {
            fStack_168 = afStack_e4[2];
            uStack_164 = afStack_e4[3];
            uStack_160 = uStack_d4;
          }
          uStack_15c = *(uint *)&param_1->field_0x6c8;
          uStack_154 = 0x65;
          uStack_158 = 0x3e19999a;
          pCStack_150 = param_1;
          uStack_14c = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x9c))(param_1);
          (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,&uStack_184);
          if (*(int *)&param_1->field_0x440 == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                    (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < (int)fStack_34);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  rotation_matrix = (CMatrix3x3f *)&param_1->field_0x3c;
  fStack_ac = fStack_e8;
  afStack_a8[(uint)bVar4 * -2] = afStack_e4[(uint)bVar4 * -2];
  afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  afStack_a8[0] = afStack_a8[0] + _DAT_005e67fd;
  core_fire_cpp_FUN_0049d120(0x01C3DEB4,(CVector3f *)&fStack_ac,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)param_1,"shotgun.wav",(CVector3f *)&fStack_e8);
  *(uint *)&param_1->field_0x45c = 0x3f2a7efa;
  return 1;
}
