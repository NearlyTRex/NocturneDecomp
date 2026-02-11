// Name: core_shotgun.cpp_CShotgun_fire_FUN_00588060
// Address: 00588060
// Address Range: [[00588060, 005880fc] [0058830a, 005883ba]]
// Convention: __cdecl
// Signature: int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00588060(CShotgun *this_ptr)

#include "nocturne.h"

int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00588060(CShotgun *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonSet *this_ptr_00;
  CTrigger *this_ptr_01;
  float fVar3;
  int extraout_EAX;
  float10 fVar4;
  float10 fVar5;
  CDemonActor *in_stack_fffffec0;
  CDemonSet *in_stack_fffffec4;
  CDemonActor *pCVar6;
  byte auStack_124 [8];
  float fStack_11c;
  CDemonActor *pCStack_118;
  float fStack_114;
  float fStack_110;
  CVector3f CStack_108;
  int iStack_fc;
  float fStack_f8;
  int iStack_f4;
  CShotgun *pCStack_f0;
  CDemonActor *pCStack_e8;
  float fStack_e4;
  float fStack_e0;
  CVector3f aCStack_dc [2];
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_88;
  float fStack_84;
  float local_80;
  CVector3f CStack_70;
  CVector3f aCStack_64 [2];
  CTrigger *pCStack_4c;
  CDemonActor *pCStack_48;
  CDemonActor *pCStack_44;
  CDemonActor *pCStack_40;
  CFlameCan *pCStack_3c;
  CCrate *pCStack_38;
  float fStack_34;
  uint uStack_30;
  CDemonSet *pCStack_2c;
  CDemonActor *pCStack_24;
  int iStack_20;
  CDemonActor *pCStack_14;
  
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_b8,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_b8);
    return 0;
  }
  fVar4 = (float10)fptan((float10)*(float *)this_ptr->unk * (float10)3.1415926535000001 *
                         (float10)0.0055555555555555497);
  pCStack_40 = (CDemonActor *)(float)(fVar4 * (float10)(this_ptr->base).bolt_velocity);
  fStack_34 = (float)core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  pCStack_3c = (CFlameCan *)0x0;
  if (0 < (int)fStack_34) {
    do {
      pCStack_48 = (CDemonActor *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      pCStack_14 = pCStack_48;
      pCStack_14 = (CDemonActor *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,(float)pCStack_40);
      fVar4 = (float10)fcos((float10)(float)pCStack_48);
      fVar5 = (float10)fsin((float10)(float)pCStack_48);
      CStack_ac.x = (float)(fVar4 * (float10)(float)pCStack_14);
      CStack_ac.y = (float)(fVar5 * (float10)(float)pCStack_14);
      CStack_ac.z = (this_ptr->base).bolt_velocity;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         ((CDemonActor *)this_ptr,&CStack_c4,&CStack_ac);
      if (&CStack_ac != pCVar1) {
        CStack_ac.x = pCVar1->x;
        CStack_ac.y = pCVar1->y;
        CStack_ac.z = pCVar1->z;
      }
      CStack_70.x = CStack_b8.x + CStack_ac.x;
      CStack_70.y = CStack_b8.y + CStack_ac.y;
      CStack_70.z = CStack_b8.z + CStack_ac.z;
      pCStack_38 = (CCrate *)((float)1.5 / (this_ptr->base).bolt_velocity);
      fStack_a0 = CStack_ac.x * (float)pCStack_38;
      fStack_9c = CStack_ac.y * (float)pCStack_38;
      fStack_98 = CStack_ac.z * (float)pCStack_38;
      aCStack_64[0].x = CStack_b8.x - fStack_a0;
      aCStack_64[0].y = CStack_b8.y - fStack_9c;
      aCStack_64[0].z = CStack_b8.z - fStack_98;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      pCVar6 = (this_ptr->base).carried_by_actor;
      if (pCVar6 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar6);
      }
      iStack_20 = 0;
      do {
        fStack_11c = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                               (g_CDemonSetPtr,aCStack_64,&CStack_70);
        auStack_124 = (byte  [8])(double)fStack_11c;
        pCStack_14 = (CDemonActor *)fStack_11c;
        if (((double)auStack_124 < 0.0) || (1.0 < (double)auStack_124)) break;
        pCVar6 = g_CDemonSetPtr->collision_actor;
        this_ptr_00 = (CDemonSet *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar6,g_CCharacterClassInfo.name_hash);
        if (this_ptr_00 != (CDemonSet *)0x0) {
          pCVar6 = (CDemonActor *)0x58840c;
          iVar2 = (**(code **)(this_ptr_00->cameras[0].fog_enabled + 0x120))
                            ((CCharacter *)this_ptr_00);
          if (0 < iVar2) {
            this_ptr_00 = (CDemonSet *)0x0;
          }
        }
        pCStack_38 = (CCrate *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_4c = this_ptr_01;
        pCStack_44 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_48 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar3 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,in_stack_fffffec0,(int)in_stack_fffffec4);
        pCStack_24 = pCStack_44;
        fStack_34 = ((1.0 - (float)pCVar6) * fVar3) / (float)(int)pCStack_44;
        if (this_ptr_00 == (CDemonSet *)0x0) {
          if (pCStack_2c == (CDemonSet *)0x0) {
            if (this_ptr_01 == (CTrigger *)0x0) {
              if (pCStack_38 == (CCrate *)0x0) {
                if (pCStack_3c == (CFlameCan *)0x0) {
                  in_stack_fffffec4 = (CDemonSet *)g_CDemonSetPtr->ground_type;
                  in_stack_fffffec0 = (CDemonActor *)&g_CDemonSetPtr->collision_normal;
                  core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
                  break;
                }
                in_stack_fffffec4 = (CDemonSet *)0x588736;
                core_flamecan_cpp_CFlameCan_FUN_004cb340(pCStack_3c);
              }
              else {
                in_stack_fffffec4 = (CDemonSet *)0x588741;
                core_crate_cpp_CCrate_FUN_00448a70(pCStack_38);
              }
            }
            else {
              core_trigger_cpp_CTrigger_FUN_005e0aa0(this_ptr_01);
              iVar2 = core_trigger_cpp_CTrigger_FUN_005e0ac0(this_ptr_01);
              if (iVar2 != 0) {
                core_trigger_cpp_CTrigger_FUN_005e0b00(this_ptr_01);
              }
              in_stack_fffffec0 = (CDemonActor *)0x588538;
              in_stack_fffffec4 = g_CDemonSetPtr;
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_40);
            }
          }
          else {
            in_stack_fffffec4 = (CDemonSet *)0x5886f2;
            core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0((CGlass *)pCStack_2c);
            if (extraout_EAX == 0) break;
            in_stack_fffffec0 = (CDemonActor *)0x588715;
            in_stack_fffffec4 = pCStack_2c;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      ((CGlass *)pCStack_2c,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          in_stack_fffffec4 = (CDemonSet *)0x58854d;
          iVar2 = (**(code **)(this_ptr_00->cameras[0].fog_enabled + 0xf4))
                            ((CCharacter *)this_ptr_00);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_124);
          auStack_124._4_4_ = uStack_30;
          auStack_124._0_4_ = g_CDemonSetPtr->unk1;
          fStack_11c = 0.4;
          fStack_a0 = (g_CDemonSetPtr->collision_result_vec2).x -
                      (g_CDemonSetPtr->collision_result_vec1).x;
          fStack_9c = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
          fStack_98 = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          pCStack_24 = (CDemonActor *)
                       ((float)10 /
                       SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c));
          pCStack_e8 = (CDemonActor *)(fStack_a0 * (float)pCStack_24);
          fStack_e4 = fStack_9c * (float)pCStack_24;
          fStack_e0 = fStack_98 * (float)pCStack_24;
          if (&pCStack_118 != &pCStack_e8) {
            pCStack_118 = pCStack_e8;
            fStack_114 = fStack_e4;
            fStack_110 = fStack_e0;
          }
          in_stack_fffffec0 = (CDemonActor *)0x58865d;
          in_stack_fffffec4 = this_ptr_00;
          pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr_00,aCStack_dc,
                              &g_CDemonSetPtr->collision_impact_position);
          if (&CStack_108 != pCVar1) {
            CStack_108.x = pCVar1->x;
            CStack_108.y = pCVar1->y;
            CStack_108.z = pCVar1->z;
          }
          iStack_fc = (this_ptr->base).ammo_type;
          iStack_f4 = 0x65;
          fStack_f8 = 0.15;
          pCStack_f0 = this_ptr;
          pCStack_e8 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (**(code **)(this_ptr_00->cameras[0].fog_enabled + 0x11c))
                    ((CCharacter *)this_ptr_00,(SDamageInfo *)(auStack_124 + 4));
          if ((this_ptr->base).can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      pCStack_3c = (CFlameCan *)((pCStack_3c->base).actor_name + 1);
    } while ((int)pCStack_3c < (int)fStack_34);
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  fStack_88 = CStack_b8.x;
  local_80 = CStack_b8.z;
  fStack_84 = CStack_b8.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"shotgun.wav",&CStack_b8);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
