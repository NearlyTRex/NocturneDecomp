// Name: core_trigger.cpp_CTrigger_process_FUN_0059b240
// Address: 0059b240
// Address Range: [[0059b240, 0059b276] [0059b2eb, 0059b356] [0059b825, 0059b8b4]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_process_FUN_0059b240(CTrigger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_trigger_cpp_CTrigger_process_FUN_0059b240(CTrigger *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CTrigger *actor_ptr;
  uint uVar5;
  CDemonActor *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  byte bVar13;
  float afStackY_1068 [985];
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
  
  bVar13 = 0;
  *(uint *)&this_ptr->field_0x300 = 0;
  iStack_24 = 0;
  switch(this_ptr->trigger_cause) {
  case TRIGGER_CAUSE_HERO:
    iVar8 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0
                      (&(this_ptr->base).location,this_ptr->test_radius);
    if (iVar8 != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff10);
      iVar8 = 0;
      if (0 < _DAT_01d06aa0) {
        iVar12 = 0;
        do {
          iVar9 = core_trigger_cpp_FUN_0059c090(this_ptr,*(uint *)(iVar12 + 0x1d06aa4));
          if (iVar9 != 0) {
            uVar5 = *(uint *)(iVar12 + 0x1d06aa4);
            pcStack_1c = (char *)0x1;
            goto LAB_0059b2e5;
          }
          iVar8 = iVar8 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar8 < _DAT_01d06aa0);
      }
    }
    break;
  case TRIGGER_CAUSE_ACTOR:
    if (*(int *)&this_ptr->field_0x36c == 0) {
      pCVar6 = core_mission_cpp_CDemonMission_findActorByName_FUN_0051b6c0
                         (0x01D2C900,this_ptr->actor_name);
      *(CDemonActor **)&this_ptr->field_0x36c = pCVar6;
    }
    iVar8 = *(int *)&this_ptr->field_0x36c;
    if ((((iVar8 != 0) && (*(int *)(iVar8 + 0x70) == 1)) &&
        (fVar2 = (this_ptr->base).location.position.x - *(float *)(iVar8 + 0x20),
        fVar4 = (this_ptr->base).location.position.y - *(float *)(iVar8 + 0x24),
        fVar3 = (this_ptr->base).location.position.z - *(float *)(iVar8 + 0x28),
        fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <=
        this_ptr->test_radius * this_ptr->test_radius)) &&
       (iVar8 = core_trigger_cpp_FUN_0059c090(this_ptr,iVar8), iVar8 != 0)) {
      uVar5 = *(uint *)&this_ptr->field_0x36c;
      iStack_24 = 1;
LAB_0059b2e5:
      *(uint *)&this_ptr->field_0x300 = uVar5;
    }
    break;
  case TRIGGER_CAUSE_LIGHT:
    iVar8 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0
                      (&(this_ptr->base).location,this_ptr->test_radius);
    if (iVar8 != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff10);
      puVar10 = (uint *)&stack0xffffff50;
      puVar11 = (uint *)&stack0xffffff30;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      }
      fStack_5c = fStack_c8 + fStack_bc;
      fStack_58 = fStack_c4 + fStack_b8;
      fStack_54 = fStack_c0 + fStack_b4;
      fStack_80 = fStack_c8 + fStack_bc;
      afStack_7c[(uint)bVar13 * -2] = afStack_7c[(uint)bVar13 * -2 + 9];
      afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      afStack_7c[2] = fStack_80 * _DAT_005f809c;
      afStack_7c[3] = afStack_7c[0] * _DAT_005f809c;
      fStack_6c = afStack_7c[1] * _DAT_005f809c;
      afStack_68[0] = fStack_80 * _DAT_005f809c;
      afStack_7c[(uint)bVar13 * -2 + 6] = afStack_7c[(uint)bVar13 * -2 + 3];
      afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      core_actor_cpp_FUN_00408b40(this_ptr,afStack_7c + 5);
      fStack_44 = fStack_50;
      afStack_7c[(uint)bVar13 * -2 + 0xf] = afStack_7c[(uint)bVar13 * -2 + 0xc];
      afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
           afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      if (&stack0xffffff68 != afStack_7c + 0xe) {
        fStack_98 = fStack_44;
        fStack_94 = fStack_40;
        fStack_90 = fStack_3c;
      }
      CStack_8c.x = (int)ROUND(fStack_98 * _DAT_006071b0);
      CStack_8c.y = (int)ROUND(fStack_94 * _DAT_006071b0);
      CStack_8c.z = (int)ROUND(fStack_90 * _DAT_006071b0);
      iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
                        (g_CDemonSetPtr,&CStack_8c,(CVector3i *)0x0);
      if ((this_ptr->light_min * (float)_DAT_005f80a4 <= (float)iVar8) &&
         ((float)iVar8 <= this_ptr->light_max * (float)_DAT_005f80a4)) {
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
    iVar8 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(pCVar1,this_ptr->test_radius);
    if (iVar8 != 0) {
      fVar2 = (this_ptr->trigger_size).x;
      fVar3 = (this_ptr->trigger_size).y;
      fVar4 = (this_ptr->trigger_size).z;
      fStack_34 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      iStack_24 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0
                            (0x01C57074,&pCVar1->position,
                             (float)(((int)fStack_34 >> 1) + _DAT_01cc804c),(CVector3f *)0x0,
                             (float *)0x0);
    }
    break;
  case TRIGGER_CAUSE_DAMAGE:
    fVar2 = *(float *)&this_ptr->field_0x370 - delta_time;
    *(float *)&this_ptr->field_0x370 = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)&this_ptr->field_0x370 = 0;
    }
    if (0.0 < this_ptr->hit_points) {
      iStack_24 = 0;
    }
    else {
      iStack_24 = 1;
    }
    break;
  case TRIGGER_CAUSE_MOTION:
    iVar8 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0
                      (&(this_ptr->base).location,this_ptr->test_radius);
    if (iVar8 != 0) {
      iVar12 = 0;
      for (iVar8 = 0; iVar8 < g_CDemonSetPtr->actor_count; iVar8 = iVar8 + 1) {
        iVar9 = *(int *)((int)g_CDemonSetPtr->actors + iVar12);
        iVar7 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x5c))(iVar9);
        if ((iVar7 != 0) && (iVar7 = core_trigger_cpp_FUN_0059c090(this_ptr,iVar9), iVar7 != 0)) {
          iStack_24 = 1;
          *(int *)&this_ptr->field_0x300 = iVar9;
          break;
        }
        iVar12 = iVar12 + 4;
      }
    }
    break;
  case TRIGGER_CAUSE_MATCHED_ACTORS:
    pCVar1 = &(this_ptr->base).location;
    iVar8 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(pCVar1,this_ptr->test_radius);
    if (iVar8 != 0) {
      pcStack_1c = this_ptr->actor_name;
      iVar12 = 0;
      pcStack_20 = this_ptr->actor_type;
      pCStack_18 = pCVar1;
      for (iVar8 = 0; iVar8 < g_CDemonSetPtr->actor_count; iVar8 = iVar8 + 1) {
        actor_ptr = *(CTrigger **)((int)g_CDemonSetPtr->actors + iVar12);
        fVar2 = (actor_ptr->base).location.position.x - (pCStack_18->position).x;
        fVar3 = (actor_ptr->base).location.position.y - (pCStack_18->position).y;
        fVar4 = (actor_ptr->base).location.position.z - (pCStack_18->position).z;
        if ((((fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 <=
               this_ptr->test_radius * this_ptr->test_radius) && (actor_ptr != this_ptr)) &&
            (iVar9 = core_actor_cpp_isOfClass_FUN_0040c550(&actor_ptr->base,pcStack_20), iVar9 != 0)
            ) && ((iVar9 = shape_edittool_cpp_wildcardStringMatch_FUN_0049dea0
                                     (pcStack_1c,(char *)actor_ptr,0), iVar9 != 0 &&
                  (iVar9 = core_trigger_cpp_FUN_0059c090(this_ptr,actor_ptr), iVar9 != 0)))) {
          iStack_24 = 1;
          *(CTrigger **)&this_ptr->field_0x300 = actor_ptr;
          break;
        }
        iVar12 = iVar12 + 4;
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
      goto switchD_0059b2f9_default;
    }
    break;
  case TRIGGER_EVENT_RISING_EDGE:
    if ((this_ptr->prev_triggered != 0) || (iStack_24 == 0)) goto LAB_0059b85a;
    break;
  case TRIGGER_EVENT_FALLING_EDGE:
    if ((this_ptr->prev_triggered == 1) && (iStack_24 == 0)) {
      this_ptr->trigger_state = 1;
      goto switchD_0059b2f9_default;
    }
LAB_0059b85a:
    this_ptr->trigger_state = 0;
  default:
    goto switchD_0059b2f9_default;
  }
  this_ptr->trigger_state = 1;
switchD_0059b2f9_default:
  this_ptr->prev_triggered = iStack_24;
  if (this_ptr->trigger_state == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,this_ptr->off_event);
    *(uint *)&this_ptr->field_0x300 = 0;
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,this_ptr->on_event);
  return;
}
