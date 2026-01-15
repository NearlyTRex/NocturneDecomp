// Name: core_elephant.cpp_FUN_004a7160
// Address: 004a7160
// Address Range: [[004a7160, 004a71ff] [004a7406, 004a74a4]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a7160()

#include "nocturne.h"

uint core_elephant_cpp_FUN_004a7160(void)

{
  double dVar1;
  CVector3f *pCVar2;
  int iVar3;
  CDemonSet *this_ptr;
  CDemonActor *pCVar4;
  CBoundingBox3D *pCVar5;
  int extraout_EAX;
  float10 fVar6;
  float10 fVar7;
  CDemonActor *in_stack_00000004;
  CDemonSet *in_stack_fffffec0;
  float volume;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  CVector3f CStack_10c;
  int iStack_100;
  float fStack_fc;
  int iStack_f8;
  CDemonActor *pCStack_f4;
  CVector3f aCStack_ec [2];
  CVector3f CStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  float fStack_a0;
  float fStack_9c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float local_68;
  CDemonActor *pCStack_4c;
  CDemonActor *pCStack_48;
  CDemonActor *pCStack_44;
  float fStack_40;
  int iStack_3c;
  CDemonActor *pCStack_38;
  int iStack_34;
  CDemonSet *pCStack_30;
  CDemonActor *pCStack_28;
  int iStack_20;
  CDemonActor *pCStack_14;
  
  pCVar2 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_7c,pCVar2);
  iVar3 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"shotgun-noammo.wav",&CStack_7c);
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)(in_stack_00000004[4].actor_name + 0x18) *
                         (float10)3.1415926535000001 * (float10)0.0055555555555555497);
  fStack_40 = (float)(fVar6 * (float10)in_stack_00000004[2].orient.heading);
  iStack_34 = core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_3c = 0;
  if (0 < iStack_34) {
    do {
      pCStack_44 = (CDemonActor *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      pCStack_14 = pCStack_44;
      pCStack_14 = (CDemonActor *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_40);
      fVar6 = (float10)fcos((float10)(float)pCStack_44);
      fVar7 = (float10)fsin((float10)(float)pCStack_44);
      CStack_b8.x = (float)(fVar6 * (float10)(float)pCStack_14);
      CStack_b8.y = (float)(fVar7 * (float10)(float)pCStack_14);
      CStack_b8.z = in_stack_00000004[2].orient.heading;
      pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (in_stack_00000004,&CStack_ac,&CStack_b8);
      if (&CStack_b8 != pCVar2) {
        CStack_b8.x = pCVar2->x;
        CStack_b8.y = pCVar2->y;
        CStack_b8.z = pCVar2->z;
      }
      CStack_d0.x = CStack_7c.x + CStack_b8.x;
      CStack_d0.y = CStack_7c.y + CStack_b8.y;
      CStack_d0.z = CStack_7c.z + CStack_b8.z;
      pCStack_38 = (CDemonActor *)((float)1.5 / in_stack_00000004[2].orient.heading);
      fStack_70 = CStack_b8.x * (float)pCStack_38;
      fStack_6c = CStack_b8.y * (float)pCStack_38;
      local_68 = CStack_b8.z * (float)pCStack_38;
      CStack_88.x = CStack_7c.x - fStack_70;
      CStack_88.y = CStack_7c.y - fStack_6c;
      CStack_88.z = CStack_7c.z - local_68;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      pCVar4 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
      if (pCVar4 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
      }
      iStack_20 = 0;
      do {
        fStack_11c = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                               (g_CDemonSetPtr,&CStack_88,&CStack_d0);
        dVar1 = (double)fStack_11c;
        pCStack_14 = (CDemonActor *)fStack_11c;
        if ((dVar1 < 0.0) || (1.0 < dVar1)) break;
        volume = 6.837752e-39;
        this_ptr = (CDemonSet *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((this_ptr != (CDemonSet *)0x0) &&
           (iVar3 = (**(code **)(this_ptr->cameras[0].fog_enabled + 0x120))
                              ((CDemonActor *)this_ptr,SUB84 /* extract 2-byte value */(dVar1,0)), 0 < iVar3)) {
          this_ptr = (CDemonSet *)0x0;
        }
        pCStack_38 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_4c = pCVar4;
        pCStack_48 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_44 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        pCVar5 = (*in_stack_00000004->vtable[1].getBoundingBox)
                           (in_stack_00000004,(CBoundingBox3D *)in_stack_fffffec0);
        pCStack_28 = pCStack_48;
        pCStack_38 = (CDemonActor *)(((1.0 - volume) * (float)pCVar5) / (float)(int)pCStack_48);
        if (this_ptr == (CDemonSet *)0x0) {
          if (pCStack_30 == (CDemonSet *)0x0) {
            if (pCVar4 == (CDemonActor *)0x0) {
              if (fStack_40 == 0.0) {
                if (iStack_3c == 0) {
                  in_stack_fffffec0 = (CDemonSet *)g_CDemonSetPtr->ground_type;
                  core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
                  break;
                }
                in_stack_fffffec0 = (CDemonSet *)0x4a7834;
                core_flamecan_cpp_FUN_004cb340();
              }
              else {
                in_stack_fffffec0 = (CDemonSet *)0x4a783f;
                core_crate_cpp_FUN_00448a70();
              }
            }
            else {
              core_trigger_cpp_FUN_005e0aa0();
              iVar3 = core_trigger_cpp_FUN_005e0ac0();
              if (iVar3 != 0) {
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              }
              in_stack_fffffec0 = g_CDemonSetPtr;
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_44);
            }
          }
          else {
            in_stack_fffffec0 = (CDemonSet *)0x4a77f0;
            core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0((CGlass *)pCStack_30);
            if (extraout_EAX == 0) break;
            in_stack_fffffec0 = pCStack_30;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      ((CGlass *)pCStack_30,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          in_stack_fffffec0 = (CDemonSet *)0x4a7636;
          iVar3 = (**(code **)(this_ptr->cameras[0].fog_enabled + 0xf4))((CDemonActor *)this_ptr);
          if (iVar3 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffed8);
          CStack_ac.z = (g_CDemonSetPtr->collision_result_vec2).x -
                        (g_CDemonSetPtr->collision_result_vec1).x;
          fStack_a0 = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
          fStack_9c = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          pCStack_28 = (CDemonActor *)
                       ((float)10 /
                       SQRT(fStack_9c * fStack_9c +
                            CStack_ac.z * CStack_ac.z + fStack_a0 * fStack_a0));
          CStack_b8.z = CStack_ac.z * (float)pCStack_28;
          CStack_ac.x = fStack_a0 * (float)pCStack_28;
          CStack_ac.y = fStack_9c * (float)pCStack_28;
          if (&fStack_11c != &CStack_b8.z) {
            fStack_11c = CStack_b8.z;
            fStack_118 = CStack_ac.x;
            fStack_114 = CStack_ac.y;
          }
          in_stack_fffffec0 = this_ptr;
          pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,aCStack_ec,
                              &g_CDemonSetPtr->collision_impact_position);
          if (&CStack_10c != pCVar2) {
            CStack_10c.x = pCVar2->x;
            CStack_10c.y = pCVar2->y;
            CStack_10c.z = pCVar2->z;
          }
          iStack_100 = *(int *)(in_stack_00000004[4].actor_name + 0xc);
          iStack_f8 = 0x6b;
          fStack_fc = 1.0;
          pCStack_f4 = in_stack_00000004;
          aCStack_ec[0].x = (float)(*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          (**(code **)(this_ptr->cameras[0].fog_enabled + 0x11c))
                    ((CDemonActor *)this_ptr,&stack0xfffffedc,volume);
          if (in_stack_00000004[2].orient.bank == 0.0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < iStack_34);
  }
  fStack_c4 = CStack_7c.x;
  fStack_bc = CStack_7c.z;
  fStack_c0 = CStack_7c.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"elephantgun.wav",&CStack_7c);
  in_stack_00000004[2].orient_matrix.m[1].z = 1.0;
  return 1;
}
