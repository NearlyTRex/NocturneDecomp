// Name: core_vessel.cpp_CCryptVessel_process_FUN_0054fc60
// Address: 0054fc60
// Address Range: [[0054fc60, 0055020d]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_0054fc60(CCryptVessel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_0054fc60(CCryptVessel *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *pCVar2;
  CActorDestination *pCVar3;
  CCryptVessel *pCVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  UOrientationVector *pUVar12;
  float local_18;
  float local_14;
  
  if (this_ptr->visual_type == 1) {
    (this_ptr->flame).base.location.position.x = (this_ptr->base).location.position.x;
    (this_ptr->flame).base.location.position.y = (this_ptr->base).location.position.y;
    (this_ptr->flame).base.location.position.z = (this_ptr->base).location.position.z;
    (this_ptr->flame).base.location.area_id = (this_ptr->base).location.area_id;
    pUVar12 = &(this_ptr->flame).base.orient;
    pUVar1 = &(this_ptr->base).orient;
    (this_ptr->flame).base.location.position.y =
         (this_ptr->flame).base.location.position.y + 1.7f;
    if (pUVar12 != pUVar1) {
      (pUVar12->vec).x = (pUVar1->vec).x;
      (this_ptr->flame).base.orient.vec.y = (this_ptr->base).orient.vec.y;
      (this_ptr->flame).base.orient.vec.z = (this_ptr->base).orient.vec.z;
    }
    core_flame_cpp_CFlame_process_FUN_0048d0c0(&this_ptr->flame,delta_time);
  }
  else if (this_ptr->visual_type == 0) {
    this_ptr->spin_angle = delta_time * (float)3.1415926535000001 + this_ptr->spin_angle;
  }
  else {
    fVar5 = delta_time * (float)8 + this_ptr->water_anim_timer;
    this_ptr->water_anim_timer = fVar5;
    if ((float)16 <= fVar5) {
      this_ptr->water_anim_timer = this_ptr->water_anim_timer + -16.0f;
    }
  }
  if (this_ptr->carrier == (CDemonActor *)0x0) {
    if (this_ptr->init_frame != 0) {
      this_ptr->init_frame = 0;
      return;
    }
    pUVar1 = &(this_ptr->base).orient;
    iVar11 = this_ptr->state;
    pCVar2 = &(this_ptr->base).location;
    if (iVar11 == 1) {
      fVar5 = this_ptr->timer + delta_time;
      this_ptr->timer = fVar5;
      if (fVar5 <= 1.0) {
        return;
      }
      this_ptr->timer = 1.0;
      if (this_ptr->prey == (CCryptVessel *)0x0) {
        iVar11 = core_vessel_cpp_FUN_0054fc40(this_ptr->neutral);
        if (iVar11 != 0) {
          pCVar3 = this_ptr->start_loc;
          this_ptr->state = 2;
          (pCVar2->position).x = (pCVar3->base).location.position.x;
          (this_ptr->base).location.position.y = (pCVar3->base).location.position.y;
          (this_ptr->base).location.position.z = (pCVar3->base).location.position.z;
          (this_ptr->base).location.area_id = (pCVar3->base).location.area_id;
          pCVar3 = this_ptr->start_loc;
          pUVar12 = &(pCVar3->base).orient;
          if (pUVar1 != pUVar12) {
            (pUVar1->vec).x = (pUVar12->vec).x;
            (this_ptr->base).orient.vec.y = (pCVar3->base).orient.vec.y;
            (this_ptr->base).orient.vec.z = (pCVar3->base).orient.vec.z;
          }
        }
      }
      else {
        iVar11 = core_vessel_cpp_FUN_0054fc40(this_ptr->prey);
        if (((iVar11 == 0) ||
            (iVar11 = core_vessel_cpp_FUN_0054fc40(this_ptr->neutral), iVar11 == 0)) &&
           ((iVar11 = core_vessel_cpp_FUN_0054fc40(this_ptr->prey), iVar11 != 0 ||
            (iVar11 = core_vessel_cpp_FUN_0054fc40(this_ptr->neutral), iVar11 != 0)))) {
          (this_ptr->base).location.position.y = 9999.9;
          (this_ptr->base).location.position.z = 9999.9;
          (this_ptr->base).location.position.x = 9999.9;
        }
        else {
          pCVar3 = this_ptr->start_loc;
          this_ptr->state = 2;
          (this_ptr->base).location.position.x = (pCVar3->base).location.position.x;
          (this_ptr->base).location.position.y = (pCVar3->base).location.position.y;
          (this_ptr->base).location.position.z = (pCVar3->base).location.position.z;
          (this_ptr->base).location.area_id = (pCVar3->base).location.area_id;
          pCVar3 = this_ptr->start_loc;
          pUVar1 = &(this_ptr->base).orient;
          pUVar12 = &(pCVar3->base).orient;
          if (pUVar1 != pUVar12) {
            (pUVar1->vec).x = (pUVar12->vec).x;
            (this_ptr->base).orient.vec.y = (pCVar3->base).orient.vec.y;
            (this_ptr->base).orient.vec.z = (pCVar3->base).orient.vec.z;
          }
        }
      }
    }
    else if (iVar11 == 2) {
      fVar5 = this_ptr->timer - delta_time;
      this_ptr->timer = fVar5;
      if (0.0 <= fVar5) {
        return;
      }
      this_ptr->state = 0;
      this_ptr->timer = 0.0;
    }
    else if (iVar11 == 3) {
      if ((this_ptr->start_loc->triggered == 0) && (this_ptr->end_loc->triggered == 0)) {
        fVar5 = this_ptr->timer - delta_time;
        this_ptr->timer = fVar5;
        if (0.0 <= fVar5) {
          return;
        }
        core_fire_cpp_FUN_0048c0d0(g_CFireEffect_PTR_005b80f0,&pCVar2->position,8.0,1500.0,4.0);
        pCVar3 = this_ptr->start_loc;
        this_ptr->timer = 1.0;
        (pCVar2->position).x = (pCVar3->base).location.position.x;
        (this_ptr->base).location.position.y = (pCVar3->base).location.position.y;
        (this_ptr->base).location.position.z = (pCVar3->base).location.position.z;
        (this_ptr->base).location.area_id = (pCVar3->base).location.area_id;
        pCVar3 = this_ptr->start_loc;
        pUVar12 = &(pCVar3->base).orient;
        if (pUVar1 == pUVar12) {
          this_ptr->state = 2;
        }
        else {
          (pUVar1->vec).x = (pUVar12->vec).x;
          (this_ptr->base).orient.vec.y = (pCVar3->base).orient.vec.y;
          (this_ptr->base).orient.vec.z = (pCVar3->base).orient.vec.z;
          this_ptr->state = 2;
        }
      }
      else {
        this_ptr->timer = 0.0;
        this_ptr->state = 0;
      }
    }
    if ((this_ptr->start_loc->triggered == 0) && (this_ptr->end_loc->triggered == 0)) {
      if (this_ptr->state == 0) {
        this_ptr->timer = 3.0;
        this_ptr->state = 3;
        return;
      }
    }
    else {
      iVar11 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      pCVar2 = &(this_ptr->base).location;
      fVar5 = *(float *)(iVar11 + 0x20) - (pCVar2->position).x;
      fVar6 = *(float *)(iVar11 + 0x24) - (this_ptr->base).location.position.y;
      fVar7 = *(float *)(iVar11 + 0x28) - (this_ptr->base).location.position.z;
      local_18 = 999.9;
      local_14 = 0.0;
      pCVar4 = this_ptr->prey;
      if (pCVar4 != (CCryptVessel *)0x0) {
        fVar8 = (pCVar2->position).x - (pCVar4->base).location.position.x;
        fVar9 = (this_ptr->base).location.position.y - (pCVar4->base).location.position.y;
        fVar10 = (this_ptr->base).location.position.z - (pCVar4->base).location.position.z;
        local_18 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
      }
      pCVar4 = this_ptr->neutral;
      if (pCVar4 != (CCryptVessel *)0x0) {
        fVar8 = (pCVar4->base).location.position.x - (this_ptr->base).location.position.x;
        fVar9 = (pCVar4->base).location.position.y - (this_ptr->base).location.position.y;
        fVar10 = (pCVar4->base).location.position.z - (this_ptr->base).location.position.z;
        local_14 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
      }
      if ((((local_18 < this_ptr->eat_distance) &&
           (this_ptr->eat_distance < SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6))) &&
          (this_ptr->eat_distance < local_14)) &&
         ((pCVar4 = this_ptr->prey, pCVar4->carrier == (CDemonActor *)0x0 && (pCVar4->state == 0))))
      {
        pCVar4->state = 1;
        this_ptr->prey->timer = 0.0;
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                  (0x01C03A10,this_ptr->prey->destroyed_event);
      }
      if (((this_ptr->prey != (CCryptVessel *)0x0) && (this_ptr->neutral != (CCryptVessel *)0x0)) &&
         ((this_ptr->end_loc->triggered != 0 &&
          ((this_ptr->prey->end_loc->triggered != 0 && (this_ptr->neutral->end_loc->triggered != 0))
          )))) {
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->win_event);
        this_ptr->prey->puzzle_complete = 1;
        this_ptr->neutral->puzzle_complete = 1;
        this_ptr->puzzle_complete = 1;
        return;
      }
    }
  }
  return;
}
