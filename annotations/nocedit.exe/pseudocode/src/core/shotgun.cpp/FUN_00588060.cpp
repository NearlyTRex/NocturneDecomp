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
  SCollisionInfo *in_stack_fffffe74;
  CBoundingBox3D *in_stack_fffffe98;
  CDemonActor *in_stack_fffffeb4;
  char *in_stack_fffffec8;
  float volume;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  CDemonActor *pCStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  float fStack_c8;
  byte auStack_b8 [12];
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  float fStack_98;
  int iStack_90;
  float local_80;
  CDemonActor *pCStack_7c;
  float fStack_78;
  float fStack_74;
  CDemonActor *pCStack_70;
  CDemonActor *pCStack_6c;
  float fStack_64;
  int iStack_5c;
  int iStack_58;
  CDemonActor *pCStack_54;
  CGlass *pCStack_4c;
  CGlass *pCStack_48;
  float fStack_44;
  float fStack_38;
  int iStack_30;
  int iStack_28;
  int iStack_14;
  
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  volume = 8.127652e-39;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_b8,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"shotgun-noammo.wav",
               (CVector3f *)(auStack_b8 + 8));
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)(in_stack_00000004[4].actor_name + 0x18) *
                         (float10)3.1415926535000001 * (float10)0.0055555555555555497);
  fVar11 = 1.4013e-44;
  fStack_38 = (float)(fVar6 * (float10)in_stack_00000004[2].orient.heading);
  iStack_28 = core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_30 = 0;
  if (0 < iStack_28) {
    do {
      CStack_d4.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      CStack_a4.z = CStack_d4.y;
      fStack_98 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_c8);
      fVar6 = (float10)fcos((float10)CStack_d4.z);
      fVar7 = (float10)fsin((float10)CStack_d4.z);
      fVar8 = (float)(fVar6 * (float10)fStack_98);
      fVar9 = (float)(fVar7 * (float10)fStack_98);
      fVar10 = in_stack_00000004[2].orient.heading;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (in_stack_00000004,(CVector3f *)&stack0xfffffeb8,
                          (CVector3f *)&stack0xfffffed0);
      if ((CVector3f *)&stack0xfffffed4 != pCVar1) {
        fVar9 = pCVar1->x;
        fVar10 = pCVar1->y;
        fVar11 = pCVar1->z;
      }
      pCStack_f0 = (CDemonActor *)((float)in_stack_fffffec8 + fVar9);
      fStack_ec = volume + fVar10;
      fStack_e8 = fVar8 + fVar11;
      auStack_b8._0_4_ = (float)_DAT_00649b3f / in_stack_00000004[2].orient.heading;
      fStack_e4 = (float)in_stack_fffffec8 - fVar9 * (float)auStack_b8._0_4_;
      CStack_e0.x = volume - fVar10 * (float)auStack_b8._0_4_;
      CStack_e0.y = fVar8 - fVar11 * (float)auStack_b8._0_4_;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      pCVar3 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
      if (pCVar3 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
      }
      iStack_90 = 0;
      do {
        local_80 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                             (g_CDemonSetPtr,&CStack_d4,&CStack_e0);
        if ((local_80 < 0.0) || (1.0 < local_80)) break;
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((pCVar3 != (CDemonActor *)0x0) &&
           (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,in_stack_fffffe74), 0 < iVar2)) {
          pCVar3 = (CDemonActor *)0x0;
        }
        pCStack_6c = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_7c = pCVar4;
        pCStack_70 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_70 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        pCVar5 = (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_fffffe98)
        ;
        fStack_44 = fStack_64;
        pCStack_54 = (CDemonActor *)
                     (((1.0 - (float)in_stack_fffffeb4) * (float)pCVar5) / (float)(int)fStack_64);
        if (pCVar3 == (CDemonActor *)0x0) {
          if (pCStack_4c == (CGlass *)0x0) {
            if (pCVar4 == (CDemonActor *)0x0) {
              if (iStack_58 == 0) {
                if (iStack_5c == 0) {
                  in_stack_fffffe98 = (CBoundingBox3D *)g_CFireEffectPtr;
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
              in_stack_fffffeb4 = pCStack_54;
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_54);
            }
          }
          else {
            core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_4c);
            if (extraout_EAX == 0) break;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      (pCStack_48,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar2 = (*pCVar3->vtable[1].renderOpaque)(pCVar3);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffec4);
          auStack_b8._4_4_ =
               (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x
          ;
          auStack_b8._8_4_ =
               (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y
          ;
          fStack_ac = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          fStack_38 = (float)_DAT_00649b47 /
                      SQRT(fStack_ac * fStack_ac +
                           (float)auStack_b8._4_4_ * (float)auStack_b8._4_4_ +
                           (float)auStack_b8._8_4_ * (float)auStack_b8._8_4_);
          fStack_fc = (float)auStack_b8._4_4_ * fStack_38;
          fStack_f8 = (float)auStack_b8._8_4_ * fStack_38;
          fStack_f4 = fStack_ac * fStack_38;
          if ((float *)&stack0xfffffed4 != &fStack_fc) {
            fVar11 = fStack_f4;
          }
          in_stack_fffffeb4 = (CDemonActor *)&pCStack_f0;
          volume = fStack_44;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar3,(CVector3f *)in_stack_fffffeb4,
                     &g_CDemonSetPtr->collision_impact_position);
          pCStack_f0 = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          in_stack_fffffec8 = &stack0xfffffed8;
          (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,in_stack_fffffec8,volume);
          if (in_stack_00000004[2].orient.bank == 0.0) break;
          fVar11 = 8.129918e-39;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < 4);
      iStack_30 = iStack_30 + 1;
    } while (iStack_30 < iStack_28);
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  fStack_78 = fStack_a8;
  pCStack_70 = (CDemonActor *)CStack_a4.y;
  fStack_74 = CStack_a4.x + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"shotgun.wav",&CStack_a4);
  in_stack_00000004[2].orient_matrix.m[1].z = 0.666;
  return 1;
}
