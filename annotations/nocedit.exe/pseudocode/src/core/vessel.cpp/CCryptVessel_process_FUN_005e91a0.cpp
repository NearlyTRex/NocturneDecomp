// Name: core_vessel.cpp_CCryptVessel_process_FUN_005e91a0
// Address: 005e91a0
// Address Range: [[005e91a0, 005e974d]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *pCVar2;
  UOrientationVector *pUVar3;
  CDemonActor *pCVar4;
  CHero *pCVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float local_18;
  float local_14;
  
  if (this_ptr->visual_type == 1) {
    (this_ptr->unk3).base.location.position.x = (this_ptr->base).location.position.x;
    (this_ptr->unk3).base.location.position.y = (this_ptr->base).location.position.y;
    (this_ptr->unk3).base.location.position.z = (this_ptr->base).location.position.z;
    (this_ptr->unk3).base.location.area_id = (this_ptr->base).location.area_id;
    pUVar3 = &(this_ptr->unk3).base.orient;
    pUVar1 = &(this_ptr->base).orient;
    (this_ptr->unk3).base.location.position.y =
         (this_ptr->unk3).base.location.position.y + 1.7f;
    if (pUVar3 != pUVar1) {
      (pUVar3->vec).x = (pUVar1->vec).x;
      (this_ptr->unk3).base.orient.vec.y = (this_ptr->base).orient.vec.y;
      (this_ptr->unk3).base.orient.vec.z = (this_ptr->base).orient.vec.z;
    }
    core_flame_cpp_CFlame_process_FUN_004c9c00(&this_ptr->unk3,delta_time);
  }
  else if (this_ptr->visual_type == 0) {
    this_ptr->unk4 = (int)(delta_time * (float)3.1415926535000001 + (float)this_ptr->unk4);
  }
  else {
    fVar6 = delta_time * (float)8 + this_ptr->unk7;
    this_ptr->unk7 = fVar6;
    if ((float)16 <= fVar6) {
      this_ptr->unk7 = this_ptr->unk7 + -16.0f;
    }
  }
  if (this_ptr->carrier == (CDemonActor *)0x0) {
    if (*(int *)this_ptr->unk2 != 0) {
      this_ptr->unk2[0] = '\0';
      this_ptr->unk2[1] = '\0';
      this_ptr->unk2[2] = '\0';
      this_ptr->unk2[3] = '\0';
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
      if (this_ptr->prey == (CDemonActor *)0x0) {
        iVar12 = core_vessel_cpp_FUN_005e9180();
        if (iVar12 != 0) {
          pCVar4 = this_ptr->start_loc;
          this_ptr->state = 2;
          (pCVar2->position).x = (pCVar4->location).position.x;
          (this_ptr->base).location.position.y = (pCVar4->location).position.y;
          (this_ptr->base).location.position.z = (pCVar4->location).position.z;
          (this_ptr->base).location.area_id = (pCVar4->location).area_id;
          pCVar4 = this_ptr->start_loc;
          if (pUVar1 != &pCVar4->orient) {
            (pUVar1->vec).x = (pCVar4->orient).vec.x;
            (this_ptr->base).orient.vec.y = (pCVar4->orient).vec.y;
            (this_ptr->base).orient.vec.z = (pCVar4->orient).vec.z;
          }
        }
      }
      else {
        iVar12 = core_vessel_cpp_FUN_005e9180();
        if (((iVar12 == 0) || (iVar12 = core_vessel_cpp_FUN_005e9180(), iVar12 == 0)) &&
           ((iVar12 = core_vessel_cpp_FUN_005e9180(), iVar12 != 0 ||
            (iVar12 = core_vessel_cpp_FUN_005e9180(), iVar12 != 0)))) {
          (this_ptr->base).location.position.y = 9999.9;
          (this_ptr->base).location.position.z = 9999.9;
          (this_ptr->base).location.position.x = 9999.9;
        }
        else {
          pCVar4 = this_ptr->start_loc;
          this_ptr->state = 2;
          (this_ptr->base).location.position.x = (pCVar4->location).position.x;
          (this_ptr->base).location.position.y = (pCVar4->location).position.y;
          (this_ptr->base).location.position.z = (pCVar4->location).position.z;
          (this_ptr->base).location.area_id = (pCVar4->location).area_id;
          pCVar4 = this_ptr->start_loc;
          pUVar1 = &(this_ptr->base).orient;
          if (pUVar1 != &pCVar4->orient) {
            (pUVar1->vec).x = (pCVar4->orient).vec.x;
            (this_ptr->base).orient.vec.y = (pCVar4->orient).vec.y;
            (this_ptr->base).orient.vec.z = (pCVar4->orient).vec.z;
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
      if ((this_ptr->start_loc[1].location.area_id == 0) &&
         (this_ptr->end_loc[1].location.area_id == 0)) {
        fVar6 = this_ptr->timer - delta_time;
        this_ptr->timer = fVar6;
        if (0.0 <= fVar6) {
          return;
        }
        core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10(g_CFireEffectPtr,&pCVar2->position);
        pCVar4 = this_ptr->start_loc;
        this_ptr->timer = 1.0;
        (pCVar2->position).x = (pCVar4->location).position.x;
        (this_ptr->base).location.position.y = (pCVar4->location).position.y;
        (this_ptr->base).location.position.z = (pCVar4->location).position.z;
        (this_ptr->base).location.area_id = (pCVar4->location).area_id;
        pCVar4 = this_ptr->start_loc;
        if (pUVar1 == &pCVar4->orient) {
          this_ptr->state = 2;
        }
        else {
          (pUVar1->vec).x = (pCVar4->orient).vec.x;
          (this_ptr->base).orient.vec.y = (pCVar4->orient).vec.y;
          (this_ptr->base).orient.vec.z = (pCVar4->orient).vec.z;
          this_ptr->state = 2;
        }
      }
      else {
        this_ptr->timer = 0.0;
        this_ptr->state = 0;
      }
    }
    if ((this_ptr->start_loc[1].location.area_id == 0) &&
       (this_ptr->end_loc[1].location.area_id == 0)) {
      if (this_ptr->state == 0) {
        this_ptr->timer = 3.0;
        this_ptr->state = 3;
        return;
      }
    }
    else {
      pCVar5 = g_HeroActors[g_LocalHeroIndex];
      pCVar2 = &(this_ptr->base).location;
      fVar6 = (pCVar5->base).base.location.position.x - (pCVar2->position).x;
      fVar7 = (pCVar5->base).base.location.position.y - (this_ptr->base).location.position.y;
      fVar8 = (pCVar5->base).base.location.position.z - (this_ptr->base).location.position.z;
      local_18 = 999.9;
      local_14 = 0.0;
      pCVar4 = this_ptr->prey;
      if (pCVar4 != (CDemonActor *)0x0) {
        fVar9 = (pCVar2->position).x - (pCVar4->location).position.x;
        fVar10 = (this_ptr->base).location.position.y - (pCVar4->location).position.y;
        fVar11 = (this_ptr->base).location.position.z - (pCVar4->location).position.z;
        local_18 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
      }
      pCVar4 = this_ptr->neutral;
      if (pCVar4 != (CDemonActor *)0x0) {
        fVar9 = (pCVar4->location).position.x - (this_ptr->base).location.position.x;
        fVar10 = (pCVar4->location).position.y - (this_ptr->base).location.position.y;
        fVar11 = (pCVar4->location).position.z - (this_ptr->base).location.position.z;
        local_14 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
      }
      if ((((local_18 < this_ptr->eat_distance) &&
           (this_ptr->eat_distance < SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7))) &&
          (this_ptr->eat_distance < local_14)) &&
         ((pCVar4 = this_ptr->prey, pCVar4[2].location.position.y == 0.0 && (pCVar4[2].scale.x == 0)
          ))) {
        pCVar4[2].scale.x = 1;
        this_ptr->prey[2].scale.y = 0;
        core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                  (g_CEventListPtr,(char *)&this_ptr->prey[2].orient);
      }
      if (((this_ptr->prey != (CDemonActor *)0x0) && (this_ptr->neutral != (CDemonActor *)0x0)) &&
         ((this_ptr->end_loc[1].location.area_id != 0 &&
          ((*(int *)(this_ptr->prey[2].is_transparent + 0x184) != 0 &&
           (*(int *)(this_ptr->neutral[2].is_transparent + 0x184) != 0)))))) {
        core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->win_event);
        this_ptr->prey[5].previous_transform_state.orientation.y = 1.4013e-45;
        this_ptr->neutral[5].previous_transform_state.orientation.y = 1.4013e-45;
        this_ptr->unk8 = 1;
        return;
      }
    }
  }
  return;
}
