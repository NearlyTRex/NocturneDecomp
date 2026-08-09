// Name: core_trigger.cpp_CTrigger_process_FUN_00547b30
// Address: 00547b30
// Address Range: [[00547b30, 005480f6]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_process_FUN_00547b30(CTrigger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_trigger_cpp_CTrigger_process_FUN_00547b30(CTrigger *this_ptr,float delta_time)

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
  this_ptr->triggering_actor = (CDemonActor *)0x0;
  switch(this_ptr->hero_triggers_me) {
  case 0:
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (&(this_ptr->base).location.position,this_ptr->test_radius);
    if (iVar9 != 0) {
      iVar9 = 0;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_a0);
      if (0 < _DAT_01cae0d4) {
        iVar10 = 0;
        do {
          iVar5 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0
                            (this_ptr,*(CDemonActor **)((int)g_HeroActors + iVar10));
          if (iVar5 != 0) {
            pCVar6 = *(CDemonActor **)((int)g_HeroActors + iVar10);
            goto LAB_00547bbc;
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar9 < _DAT_01cae0d4);
      }
    }
    break;
  case 1:
    if (this_ptr->cached_actor == (CDemonActor *)0x0) {
      pCVar6 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0
                         (g_CDemonMission_PTR_005baf90,this_ptr->actor_name);
      this_ptr->cached_actor = pCVar6;
    }
    pCVar6 = this_ptr->cached_actor;
    if ((((pCVar6 != (CDemonActor *)0x0) && (pCVar6->lifecycle_state == ACTOR_CREATED)) &&
        (fVar2 = (this_ptr->base).location.position.x - (pCVar6->location).position.x,
        fVar4 = (this_ptr->base).location.position.y - (pCVar6->location).position.y,
        fVar3 = (this_ptr->base).location.position.z - (pCVar6->location).position.z,
        fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <=
        this_ptr->test_radius * this_ptr->test_radius)) &&
       (iVar9 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(this_ptr,pCVar6), iVar9 != 0))
    {
      pCVar6 = this_ptr->cached_actor;
LAB_00547bbc:
      local_34 = 1;
      this_ptr->triggering_actor = pCVar6;
    }
    break;
  case 2:
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (&(this_ptr->base).location.position,this_ptr->test_radius);
    if (iVar9 != 0) {
      pCVar7 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_b8);
      fStack_88 = (pCVar7->min).x + (pCVar7->max).x;
      fStack_84 = (pCVar7->min).y + (pCVar7->max).y;
      CStack_70.x = fStack_88 * 0.5f;
      CStack_70.y = fStack_84 * 0.5f;
      fStack_80 = (pCVar7->min).z + (pCVar7->max).z;
      CStack_70.z = fStack_80 * 0.5f;
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (&this_ptr->base,&CStack_64,&CStack_70);
      if (aCStack_58 != pCVar8) {
        aCStack_58[0].x = pCVar8->x;
        aCStack_58[0].y = pCVar8->y;
        aCStack_58[0].z = pCVar8->z;
      }
      CStack_7c.x = (int)ROUND(aCStack_58[0].x * _DAT_005a3640);
      CStack_7c.y = (int)ROUND(aCStack_58[0].y * _DAT_005a3640);
      CStack_7c.z = (int)ROUND(aCStack_58[0].z * _DAT_005a3640);
      iStack_18 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
                            (g_CDemonSet_PTR_005be368,&CStack_7c,(CVector3i *)0x0);
      if ((this_ptr->light_min * (float)65536 <= (float)iStack_18) &&
         ((float)iStack_18 <= this_ptr->light_max * (float)65536)) {
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
    pCVar1 = &(this_ptr->base).location;
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (&pCVar1->position,this_ptr->test_radius);
    if (iVar9 != 0) {
      fVar2 = (this_ptr->trigger_size).x;
      fVar3 = (this_ptr->trigger_size).y;
      fVar4 = (this_ptr->trigger_size).z;
      local_1c = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      local_34 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                           (g_CFireEffect_PTR_005b80f0,&pCVar1->position,
                            (float)(((int)local_1c >> 1) + g_FastSqrtMagic),(CVector3f *)0x0,
                            (float *)0x0);
    }
    break;
  case 7:
    fVar2 = this_ptr->damage_cooldown - delta_time;
    this_ptr->damage_cooldown = fVar2;
    if (fVar2 < 0.0) {
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
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (&(this_ptr->base).location.position,this_ptr->test_radius);
    if (iVar9 != 0) {
      local_28 = 0;
      for (iVar9 = 0; iVar9 < g_CDemonSet_PTR_005be368->actor_count; iVar9 = iVar9 + 1) {
        pCVar6 = *(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + local_28);
        iVar10 = (*((pCVar6->vtable)._ub)->canLookAt)(pCVar6);
        if ((iVar10 != 0) &&
           (iVar10 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(this_ptr,pCVar6),
           iVar10 != 0)) {
          this_ptr->triggering_actor = pCVar6;
          local_34 = 1;
          break;
        }
        local_28 = local_28 + 4;
      }
    }
    break;
  case 9:
    pCVar1 = &(this_ptr->base).location;
    iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (&pCVar1->position,this_ptr->test_radius);
    if (iVar9 != 0) {
      local_30 = this_ptr->actor_name;
      local_2c = this_ptr->actor_type;
      local_24 = 0;
      local_20 = pCVar1;
      for (iVar9 = 0; iVar9 < g_CDemonSet_PTR_005be368->actor_count; iVar9 = iVar9 + 1) {
        actor_ptr = *(CTrigger **)((int)g_CDemonSet_PTR_005be368->actors + local_24);
        fVar2 = (actor_ptr->base).location.position.x - (local_20->position).x;
        fVar4 = (actor_ptr->base).location.position.y - (local_20->position).y;
        fVar3 = (actor_ptr->base).location.position.z - (local_20->position).z;
        if ((((fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <=
               this_ptr->test_radius * this_ptr->test_radius) && (actor_ptr != this_ptr)) &&
            (iVar10 = core_actor_cpp_isOfClass_FUN_0040d7e0(&actor_ptr->base,local_2c), iVar10 != 0)
            ) && ((iVar10 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0
                                      (local_30,(char *)actor_ptr,0), iVar10 != 0 &&
                  (iVar10 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0
                                      (this_ptr,&actor_ptr->base), iVar10 != 0)))) {
          this_ptr->triggering_actor = &actor_ptr->base;
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
      goto switchD_00547bd4_default;
    }
    break;
  case TRIGGER_EVENT_ON_ENTER:
    if ((this_ptr->prev_triggered != 0) || (local_34 == 0)) goto LAB_005480a6;
    break;
  case TRIGGER_EVENT_ON_EXIT:
    if ((this_ptr->prev_triggered == 1) && (local_34 == 0)) {
      this_ptr->trigger_state = 1;
      goto switchD_00547bd4_default;
    }
LAB_005480a6:
    this_ptr->trigger_state = 0;
  default:
    goto switchD_00547bd4_default;
  }
  this_ptr->trigger_state = 1;
switchD_00547bd4_default:
  this_ptr->prev_triggered = local_34;
  if (this_ptr->trigger_state == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->off_event);
    this_ptr->triggering_actor = (CDemonActor *)0x0;
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->on_event);
  return;
}
