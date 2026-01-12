// Name: core_shotgun.cpp_FUN_00588060
// Address: 00588060
// Address Range: [[00588060, 005880fc] [0058830a, 005883ba]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_00588060()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_weapon_shotgun.cpp_FUN_00588060(uint param_1) */

uint core_shotgun_cpp_FUN_00588060(void)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  CBoundingBox3D *pCVar5;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  float10 fVar6;
  float10 fVar7;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *in_stack_fffffe68;
  CBoundingBox3D *in_stack_fffffe8c;
  CDemonActor *in_stack_fffffea8;
  char *in_stack_fffffebc;
  float in_stack_fffffec0;
  float fStack_13c;
  float fStack_138;
  float fVar8;
  float fVar9;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  CDemonActor *pCStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  float fStack_d4;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  byte auStack_b8 [12];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int iStack_9c;
  float fStack_8c;
  CDemonActor *pCStack_88;
  float fStack_84;
  float local_80;
  CDemonActor *pCStack_7c;
  CDemonActor *pCStack_78;
  float fStack_70;
  int iStack_68;
  int iStack_64;
  CDemonActor *pCStack_60;
  CGlass *pCStack_58;
  CGlass *pCStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_34;
  int iStack_20;
  
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_b8,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    fStack_138 = 8.128763e-39;
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"shotgun-noammo.wav",(CVector3f *)auStack_b8);
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)(in_stack_00000004[4].actor_name + 0x18) *
                         (float10)3.1415926535000001 * (float10)0.0055555555555555497);
  fStack_40 = (float)(fVar6 * (float10)in_stack_00000004[2].orient.heading);
  fVar9 = 8.127741e-39;
  iStack_34 = core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_3c = 0;
  if (0 < iStack_34) {
    do {
      CStack_e0.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      fStack_a8 = CStack_e0.y;
      fStack_a4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_d4);
      fVar6 = (float10)fcos((float10)CStack_e0.z);
      fVar7 = (float10)fsin((float10)CStack_e0.z);
      fStack_13c = (float)(fVar6 * (float10)fStack_a4);
      fStack_138 = (float)(fVar7 * (float10)fStack_a4);
      fVar8 = in_stack_00000004[2].orient.heading;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (in_stack_00000004,(CVector3f *)&stack0xfffffeac,(CVector3f *)&fStack_13c);
      if ((CVector3f *)&fStack_138 != pCVar1) {
        fStack_138 = pCVar1->x;
        fVar8 = pCVar1->y;
        fVar9 = pCVar1->z;
      }
      pCStack_fc = (CDemonActor *)((float)in_stack_fffffebc + fStack_138);
      fStack_f8 = in_stack_fffffec0 + fVar8;
      fStack_f4 = fStack_13c + fVar9;
      fStack_c4 = (float)_DAT_00649b3f / in_stack_00000004[2].orient.heading;
      fStack_f0 = (float)in_stack_fffffebc - fStack_138 * fStack_c4;
      CStack_ec.x = in_stack_fffffec0 - fVar8 * fStack_c4;
      CStack_ec.y = fStack_13c - fVar9 * fStack_c4;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      pCVar3 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
      if (pCVar3 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
      }
      iStack_9c = 0;
      do {
        fStack_8c = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                              (g_CDemonSetPtr,&CStack_e0,&CStack_ec);
        if ((fStack_8c < 0.0) || (1.0 < fStack_8c)) break;
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((pCVar3 != (CDemonActor *)0x0) &&
           (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,in_stack_fffffe68), 0 < iVar2)) {
          pCVar3 = (CDemonActor *)0x0;
        }
        pCStack_78 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_88 = pCVar4;
        pCStack_7c = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_7c = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        pCVar5 = (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_fffffe8c)
        ;
        fStack_50 = fStack_70;
        pCStack_60 = (CDemonActor *)
                     (((1.0 - (float)in_stack_fffffea8) * (float)pCVar5) / (float)(int)fStack_70);
        if (pCVar3 == (CDemonActor *)0x0) {
          if (pCStack_58 == (CGlass *)0x0) {
            if (pCVar4 == (CDemonActor *)0x0) {
              if (iStack_64 == 0) {
                if (iStack_68 == 0) {
                  in_stack_fffffe8c = (CBoundingBox3D *)g_CFireEffectPtr;
                  core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
                  break;
                }
                core_flamecan_cpp_FUN_004cb340();
              }
              else {
                core_crate_cpp_FUN_00448a70();
              }
            }
            else {
              core_trigger_cpp_FUN_005e0aa0();
              iVar2 = core_trigger_cpp_FUN_005e0ac0();
              if (iVar2 != 0) {
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              }
              in_stack_fffffea8 = pCStack_60;
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_60);
            }
          }
          else {
            core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_58);
            if (extraout_EAX == 0) break;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      (pCStack_54,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar2 = (*pCVar3->vtable[1].renderOpaque)(pCVar3);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffeb8);
          fStack_13c = 0.4;
          fStack_c0 = (g_CDemonSetPtr->collision_result_vec2).x -
                      (g_CDemonSetPtr->collision_result_vec1).x;
          fStack_bc = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
          auStack_b8._0_4_ =
               (g_CDemonSetPtr->collision_result_vec2).z - (g_CDemonSetPtr->collision_result_vec1).z
          ;
          fStack_44 = (float)_DAT_00649b47 /
                      SQRT((float)auStack_b8._0_4_ * (float)auStack_b8._0_4_ +
                           fStack_c0 * fStack_c0 + fStack_bc * fStack_bc);
          fStack_108 = fStack_c0 * fStack_44;
          fStack_104 = fStack_bc * fStack_44;
          fStack_100 = (float)auStack_b8._0_4_ * fStack_44;
          if (&fStack_138 != &fStack_108) {
            fStack_138 = fStack_108;
            fVar9 = fStack_100;
          }
          in_stack_fffffea8 = (CDemonActor *)&pCStack_fc;
          in_stack_fffffec0 = fStack_50;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar3,(CVector3f *)in_stack_fffffea8,
                     &g_CDemonSetPtr->collision_impact_position);
          pCStack_fc = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          in_stack_fffffebc = &stack0xfffffecc;
          (*pCVar3->vtable[1].playAmbientSoundWithVolume)
                    (pCVar3,in_stack_fffffebc,in_stack_fffffec0);
          if (in_stack_00000004[2].orient.bank == 0.0) break;
          fVar9 = 8.129918e-39;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < iStack_34);
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  fStack_84 = (float)auStack_b8._4_4_;
  pCStack_7c = (CDemonActor *)fStack_ac;
  local_80 = (float)auStack_b8._8_4_ + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"shotgun.wav",(CVector3f *)(auStack_b8 + 8));
  in_stack_00000004[2].orient_matrix.m[1].z = 0.666;
  return 1;
}
