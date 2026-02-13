// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
// Address Range: [[0040a210, 0040abb6]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_290 */

int __cdecl
core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  CTrigger *pCVar5;
  CGlass *pCVar6;
  float fVar7;
  CFlameCan *this_ptr_00;
  double dVar8;
  CDemonActor *unaff_retaddr;
  char *in_stack_fffffd6c;
  SDamageInfo local_290;
  SDamageInfo local_254;
  SDamageInfo local_218;
  SDamageInfo local_1dc;
  SDamageInfo local_1a0;
  SDamageInfo local_164;
  CBoundingBox3D local_128;
  CBoundingBox3D local_110;
  CBoundingBox3D local_f8;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  float local_44;
  CTrigger *local_40;
  CCrate *local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  CDemonActor *local_28;
  CDemonActor *local_24;
  CTrigger *local_20;
  CGlass *local_1c;
  CGlass *pCStack_18;
  CTrigger *pCStack_14;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ea);
  local_d4.x = 0.0;
  local_d4.y = 0.0;
  pCVar1 = (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_110);
  local_c8.y = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)&local_c8.z,(CVector3f *)&local_d4.z);
  if (local_3c == (CCrate *)0x1) {
    local_d4.y = -3.0;
    local_e0.z = 0.0;
    local_d4.x = 0.0;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,(CVector3f *)&local_a4.z,(CVector3f *)&local_e0.z);
    local_98.z = local_c8.z + pCVar2->x;
    if (&local_bc.z != &local_98.z) {
      local_bc.z = local_98.z;
      local_b0.x = local_bc.x + pCVar2->y;
      local_b0.y = local_bc.y + pCVar2->z;
    }
  }
  local_b0.z = 0.0;
  local_a4.x = 0.0;
  local_a4.y = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (this_ptr,(CVector3f *)&local_68.z,(CVector3f *)&local_b0.z);
  local_1c = (CGlass *)(*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (local_38 == 0) {
    local_24 = (CDemonActor *)local_38;
    for (local_2c = (float)local_38; (int)local_2c < (int)g_CDemonSetPtr->actor_list_ptr;
        local_2c = (float)((int)local_2c + 1)) {
      pCStack_18 = *(CGlass **)
                    (local_24[0xf7e].actor_name + (int)(g_CDemonSetPtr->cameras[0].name + 4));
      if (((CGlass *)this_ptr != pCStack_18) && (pCStack_18 != local_1c)) {
        pCVar3 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (&pCStack_18->base,g_CCharacterClassInfo.name_hash);
        if (pCVar3 == (CCharacter *)0x0) {
          pCVar5 = (CTrigger *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (&pCStack_18->base,g_CTriggerClassInfo.name_hash);
          if (pCVar5 == (CTrigger *)0x0) {
            pCVar6 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (&pCStack_18->base,g_CGlassClassInfo.name_hash);
            if (pCVar6 != (CGlass *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar6,&local_74,&local_bc);
              pCVar1 = (*((pCVar6->base).vtable._ub)->getBoundingBox)
                                 ((CDemonActor *)pCVar6,(CBoundingBox3D *)&local_f8.max);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)in_stack_fffffd6c,(float)local_290.unknown);
              if (iVar4 != 0) {
                local_290.unknown = (int)&local_254.impact_point.z;
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)local_290.unknown);
                in_stack_fffffd6c = (char *)&local_254.impact_point.z;
                local_290.unknown = (int)pCVar6;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)in_stack_fffffd6c,(CDemonActor *)pCVar6)
                ;
                local_290.impact_point.x = (float)&local_254.impact_direction.z;
                local_290.damage_flags = hit_type;
                local_290.damage_amount = (float)this_ptr;
                local_290.unknown = 0x40a6a6;
                local_290.impact_point.y = (float)pCVar6;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)local_290.impact_point.x,
                           (CDemonActor *)pCVar6);
                local_290.impact_direction.x = 5.937267e-39;
                local_290.impact_direction.y = (float)pCVar6;
                iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar6);
                if (iVar4 != 0) {
                  local_290.impact_direction.y = (float)&local_98.y;
                  local_290.impact_force = 5.937302e-39;
                  local_290.impact_direction.x = (float)pCVar6;
                  core_glass_cpp_CGlass_shatter_FUN_004eaef0
                            (pCVar6,(CVector3f *)local_290.impact_direction.y);
                }
              }
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_FUN_005e0ac0(pCVar5);
            if (iVar4 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar5,&local_68,&local_bc);
              pCVar1 = (*((pCVar5->base).vtable._ub)->getBoundingBox)
                                 ((CDemonActor *)pCVar5,(CBoundingBox3D *)&local_128.max);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)in_stack_fffffd6c,(float)local_290.unknown);
              if (iVar4 != 0) {
                local_290.unknown = (int)&local_290.impact_point.z;
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)local_290.unknown);
                local_290.unknown = (int)pCVar5;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&local_290.impact_point.z,
                           (CDemonActor *)pCVar5);
                local_290._8_8_ = (BADTYPE)(float)local_290.ammo_type;
                local_290.damage_amount = (float)this_ptr;
                local_290.unknown = (int)"%s causing %5.2f damage to %s\n";
                in_stack_fffffd6c = (char *)g_CConsolePtr;
                local_290.impact_point.y = (float)pCVar5;
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                           local_290._8_8_,pCVar5);
                local_290.impact_point.y = (float)local_290.ammo_type;
                local_290.impact_point.x = (float)pCVar5;
                local_290.damage_flags = 0x40a5f3;
                core_trigger_cpp_CTrigger_FUN_005e0b00(pCVar5);
                local_290.impact_point.x = (float)&local_290.impact_direction.z;
                local_290.damage_flags = hit_type;
                local_290.damage_amount = (float)this_ptr;
                local_290.unknown = 0x40a607;
                local_290.impact_point.y = (float)pCVar5;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)local_290.impact_point.x,
                           (CDemonActor *)pCVar5);
              }
            }
          }
        }
        else {
          if ((local_1c != (CGlass *)0x0) &&
             (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canWalk)(pCVar3), iVar4 != 0)) {
            in_stack_fffffd6c = "CHero";
            iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&pCStack_18->base,"CHero");
            if (iVar4 != 0) goto LAB_0040a3e0;
          }
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_1a0.impact_point);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)&local_1a0.impact_point,(CDemonActor *)pCVar3)
          ;
          local_290.damage_flags = (int)&local_1a0.impact_direction;
          local_290.unknown = (int)&local_b0.y;
          local_290.damage_amount = 2.0;
          in_stack_fffffd6c = (char *)pCVar3;
          (*(((pCVar3->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                    (pCVar3,(CVector3f *)local_290.unknown,2.0,
                     (SDamageInfo *)&local_1a0.impact_direction);
          local_290._36_8_ = (BADTYPE)(float)local_1a0.damage_type;
          if (0.0 < (double)local_290._36_8_) {
            local_290.impact_force = (float)pCVar3->collision_layer;
            local_290.impact_point.z = 5.936626e-39;
            dVar8 = round((double)local_290._36_8_ * 0.5 + 1.0);
            local_290.impact_point.y = (float)(int)ROUND(dVar8);
            local_290.impact_point.x = (float)&local_40;
            local_290.damage_flags = (int)&local_a4.y;
            local_290.damage_amount = (float)g_CGorePtr;
            local_290.unknown = 0x40a511;
            core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
            local_290.impact_point.y = (float)&local_1a0.ammo_type;
            local_290.impact_point.x = (float)hit_type;
            local_290.damage_flags = (int)this_ptr;
            local_290.damage_amount = 5.936719e-39;
            local_290.impact_point.z = (float)pCVar3;
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)local_290.impact_point.y,
                       (CDemonActor *)pCVar3);
          }
        }
      }
LAB_0040a3e0:
      local_24 = (CDemonActor *)(local_24->actor_name + 4);
    }
  }
  if (local_38 == 1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
    if (local_1c != (CGlass *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&local_1c->base);
    }
    local_28 = (CDemonActor *)0x0;
    while( true ) {
      fVar7 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&local_b0,&local_bc);
      dVar8 = (double)fVar7;
      local_290.unknown = (int)((ulonglong)dVar8 >> 0x20);
      if ((dVar8 < 0.0) || (1.0 < dVar8)) break;
      pCVar3 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar3 != (CCharacter *)0x0) &&
         (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), 0 < iVar4)) {
        pCVar3 = (CCharacter *)0x0;
      }
      pCVar6 = (CGlass *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      local_34 = (int)core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      pCStack_14 = (CTrigger *)local_34;
      local_30 = (int)core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      this_ptr_00 = (CFlameCan *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      pCVar5 = pCStack_14;
      if (pCVar3 == (CCharacter *)0x0) {
        if (pCVar6 == (CGlass *)0x0) {
          if (pCStack_14 == (CTrigger *)0x0) {
            if (local_30 == 0) {
              if (this_ptr_00 == (CFlameCan *)0x0) {
                return 0;
              }
              core_flamecan_cpp_CFlameCan_FUN_004cb340(this_ptr_00);
            }
            else {
              core_crate_cpp_CCrate_FUN_00448a70((CCrate *)local_30);
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_FUN_005e0ac0(pCStack_14);
            if (iVar4 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0
                        ((SDamageInfo *)&local_164.impact_point);
              (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)&local_164.impact_point,&pCVar5->base);
              local_290.damage_flags = (int)pCVar5;
              dVar8 = (double)local_164.impact_direction.y;
              local_290.unknown = SUB84(dVar8,0);
              local_290.damage_amount = (float)((ulonglong)dVar8 >> 0x20);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                         local_290.unknown,local_290.damage_amount,pCVar5);
              local_290._0_8_ = dVar8;
              local_290.damage_amount = (float)pCVar5;
              local_290.unknown = 0x40ab6c;
              core_trigger_cpp_CTrigger_FUN_005e0b00(pCVar5);
              local_290.damage_flags = (int)unaff_retaddr;
              local_290.damage_amount = (float)&local_164.impact_direction;
              local_290.unknown = hit_type;
              (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)local_290.damage_amount,unaff_retaddr);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)local_34);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_1dc.impact_point);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)&local_1dc.impact_point,(CDemonActor *)pCVar6)
          ;
          local_290.damage_flags = (int)pCVar6;
          local_290.damage_amount = (float)&local_1dc.impact_direction;
          local_290.unknown = hit_type;
          (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)local_290.damage_amount,(CDemonActor *)pCVar6)
          ;
          local_290.impact_point.z = 5.938774e-39;
          local_290.impact_force = (float)pCVar6;
          iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar6);
          if (iVar4 == 0) {
            return 0;
          }
          local_290.impact_force = (float)&g_CDemonSetPtr->collision_impact_position;
          local_290.impact_point.y = 5.938814e-39;
          local_290.impact_point.z = (float)pCVar6;
          core_glass_cpp_CGlass_shatter_FUN_004eaef0(pCVar6,(CVector3f *)local_290.impact_force);
        }
      }
      else if (((local_1c == (CGlass *)0x0) ||
               (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canWalk)(pCVar3), iVar4 == 0)) ||
              (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&pCStack_18->base,"CHero"),
              iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_218.impact_point);
        local_218.impact_point.x = (float)g_CDemonSetPtr->unk1;
        (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)&local_218.impact_point,&pCVar3->base);
        local_74.y = (g_CDemonSetPtr->collision_result_vec2).x -
                     (g_CDemonSetPtr->collision_result_vec1).x;
        local_74.z = (g_CDemonSetPtr->collision_result_vec2).y -
                     (g_CDemonSetPtr->collision_result_vec1).y;
        local_68.x = (g_CDemonSetPtr->collision_result_vec2).z -
                     (g_CDemonSetPtr->collision_result_vec1).z;
        fVar7 = (float)10 /
                SQRT(local_68.x * local_68.x + local_74.y * local_74.y + local_74.z * local_74.z);
        local_40 = (CTrigger *)(local_74.y * fVar7);
        local_3c = (CCrate *)(local_74.z * fVar7);
        local_38 = (int)(local_68.x * fVar7);
        if ((CTrigger **)&local_218.ammo_type != &local_40) {
          local_218.ammo_type = (int)local_40;
          local_218.weapon_damage_modifier = (float)local_3c;
          local_218.damage_type = local_38;
        }
        local_290.damage_amount = (float)&local_34;
        local_290.unknown = (int)pCVar3;
        local_290.damage_flags = (int)&g_CDemonSetPtr->collision_impact_position;
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (&pCVar3->base,(CVector3f *)local_290.damage_amount,
                            &g_CDemonSetPtr->collision_impact_position);
        if ((CVector3f *)&local_218.wielder != pCVar2) {
          local_218.wielder = (CDemonActor *)pCVar2->x;
          local_1dc.unknown = (int)pCVar2->y;
          local_1dc.damage_amount = pCVar2->z;
        }
        local_290.damage_flags = (int)&local_218.impact_direction;
        local_290.unknown = 0x40aa26;
        local_290.damage_amount = (float)pCVar3;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)
                  (pCVar3,(SDamageInfo *)&local_218.impact_direction);
        local_290.impact_point.x = (float)&local_218.impact_direction.z;
        local_290.damage_flags = hit_type;
        local_290.damage_amount = (float)this_ptr;
        local_290.unknown = 0x40aa3d;
        local_290.impact_point.y = (float)pCVar3;
        (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)local_290.impact_point.x,&pCVar3->base);
        local_290.impact_direction.y = (float)g_CDemonSetPtr->collision_actor;
        local_290.impact_direction.x = (float)g_CDemonSetPtr;
        local_290.impact_force = 5.938571e-39;
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,(CDemonActor *)local_290.impact_direction.y);
      }
      local_28 = (CDemonActor *)(local_28->actor_name + 1);
      if (3 < (int)local_28) {
        return 0;
      }
    }
  }
  return 0;
}
