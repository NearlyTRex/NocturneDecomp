// Name: core_elephant.cpp_FUN_004a7160
// Address: 004a7160
// Address Range: [[004a7160, 004a71ff] [004a7406, 004a74a4]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a7160()

#include "nocturne.h"

uint core_elephant_cpp_FUN_004a7160(void)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  CBoundingBox3D *pCVar5;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  float10 fVar6;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *in_stack_fffffe68;
  CBoundingBox3D *in_stack_fffffe8c;
  CDemonActor *output_local_point;
  float fStack_14c;
  float fVar7;
  float fVar8;
  float fStack_13c;
  float fStack_138;
  CVector3f CStack_104;
  float fStack_f8;
  float fStack_f4;
  float fStack_d8;
  float fStack_d4;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_a8;
  float fStack_a4;
  int iStack_9c;
  float fStack_8c;
  CDemonActor *pCStack_88;
  CDemonActor *pCStack_80;
  byte auStack_7c [8];
  float fStack_74;
  float fStack_70;
  int local_68;
  int iStack_64;
  CDemonActor *pCStack_60;
  CGlass *pCStack_58;
  CGlass *pCStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_34;
  float fStack_20;
  
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_7c,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    fStack_138 = 6.837654e-39;
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"shotgun-noammo.wav",(CVector3f *)auStack_7c);
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)(in_stack_00000004[4].actor_name + 0x18) *
                         (float10)3.1415926535000001 * (float10)0.0055555555555555497);
  fStack_40 = (float)(fVar6 * (float10)in_stack_00000004[2].orient.heading);
  iStack_34 = core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_3c = 0;
  if (0 < iStack_34) {
    do {
      fStack_d8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      fStack_a8 = fStack_d8;
      fStack_a4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_d4);
      fcos((float10)fStack_d4);
      fVar6 = (float10)fsin((float10)fStack_d4);
      fVar7 = (float)(fVar6 * (float10)fStack_a4);
      fVar8 = in_stack_00000004[2].orient.heading;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (in_stack_00000004,(CVector3f *)&fStack_13c,(CVector3f *)&stack0xfffffeb8);
      if ((CVector3f *)&stack0xfffffebc != pCVar1) {
        fVar7 = pCVar1->x;
        fVar8 = pCVar1->y;
        fStack_13c = pCVar1->z;
      }
      output_local_point = (CDemonActor *)(CStack_104.x + fVar8);
      fStack_c4 = (float)1.5 / in_stack_00000004[2].orient.heading;
      CStack_104.z = fVar7 * fStack_c4;
      fStack_f8 = fVar8 * fStack_c4;
      fStack_f4 = fStack_13c * fStack_c4;
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
                              (g_CDemonSetPtr,&CStack_104,(CVector3f *)&fStack_14c);
        if ((fStack_8c < 0.0) || (1.0 < fStack_8c)) break;
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((pCVar3 != (CDemonActor *)0x0) &&
           (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,in_stack_fffffe68), 0 < iVar2)) {
          pCVar3 = (CDemonActor *)0x0;
        }
        auStack_7c._4_4_ =
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_88 = pCVar4;
        pCStack_80 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        auStack_7c._4_4_ =
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        pCVar5 = (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_fffffe8c)
        ;
        fStack_50 = fStack_70;
        pCStack_60 = (CDemonActor *)
                     (((1.0 - (float)output_local_point) * (float)pCVar5) / (float)(int)fStack_70);
        if (pCVar3 == (CDemonActor *)0x0) {
          if (pCStack_58 == (CGlass *)0x0) {
            if (pCVar4 == (CDemonActor *)0x0) {
              if (local_68 == 0) {
                if (iStack_64 == 0) {
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
              output_local_point = pCStack_60;
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
          fStack_b8 = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          fStack_44 = (float)10 /
                      SQRT(fStack_b8 * fStack_b8 + fStack_c0 * fStack_c0 + fStack_bc * fStack_bc);
          fStack_cc = fStack_c0 * fStack_44;
          fStack_c8 = fStack_bc * fStack_44;
          fStack_c4 = fStack_b8 * fStack_44;
          if (&fStack_138 != &fStack_cc) {
            fStack_138 = fStack_cc;
          }
          output_local_point = (CDemonActor *)&stack0xfffffef8;
          fVar7 = fStack_50;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar3,(CVector3f *)output_local_point,
                     &g_CDemonSetPtr->collision_impact_position);
          CStack_104.z = (float)(*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          fStack_14c = 6.838788e-39;
          (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,&stack0xfffffecc,fVar7);
          if (in_stack_00000004[2].orient.bank == 0.0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        fStack_20 = (float)((int)fStack_20 + 1);
      } while ((int)fStack_20 < 4);
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < iStack_34);
  }
  fStack_c4 = (float)auStack_7c._0_4_;
  fStack_bc = fStack_74;
  fStack_c0 = (float)auStack_7c._4_4_ + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"elephantgun.wav",(CVector3f *)(auStack_7c + 4))
  ;
  in_stack_00000004[2].orient_matrix.m[1].z = 1.0;
  return 1;
}
