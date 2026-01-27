// Name: core_shotgun.cpp_FUN_00588060
// Address: 00588060
// Address Range: [[00588060, 005880fc] [0058830a, 005883ba]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_00588060()

#include "nocturne.h"

/* Signature: byte actors_weapon_shotgun.cpp_FUN_00588060(uint param_1) */

uint core_shotgun_cpp_FUN_00588060(void)

{
  CVector3f *pCVar1;
  int iVar2;
  CCharacter *this_ptr;
  CDemonActor *pCVar3;
  float fVar4;
  int extraout_EAX;
  float10 fVar5;
  float10 fVar6;
  CDemonActor *in_stack_00000004;
  byte auStack_128 [8];
  float fStack_120;
  CDemonActor *pCStack_11c;
  float fStack_118;
  float fStack_114;
  CVector3f CStack_10c;
  int iStack_100;
  float fStack_fc;
  int iStack_f8;
  CDemonActor *pCStack_f4;
  CDemonActor *pCStack_ec;
  float fStack_e8;
  float fStack_e4;
  CVector3f aCStack_e0 [2];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_74;
  CVector3f aCStack_68 [2];
  float fStack_4c;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  CDemonActor *pCStack_34;
  CDemonActor *pCStack_30;
  CDemonActor *pCStack_2c;
  float fStack_28;
  int iStack_24;
  CGlass *pCStack_20;
  float fStack_18;
  
  pCVar1 = (CVector3f *)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc3)();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_bc,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"shotgun-noammo.wav",&CStack_bc);
    return 0;
  }
  fVar5 = (float10)fptan((float10)*(float *)(in_stack_00000004[4].actor_name + 0x18) *
                         (float10)3.1415926535000001 * (float10)0.0055555555555555497);
  fStack_44 = (float)(fVar5 * (float10)in_stack_00000004[2].orient.heading);
  fStack_38 = (float)core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_40 = 0;
  if (0 < (int)fStack_38) {
    do {
      fStack_4c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      fStack_18 = fStack_4c;
      fStack_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_44);
      fVar5 = (float10)fcos((float10)fStack_4c);
      fVar6 = (float10)fsin((float10)fStack_4c);
      CStack_b0.x = (float)(fVar5 * (float10)fStack_18);
      CStack_b0.y = (float)(fVar6 * (float10)fStack_18);
      CStack_b0.z = in_stack_00000004[2].orient.heading;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (in_stack_00000004,&CStack_c8,&CStack_b0);
      if (&CStack_b0 != pCVar1) {
        CStack_b0.x = pCVar1->x;
        CStack_b0.y = pCVar1->y;
        CStack_b0.z = pCVar1->z;
      }
      CStack_74.x = CStack_bc.x + CStack_b0.x;
      CStack_74.y = CStack_bc.y + CStack_b0.y;
      CStack_74.z = CStack_bc.z + CStack_b0.z;
      fStack_3c = (float)1.5 / in_stack_00000004[2].orient.heading;
      fStack_a4 = CStack_b0.x * fStack_3c;
      fStack_a0 = CStack_b0.y * fStack_3c;
      fStack_9c = CStack_b0.z * fStack_3c;
      aCStack_68[0].x = CStack_bc.x - fStack_a4;
      aCStack_68[0].y = CStack_bc.y - fStack_a0;
      aCStack_68[0].z = CStack_bc.z - fStack_9c;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      pCVar3 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
      if (pCVar3 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
      }
      iStack_24 = 0;
      do {
        fStack_120 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                               (g_CDemonSetPtr,aCStack_68,&CStack_74);
        auStack_128 = (byte  [8])(double)fStack_120;
        fStack_18 = fStack_120;
        if (((double)auStack_128 < 0.0) || (1.0 < (double)auStack_128)) break;
        this_ptr = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((this_ptr != (CCharacter *)0x0) &&
           (iVar2 = (*(((this_ptr->base).vtable._uc)->_uc).isDamageable)(this_ptr), 0 < iVar2)) {
          this_ptr = (CCharacter *)0x0;
        }
        pCStack_20 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_34 = pCVar3;
        pCStack_2c = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_30 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar4 = (float)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc6)();
        fStack_18 = fStack_38;
        fStack_28 = ((1.0 - fStack_120) * fVar4) / (float)(int)fStack_38;
        if (this_ptr == (CCharacter *)0x0) {
          if (pCStack_20 == (CGlass *)0x0) {
            if (pCVar3 == (CDemonActor *)0x0) {
              if (pCStack_2c == (CDemonActor *)0x0) {
                if (pCStack_30 == (CDemonActor *)0x0) {
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
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_34);
            }
          }
          else {
            core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_20);
            if (extraout_EAX == 0) break;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      (pCStack_20,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar2 = (*(((this_ptr->base).vtable._uc)->_uc).cfunc3)();
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_128);
          auStack_128._4_4_ = pCStack_34;
          auStack_128._0_4_ = g_CDemonSetPtr->unk1;
          fStack_120 = 0.4;
          fStack_a4 = (g_CDemonSetPtr->collision_result_vec2).x -
                      (g_CDemonSetPtr->collision_result_vec1).x;
          fStack_a0 = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
          fStack_9c = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          fStack_28 = (float)10 /
                      SQRT(fStack_9c * fStack_9c + fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0);
          pCStack_ec = (CDemonActor *)(fStack_a4 * fStack_28);
          fStack_e8 = fStack_a0 * fStack_28;
          fStack_e4 = fStack_9c * fStack_28;
          if (&pCStack_11c != &pCStack_ec) {
            pCStack_11c = pCStack_ec;
            fStack_118 = fStack_e8;
            fStack_114 = fStack_e4;
          }
          pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (&this_ptr->base,aCStack_e0,&g_CDemonSetPtr->collision_impact_position)
          ;
          if (&CStack_10c != pCVar1) {
            CStack_10c.x = pCVar1->x;
            CStack_10c.y = pCVar1->y;
            CStack_10c.z = pCVar1->z;
          }
          iStack_100 = *(int *)(in_stack_00000004[4].actor_name + 0xc);
          iStack_f8 = 0x65;
          fStack_fc = 0.15;
          pCStack_f4 = in_stack_00000004;
          pCStack_ec = (*((in_stack_00000004->vtable)._ub)->getCarrier)(in_stack_00000004);
          (*(((this_ptr->base).vtable._uc)->_uc).processDamage)
                    (this_ptr,(SDamageInfo *)(auStack_128 + 4));
          if (in_stack_00000004[2].orient.bank == 0.0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 4);
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < (int)fStack_38);
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  fStack_8c = CStack_bc.x;
  fStack_84 = CStack_bc.z;
  fStack_88 = CStack_bc.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"shotgun.wav",&CStack_bc);
  in_stack_00000004[2].orient_matrix.m[1].z = 0.666;
  return 1;
}
