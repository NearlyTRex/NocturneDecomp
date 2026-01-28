// Name: core_trigger.cpp_CTrigger_process_FUN_005dfac0
// Address: 005dfac0
// Address Range: [[005dfac0, 005e00a3]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_process_FUN_005dfac0(CTrigger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_process_FUN_005dfac0(CTrigger *this_ptr,float delta_time)

{
  CTrigger *actor_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  char *pcVar5;
  CBoundingBox3D *pCVar6;
  CVector3f *pCVar7;
  int iVar8;
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
  
  uVar4 = *(uint *)(this_ptr->unk + 0x1c);
  local_34 = 0;
  this_ptr->unk[0x1a4] = '\0';
  this_ptr->unk[0x1a5] = '\0';
  this_ptr->unk[0x1a6] = '\0';
  this_ptr->unk[0x1a7] = '\0';
  switch(uVar4) {
  case 0:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      iVar9 = 0;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_a0);
      if (0 < g_HeroCount) {
        iVar10 = 0;
        do {
          iVar8 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0();
          if (iVar8 != 0) {
            uVar4 = *(uint *)((int)g_HeroActors + iVar10);
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
    if (*(int *)(this_ptr->unk + 0x210) == 0) {
      pcVar5 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      *(char **)(this_ptr->unk + 0x210) = pcVar5;
    }
    if (*(CDemonActor **)(this_ptr->unk + 0x210) != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (*(CDemonActor **)(this_ptr->unk + 0x210),"..\\core\\trigger.cpp",0xee);
      iVar9 = *(int *)(this_ptr->unk + 0x210);
      if (((*(int *)(iVar9 + 0x70) == 1) &&
          (fVar1 = (this_ptr->base).location.position.x - *(float *)(iVar9 + 0x20),
          fVar3 = (this_ptr->base).location.position.y - *(float *)(iVar9 + 0x24),
          fVar2 = (this_ptr->base).location.position.z - *(float *)(iVar9 + 0x28),
          fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
          *(float *)this_ptr->unk * *(float *)this_ptr->unk)) &&
         (iVar9 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(), iVar9 != 0)) {
        uVar4 = *(uint *)(this_ptr->unk + 0x210);
        local_34 = 1;
LAB_005dfb52:
        *(uint *)(this_ptr->unk + 0x1a4) = uVar4;
      }
    }
    break;
  case 2:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
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
      iVar9 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                        (g_CDemonSetPtr,&CStack_74,(CVector3i *)0x0);
      local_b8[0] = (double)iVar9;
      if ((*(float *)(this_ptr->unk + 0xc4) * (float)65536 <= (float)iVar9) &&
         ((float)iVar9 <= *(float *)(this_ptr->unk + 200) * (float)65536)) {
        local_2c = (char *)0x1;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
    local_34 = *(int *)(this_ptr->unk + 0x198);
    this_ptr->unk[0x198] = '\0';
    this_ptr->unk[0x199] = '\0';
    this_ptr->unk[0x19a] = '\0';
    this_ptr->unk[0x19b] = '\0';
    break;
  case 6:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      local_1c = *(float *)(this_ptr->unk + 0x10) * *(float *)(this_ptr->unk + 0x10) +
                 *(float *)(this_ptr->unk + 0xc) * *(float *)(this_ptr->unk + 0xc) +
                 *(float *)(this_ptr->unk + 8) * *(float *)(this_ptr->unk + 8);
      local_34 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
    }
    break;
  case 7:
    fVar1 = *(float *)(this_ptr->unk + 0x214) - delta_time;
    *(float *)(this_ptr->unk + 0x214) = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->unk[0x214] = '\0';
      this_ptr->unk[0x215] = '\0';
      this_ptr->unk[0x216] = '\0';
      this_ptr->unk[0x217] = '\0';
    }
    if (0.0 < *(float *)(this_ptr->unk + 0x1a0)) {
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
        iVar10 = *(int *)(g_CDemonSetPtr->actor_list_data + local_28);
        iVar8 = (**(code **)(*(int *)(iVar10 + 0x154) + 0x54))();
        if ((iVar8 != 0) &&
           (iVar8 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(), iVar8 != 0)) {
          *(int *)(this_ptr->unk + 0x1a4) = iVar10;
          local_34 = 1;
          break;
        }
        local_28 = local_28 + 4;
      }
    }
    break;
  case 9:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      local_30 = this_ptr->unk + 0x20;
      local_2c = this_ptr->unk + 0x70;
      local_24 = 0;
      local_20 = &(this_ptr->base).location;
      for (iVar9 = 0; iVar9 < (int)g_CDemonSetPtr->actor_list_ptr; iVar9 = iVar9 + 1) {
        actor_ptr = *(CTrigger **)(g_CDemonSetPtr->actor_list_data + local_24);
        fVar1 = (actor_ptr->base).location.position.x - (local_20->position).x;
        fVar3 = (actor_ptr->base).location.position.y - (local_20->position).y;
        fVar2 = (actor_ptr->base).location.position.z - (local_20->position).z;
        if ((((fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
               *(float *)this_ptr->unk * *(float *)this_ptr->unk) && (actor_ptr != this_ptr)) &&
            (iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(&actor_ptr->base,local_2c), iVar10 != 0)
            ) && ((iVar10 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                                      (local_30,(char *)actor_ptr,0), iVar10 != 0 &&
                  (iVar10 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(), iVar10 != 0))))
        {
          *(CTrigger **)(this_ptr->unk + 0x1a4) = actor_ptr;
          local_34 = 1;
          break;
        }
        local_24 = local_24 + 4;
      }
    }
  }
  switch(*(uint *)(this_ptr->unk + 4)) {
  case 0:
  case 1:
    if (local_34 == 0) {
      if (*(int *)(this_ptr->unk + 4) == 0) {
        this_ptr->unk[0x14] = '\0';
        this_ptr->unk[0x15] = '\0';
        this_ptr->unk[0x16] = '\0';
        this_ptr->unk[0x17] = '\0';
      }
      goto switchD_005dfb63_default;
    }
    break;
  case 2:
    if ((*(int *)(this_ptr->unk + 0x194) != 0) || (local_34 == 0)) goto LAB_005e0053;
    break;
  case 3:
    if ((*(int *)(this_ptr->unk + 0x194) == 1) && (local_34 == 0)) {
      this_ptr->unk[0x14] = '\x01';
      this_ptr->unk[0x15] = '\0';
      this_ptr->unk[0x16] = '\0';
      this_ptr->unk[0x17] = '\0';
      goto switchD_005dfb63_default;
    }
LAB_005e0053:
    this_ptr->unk[0x14] = '\0';
    this_ptr->unk[0x15] = '\0';
    this_ptr->unk[0x16] = '\0';
    this_ptr->unk[0x17] = '\0';
  default:
    goto switchD_005dfb63_default;
  }
  this_ptr->unk[0x14] = '\x01';
  this_ptr->unk[0x15] = '\0';
  this_ptr->unk[0x16] = '\0';
  this_ptr->unk[0x17] = '\0';
switchD_005dfb63_default:
  *(int *)(this_ptr->unk + 0x194) = local_34;
  if (*(int *)(this_ptr->unk + 0x14) == 0) {
    core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
    this_ptr->unk[0x1a4] = '\0';
    this_ptr->unk[0x1a5] = '\0';
    this_ptr->unk[0x1a6] = '\0';
    this_ptr->unk[0x1a7] = '\0';
    return;
  }
  core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
  return;
}
