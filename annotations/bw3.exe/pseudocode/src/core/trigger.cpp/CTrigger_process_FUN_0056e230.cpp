// Name: core_trigger.cpp_CTrigger_process_FUN_0056e230
// Address: 0056e230
// Address Range: [[0056e230, 0056e266] [0056e2db, 0056e346] [0056e817, 0056e8a6]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_process_FUN_0056e230(CTrigger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_trigger_cpp_CTrigger_process_FUN_0056e230(CTrigger *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CTrigger *actor_ptr;
  CDemonActor *pCVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  byte bVar11;
  float afStackY_1068 [984];
  CBoundingBox3D *in_stack_ffffff10;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3i CStack_8c;
  float fStack_80;
  float afStack_7c [4];
  float fStack_6c;
  float afStack_68 [3];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  int iStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  CLocation *pCStack_18;
  
  bVar11 = 0;
  this_ptr->triggering_actor = (CDemonActor *)0x0;
  iStack_24 = 0;
  switch(this_ptr->trigger_cause) {
  case TRIGGER_CAUSE_HERO:
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370
                      (&(this_ptr->base).location.position,this_ptr->test_radius);
    if (iVar6 != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff10);
      iVar6 = 0;
      if (0 < _DAT_01d5ba00) {
        iVar10 = 0;
        do {
          iVar7 = core_trigger_cpp_FUN_0056f080(this_ptr,*(uint *)(iVar10 + 0x1d5ba04));
          if (iVar7 != 0) {
            pCVar5 = *(CDemonActor **)(iVar10 + 0x1d5ba04);
            pcStack_1c = (char *)0x1;
            goto LAB_0056e2d5;
          }
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar6 < _DAT_01d5ba00);
      }
    }
    break;
  case TRIGGER_CAUSE_ACTOR:
    if (this_ptr->cached_actor == (CDemonActor *)0x0) {
      pCVar5 = core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90
                         (0x01D81080,this_ptr->actor_name);
      this_ptr->cached_actor = pCVar5;
    }
    pCVar5 = this_ptr->cached_actor;
    if ((((pCVar5 != (CDemonActor *)0x0) && (pCVar5->lifecycle_state == ACTOR_CREATED)) &&
        (fVar2 = (this_ptr->base).location.position.x - (pCVar5->location).position.x,
        fVar4 = (this_ptr->base).location.position.y - (pCVar5->location).position.y,
        fVar3 = (this_ptr->base).location.position.z - (pCVar5->location).position.z,
        fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <=
        this_ptr->test_radius * this_ptr->test_radius)) &&
       (iVar6 = core_trigger_cpp_FUN_0056f080(this_ptr,pCVar5), iVar6 != 0)) {
      pCVar5 = this_ptr->cached_actor;
      iStack_24 = 1;
LAB_0056e2d5:
      this_ptr->triggering_actor = pCVar5;
    }
    break;
  case TRIGGER_CAUSE_LIGHT:
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370
                      (&(this_ptr->base).location.position,this_ptr->test_radius);
    if (iVar6 != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff10);
      puVar8 = (uint *)&stack0xffffff50;
      puVar9 = (uint *)&stack0xffffff30;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      fStack_5c = fStack_c8 + fStack_bc;
      fStack_58 = fStack_c4 + fStack_b8;
      fStack_54 = fStack_c0 + fStack_b4;
      fStack_80 = fStack_c8 + fStack_bc;
      afStack_7c[(uint)bVar11 * -2] = afStack_7c[(uint)bVar11 * -2 + 9];
      afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
      afStack_7c[2] = fStack_80 * _DAT_005d660b;
      afStack_7c[3] = afStack_7c[0] * _DAT_005d660b;
      fStack_6c = afStack_7c[1] * _DAT_005d660b;
      afStack_68[0] = fStack_80 * _DAT_005d660b;
      afStack_7c[(uint)bVar11 * -2 + 6] = afStack_7c[(uint)bVar11 * -2 + 3];
      afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      core_actor_cpp_FUN_00408b80(this_ptr,afStack_7c + 5);
      fStack_44 = fStack_50;
      afStack_7c[(uint)bVar11 * -2 + 0xf] = afStack_7c[(uint)bVar11 * -2 + 0xc];
      afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
           afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
      if (&stack0xffffff68 != afStack_7c + 0xe) {
        fStack_98 = fStack_44;
        fStack_94 = fStack_40;
        fStack_90 = fStack_3c;
      }
      CStack_8c.x = (int)ROUND(fStack_98 * _DAT_005e58b0);
      CStack_8c.y = (int)ROUND(fStack_94 * _DAT_005e58b0);
      CStack_8c.z = (int)ROUND(fStack_90 * _DAT_005e58b0);
      iVar6 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
                        (g_CDemonSetPtr,&CStack_8c,(CVector3i *)0x0);
      if ((this_ptr->light_min * (float)_DAT_005d6613 <= (float)iVar6) &&
         ((float)iVar6 <= this_ptr->light_max * (float)_DAT_005d6613)) {
        pcStack_1c = (char *)0x1;
      }
    }
    break;
  case TRIGGER_CAUSE_ACTION_BUTTON:
  case TRIGGER_CAUSE_BULLET:
  case TRIGGER_CAUSE_LASER:
    iStack_24 = this_ptr->event_flag;
    this_ptr->event_flag = 0;
    break;
  case TRIGGER_CAUSE_EXPLOSION:
    pCVar1 = &(this_ptr->base).location;
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370
                      (&pCVar1->position,this_ptr->test_radius);
    if (iVar6 != 0) {
      fVar2 = (this_ptr->trigger_size).x;
      fVar3 = (this_ptr->trigger_size).y;
      fVar4 = (this_ptr->trigger_size).z;
      fStack_34 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      iStack_24 = core_fire_cpp_FUN_004a3790
                            (0x01C73654,pCVar1,((int)fStack_34 >> 1) + _DAT_01d1a0a4,0,0,0);
    }
    break;
  case TRIGGER_CAUSE_DAMAGE:
    fVar2 = this_ptr->damage_cooldown - delta_time;
    this_ptr->damage_cooldown = fVar2;
    if (fVar2 < 0.0) {
      this_ptr->damage_cooldown = 0.0;
    }
    if (0.0 < this_ptr->hit_points) {
      iStack_24 = 0;
    }
    else {
      iStack_24 = 1;
    }
    break;
  case TRIGGER_CAUSE_MOTION:
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370
                      (&(this_ptr->base).location.position,this_ptr->test_radius);
    if (iVar6 != 0) {
      iVar10 = 0;
      for (iVar6 = 0; iVar6 < g_CDemonSetPtr->actor_count; iVar6 = iVar6 + 1) {
        pCVar5 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar10);
        iVar7 = (*((pCVar5->vtable)._ub)->canLookAt)(pCVar5);
        if ((iVar7 != 0) && (iVar7 = core_trigger_cpp_FUN_0056f080(this_ptr,pCVar5), iVar7 != 0)) {
          pcStack_20 = (char *)0x1;
          this_ptr->triggering_actor = pCVar5;
          break;
        }
        iVar10 = iVar10 + 4;
      }
    }
    break;
  case TRIGGER_CAUSE_MATCHED_ACTORS:
    pCVar1 = &(this_ptr->base).location;
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370
                      (&pCVar1->position,this_ptr->test_radius);
    if (iVar6 != 0) {
      pcStack_1c = this_ptr->actor_name;
      iVar10 = 0;
      pcStack_20 = this_ptr->actor_type;
      pCStack_18 = pCVar1;
      for (iVar6 = 0; iVar6 < g_CDemonSetPtr->actor_count; iVar6 = iVar6 + 1) {
        actor_ptr = *(CTrigger **)((int)g_CDemonSetPtr->actors + iVar10);
        fVar2 = (actor_ptr->base).location.position.x - (pCStack_18->position).x;
        fVar3 = (actor_ptr->base).location.position.y - (pCStack_18->position).y;
        fVar4 = (actor_ptr->base).location.position.z - (pCStack_18->position).z;
        if ((((fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 <=
               this_ptr->test_radius * this_ptr->test_radius) && (actor_ptr != this_ptr)) &&
            (iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(&actor_ptr->base,pcStack_20), iVar7 != 0)
            ) && ((iVar7 = shape_edittool_cpp_wildcardStringMatch_FUN_00486a40
                                     (pcStack_1c,(char *)actor_ptr,0), iVar7 != 0 &&
                  (iVar7 = core_trigger_cpp_FUN_0056f080(this_ptr,actor_ptr), iVar7 != 0)))) {
          iStack_24 = 1;
          this_ptr->triggering_actor = &actor_ptr->base;
          break;
        }
        iVar10 = iVar10 + 4;
      }
    }
  }
  switch(this_ptr->event_type) {
  case TRIGGER_EVENT_MOMENTARY:
  case TRIGGER_EVENT_ONE_SHOT:
    if (iStack_24 == 0) {
      if (this_ptr->event_type == TRIGGER_EVENT_MOMENTARY) {
        this_ptr->trigger_state = 0;
      }
      goto switchD_0056e2e9_default;
    }
    break;
  case TRIGGER_EVENT_RISING_EDGE:
    if ((this_ptr->prev_triggered != 0) || (iStack_24 == 0)) goto LAB_0056e84c;
    break;
  case TRIGGER_EVENT_FALLING_EDGE:
    if ((this_ptr->prev_triggered == 1) && (iStack_24 == 0)) {
      this_ptr->trigger_state = 1;
      goto switchD_0056e2e9_default;
    }
LAB_0056e84c:
    this_ptr->trigger_state = 0;
  default:
    goto switchD_0056e2e9_default;
  }
  this_ptr->trigger_state = 1;
switchD_0056e2e9_default:
  this_ptr->prev_triggered = iStack_24;
  if (this_ptr->trigger_state == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,this_ptr->off_event);
    this_ptr->triggering_actor = (CDemonActor *)0x0;
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,this_ptr->on_event);
  return;
}
