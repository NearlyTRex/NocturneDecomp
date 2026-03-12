// Name: core_trigger.cpp_CTrigger_process_FUN_005dfac0
// Address: 005dfac0
// Address Range: [[005dfac0, 005e00a3]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_process_FUN_005dfac0(CTrigger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_process_FUN_005dfac0(CTrigger *this_ptr,float delta_time)

{
  CLocation *pCVar2;
  CTrigger *actor_ptr_00;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar5;
  CDemonActor *pCVar9;
  CDemonActor *pCVar6;
  CBoundingBox3D *pCVar7;
  CVector3f *pCVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  float fVar4;
  CTrigger *actor_ptr;
  float fVar2;
  float fVar3;
  CLocation *pCVar1;
  
  local_34 = 0;
  this_ptr->triggering_actor = (CDemonActor *)0x0;
  switch(this_ptr->hero_triggers_me) {
  case 0:
    iVar12 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220
                       (&(this_ptr->base).location.position,this_ptr->test_radius);
    if (iVar12 != 0) {
      iVar12 = 0;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_a0);
      if (0 < g_HeroCount) {
        iVar11 = 0;
        do {
          iVar5 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0
                            (this_ptr,*(CDemonActor **)((int)g_HeroActors + iVar11));
          if (iVar5 != 0) {
            pCVar9 = *(CDemonActor **)((int)g_HeroActors + iVar11);
            goto LAB_005dfb52;
          }
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar12 < g_HeroCount);
      }
    }
    break;
  case 1:
    if (this_ptr->cached_actor == (CDemonActor *)0x0) {
      pCVar6 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                         (g_CDemonMissionPtr,this_ptr->actor_name);
      this_ptr->cached_actor = pCVar6;
    }
    if (this_ptr->cached_actor != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (this_ptr->cached_actor,"..\\core\\trigger.cpp",0xee);
      pCVar9 = this_ptr->cached_actor;
      if (((pCVar9->lifecycle_state == ACTOR_CREATED) &&
          (fVar5 = (this_ptr->base).location.position.x - (pCVar9->location).position.x,
          fVar7 = (this_ptr->base).location.position.y - (pCVar9->location).position.y,
          fVar6 = (this_ptr->base).location.position.z - (pCVar9->location).position.z,
          fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5 <=
          this_ptr->test_radius * this_ptr->test_radius)) &&
         (iVar12 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(this_ptr,pCVar9),
         iVar12 != 0)) {
        pCVar9 = this_ptr->cached_actor;
LAB_005dfb52:
        local_34 = 1;
        this_ptr->triggering_actor = pCVar9;
      }
    }
    break;
  case 2:
    iVar12 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220
                       (&(this_ptr->base).location.position,this_ptr->test_radius);
    if (iVar12 != 0) {
      pCVar7 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_b8);
      CStack_70.x = ((pCVar7->min).x + (pCVar7->max).x) * 0.5f;
      CStack_70.y = ((pCVar7->min).y + (pCVar7->max).y) * 0.5f;
      CStack_70.z = ((pCVar7->min).z + (pCVar7->max).z) * 0.5f;
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,&CStack_64,&CStack_70);
      if (aCStack_58 != pCVar8) {
        aCStack_58[0].x = pCVar8->x;
        aCStack_58[0].y = pCVar8->y;
        aCStack_58[0].z = pCVar8->z;
      }
      CStack_7c.x = (int)ROUND(aCStack_58[0].x * 256.0f);
      CStack_7c.y = (int)ROUND(aCStack_58[0].y * 256.0f);
      CStack_7c.z = (int)ROUND(aCStack_58[0].z * 256.0f);
      iVar12 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                         (g_CDemonSetPtr,&CStack_7c,(CVector3i *)0x0);
      if ((this_ptr->light_min * (float)65536 <= (float)iVar12) &&
         ((float)iVar12 <= this_ptr->light_max * (float)65536)) {
        local_34 = 1;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
    local_34 = this_ptr->event_flag;
    this_ptr->event_flag = 0;
    break;
  case 6:
    pCVar2 = &(this_ptr->base).location;
    iVar12 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220
                       (&pCVar2->position,this_ptr->test_radius);
    if (iVar12 != 0) {
      fVar2 = (this_ptr->trigger_size).x;
      fVar3 = (this_ptr->trigger_size).y;
      fVar4 = (this_ptr->trigger_size).z;
      local_34 = core_fire_cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90
                           (g_CFireEffectPtr,&pCVar2->position,
                            (float)(((int)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) >> 1) +
                                   INT_02d7a7b8),(CVector3f *)0x0,(int *)0x0);
    }
    break;
  case 7:
    fVar5 = this_ptr->damage_cooldown - delta_time;
    this_ptr->damage_cooldown = fVar5;
    if (fVar5 < 0.0) {
      this_ptr->damage_cooldown = 0.0;
    }
    if (0.0 < this_ptr->hit_points) {
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
    break;
  case 8:
    iVar12 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220
                       (&(this_ptr->base).location.position,this_ptr->test_radius);
    if (iVar12 != 0) {
      local_28 = 0;
      for (iVar12 = 0; iVar12 < g_CDemonSetPtr->actor_count; iVar12 = iVar12 + 1) {
        pCVar9 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_28);
        iVar11 = (*((pCVar9->vtable)._ub)->canLookAt)(pCVar9);
        if ((iVar11 != 0) &&
           (iVar11 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(this_ptr,pCVar9),
           iVar11 != 0)) {
          this_ptr->triggering_actor = pCVar9;
          local_34 = 1;
          break;
        }
        local_28 = local_28 + 4;
      }
    }
    break;
  case 9:
    pCVar2 = &(this_ptr->base).location;
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220
                      (&pCVar2->position,this_ptr->test_radius);
    if (iVar9 != 0) {
      local_24 = 0;
      for (iVar12 = 0; iVar12 < g_CDemonSetPtr->actor_count; iVar12 = iVar12 + 1) {
        actor_ptr_00 = *(CTrigger **)((int)g_CDemonSetPtr->actors + local_24);
        fVar5 = (actor_ptr_00->base).location.position.x - (pCVar2->position).x;
        fVar7 = (actor_ptr_00->base).location.position.y - (this_ptr->base).location.position.y;
        fVar6 = (actor_ptr_00->base).location.position.z - (this_ptr->base).location.position.z;
        if ((((fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5 <=
               this_ptr->test_radius * this_ptr->test_radius) && (actor_ptr_00 != this_ptr)) &&
            (iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                (&actor_ptr_00->base,this_ptr->actor_type), iVar10 != 0)) &&
           ((iVar11 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                                (this_ptr->actor_name,(char *)actor_ptr_00,0), iVar11 != 0 &&
            (iVar11 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0
                                (this_ptr,&actor_ptr_00->base), iVar11 != 0)))) {
          this_ptr->triggering_actor = &actor_ptr_00->base;
          local_34 = 1;
          break;
        }
        local_24 = local_24 + 4;
      }
    }
  }
  switch(this_ptr->event_type) {
  case TRIGGER_EVENT_SINGLE:
  case TRIGGER_EVENT_REPEAT:
    if (local_34 == 0) {
      if (this_ptr->event_type == TRIGGER_EVENT_SINGLE) {
        this_ptr->trigger_state = 0;
      }
      goto switchD_005dfb63_default;
    }
    break;
  case TRIGGER_EVENT_ON_ENTER:
    if ((this_ptr->prev_triggered != 0) || (local_34 == 0)) goto LAB_005e0053;
    break;
  case TRIGGER_EVENT_ON_EXIT:
    if ((this_ptr->prev_triggered == 1) && (local_34 == 0)) {
      this_ptr->trigger_state = 1;
      goto switchD_005dfb63_default;
    }
LAB_005e0053:
    this_ptr->trigger_state = 0;
  default:
    goto switchD_005dfb63_default;
  }
  this_ptr->trigger_state = 1;
switchD_005dfb63_default:
  this_ptr->prev_triggered = local_34;
  if (this_ptr->trigger_state == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->off_event);
    this_ptr->triggering_actor = (CDemonActor *)0x0;
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->on_event);
  return;
}
