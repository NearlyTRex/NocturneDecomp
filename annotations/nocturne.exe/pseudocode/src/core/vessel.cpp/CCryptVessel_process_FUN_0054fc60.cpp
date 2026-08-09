// Name: core_vessel.cpp_CCryptVessel_process_FUN_0054fc60
// Address: 0054fc60
// Address Range: [[0054fc60, 0055020d]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_0054fc60(CCryptVessel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_0054fc60(CCryptVessel *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *pCVar2;
  CActorDestination *pCVar3;
  CHero *pCVar4;
  CCryptVessel *pCVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  UOrientationVector *pUVar13;
  float local_18;
  float local_14;
  
  if (this_ptr->visual_type == 1) {
    (this_ptr->flame).base.location.position.x = (this_ptr->base).location.position.x;
    (this_ptr->flame).base.location.position.y = (this_ptr->base).location.position.y;
    (this_ptr->flame).base.location.position.z = (this_ptr->base).location.position.z;
    (this_ptr->flame).base.location.area_id = (this_ptr->base).location.area_id;
    pUVar13 = &(this_ptr->flame).base.orient;
    pUVar1 = &(this_ptr->base).orient;
    (this_ptr->flame).base.location.position.y =
         (this_ptr->flame).base.location.position.y + 1.7f;
    if (pUVar13 != pUVar1) {
      (pUVar13->vec).x = (pUVar1->vec).x;
      (this_ptr->flame).base.orient.vec.y = (this_ptr->base).orient.vec.y;
      (this_ptr->flame).base.orient.vec.z = (this_ptr->base).orient.vec.z;
    }
    core_flame_cpp_CFlame_process_FUN_0048d0c0(&this_ptr->flame,delta_time);
  }
  else if (this_ptr->visual_type == 0) {
    this_ptr->spin_angle = delta_time * (float)3.1415926535000001 + this_ptr->spin_angle;
  }
  else {
    fVar6 = delta_time * (float)8 + this_ptr->water_anim_timer;
    this_ptr->water_anim_timer = fVar6;
    if ((float)16 <= fVar6) {
      this_ptr->water_anim_timer = this_ptr->water_anim_timer + -16.0f;
    }
  }
  if (this_ptr->carrier == (CDemonActor *)0x0) {
    if (this_ptr->init_frame != 0) {
      this_ptr->init_frame = 0;
      return;
    }
    pUVar1 = &(this_ptr->base).orient;
    iVar12 = this_ptr->state;
    pCVar2 = &(this_ptr->base).location;
    if (iVar12 == 1) {
      fVar6 = this_ptr->timer + delta_time;
      this_ptr->timer = fVar6;
      if (fVar6 <= 1.0) {
        return;
      }
      this_ptr->timer = 1.0;
      if (this_ptr->prey == (CCryptVessel *)0x0) {
        iVar12 = core_vessel_cpp_CCryptVessel_FUN_0054fc40(this_ptr->neutral);
        if (iVar12 != 0) {
          pCVar3 = this_ptr->start_loc;
          this_ptr->state = 2;
          (pCVar2->position).x = (pCVar3->base).location.position.x;
          (this_ptr->base).location.position.y = (pCVar3->base).location.position.y;
          (this_ptr->base).location.position.z = (pCVar3->base).location.position.z;
          (this_ptr->base).location.area_id = (pCVar3->base).location.area_id;
          pCVar3 = this_ptr->start_loc;
          pUVar13 = &(pCVar3->base).orient;
          if (pUVar1 != pUVar13) {
            (pUVar1->vec).x = (pUVar13->vec).x;
            (this_ptr->base).orient.vec.y = (pCVar3->base).orient.vec.y;
            (this_ptr->base).orient.vec.z = (pCVar3->base).orient.vec.z;
          }
        }
      }
      else {
        iVar12 = core_vessel_cpp_CCryptVessel_FUN_0054fc40(this_ptr->prey);
        if (((iVar12 == 0) ||
            (iVar12 = core_vessel_cpp_CCryptVessel_FUN_0054fc40(this_ptr->neutral), iVar12 == 0)) &&
           ((iVar12 = core_vessel_cpp_CCryptVessel_FUN_0054fc40(this_ptr->prey), iVar12 != 0 ||
            (iVar12 = core_vessel_cpp_CCryptVessel_FUN_0054fc40(this_ptr->neutral), iVar12 != 0))))
        {
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
          pUVar13 = &(pCVar3->base).orient;
          if (pUVar1 != pUVar13) {
            (pUVar1->vec).x = (pUVar13->vec).x;
            (this_ptr->base).orient.vec.y = (pCVar3->base).orient.vec.y;
            (this_ptr->base).orient.vec.z = (pCVar3->base).orient.vec.z;
          }
        }
      }
    }
    else if (iVar12 == 2) {
      fVar6 = this_ptr->timer - delta_time;
      this_ptr->timer = fVar6;
      if (0.0 <= fVar6) {
        return;
      }
      this_ptr->state = 0;
      this_ptr->timer = 0.0;
    }
    else if (iVar12 == 3) {
      if ((this_ptr->start_loc->triggered == 0) && (this_ptr->end_loc->triggered == 0)) {
        fVar6 = this_ptr->timer - delta_time;
        this_ptr->timer = fVar6;
        if (0.0 <= fVar6) {
          return;
        }
        core_fire_cpp_CFireEffect_createExplosion_FUN_0048c0d0
                  (g_CFireEffect_PTR_005b80f0,&pCVar2->position,8.0,1500.0,4.0);
        pCVar3 = this_ptr->start_loc;
        this_ptr->timer = 1.0;
        (pCVar2->position).x = (pCVar3->base).location.position.x;
        (this_ptr->base).location.position.y = (pCVar3->base).location.position.y;
        (this_ptr->base).location.position.z = (pCVar3->base).location.position.z;
        (this_ptr->base).location.area_id = (pCVar3->base).location.area_id;
        pCVar3 = this_ptr->start_loc;
        pUVar13 = &(pCVar3->base).orient;
        if (pUVar1 == pUVar13) {
          this_ptr->state = 2;
        }
        else {
          (pUVar1->vec).x = (pUVar13->vec).x;
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
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      pCVar2 = &(this_ptr->base).location;
      fVar6 = (pCVar4->base).base.location.position.x - (pCVar2->position).x;
      fVar7 = (pCVar4->base).base.location.position.y - (this_ptr->base).location.position.y;
      fVar8 = (pCVar4->base).base.location.position.z - (this_ptr->base).location.position.z;
      local_18 = 999.9;
      local_14 = 0.0;
      pCVar5 = this_ptr->prey;
      if (pCVar5 != (CCryptVessel *)0x0) {
        fVar9 = (pCVar2->position).x - (pCVar5->base).location.position.x;
        fVar10 = (this_ptr->base).location.position.y - (pCVar5->base).location.position.y;
        fVar11 = (this_ptr->base).location.position.z - (pCVar5->base).location.position.z;
        local_18 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
      }
      pCVar5 = this_ptr->neutral;
      if (pCVar5 != (CCryptVessel *)0x0) {
        fVar9 = (pCVar5->base).location.position.x - (this_ptr->base).location.position.x;
        fVar10 = (pCVar5->base).location.position.y - (this_ptr->base).location.position.y;
        fVar11 = (pCVar5->base).location.position.z - (this_ptr->base).location.position.z;
        local_14 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
      }
      if ((((local_18 < this_ptr->eat_distance) &&
           (this_ptr->eat_distance < SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7))) &&
          (this_ptr->eat_distance < local_14)) &&
         ((pCVar5 = this_ptr->prey, pCVar5->carrier == (CDemonActor *)0x0 && (pCVar5->state == 0))))
      {
        pCVar5->state = 1;
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
