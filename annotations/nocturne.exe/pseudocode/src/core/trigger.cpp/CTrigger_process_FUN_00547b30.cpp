// Name: core_trigger.cpp_CTrigger_process_FUN_00547b30
// Address: 00547b30
// Address Range: [[00547b30, 005480f6]]
// Convention: unknown
// Signature: void core_trigger_cpp_CTrigger_process_FUN_00547b30(CTrigger *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_trigger_cpp_CTrigger_process_FUN_00547b30(CTrigger *param_1,float param_2)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CTrigger *actor_ptr;
  int iVar5;
  CDemonActor *pCVar6;
  CBoundingBox3D *pCVar7;
  CVector3f *pCVar8;
  int iVar9;
  int iVar10;
  CBoundingBox3D local_b8;
  CBoundingBox3D local_a0;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3i CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f aCStack_58 [3];
  int local_34;
  char *local_30;
  char *local_2c;
  int local_28;
  int local_24;
  CLocation *local_20;
  float local_1c;
  int iStack_18;
  
  local_34 = 0;
  param_1->triggering_actor = (CDemonActor *)0x0;
  switch(param_1->hero_triggers_me) {
  case 0:
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (&(param_1->base).location.position,param_1->test_radius);
    if (iVar9 != 0) {
      iVar9 = 0;
      (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_a0);
      if (0 < _DAT_01cae0d4) {
        iVar10 = 0;
        do {
          iVar5 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0
                            (param_1,*(CDemonActor **)(iVar10 + 0x1cae0d8));
          if (iVar5 != 0) {
            pCVar6 = *(CDemonActor **)(iVar10 + 0x1cae0d8);
            goto LAB_00547bbc;
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar9 < _DAT_01cae0d4);
      }
    }
    break;
  case 1:
    if (param_1->cached_actor == (CDemonActor *)0x0) {
      pCVar6 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0
                         (0x01CC9450,param_1->actor_name);
      param_1->cached_actor = pCVar6;
    }
    pCVar6 = param_1->cached_actor;
    if ((((pCVar6 != (CDemonActor *)0x0) && (pCVar6->lifecycle_state == ACTOR_CREATED)) &&
        (fVar2 = (param_1->base).location.position.x - (pCVar6->location).position.x,
        fVar4 = (param_1->base).location.position.y - (pCVar6->location).position.y,
        fVar3 = (param_1->base).location.position.z - (pCVar6->location).position.z,
        fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= param_1->test_radius * param_1->test_radius
        )) && (iVar9 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(param_1,pCVar6),
              iVar9 != 0)) {
      pCVar6 = param_1->cached_actor;
LAB_00547bbc:
      local_34 = 1;
      param_1->triggering_actor = pCVar6;
    }
    break;
  case 2:
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (&(param_1->base).location.position,param_1->test_radius);
    if (iVar9 != 0) {
      pCVar7 = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_b8);
      fStack_88 = (pCVar7->min).x + (pCVar7->max).x;
      fStack_84 = (pCVar7->min).y + (pCVar7->max).y;
      CStack_70.x = fStack_88 * 0.5f;
      CStack_70.y = fStack_84 * 0.5f;
      fStack_80 = (pCVar7->min).z + (pCVar7->max).z;
      CStack_70.z = fStack_80 * 0.5f;
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (&param_1->base,&CStack_64,&CStack_70);
      if (aCStack_58 != pCVar8) {
        aCStack_58[0].x = pCVar8->x;
        aCStack_58[0].y = pCVar8->y;
        aCStack_58[0].z = pCVar8->z;
      }
      CStack_7c.x = (int)ROUND(aCStack_58[0].x * _DAT_005a3640);
      CStack_7c.y = (int)ROUND(aCStack_58[0].y * _DAT_005a3640);
      CStack_7c.z = (int)ROUND(aCStack_58[0].z * _DAT_005a3640);
      iStack_18 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
                            (0x01E57284,&CStack_7c,(CVector3i *)0x0);
      if ((param_1->light_min * (float)65536 <= (float)iStack_18) &&
         ((float)iStack_18 <= param_1->light_max * (float)65536)) {
        local_34 = 1;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
    local_34 = param_1->event_flag;
    param_1->event_flag = 0;
    break;
  case 6:
    pCVar1 = &(param_1->base).location;
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(&pCVar1->position,param_1->test_radius)
    ;
    if (iVar9 != 0) {
      fVar2 = (param_1->trigger_size).x;
      fVar3 = (param_1->trigger_size).y;
      fVar4 = (param_1->trigger_size).z;
      local_1c = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      local_34 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                           (0x01C08D04,&pCVar1->position,
                            (float)(((int)local_1c >> 1) + (int)CVector3f_01c70708.y),
                            (CVector3f *)0x0,(float *)0x0);
    }
    break;
  case 7:
    param_2 = param_1->damage_cooldown - param_2;
    param_1->damage_cooldown = param_2;
    if (param_2 < 0.0) {
      param_1->damage_cooldown = 0.0;
    }
    if (0.0 < param_1->hit_points) {
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
    break;
  case 8:
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (&(param_1->base).location.position,param_1->test_radius);
    if (iVar9 != 0) {
      local_28 = 0;
      for (iVar9 = 0; iVar9 < *(int *)0x01E57284->lights[199].filter_names[0x14];
          iVar9 = iVar9 + 1) {
        pCVar6 = *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x14] + local_28 + 4);
        iVar10 = (*((pCVar6->vtable)._ub)->canLookAt)(pCVar6);
        if ((iVar10 != 0) &&
           (iVar10 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(param_1,pCVar6),
           iVar10 != 0)) {
          param_1->triggering_actor = pCVar6;
          local_34 = 1;
          break;
        }
        local_28 = local_28 + 4;
      }
    }
    break;
  case 9:
    pCVar1 = &(param_1->base).location;
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(&pCVar1->position,param_1->test_radius)
    ;
    if (iVar9 != 0) {
      local_30 = param_1->actor_name;
      local_2c = param_1->actor_type;
      local_24 = 0;
      local_20 = pCVar1;
      for (iVar9 = 0; iVar9 < *(int *)0x01E57284->lights[199].filter_names[0x14];
          iVar9 = iVar9 + 1) {
        actor_ptr = *(CTrigger **)(0x01E57284->lights[199].filter_names[0x14] + local_24 + 4);
        fVar2 = (actor_ptr->base).location.position.x - (local_20->position).x;
        fVar4 = (actor_ptr->base).location.position.y - (local_20->position).y;
        fVar3 = (actor_ptr->base).location.position.z - (local_20->position).z;
        if ((((fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <=
               param_1->test_radius * param_1->test_radius) && (actor_ptr != param_1)) &&
            (iVar10 = core_actor_cpp_isOfClass_FUN_0040d7e0(&actor_ptr->base,local_2c), iVar10 != 0)
            ) && ((iVar10 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0
                                      (local_30,(char *)actor_ptr,0), iVar10 != 0 &&
                  (iVar10 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0
                                      (param_1,&actor_ptr->base), iVar10 != 0)))) {
          param_1->triggering_actor = &actor_ptr->base;
          local_34 = 1;
          break;
        }
        local_24 = local_24 + 4;
      }
    }
  }
  switch(param_1->event_type) {
  case TRIGGER_EVENT_SINGLE:
  case TRIGGER_EVENT_REPEAT:
    if (local_34 == 0) {
      if (param_1->event_type == TRIGGER_EVENT_SINGLE) {
        param_1->trigger_state = 0;
      }
      goto switchD_00547bd4_default;
    }
    break;
  case TRIGGER_EVENT_ON_ENTER:
    if ((param_1->prev_triggered != 0) || (local_34 == 0)) goto LAB_005480a6;
    break;
  case TRIGGER_EVENT_ON_EXIT:
    if ((param_1->prev_triggered == 1) && (local_34 == 0)) {
      param_1->trigger_state = 1;
      goto switchD_00547bd4_default;
    }
LAB_005480a6:
    param_1->trigger_state = 0;
  default:
    goto switchD_00547bd4_default;
  }
  param_1->trigger_state = 1;
switchD_00547bd4_default:
  param_1->prev_triggered = local_34;
  if (param_1->trigger_state == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1->off_event);
    param_1->triggering_actor = (CDemonActor *)0x0;
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1->on_event);
  return;
}
