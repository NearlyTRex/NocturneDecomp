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
  int unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *in_stack_fffffe7c;
  CBoundingBox3D *in_stack_fffffea0;
  CDemonActor *in_stack_fffffebc;
  CDemonActor *sound_name;
  float volume;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  CDemonActor *pCStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  float fStack_c0;
  byte auStack_b0 [12];
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_9c;
  float fStack_90;
  int iStack_88;
  float fStack_78;
  CDemonActor *pCStack_74;
  float fStack_70;
  float fStack_6c;
  CDemonActor *pCStack_68;
  CDemonActor *pCStack_64;
  float fStack_5c;
  int iStack_54;
  int iStack_50;
  CDemonActor *pCStack_4c;
  CGlass *pCStack_44;
  CGlass *pCStack_40;
  float fStack_3c;
  float fStack_30;
  int iStack_28;
  int iStack_20;
  
  sound_name = in_stack_00000004;
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  volume = 8.127652e-39;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_b0,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"shotgun-noammo.wav",
               (CVector3f *)(auStack_b0 + 8));
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)(in_stack_00000004[4].actor_name + 0x18) *
                         (float10)3.1415926535000001 * (float10)0.0055555555555555497);
  fVar11 = 1.4013e-44;
  fStack_30 = (float)(fVar6 * (float10)in_stack_00000004[2].orient.heading);
  iStack_20 = core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_28 = 0;
  if (0 < iStack_20) {
    do {
      CStack_cc.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      CStack_9c.z = CStack_cc.y;
      fStack_90 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_c0);
      fVar6 = (float10)fcos((float10)CStack_cc.z);
      fVar7 = (float10)fsin((float10)CStack_cc.z);
      fVar8 = (float)(fVar6 * (float10)fStack_90);
      fVar9 = (float)(fVar7 * (float10)fStack_90);
      fVar10 = in_stack_00000004[2].orient.heading;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (in_stack_00000004,(CVector3f *)&stack0xfffffec0,
                          (CVector3f *)&stack0xfffffed8);
      if ((CVector3f *)&stack0xfffffedc != pCVar1) {
        fVar9 = pCVar1->x;
        fVar10 = pCVar1->y;
        fVar11 = pCVar1->z;
      }
      pCStack_e8 = (CDemonActor *)((float)sound_name + fVar9);
      fStack_e4 = volume + fVar10;
      fStack_e0 = fVar8 + fVar11;
      auStack_b0._0_4_ = (float)_DAT_00649b3f / in_stack_00000004[2].orient.heading;
      fStack_dc = (float)sound_name - fVar9 * (float)auStack_b0._0_4_;
      CStack_d8.x = volume - fVar10 * (float)auStack_b0._0_4_;
      CStack_d8.y = fVar8 - fVar11 * (float)auStack_b0._0_4_;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      pCVar3 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
      if (pCVar3 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
      }
      iStack_88 = 0;
      do {
        fStack_78 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                              (g_CDemonSetPtr,&CStack_cc,&CStack_d8);
        if ((fStack_78 < 0.0) || (1.0 < fStack_78)) break;
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((pCVar3 != (CDemonActor *)0x0) &&
           (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,in_stack_fffffe7c), 0 < iVar2)) {
          pCVar3 = (CDemonActor *)0x0;
        }
        pCStack_64 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_74 = pCVar4;
        pCStack_68 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_68 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        pCVar5 = (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_fffffea0)
        ;
        fStack_3c = fStack_5c;
        pCStack_4c = (CDemonActor *)
                     (((1.0 - (float)in_stack_fffffebc) * (float)pCVar5) / (float)(int)fStack_5c);
        if (pCVar3 == (CDemonActor *)0x0) {
          if (pCStack_44 == (CGlass *)0x0) {
            if (pCVar4 == (CDemonActor *)0x0) {
              if (iStack_50 == 0) {
                if (iStack_54 == 0) {
                  in_stack_fffffea0 = (CBoundingBox3D *)g_CFireEffectPtr;
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
              in_stack_fffffebc = pCStack_4c;
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_4c);
            }
          }
          else {
            core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_44);
            if (extraout_EAX == 0) break;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      (pCStack_40,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar2 = (*pCVar3->vtable[1].renderOpaque)(pCVar3);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffecc);
          auStack_b0._4_4_ =
               (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x
          ;
          auStack_b0._8_4_ =
               (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y
          ;
          fStack_a4 = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          fStack_30 = (float)_DAT_00649b47 /
                      SQRT(fStack_a4 * fStack_a4 +
                           (float)auStack_b0._4_4_ * (float)auStack_b0._4_4_ +
                           (float)auStack_b0._8_4_ * (float)auStack_b0._8_4_);
          fStack_f4 = (float)auStack_b0._4_4_ * fStack_30;
          fStack_f0 = (float)auStack_b0._8_4_ * fStack_30;
          fStack_ec = fStack_a4 * fStack_30;
          if ((float *)&stack0xfffffedc != &fStack_f4) {
            fVar11 = fStack_ec;
          }
          in_stack_fffffebc = (CDemonActor *)&pCStack_e8;
          volume = fStack_3c;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar3,(CVector3f *)in_stack_fffffebc,
                     &g_CDemonSetPtr->collision_impact_position);
          pCStack_e8 = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          sound_name = (CDemonActor *)&stack0xfffffee0;
          (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,(char *)sound_name,volume);
          if (in_stack_00000004[2].orient.bank == 0.0) break;
          fVar11 = 8.129918e-39;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        unaff_EDI = unaff_EDI + 1;
      } while (unaff_EDI < 4);
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < iStack_20);
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  fStack_70 = fStack_a0;
  pCStack_68 = (CDemonActor *)CStack_9c.y;
  fStack_6c = CStack_9c.x + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"shotgun.wav",&CStack_9c);
  in_stack_00000004[2].orient_matrix.m[1].z = 0.666;
  return 1;
}
