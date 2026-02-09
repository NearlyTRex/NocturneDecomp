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
  float fVar3;
  CDemonActor *pCVar4;
  CTrigger *actor_ptr;
  int iVar5;
  char *pcVar6;
  CBoundingBox3D *pCVar7;
  CVector3f *pCVar8;
  int iVar9;
  int iVar10;
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
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      iVar9 = 0;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_a0);
      if (0 < g_HeroCount) {
        iVar10 = 0;
        do {
          iVar5 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0
                            (this_ptr,*(CDemonActor **)((int)g_HeroActors + iVar10));
          if (iVar5 != 0) {
            iVar9 = *(int *)((int)g_HeroActors + iVar10);
            local_2c = (char *)0x1;
            goto LAB_005dfb52;
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar9 < g_HeroCount);
      }
    }
    break;
  case 1:
    if (*(int *)this_ptr->unk4 == 0) {
      pcVar6 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                         (g_CDemonMissionPtr,this_ptr->actor_name);
      *(char **)this_ptr->unk4 = pcVar6;
    }
    if (*(CDemonActor **)this_ptr->unk4 != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (*(CDemonActor **)this_ptr->unk4,"..\\core\\trigger.cpp",0xee);
      pCVar4 = *(CDemonActor **)this_ptr->unk4;
      if (((pCVar4->was_created == 1) &&
          (fVar1 = (this_ptr->base).location.position.x - (pCVar4->location).position.x,
          fVar3 = (this_ptr->base).location.position.y - (pCVar4->location).position.y,
          fVar2 = (this_ptr->base).location.position.z - (pCVar4->location).position.z,
          fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
          this_ptr->test_radius * this_ptr->test_radius)) &&
         (iVar9 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(this_ptr,pCVar4), iVar9 != 0)
         ) {
        iVar9 = *(int *)this_ptr->unk4;
        local_34 = 1;
LAB_005dfb52:
        this_ptr->unk3 = iVar9;
      }
    }
    break;
  case 2:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      pCVar7 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                         (&this_ptr->base,(CBoundingBox3D *)local_b8);
      fStack_80 = (pCVar7->min).x + (pCVar7->max).x;
      fStack_7c = (pCVar7->min).y + (pCVar7->max).y;
      CStack_68.x = fStack_80 * 0.5f;
      CStack_68.y = fStack_7c * 0.5f;
      fStack_78 = (pCVar7->min).z + (pCVar7->max).z;
      CStack_68.z = fStack_78 * 0.5f;
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,&CStack_5c,&CStack_68);
      if (aCStack_50 != pCVar8) {
        aCStack_50[0].x = pCVar8->x;
        aCStack_50[0].y = pCVar8->y;
        aCStack_50[0].z = pCVar8->z;
      }
      CStack_74.x = (int)ROUND(aCStack_50[0].x * 256.0f);
      CStack_74.y = (int)ROUND(aCStack_50[0].y * 256.0f);
      CStack_74.z = (int)ROUND(aCStack_50[0].z * 256.0f);
      iVar9 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                        (g_CDemonSetPtr,&CStack_74,(CVector3i *)0x0);
      local_b8[0] = (double)iVar9;
      if ((this_ptr->light_min * (float)65536 <= (float)iVar9) &&
         ((float)iVar9 <= this_ptr->light_max * (float)65536)) {
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
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      fVar1 = (this_ptr->trigger_size).x;
      fVar2 = (this_ptr->trigger_size).y;
      fVar3 = (this_ptr->trigger_size).z;
      local_1c = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      local_34 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
    }
    break;
  case 7:
    fVar1 = *(float *)(this_ptr->unk4 + 4) - delta_time;
    *(float *)(this_ptr->unk4 + 4) = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->unk4[4] = '\0';
      this_ptr->unk4[5] = '\0';
      this_ptr->unk4[6] = '\0';
      this_ptr->unk4[7] = '\0';
    }
    if (0.0 < this_ptr->hit_points) {
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
    break;
  case 8:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      local_28 = 0;
      for (iVar9 = 0; iVar9 < (int)g_CDemonSetPtr->actor_list_ptr; iVar9 = iVar9 + 1) {
        pCVar4 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_28);
        iVar10 = (*((pCVar4->vtable)._ub)->isActiveTarget)(pCVar4);
        if ((iVar10 != 0) &&
           (iVar10 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(this_ptr,pCVar4),
           iVar10 != 0)) {
          this_ptr->unk3 = (int)pCVar4;
          local_30 = (char *)0x1;
          break;
        }
        local_24 = local_24 + 4;
      }
    }
    break;
  case 9:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      local_30 = this_ptr->actor_name;
      local_2c = this_ptr->actor_type;
      local_24 = 0;
      local_20 = &(this_ptr->base).location;
      for (iVar9 = 0; iVar9 < (int)g_CDemonSetPtr->actor_list_ptr; iVar9 = iVar9 + 1) {
        actor_ptr = *(CTrigger **)(g_CDemonSetPtr->actor_list_data + local_24);
        fVar1 = (actor_ptr->base).location.position.x - (local_20->position).x;
        fVar3 = (actor_ptr->base).location.position.y - (local_20->position).y;
        fVar2 = (actor_ptr->base).location.position.z - (local_20->position).z;
        if ((((fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
               this_ptr->test_radius * this_ptr->test_radius) && (actor_ptr != this_ptr)) &&
            (iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(&actor_ptr->base,local_2c), iVar10 != 0)
            ) && ((iVar10 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                                      (local_30,(char *)actor_ptr,0), iVar10 != 0 &&
                  (iVar10 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0
                                      (this_ptr,&actor_ptr->base), iVar10 != 0)))) {
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
    core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
    this_ptr->unk3 = 0;
    return;
  }
  core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
  return;
}
