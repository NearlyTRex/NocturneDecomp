// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
// MANUAL RECONSTRUCTION
// Address Range: [[0040a210, 0040abb6]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  CTrigger *pCVar5;
  CGlass *pCVar6;
  float fVar7;
  EDeathState EVar8;
  CFlameCan *this_ptr_00;
  SDamageInfo *pSVar9;
  CVector3f *pSphereCenter;
  float sphereRadius;
  double dDamageAmount;
  SDamageInfo local_trigger_dmg;
  SDamageInfo local_254;
  SDamageInfo local_218;
  SDamageInfo local_1dc;
  SDamageInfo local_1a0;
  SDamageInfo local_164;
  CBoundingBox3D local_128;
  CBoundingBox3D local_110;
  CBoundingBox3D local_f8;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CCrate *local_3c;
  int local_38;
  CTrigger *local_34;
  CCrate *local_30;
  CCrate *local_2c;
  CDemonActor *local_28;
  CDemonActor *local_24;
  CTrigger *local_20;
  CDemonActor *pCStack_18;
  CDemonActor *pCStack_14;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ea);
  local_d4.y = 0.0;
  local_d4.z = 0.0;
  pCVar1 = (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,(CBoundingBox3D *)&local_110.min.y);
  local_c8.z = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(this_ptr,&local_bc,&local_c8);
  if (local_38 == 1) {
    local_d4.z = -3.0;
    local_d4.x = 0.0;
    local_d4.y = 0.0;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(this_ptr,&local_98,&local_d4);
    local_8c.x = local_bc.x + pCVar2->x;
    local_8c.y = local_bc.y + pCVar2->y;
    local_8c.z = local_bc.z + pCVar2->z;
    if (&local_b0 != &local_8c) {
      local_b0.x = local_8c.x;
      local_b0.y = local_8c.y;
      local_b0.z = local_8c.z;
    }
  }
  local_a4.x = 0.0;
  local_a4.y = 0.0;
  local_a4.z = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(this_ptr,&local_5c,&local_a4);
  pCStack_18 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (local_34 == (CTrigger *)0x0) {
    local_20 = local_34;
    for (local_28 = &local_34->base; (int)local_28 < g_CDemonSetPtr->actor_count;
        local_28 = (CDemonActor *)(local_28->actor_name + 1)) {
      pCStack_14 = *(CDemonActor **)
                    (local_20[0x60e].base.actor_name +
                    (int)&g_CDemonSetPtr->cameras[0].rotation_matrix.m[2].y);
      if ((this_ptr != pCStack_14) && (pCStack_14 != pCStack_18)) {
        pCVar3 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCStack_14,g_CCharacterClassInfo.name_hash);
        if (pCVar3 == (CCharacter *)0x0) {
          pCVar5 = (CTrigger *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (pCStack_14,g_CTriggerClassInfo.name_hash);
          if (pCVar5 == (CTrigger *)0x0) {
            pCVar6 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (pCStack_14,g_CGlassClassInfo.name_hash);
            if (pCVar6 != (CGlass *)0x0) {
              pSphereCenter = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar6,(CVector3f *)&local_74.y,(CVector3f *)&local_bc.y);
              pCVar1 = (*((pCVar6->base).vtable._ub)->getBoundingBox)
                                 ((CDemonActor *)pCVar6,(CBoundingBox3D *)&local_f8.max.y);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,pSphereCenter,sphereRadius);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0
                          ((SDamageInfo *)&local_254.impact_force);
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&local_254.impact_force,(CDemonActor *)pCVar6)
                ;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)&local_254.ammo_type,
                           (CDemonActor *)pCVar6);
                iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar6);
                if (iVar4 != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004eaef0(pCVar6,(CVector3f *)&local_98.z);
                }
              }
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0(pCVar5,this_ptr);
            if (iVar4 != 0) {
              pSphereCenter = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar5,(CVector3f *)&local_68.y,(CVector3f *)&local_bc.y);
              pCVar1 = (*((pCVar5->base).vtable._ub)->getBoundingBox)
                                 ((CDemonActor *)pCVar5,(CBoundingBox3D *)&local_128.max.y);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,pSphereCenter,sphereRadius);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_trigger_dmg);
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,&local_trigger_dmg,(CDemonActor *)pCVar5);
                dDamageAmount = (double)local_trigger_dmg.damage_amount;
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr->actor_name,
                           dDamageAmount,pCVar5->base.actor_name);
                core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(pCVar5,local_trigger_dmg.damage_amount);
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,&local_trigger_dmg,(CDemonActor *)pCVar5);
              }
            }
          }
        }
        else {
          if ((pCStack_18 != (CDemonActor *)0x0) &&
             (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canWalk)(pCVar3), iVar4 != 0)) {
            iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_14,"CHero");
            if (iVar4 != 0) goto LAB_0040a3e0;
          }
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_1a0.impact_point.y);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)&local_1a0.impact_point.y,
                     (CDemonActor *)pCVar3);
          (*(((pCVar3->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                    (pCVar3,&local_b0,2.0,
                     (SDamageInfo *)&local_1a0.impact_direction.y);
          dDamageAmount = (double)local_1a0.damage_amount;
          if (0.0 < dDamageAmount) {
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                      (g_CGorePtr,&local_98,(CVector3f *)&local_38,
                       (int)ROUND(ROUND(dDamageAmount * 0.5 + 1.0)),pCVar3->blood_type);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)&local_1a0.damage_type,(CDemonActor *)pCVar3
                      );
          }
        }
      }
LAB_0040a3e0:
      local_20 = (CTrigger *)((local_20->base).actor_name + 4);
    }
  }
  if (local_34 == (CTrigger *)0x1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00574170(g_CDemonSetPtr);
    if (pCStack_18 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_18);
    }
    local_24 = (CDemonActor *)0x0;
    while ((fVar7 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                              (g_CDemonSetPtr,(CVector3f *)&local_b0.y,(CVector3f *)&local_bc.y),
           0.0 <= fVar7 && (fVar7 <= 1.0))) {
      pCVar3 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar3 != (CCharacter *)0x0) &&
         (EVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), 0 < (int)EVar8)) {
        pCVar3 = (CCharacter *)0x0;
      }
      pCVar6 = (CGlass *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      pCVar5 = (CTrigger *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      local_30 = (CCrate *)pCVar5;
      local_2c = (CCrate *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      this_ptr_00 = (CFlameCan *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      if (pCVar3 == (CCharacter *)0x0) {
        if (pCVar6 == (CGlass *)0x0) {
          if (pCVar5 == (CTrigger *)0x0) {
            if (local_2c == (CCrate *)0x0) {
              if (this_ptr_00 == (CFlameCan *)0x0) {
                return 0;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_00);
            }
            else {
              core_crate_cpp_CCrate_explode_FUN_00448a70(local_2c);
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0(pCVar5,this_ptr);
            if (iVar4 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0
                        ((SDamageInfo *)&local_164.impact_point.y);
              (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)&local_164.impact_point.y,
                         (CDemonActor *)pCVar5);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr->actor_name,
                         (double)local_164.impact_direction.z,pCVar5->base.actor_name);
              core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00
                        (pCVar5,local_164.impact_direction.z);
              (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)&local_164.impact_direction.y,this_ptr);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&local_30->base);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_1dc.impact_point.y);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)&local_1dc.impact_point.y,
                     (CDemonActor *)pCVar6);
          (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)&local_1dc.impact_direction.y,
                     (CDemonActor *)pCVar6);
          iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar6);
          if (iVar4 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004eaef0
                    (pCVar6,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCStack_18 == (CDemonActor *)0x0) ||
               (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canWalk)(pCVar3), iVar4 == 0)) ||
              (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_14,"CHero"),
              iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_218.impact_point.y);
        local_218.impact_point.y = (float)g_CDemonSetPtr->collision_part_index;
        (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)&local_218.impact_point.y,&pCVar3->base);
        local_74.z = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        local_68.x = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        local_68.y = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        fVar7 = (float)10 /
                SQRT(local_68.y * local_68.y + local_74.z * local_74.z + local_68.x * local_68.x);
        *(float *)&local_3c = local_74.z * fVar7;
        *(float *)&local_38 = local_68.x * fVar7;
        *(float *)&local_34 = local_68.y * fVar7;
        if ((float *)&local_218.dismember_prob != (float *)&local_3c) {
          local_218.dismember_prob = *(float *)&local_3c;
          local_218.damage_type = local_38;
          local_218.attacker = (CDemonActor *)local_34;
        }
        pSVar9 = (SDamageInfo *)
                 core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (&pCVar3->base,(CVector3f *)&local_30,
                            &g_CDemonSetPtr->collision_impact_position);
        if (&local_1dc != pSVar9) {
          local_1dc.hit_part_index = pSVar9->hit_part_index;
          local_1dc.damage_amount = pSVar9->damage_amount;
          local_1dc.gore_multiplier = pSVar9->gore_multiplier;
        }
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)
                  (pCVar3,(SDamageInfo *)&local_218.impact_direction.y);
        (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)&local_218.ammo_type,&pCVar3->base);
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      local_24 = (CDemonActor *)(local_24->actor_name + 1);
      if (3 < (int)local_24) {
        return 0;
      }
    }
  }
  return 0;
}
