// Name: core_trigger.cpp_CTrigger_process_FUN_005779d0
// Address: 005779d0
// Address Range: [[005779d0, 00577a06] [00577a7b, 00577ae6] [00577fb5, 00578044]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_process_FUN_005779d0(CTrigger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_trigger_cpp_CTrigger_process_FUN_005779d0(CTrigger *this_ptr,float delta_time)

{
  byte *puVar1;
  CTrigger *actor_ptr;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  byte bVar12;
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
  float *pfStack_18;
  
  bVar12 = 0;
  *(uint *)&this_ptr->field_0x45c = 0;
  iStack_24 = 0;
  switch(this_ptr->trigger_cause) {
  case TRIGGER_CAUSE_HERO:
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (&(this_ptr->base).field_0x20,*(uint *)&this_ptr->field_0x2b4);
    if (iVar7 != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff10);
      iVar7 = 0;
      if (0 < _DAT_01cedee0) {
        iVar11 = 0;
        do {
          iVar8 = core_trigger_cpp_FUN_00578800(this_ptr,*(uint *)(iVar11 + 0x1cedee4));
          if (iVar8 != 0) {
            pCVar5 = *(CDemonActor **)(iVar11 + 0x1cedee4);
            pcStack_1c = (char *)0x1;
            goto LAB_00577a75;
          }
          iVar7 = iVar7 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar7 < _DAT_01cedee0);
      }
    }
    break;
  case TRIGGER_CAUSE_ACTOR:
    if (this_ptr->cached_actor == (CDemonActor *)0x0) {
      pCVar5 = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740
                         (0x01D182F0,this_ptr->actor_name);
      this_ptr->cached_actor = pCVar5;
    }
    pCVar5 = this_ptr->cached_actor;
    if ((((pCVar5 != (CDemonActor *)0x0) && (pCVar5->lifecycle_state == ACTOR_CREATED)) &&
        (fVar2 = *(float *)&(this_ptr->base).field_0x20 - *(float *)&pCVar5->field_0x20,
        fVar4 = *(float *)&(this_ptr->base).field_0x24 - *(float *)&pCVar5->field_0x24,
        fVar3 = *(float *)&(this_ptr->base).field_0x28 - *(float *)&pCVar5->field_0x28,
        fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <=
        *(float *)&this_ptr->field_0x2b4 * *(float *)&this_ptr->field_0x2b4)) &&
       (iVar7 = core_trigger_cpp_FUN_00578800(this_ptr,pCVar5), iVar7 != 0)) {
      pCVar5 = this_ptr->cached_actor;
      iStack_24 = 1;
LAB_00577a75:
      *(CDemonActor **)&this_ptr->field_0x45c = pCVar5;
    }
    break;
  case TRIGGER_CAUSE_LIGHT:
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (&(this_ptr->base).field_0x20,*(uint *)&this_ptr->field_0x2b4);
    if (iVar7 != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff10);
      puVar9 = (uint *)&stack0xffffff50;
      puVar10 = (uint *)&stack0xffffff30;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      fStack_5c = fStack_c8 + fStack_bc;
      fStack_58 = fStack_c4 + fStack_b8;
      fStack_54 = fStack_c0 + fStack_b4;
      fStack_80 = fStack_c8 + fStack_bc;
      afStack_7c[(uint)bVar12 * -2] = afStack_7c[(uint)bVar12 * -2 + 9];
      afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
      afStack_7c[2] = fStack_80 * _DAT_005ecd82;
      afStack_7c[3] = afStack_7c[0] * _DAT_005ecd82;
      fStack_6c = afStack_7c[1] * _DAT_005ecd82;
      afStack_68[0] = fStack_80 * _DAT_005ecd82;
      afStack_7c[(uint)bVar12 * -2 + 6] = afStack_7c[(uint)bVar12 * -2 + 3];
      afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr,afStack_7c + 5);
      fStack_44 = fStack_50;
      afStack_7c[(uint)bVar12 * -2 + 0xf] = afStack_7c[(uint)bVar12 * -2 + 0xc];
      afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
           afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
      if (&stack0xffffff68 != afStack_7c + 0xe) {
        fStack_98 = fStack_44;
        fStack_94 = fStack_40;
        fStack_90 = fStack_3c;
      }
      CStack_8c.x = (int)ROUND(fStack_98 * _DAT_005fd200);
      CStack_8c.y = (int)ROUND(fStack_94 * _DAT_005fd200);
      CStack_8c.z = (int)ROUND(fStack_90 * _DAT_005fd200);
      iVar7 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                        (g_CDemonSetPtr,&CStack_8c,(CVector3i *)0x0);
      if ((this_ptr->light_min * (float)_DAT_005ecd8a <= (float)iVar7) &&
         ((float)iVar7 <= this_ptr->light_max * (float)_DAT_005ecd8a)) {
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
    puVar1 = &(this_ptr->base).field_0x20;
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (puVar1,*(uint *)&this_ptr->field_0x2b4);
    if (iVar7 != 0) {
      fStack_34 = *(float *)&this_ptr->field_0x2c4 * *(float *)&this_ptr->field_0x2c4 +
                  *(float *)&this_ptr->field_0x2c0 * *(float *)&this_ptr->field_0x2c0 +
                  *(float *)&this_ptr->field_0x2bc * *(float *)&this_ptr->field_0x2bc;
      iStack_24 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0
                            (0x01C3DEB4,(CVector3f *)puVar1,
                             (float)(((int)fStack_34 >> 1) + _DAT_01caf5b4),(CVector3f *)0x0,
                             (float *)0x0);
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
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (&(this_ptr->base).field_0x20,*(uint *)&this_ptr->field_0x2b4);
    if (iVar7 != 0) {
      iVar11 = 0;
      for (iVar7 = 0; iVar7 < g_CDemonSetPtr->actor_count; iVar7 = iVar7 + 1) {
        iVar8 = *(int *)((int)g_CDemonSetPtr->actors + iVar11);
        iVar6 = (**(code **)(*(int *)(iVar8 + 0x2b0) + 100))(iVar8);
        if ((iVar6 != 0) && (iVar6 = core_trigger_cpp_FUN_00578800(this_ptr,iVar8), iVar6 != 0)) {
          iStack_24 = 1;
          *(int *)&this_ptr->field_0x45c = iVar8;
          break;
        }
        iVar11 = iVar11 + 4;
      }
    }
    break;
  case TRIGGER_CAUSE_MATCHED_ACTORS:
    puVar1 = &(this_ptr->base).field_0x20;
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (puVar1,*(uint *)&this_ptr->field_0x2b4);
    if (iVar7 != 0) {
      pcStack_1c = this_ptr->actor_name;
      iVar11 = 0;
      pcStack_20 = this_ptr->actor_type;
      pfStack_18 = (float *)puVar1;
      for (iVar7 = 0; iVar7 < g_CDemonSetPtr->actor_count; iVar7 = iVar7 + 1) {
        actor_ptr = *(CTrigger **)((int)g_CDemonSetPtr->actors + iVar11);
        fVar2 = *(float *)&(actor_ptr->base).field_0x20 - *pfStack_18;
        fVar3 = *(float *)&(actor_ptr->base).field_0x24 - pfStack_18[1];
        fVar4 = *(float *)&(actor_ptr->base).field_0x28 - pfStack_18[2];
        if ((((fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 <=
               *(float *)&this_ptr->field_0x2b4 * *(float *)&this_ptr->field_0x2b4) &&
             (actor_ptr != this_ptr)) &&
            (iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&actor_ptr->base,pcStack_20), iVar8 != 0)
            ) && ((iVar8 = shape_edittool_cpp_wildcardStringMatch_FUN_00485840
                                     (pcStack_1c,(char *)actor_ptr,0), iVar8 != 0 &&
                  (iVar8 = core_trigger_cpp_FUN_00578800(this_ptr,actor_ptr), iVar8 != 0)))) {
          iStack_24 = 1;
          *(CTrigger **)&this_ptr->field_0x45c = actor_ptr;
          break;
        }
        iVar11 = iVar11 + 4;
      }
    }
  }
  switch(*(uint *)&this_ptr->field_0x2b8) {
  case 0:
  case 1:
    if (iStack_24 == 0) {
      if (*(int *)&this_ptr->field_0x2b8 == 0) {
        *(uint *)&this_ptr->field_0x2c8 = 0;
      }
      goto switchD_00577a89_default;
    }
    break;
  case 2:
    if ((this_ptr->prev_triggered != 0) || (iStack_24 == 0)) goto LAB_00577fea;
    break;
  case 3:
    if ((this_ptr->prev_triggered == 1) && (iStack_24 == 0)) {
      *(uint *)&this_ptr->field_0x2c8 = 1;
      goto switchD_00577a89_default;
    }
LAB_00577fea:
    *(uint *)&this_ptr->field_0x2c8 = 0;
  default:
    goto switchD_00577a89_default;
  }
  *(uint *)&this_ptr->field_0x2c8 = 1;
switchD_00577a89_default:
  this_ptr->prev_triggered = iStack_24;
  if (*(int *)&this_ptr->field_0x2c8 == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->off_event);
    *(uint *)&this_ptr->field_0x45c = 0;
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->on_event);
  return;
}
