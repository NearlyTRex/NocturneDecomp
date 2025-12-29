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
  float unaff_EDI;
  float10 fVar6;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *in_stack_fffffe7c;
  CBoundingBox3D *in_stack_fffffea0;
  CDemonActor *output_local_point;
  float fStack_138;
  float fVar7;
  float fVar8;
  CDemonActor *pCVar9;
  CVector3f CStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_94;
  float fStack_90;
  int iStack_88;
  float fStack_78;
  byte auStack_74 [12];
  float local_68;
  CVector3f CStack_64;
  int iStack_54;
  int iStack_50;
  CDemonActor *pCStack_4c;
  CGlass *pCStack_44;
  CGlass *pCStack_40;
  float fStack_3c;
  float fStack_30;
  int iStack_28;
  int iStack_20;
  
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  pCVar9 = in_stack_00000004;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_74,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"shotgun-noammo.wav",
               (CVector3f *)(auStack_74 + 8));
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)(in_stack_00000004[4].actor_name + 0x18) *
                         (float10)3.1415926535000001 * (float10)0.0055555555555555497);
  fStack_30 = (float)(fVar6 * (float10)in_stack_00000004[2].orient.heading);
  iStack_20 = core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_28 = 0;
  if (0 < iStack_20) {
    do {
      fStack_c4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      fStack_94 = fStack_c4;
      fStack_90 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_c0);
      fcos((float10)fStack_c0);
      fVar6 = (float10)fsin((float10)fStack_c0);
      fVar7 = (float)(fVar6 * (float10)fStack_90);
      fVar8 = in_stack_00000004[2].orient.heading;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (in_stack_00000004,(CVector3f *)&stack0xfffffed8,
                          (CVector3f *)&stack0xfffffecc);
      if ((CVector3f *)&stack0xfffffed0 != pCVar1) {
        fVar7 = pCVar1->x;
        fVar8 = pCVar1->y;
        pCVar9 = (CDemonActor *)pCVar1->z;
      }
      output_local_point = (CDemonActor *)(CStack_f0.x + fVar8);
      fStack_b0 = (float)1.5 / in_stack_00000004[2].orient.heading;
      CStack_f0.z = fVar7 * fStack_b0;
      fStack_e4 = fVar8 * fStack_b0;
      fStack_e0 = (float)pCVar9 * fStack_b0;
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
                              (g_CDemonSetPtr,&CStack_f0,(CVector3f *)&fStack_138);
        if ((fStack_78 < 0.0) || (1.0 < fStack_78)) break;
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((pCVar3 != (CDemonActor *)0x0) &&
           (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,in_stack_fffffe7c), 0 < iVar2)) {
          pCVar3 = (CDemonActor *)0x0;
        }
        CStack_64.x = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash)
        ;
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        auStack_74._0_4_ = pCVar4;
        auStack_74._8_4_ =
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        CStack_64.x = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                       (g_CDemonSetPtr->collision_actor,
                                        g_CFlameCanClassInfo.name_hash);
        pCVar5 = (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_fffffea0)
        ;
        fStack_3c = CStack_64.z;
        pCStack_4c = (CDemonActor *)
                     (((1.0 - (float)output_local_point) * (float)pCVar5) / (float)(int)CStack_64.z)
        ;
        if (pCVar3 == (CDemonActor *)0x0) {
          if (pCStack_44 == (CGlass *)0x0) {
            if (pCVar4 == (CDemonActor *)0x0) {
              if (iStack_54 == 0) {
                if (iStack_50 == 0) {
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
              output_local_point = pCStack_4c;
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
          pCVar9 = (CDemonActor *)0x3ecccccd;
          fStack_ac = (g_CDemonSetPtr->collision_result_vec2).x -
                      (g_CDemonSetPtr->collision_result_vec1).x;
          fStack_a8 = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
          fStack_a4 = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          fStack_30 = (float)10 /
                      SQRT(fStack_a4 * fStack_a4 + fStack_ac * fStack_ac + fStack_a8 * fStack_a8);
          fStack_b8 = fStack_ac * fStack_30;
          fStack_b4 = fStack_a8 * fStack_30;
          fStack_b0 = fStack_a4 * fStack_30;
          output_local_point = (CDemonActor *)&stack0xffffff0c;
          fVar7 = fStack_3c;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar3,(CVector3f *)output_local_point,
                     &g_CDemonSetPtr->collision_impact_position);
          CStack_f0.z = (float)(*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          fStack_138 = 6.838788e-39;
          (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,&stack0xfffffee0,fVar7);
          if (in_stack_00000004[2].orient.bank == 0.0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        unaff_EDI = (float)((int)unaff_EDI + 1);
      } while ((int)unaff_EDI < 4);
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < iStack_20);
  }
  fStack_b0 = local_68;
  fStack_a8 = CStack_64.y;
  fStack_ac = CStack_64.x + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"elephantgun.wav",&CStack_64);
  in_stack_00000004[2].orient_matrix.m[1].z = 1.0;
  return 1;
}
