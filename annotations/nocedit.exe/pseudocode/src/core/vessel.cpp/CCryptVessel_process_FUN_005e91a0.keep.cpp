// Name: core_vessel.cpp_CCryptVessel_process_FUN_005e91a0
// Address: 005e91a0
// MANUAL RECONSTRUCTION
// Address Range: [[005e91a0, 005e974d]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel *this_ptr,float delta_time)

{
  CHero *sim_target;
  CLocation *pCVar1;
  CActorDestination *pCVar6;
  CCryptVessel *pCVar7;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar12;
  UOrientationVector *pUVar13;
  int iVar16;
  UOrientationVector *pUVar17;
  UOrientationVector *pUVar18;
  float local_18;
  float local_14;
  float fVar10;
  float fVar11;
  float fVar8;
  float fVar9;
  float fVar6;
  float fVar7;
  CHero *pCVar4;
  CCryptVessel *pCVar5;
  CActorDestination *pCVar3;
  UOrientationVector *pUVar1;

#if NOCTURNE_AUTHENTIC_NETPLAY
  sim_target = g_HeroActors[g_LocalHeroIndex];
#else
  sim_target = nocturne_net_sim_target_for((CDemonActor *)this_ptr);
#endif
  if (this_ptr->visual_type == 1) {
    (this_ptr->flame).base.location = (this_ptr->base).location;
    pUVar17 = &(this_ptr->flame).base.orient;
    pUVar18 = &(this_ptr->base).orient;
    (this_ptr->flame).base.location.position.y =
         (this_ptr->flame).base.location.position.y + 1.7f;
    if (pUVar17 != pUVar18) {
      pUVar17->vec = pUVar18->vec;
    }
    core_flame_cpp_CFlame_process_FUN_004c9c00(&this_ptr->flame,delta_time);
  }
  else if (this_ptr->visual_type == 0) {
    this_ptr->spin_angle = delta_time * (float)3.1415926535000001 + this_ptr->spin_angle;
  }
  else {
    fVar12 = delta_time * (float)8 + this_ptr->water_anim_timer;
    this_ptr->water_anim_timer = fVar12;
    if ((float)16 <= fVar12) {
      this_ptr->water_anim_timer = this_ptr->water_anim_timer + -16.0f;
    }
  }
  if (this_ptr->carrier == (CDemonActor *)0x0) {
    if (this_ptr->init_frame != 0) {
      this_ptr->init_frame = 0;
      return;
    }
    pUVar1 = &(this_ptr->base).orient;
    iVar16 = this_ptr->state;
    pCVar1 = &(this_ptr->base).location;
    if (iVar16 == 1) {
      fVar6 = this_ptr->timer + delta_time;
      this_ptr->timer = fVar6;
      if (fVar6 <= 1.0) {
        return;
      }
      this_ptr->timer = 1.0;
      if (this_ptr->prey == (CCryptVessel *)0x0) {
        iVar12 = core_vessel_cpp_isStartLocTriggered_FUN_005e9180(this_ptr->neutral);
        if (iVar12 != 0) {
          pCVar3 = this_ptr->start_loc;
          this_ptr->state = 2;
          *pCVar1 = (pCVar3->base).location;
          pCVar6 = this_ptr->start_loc;
          pUVar13 = &(pCVar6->base).orient;
          if (pUVar1 != pUVar13) {
            pUVar1->vec = pUVar13->vec;
          }
        }
      }
      else {
        iVar16 = core_vessel_cpp_isStartLocTriggered_FUN_005e9180(this_ptr->prey);
        if (((iVar16 == 0) ||
            (iVar16 = core_vessel_cpp_isStartLocTriggered_FUN_005e9180(this_ptr->neutral),
            iVar16 == 0)) &&
           ((iVar16 = core_vessel_cpp_isStartLocTriggered_FUN_005e9180(this_ptr->prey), iVar16 != 0
            || (iVar16 = core_vessel_cpp_isStartLocTriggered_FUN_005e9180(this_ptr->neutral),
               iVar16 != 0)))) {
          (this_ptr->base).location.position.y = 9999.9;
          (this_ptr->base).location.position.z = 9999.9;
          (this_ptr->base).location.position.x = 9999.9;
        }
        else {
          pCVar6 = this_ptr->start_loc;
          this_ptr->state = 2;
          (this_ptr->base).location = (pCVar6->base).location;
          pCVar6 = this_ptr->start_loc;
          pUVar18 = &(this_ptr->base).orient;
          pUVar17 = &(pCVar6->base).orient;
          if (pUVar18 != pUVar17) {
            pUVar18->vec = pUVar17->vec;
          }
        }
      }
    }
    else if (iVar16 == 2) {
      fVar12 = this_ptr->timer - delta_time;
      this_ptr->timer = fVar12;
      if (0.0 <= fVar12) {
        return;
      }
      this_ptr->state = 0;
      this_ptr->timer = 0.0;
    }
    else if (iVar16 == 3) {
      if ((this_ptr->start_loc->triggered == 0) && (this_ptr->end_loc->triggered == 0)) {
        fVar12 = this_ptr->timer - delta_time;
        this_ptr->timer = fVar12;
        if (0.0 <= fVar12) {
          return;
        }
        core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10
                  (g_CFireEffectPtr,&pCVar1->position,8.0,1500.0,4.0);
        pCVar6 = this_ptr->start_loc;
        this_ptr->timer = 1.0;
        *pCVar1 = (pCVar6->base).location;
        pCVar6 = this_ptr->start_loc;
        pUVar18 = &(pCVar6->base).orient;
        if (pUVar1 != pUVar18) {
          pUVar1->vec = pUVar18->vec;
        }
        this_ptr->state = 2;
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
      pCVar4 = sim_target;
      pCVar1 = &(this_ptr->base).location;
      fVar12 = (pCVar4->base).base.location.position.x - (pCVar1->position).x;
      fVar7 = (pCVar4->base).base.location.position.y - (this_ptr->base).location.position.y;
      fVar8 = (pCVar4->base).base.location.position.z - (this_ptr->base).location.position.z;
      local_18 = 999.9;
      local_14 = 0.0;
      pCVar5 = this_ptr->prey;
      if (pCVar5 != (CCryptVessel *)0x0) {
        fVar9 = (pCVar1->position).x - (pCVar5->base).location.position.x;
        fVar10 = (this_ptr->base).location.position.y - (pCVar5->base).location.position.y;
        fVar11 = (this_ptr->base).location.position.z - (pCVar5->base).location.position.z;
        local_18 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
      }
      pCVar7 = this_ptr->neutral;
      if (pCVar7 != (CCryptVessel *)0x0) {
        fVar13 = (pCVar7->base).location.position.x - (this_ptr->base).location.position.x;
        fVar14 = (pCVar7->base).location.position.y - (this_ptr->base).location.position.y;
        fVar15 = (pCVar7->base).location.position.z - (this_ptr->base).location.position.z;
        local_14 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
      }
      if ((((local_18 < this_ptr->eat_distance) &&
           (this_ptr->eat_distance < SQRT(fVar8 * fVar8 + fVar12 * fVar12 + fVar7 * fVar7))) &&
          (this_ptr->eat_distance < local_14)) &&
         ((pCVar7 = this_ptr->prey, pCVar7->carrier == (CDemonActor *)0x0 && (pCVar7->state == 0))))
      {
        pCVar7->state = 1;
        this_ptr->prey->timer = 0.0;
        core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                  (g_CEventListPtr,this_ptr->prey->destroyed_event);
      }
      if (((this_ptr->prey != (CCryptVessel *)0x0) && (this_ptr->neutral != (CCryptVessel *)0x0)) &&
         ((this_ptr->end_loc->triggered != 0 &&
          ((this_ptr->prey->end_loc->triggered != 0 && (this_ptr->neutral->end_loc->triggered != 0))
          )))) {
        core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->win_event);
        this_ptr->prey->puzzle_complete = 1;
        this_ptr->neutral->puzzle_complete = 1;
        this_ptr->puzzle_complete = 1;
        return;
      }
    }
  }
  return;
}
