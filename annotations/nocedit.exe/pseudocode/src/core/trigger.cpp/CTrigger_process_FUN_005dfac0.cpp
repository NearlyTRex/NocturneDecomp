// Name: core_trigger.cpp_CTrigger_process_FUN_005dfac0
// Address: 005dfac0
// Address Range: [[005dfac0, 005e00a3]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_process_FUN_005dfac0(CTrigger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_process_FUN_005dfac0(CTrigger *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  CTrigger *actor_ptr;
  int iVar3;
  float fVar4;
  CDemonActor *pCVar5;
  CBoundingBox3D *pCVar6;
  CVector3f *pCVar7;
  int iVar8;
  int iVar9;
  double local_b8 [3];
  CBoundingBox3D local_a0;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3i CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f aCStack_50 [2];
  int local_34;
  char *local_30;
  char *local_2c;
  int local_28;
  int local_24;
  CLocation *local_20;
  float local_1c;
  
  local_34 = 0;
  this_ptr->unk3 = 0;
  switch(this_ptr->hero_triggers_me) {
  case 0:
    iVar8 = core_hero_cpp_FUN_004f2220();
    if (iVar8 != 0) {
      iVar8 = 0;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_a0);
      if (0 < g_HeroCount) {
        iVar9 = 0;
        do {
          iVar3 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0
                            (this_ptr,*(CDemonActor **)((int)g_HeroActors + iVar9));
          if (iVar3 != 0) {
            fVar4 = *(float *)((int)g_HeroActors + iVar9);
            local_2c = (char *)0x1;
            goto LAB_005dfb52;
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar8 < g_HeroCount);
      }
    }
    break;
  case 1:
    if (this_ptr->unk4 == 0.0) {
      pCVar5 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                         (g_CDemonMissionPtr,this_ptr->actor_name);
      this_ptr->unk4 = (float)pCVar5;
    }
    if ((CDemonActor *)this_ptr->unk4 != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                ((CDemonActor *)this_ptr->unk4,"..\\core\\trigger.cpp",0xee);
      pCVar5 = (CDemonActor *)this_ptr->unk4;
      if (((pCVar5->was_created == 1) &&
          (fVar4 = (this_ptr->base).location.position.x - (pCVar5->location).position.x,
          fVar2 = (this_ptr->base).location.position.y - (pCVar5->location).position.y,
          fVar1 = (this_ptr->base).location.position.z - (pCVar5->location).position.z,
          fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <=
          this_ptr->test_radius * this_ptr->test_radius)) &&
         (iVar8 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(this_ptr,pCVar5), iVar8 != 0)
         ) {
        fVar4 = this_ptr->unk4;
        local_34 = 1;
LAB_005dfb52:
        this_ptr->unk3 = (int)fVar4;
      }
    }
    break;
  case 2:
    iVar8 = core_hero_cpp_FUN_004f2220();
    if (iVar8 != 0) {
      pCVar6 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                         (&this_ptr->base,(CBoundingBox3D *)local_b8);
      fStack_80 = (pCVar6->min).x + (pCVar6->max).x;
      fStack_7c = (pCVar6->min).y + (pCVar6->max).y;
      CStack_68.x = fStack_80 * 0.5f;
      CStack_68.y = fStack_7c * 0.5f;
      fStack_78 = (pCVar6->min).z + (pCVar6->max).z;
      CStack_68.z = fStack_78 * 0.5f;
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,&CStack_5c,&CStack_68);
      if (aCStack_50 != pCVar7) {
        aCStack_50[0].x = pCVar7->x;
        aCStack_50[0].y = pCVar7->y;
        aCStack_50[0].z = pCVar7->z;
      }
      CStack_74.x = (int)ROUND(aCStack_50[0].x * 256.0f);
      CStack_74.y = (int)ROUND(aCStack_50[0].y * 256.0f);
      CStack_74.z = (int)ROUND(aCStack_50[0].z * 256.0f);
      iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                        (g_CDemonSetPtr,&CStack_74,(CVector3i *)0x0);
      local_b8[0] = (double)iVar8;
      if ((this_ptr->light_min * (float)65536 <= (float)iVar8) &&
         ((float)iVar8 <= this_ptr->light_max * (float)65536)) {
        local_2c = (char *)0x1;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
    local_34 = *(int *)(this_ptr->unk2 + 4);
    this_ptr->unk2[4] = '\0';
    this_ptr->unk2[5] = '\0';
    this_ptr->unk2[6] = '\0';
    this_ptr->unk2[7] = '\0';
    break;
  case 6:
    iVar8 = core_hero_cpp_FUN_004f2220();
    if (iVar8 != 0) {
      fVar4 = (this_ptr->trigger_size).x;
      fVar1 = (this_ptr->trigger_size).y;
      fVar2 = (this_ptr->trigger_size).z;
      local_1c = fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4;
      local_34 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
    }
    break;
  case 7:
    fVar4 = this_ptr->unk5 - delta_time;
    this_ptr->unk5 = fVar4;
    if (fVar4 < 0.0) {
      this_ptr->unk5 = 0.0;
    }
    if (0.0 < this_ptr->hit_points) {
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
    break;
  case 8:
    iVar8 = core_hero_cpp_FUN_004f2220();
    if (iVar8 != 0) {
      local_28 = 0;
      for (iVar8 = 0; iVar8 < (int)g_CDemonSetPtr->actor_list_ptr; iVar8 = iVar8 + 1) {
        pCVar5 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_28);
        iVar9 = (*((pCVar5->vtable)._ub)->canLookAt)(pCVar5);
        if ((iVar9 != 0) &&
           (iVar9 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(this_ptr,pCVar5),
           iVar9 != 0)) {
          this_ptr->unk3 = (int)pCVar5;
          local_30 = (char *)0x1;
          break;
        }
        local_24 = local_24 + 4;
      }
    }
    break;
  case 9:
    iVar8 = core_hero_cpp_FUN_004f2220();
    if (iVar8 != 0) {
      local_30 = this_ptr->actor_name;
      local_2c = this_ptr->actor_type;
      local_24 = 0;
      local_20 = &(this_ptr->base).location;
      for (iVar8 = 0; iVar8 < (int)g_CDemonSetPtr->actor_list_ptr; iVar8 = iVar8 + 1) {
        actor_ptr = *(CTrigger **)(g_CDemonSetPtr->actor_list_data + local_24);
        fVar4 = (actor_ptr->base).location.position.x - (local_20->position).x;
        fVar2 = (actor_ptr->base).location.position.y - (local_20->position).y;
        fVar1 = (actor_ptr->base).location.position.z - (local_20->position).z;
        if ((((fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <=
               this_ptr->test_radius * this_ptr->test_radius) && (actor_ptr != this_ptr)) &&
            (iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(&actor_ptr->base,local_2c), iVar9 != 0))
           && ((iVar9 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                                  (local_30,(char *)actor_ptr,0), iVar9 != 0 &&
               (iVar9 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0
                                  (this_ptr,&actor_ptr->base), iVar9 != 0)))) {
          this_ptr->unk3 = (int)actor_ptr;
          local_34 = 1;
          break;
        }
        local_24 = local_24 + 4;
      }
    }
  }
  switch(this_ptr->event_type) {
  case 0:
  case 1:
    if (local_34 == 0) {
      if (this_ptr->event_type == 0) {
        this_ptr->trigger_state = 0;
      }
      goto switchD_005dfb63_default;
    }
    break;
  case 2:
    if ((*(int *)this_ptr->unk2 != 0) || (local_34 == 0)) goto LAB_005e0053;
    break;
  case 3:
    if ((*(int *)this_ptr->unk2 == 1) && (local_34 == 0)) {
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
  *(int *)this_ptr->unk2 = local_34;
  if (this_ptr->trigger_state == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->off_event);
    this_ptr->unk3 = 0;
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->on_event);
  return;
}
