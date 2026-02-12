// Name: core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050
// Address: 0042e050
// Address Range: [[0042e050, 0042e1f4] [0042e20c, 0042e36d]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050 (CCharacter *this_ptr,float delta_time,char *pattern)

#include "nocturne.h"

int __cdecl
core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050
          (CCharacter *this_ptr,float delta_time,char *pattern)

{
  char *target_string;
  float fVar1;
  int iVar2;
  CPathMap *path_map;
  int iVar3;
  int iVar4;
  CVector3f *direction;
  float fVar5;
  float fVar6;
  int local_1f80 [2005];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  float local_14;
  
  if ((pattern == (char *)0x0) || (*pattern == '\0')) {
    this_ptr->unk9 = 0;
    this_ptr->unk10 = 0;
    this_ptr->unk8 = 0;
    return 0;
  }
  fVar5 = (float)this_ptr->unk10 - delta_time;
  this_ptr->unk10 = (int)fVar5;
  if (0.0 < fVar5) goto LAB_0042e20c;
  iVar4 = this_ptr->unk8;
  if ((iVar4 == 0) ||
     (fVar5 = *(float *)(iVar4 + 0x20) - (this_ptr->base).location.position.x,
     fVar1 = *(float *)(iVar4 + 0x24) - (this_ptr->base).location.position.y,
     fVar6 = *(float *)(iVar4 + 0x28) - (this_ptr->base).location.position.z,
     (float)4 <= SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar5 * fVar5))) {
    if (this_ptr->unk9 == 0) goto LAB_0042e0e4;
    if (this_ptr->unk8 == 0) goto LAB_0042e0ee;
    iVar4 = core_waypoint_cpp_CWayPoint_FUN_005ec320((CWayPoint *)&(this_ptr->base).location);
    this_ptr->unk9 = iVar4;
  }
  else {
    this_ptr->unk9 = 0;
LAB_0042e0e4:
    this_ptr->unk8 = 0;
LAB_0042e0ee:
    this_ptr->unk9 = 0;
    local_28 = 0;
    local_1c = &(this_ptr->base).location;
    local_24 = 0;
    iVar4 = 0;
    for (local_20 = 0; local_20 < *(int *)(g_CDemonSetPtr->unk4 + 0x5dc4); local_20 = local_20 + 1)
    {
      target_string = *(char **)(g_CDemonSetPtr->unk4 + local_24 + 0x5dc8);
      iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20(pattern,target_string,0);
      iVar3 = iVar4;
      if ((iVar2 != 0) &&
         (fVar5 = (local_1c->position).x - *(float *)(target_string + 0x20),
         fVar1 = (local_1c->position).y - *(float *)(target_string + 0x24),
         fVar6 = (local_1c->position).z - *(float *)(target_string + 0x28),
         20.0f <= SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar5 * fVar5))) {
        iVar3 = iVar4 + 4;
        local_28 = local_28 + 1;
        *(char **)((int)local_1f80 + iVar4) = target_string;
      }
      local_24 = local_24 + 4;
      iVar4 = iVar3;
    }
    if (0 < local_28) {
      local_2c = local_28 + -1;
      iVar4 = 0;
      do {
        while( true ) {
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_2c);
          if (local_1f80[iVar3] != 0) break;
          iVar4 = iVar4 + 1;
          if (9 < iVar4) goto LAB_0042e1d9;
        }
        iVar2 = core_waypoint_cpp_CWayPoint_FUN_005ec320((CWayPoint *)&(this_ptr->base).location);
        this_ptr->unk9 = iVar2;
        if (iVar2 != 0) {
          this_ptr->unk8 = local_1f80[iVar3];
          break;
        }
        local_1f80[iVar3] = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 10);
    }
  }
LAB_0042e1d9:
  if (this_ptr->unk9 == 0) {
    fVar6 = 10.0;
    fVar5 = 4.0;
  }
  else {
    fVar6 = 2.0;
    fVar5 = 1.0;
  }
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar5,fVar6);
  this_ptr->unk10 = (int)local_14;
LAB_0042e20c:
  if (this_ptr->unk9 == 0) {
    return 0;
  }
  fVar6 = 0.0;
  fVar5 = 0.0;
  direction = &g_ZeroVector;
  path_map = (CPathMap *)(**(code **)(*(int *)(this_ptr->unk9 + 0x154) + 0xbc))();
  iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                    (this_ptr,(CVector3f *)(this_ptr->unk9 + 0x20),path_map,direction,fVar5,fVar6);
  if (iVar4 == 0) {
    return 1;
  }
  if (iVar4 < 0) {
    this_ptr->unk9 = 0;
    return 0;
  }
  return 0;
}
