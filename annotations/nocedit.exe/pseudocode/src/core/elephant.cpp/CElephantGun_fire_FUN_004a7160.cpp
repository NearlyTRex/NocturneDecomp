// Name: core_elephant.cpp_CElephantGun_fire_FUN_004a7160
// Address: 004a7160
// Address Range: [[004a7160, 004a71ff] [004a7406, 004a74a4]]
// Convention: __cdecl
// Signature: int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_004a7160(CElephantGun *this_ptr)

#include "nocturne.h"

int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_004a7160(CElephantGun *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonSet *this_ptr_00;
  CTrigger *this_ptr_01;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  CDemonActor *in_stack_fffffec0;
  CDemonSet *in_stack_fffffec4;
  CDemonActor *pCVar6;
  byte auStack_124 [8];
  float fStack_11c;
  CVector3f CStack_118;
  CVector3f CStack_108;
  int iStack_fc;
  float fStack_f8;
  float fStack_f4;
  CElephantGun *pCStack_f0;
  CVector3f aCStack_e8 [2];
  CVector3f CStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float local_68;
  CTrigger *pCStack_4c;
  CDemonActor *pCStack_48;
  CDemonActor *pCStack_44;
  CDemonActor *pCStack_40;
  CCrate *pCStack_3c;
  CFlameCan *pCStack_38;
  float fStack_34;
  uint uStack_30;
  CDemonSet *pCStack_2c;
  CDemonActor *pCStack_24;
  int iStack_20;
  CDemonActor *pCStack_14;
  
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_7c,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_7c);
    return 0;
  }
  fVar4 = (float10)fptan((float10)(float)this_ptr->unk * (float10)3.1415926535000001 *
                         (float10)0.0055555555555555497);
  pCStack_40 = (CDemonActor *)(float)(fVar4 * (float10)(this_ptr->base).bolt_velocity);
  fStack_34 = (float)core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  pCStack_3c = (CCrate *)0x0;
  if (0 < (int)fStack_34) {
    do {
      pCStack_44 = (CDemonActor *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      pCStack_14 = pCStack_44;
      pCStack_14 = (CDemonActor *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,(float)pCStack_40);
      fVar4 = (float10)fcos((float10)(float)pCStack_44);
      fVar5 = (float10)fsin((float10)(float)pCStack_44);
      CStack_b8.x = (float)(fVar4 * (float10)(float)pCStack_14);
      CStack_b8.y = (float)(fVar5 * (float10)(float)pCStack_14);
      CStack_b8.z = (this_ptr->base).bolt_velocity;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         ((CDemonActor *)this_ptr,&CStack_ac,&CStack_b8);
      if (&CStack_b8 != pCVar1) {
        CStack_b8.x = pCVar1->x;
        CStack_b8.y = pCVar1->y;
        CStack_b8.z = pCVar1->z;
      }
      CStack_d0.x = CStack_7c.x + CStack_b8.x;
      CStack_d0.y = CStack_7c.y + CStack_b8.y;
      CStack_d0.z = CStack_7c.z + CStack_b8.z;
      pCStack_38 = (CFlameCan *)((float)1.5 / (this_ptr->base).bolt_velocity);
      fStack_70 = CStack_b8.x * (float)pCStack_38;
      fStack_6c = CStack_b8.y * (float)pCStack_38;
      local_68 = CStack_b8.z * (float)pCStack_38;
      CStack_88.x = CStack_7c.x - fStack_70;
      CStack_88.y = CStack_7c.y - fStack_6c;
      CStack_88.z = CStack_7c.z - local_68;
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
                               (g_CDemonSetPtr,&CStack_88,&CStack_d0);
        auStack_124 = (byte  [8])(double)fStack_11c;
        pCStack_14 = (CDemonActor *)fStack_11c;
        if (((double)auStack_124 < 0.0) || (1.0 < (double)auStack_124)) break;
        pCVar6 = g_CDemonSetPtr->collision_actor;
        this_ptr_00 = (CDemonSet *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar6,g_CCharacterClassInfo.name_hash);
        if (this_ptr_00 != (CDemonSet *)0x0) {
          pCVar6 = (CDemonActor *)0x4a74f5;
          iVar2 = (**(code **)(this_ptr_00->cameras[0].fog_enabled + 0x120))
                            ((CCharacter *)this_ptr_00);
          if (0 < iVar2) {
            this_ptr_00 = (CDemonSet *)0x0;
          }
        }
        pCStack_38 = (CFlameCan *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_4c = this_ptr_01;
        pCStack_48 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_44 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar3 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,in_stack_fffffec0,(int)in_stack_fffffec4);
        pCStack_24 = pCStack_44;
        fStack_34 = ((1.0 - (float)pCVar6) * fVar3) / (float)(int)pCStack_44;
        if (this_ptr_00 == (CDemonSet *)0x0) {
          if (pCStack_2c == (CDemonSet *)0x0) {
            if (this_ptr_01 == (CTrigger *)0x0) {
              if (pCStack_3c == (CCrate *)0x0) {
                if (pCStack_38 == (CFlameCan *)0x0) {
                  in_stack_fffffec4 = (CDemonSet *)g_CDemonSetPtr->ground_type;
                  in_stack_fffffec0 = (CDemonActor *)&g_CDemonSetPtr->collision_normal;
                  core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
                  break;
                }
                in_stack_fffffec4 = (CDemonSet *)0x4a7834;
                core_flamecan_cpp_CFlameCan_FUN_004cb340(pCStack_38);
              }
              else {
                in_stack_fffffec4 = (CDemonSet *)0x4a783f;
                core_crate_cpp_CCrate_FUN_00448a70(pCStack_3c);
              }
            }
            else {
              core_trigger_cpp_CTrigger_FUN_005e0aa0(this_ptr_01);
              iVar2 = core_trigger_cpp_CTrigger_FUN_005e0ac0(this_ptr_01);
              if (iVar2 != 0) {
                core_trigger_cpp_CTrigger_FUN_005e0b00(this_ptr_01);
              }
              in_stack_fffffec0 = (CDemonActor *)0x4a7621;
              in_stack_fffffec4 = g_CDemonSetPtr;
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_40);
            }
          }
          else {
            in_stack_fffffec4 = (CDemonSet *)0x4a77f0;
            iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0((CGlass *)pCStack_2c)
            ;
            if (iVar2 == 0) break;
            in_stack_fffffec0 = (CDemonActor *)0x4a7813;
            in_stack_fffffec4 = pCStack_2c;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      ((CGlass *)pCStack_2c,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          in_stack_fffffec4 = (CDemonSet *)0x4a7636;
          iVar2 = (**(code **)(this_ptr_00->cameras[0].fog_enabled + 0xf4))
                            ((CCharacter *)this_ptr_00);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_124);
          auStack_124._4_4_ = uStack_30;
          auStack_124._0_4_ = g_CDemonSetPtr->collision_part_index;
          fStack_11c = 0.4;
          fStack_a0 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
          fStack_9c = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
          fStack_98 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
          pCStack_24 = (CDemonActor *)
                       ((float)10 /
                       SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c));
          CStack_ac.x = fStack_a0 * (float)pCStack_24;
          CStack_ac.y = fStack_9c * (float)pCStack_24;
          CStack_ac.z = fStack_98 * (float)pCStack_24;
          if (&CStack_118 != &CStack_ac) {
            CStack_118.x = CStack_ac.x;
            CStack_118.y = CStack_ac.y;
            CStack_118.z = CStack_ac.z;
          }
          in_stack_fffffec0 = (CDemonActor *)0x4a775b;
          in_stack_fffffec4 = this_ptr_00;
          pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr_00,aCStack_e8,
                              &g_CDemonSetPtr->collision_impact_position);
          if (&CStack_108 != pCVar1) {
            CStack_108.x = pCVar1->x;
            CStack_108.y = pCVar1->y;
            CStack_108.z = pCVar1->z;
          }
          iStack_fc = (this_ptr->base).ammo_type;
          fStack_f4 = 1.49939e-43;
          fStack_f8 = 1.0;
          pCStack_f0 = this_ptr;
          aCStack_e8[0].x =
               (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (**(code **)(this_ptr_00->cameras[0].fog_enabled + 0x11c))
                    ((CCharacter *)this_ptr_00,(SDamageInfo *)(auStack_124 + 4));
          if ((this_ptr->base).can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      pCStack_3c = (CCrate *)((pCStack_3c->base).actor_name + 1);
    } while ((int)pCStack_3c < (int)fStack_34);
  }
  fStack_c4 = CStack_7c.x;
  fStack_bc = CStack_7c.z;
  fStack_c0 = CStack_7c.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"elephantgun.wav",&CStack_7c);
  (this_ptr->base).fire_cooldown_timer = 1.0;
  return 1;
}
