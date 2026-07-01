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
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  int is_raycast;
  CCrate *local_30;
  CCrate *local_2c;
  int actor_idx;
  int hit_count;
  CDemonActor *carrier;
  CDemonActor *current_actor;

  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",1514);
  is_raycast = (hit_type == 1);

  // Compute the world-space hit position at the top of this actor's bounding box.
  // local_d4 = (0, 0, bbox.max.z) in local coords; localToWorldPoint outputs the
  // corresponding world-coord point into local_c8.
  local_d4.x = 0.0;
  local_d4.y = 0.0;
  pCVar1 = (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_110);
  local_d4.z = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(this_ptr,&local_c8,&local_d4);

  // Raycast prep: compute attack origin = world hit pos + transform((0,0,-3))
  // (3 units behind the actor in its facing direction).
  if (is_raycast == 1) {
    local_d4.z = -3.0;
    local_d4.x = 0.0;
    local_d4.y = 0.0;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(this_ptr,&local_98,&local_d4);
    local_8c.x = local_c8.x + pCVar2->x;
    local_8c.y = local_c8.y + pCVar2->y;
    local_8c.z = local_c8.z + pCVar2->z;
    local_b0 = local_8c;
  }

  // Compute world-space forward direction (transform of (0,0,1)) — used as the
  // shatter-impact direction for glass hit during actor-scan.
  local_a4.x = 0.0;
  local_a4.y = 0.0;
  local_a4.z = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(this_ptr,&local_5c,&local_a4);
  carrier = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);

  // Mode A — actor scan: cylinder collision against every actor in the set.
  if (is_raycast == 0) {
    for (actor_idx = 0; actor_idx < g_CDemonSetPtr->actor_count;
        actor_idx = actor_idx + 1) {
      current_actor = g_CDemonSetPtr->actors[actor_idx];
      if ((this_ptr != current_actor) && (current_actor != carrier)) {
        pCVar3 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (current_actor,g_CCharacterClassInfo.name_hash);
        if (pCVar3 == (CCharacter *)0x0) {
          pCVar5 = (CTrigger *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (current_actor,g_CTriggerClassInfo.name_hash);
          if (pCVar5 == (CTrigger *)0x0) {
            pCVar6 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (current_actor,g_CGlassClassInfo.name_hash);
            // Glass actor-scan: sphere-intersect the world hit pos against the glass bbox.
            if (pCVar6 != (CGlass *)0x0) {
              pSphereCenter = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar6,&local_74,&local_c8);
              pCVar1 = (*((pCVar6->base).vtable._ub)->getBoundingBox)
                                 ((CDemonActor *)pCVar6,(CBoundingBox3D *)&local_f8.max.y);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,pSphereCenter,sphereRadius);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_254);
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,&local_254,(CDemonActor *)pCVar6);
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,&local_254,(CDemonActor *)pCVar6);
                iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar6);
                if (iVar4 != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004eaef0(pCVar6,&local_c8);
                }
              }
            }
          }
          // Trigger actor-scan: same sphere-intersect, then apply damage if the trigger accepts it.
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0(pCVar5,this_ptr);
            if (iVar4 != 0) {
              pSphereCenter = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar5,&local_68,&local_c8);
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
        // Character actor-scan: cylinder collision; skip CHero if we have a carrier.
        else {
          if ((carrier != (CDemonActor *)0x0) &&
             (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canWalk)(pCVar3), iVar4 != 0)) {
            iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(current_actor,"CHero");
            if (iVar4 != 0) goto LAB_0040a3e0;
          }
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1a0);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,&local_1a0,(CDemonActor *)pCVar3);
          (*(((pCVar3->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                    (pCVar3,&local_c8,2.0,&local_1a0);
          dDamageAmount = (double)local_1a0.damage_amount;
          if (0.0 < dDamageAmount) {
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                      (g_CGorePtr,&local_c8,&local_68,
                       (int)ROUND(ROUND(dDamageAmount * 0.5 + 1.0)),pCVar3->blood_type);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,&local_1a0,(CDemonActor *)pCVar3);
          }
        }
      }
LAB_0040a3e0:
      ;
    }
  }

  // Mode B — raycast: shoot from attack origin (local_b0) toward hit pos (local_bc),
  // process whatever entity types the ray strikes (character/glass/trigger/crate/flamecan),
  // up to 4 hits.
  if (is_raycast == 1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00574170(g_CDemonSetPtr);
    if (carrier != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,carrier);
    }
    hit_count = 0;
    while ((fVar7 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                              (g_CDemonSetPtr,&local_b0,&local_c8),
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
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
              (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                        (this_ptr,hit_type,&local_164,(CDemonActor *)pCVar5);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr->actor_name,
                         (double)local_164.damage_amount,pCVar5->base.actor_name);
              core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(pCVar5,local_164.damage_amount);
              (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                        (this_ptr,hit_type,&local_164,(CDemonActor *)pCVar5);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&local_30->base);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1dc);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,&local_1dc,(CDemonActor *)pCVar6);
          (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                    (this_ptr,hit_type,&local_1dc,(CDemonActor *)pCVar6);
          iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar6);
          if (iVar4 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004eaef0
                    (pCVar6,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      // Character raycast: process damage with impact direction = ray velocity (mag 10).
      else if (((carrier == (CDemonActor *)0x0) ||
               (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canWalk)(pCVar3), iVar4 == 0)) ||
              (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(current_actor,"CHero"),
              iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_218);
        local_218.hit_part_index = g_CDemonSetPtr->collision_part_index;
        (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                  (this_ptr,hit_type,&local_218,&pCVar3->base);
        local_8c.x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        local_8c.y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        local_8c.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        fVar7 = (float)10 /
                SQRT(local_8c.x * local_8c.x + local_8c.y * local_8c.y + local_8c.z * local_8c.z);
        local_218.impact_point.x = local_8c.x * fVar7;
        local_218.impact_point.y = local_8c.y * fVar7;
        local_218.impact_point.z = local_8c.z * fVar7;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (&pCVar3->base,&local_218.impact_direction,
                   &g_CDemonSetPtr->collision_impact_position);
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_218);
        (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                  (this_ptr,hit_type,&local_218,&pCVar3->base);
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      hit_count = hit_count + 1;
      if (3 < hit_count) {
        return 0;
      }
    }
  }
  return 0;
}
