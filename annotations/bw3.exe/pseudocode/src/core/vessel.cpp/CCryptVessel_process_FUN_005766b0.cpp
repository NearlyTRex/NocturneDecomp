// Name: core_vessel.cpp_CCryptVessel_process_FUN_005766b0
// Address: 005766b0
// Address Range: [[005766b0, 00576c8d]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_005766b0(CCryptVessel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_005766b0(CCryptVessel *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *pCVar2;
  CActorDestination *pCVar3;
  CCryptVessel *pCVar4;
  float fVar5;
  int iVar6;
  UOrientationVector *pUVar7;
  byte bVar8;
  float afStackY_1058 [1012];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  if (this_ptr->visual_type == CRYPT_VESSEL_FIRE) {
    (this_ptr->flame).base.location.position.x = (this_ptr->base).location.position.x;
    (this_ptr->flame).base.location.position.y = (this_ptr->base).location.position.y;
    (this_ptr->flame).base.location.position.z = (this_ptr->base).location.position.z;
    (this_ptr->flame).base.location.area_id = (this_ptr->base).location.area_id;
    pUVar7 = &(this_ptr->flame).base.orient;
    pUVar1 = &(this_ptr->base).orient;
    (this_ptr->flame).base.location.position.y =
         (this_ptr->flame).base.location.position.y + _DAT_005d70bf;
    if (pUVar7 != pUVar1) {
      (pUVar7->vec).x = (pUVar1->vec).x;
      (this_ptr->flame).base.orient.vec.y = (this_ptr->base).orient.vec.y;
      (this_ptr->flame).base.orient.vec.z = (this_ptr->base).orient.vec.z;
    }
    core_flame_cpp_CFlame_process_FUN_004a5b10(&this_ptr->flame,delta_time);
  }
  else if (this_ptr->visual_type == CRYPT_VESSEL_AIR) {
    this_ptr->spin_angle = delta_time * _DAT_005d70bb + this_ptr->spin_angle;
  }
  else {
    fVar5 = delta_time * (float)_DAT_005d70a7 + this_ptr->water_anim_timer;
    this_ptr->water_anim_timer = fVar5;
    if ((float)_DAT_005d70af <= fVar5) {
      this_ptr->water_anim_timer = this_ptr->water_anim_timer + _DAT_005d70b7;
    }
  }
  if (this_ptr->carrier == (CDemonActor *)0x0) {
    if (this_ptr->init_frame != 0) {
      this_ptr->init_frame = 0;
      return;
    }
    pUVar1 = &(this_ptr->base).orient;
    iVar6 = this_ptr->state;
    pCVar2 = &(this_ptr->base).location;
    if (iVar6 == 1) {
      fVar5 = this_ptr->timer + delta_time;
      this_ptr->timer = fVar5;
      if (fVar5 <= 1.0) {
        return;
      }
      this_ptr->timer = 1.0;
      if (this_ptr->prey == (CCryptVessel *)0x0) {
        iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00576690(this_ptr->neutral);
        if (iVar6 != 0) {
          pCVar3 = this_ptr->start_loc;
          this_ptr->state = 2;
          (pCVar2->position).x = (pCVar3->base).location.position.x;
          (this_ptr->base).location.position.y = (pCVar3->base).location.position.y;
          (this_ptr->base).location.position.z = (pCVar3->base).location.position.z;
          (this_ptr->base).location.area_id = (pCVar3->base).location.area_id;
          pCVar3 = this_ptr->start_loc;
          pUVar7 = &(pCVar3->base).orient;
          if (pUVar1 != pUVar7) {
            (pUVar1->vec).x = (pUVar7->vec).x;
            (this_ptr->base).orient.vec.y = (pCVar3->base).orient.vec.y;
            (this_ptr->base).orient.vec.z = (pCVar3->base).orient.vec.z;
          }
        }
      }
      else {
        iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00576690(this_ptr->prey);
        if (((iVar6 == 0) ||
            (iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00576690(this_ptr->neutral), iVar6 == 0
            )) && ((iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00576690(this_ptr->prey),
                   iVar6 != 0 ||
                   (iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00576690(this_ptr->neutral),
                   iVar6 != 0)))) {
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
          pUVar7 = &(pCVar3->base).orient;
          if (pUVar1 != pUVar7) {
            (pUVar1->vec).x = (pUVar7->vec).x;
            (this_ptr->base).orient.vec.y = (pCVar3->base).orient.vec.y;
            (this_ptr->base).orient.vec.z = (pCVar3->base).orient.vec.z;
          }
        }
      }
    }
    else if (iVar6 == 2) {
      fVar5 = this_ptr->timer - delta_time;
      this_ptr->timer = fVar5;
      if (0.0 <= fVar5) {
        return;
      }
      this_ptr->state = 0;
      this_ptr->timer = 0.0;
    }
    else if (iVar6 == 3) {
      if ((this_ptr->start_loc->triggered == 0) && (this_ptr->end_loc->triggered == 0)) {
        fVar5 = this_ptr->timer - delta_time;
        this_ptr->timer = fVar5;
        if (0.0 <= fVar5) {
          return;
        }
        core_fire_cpp_FUN_004a36e0(0x01C73654,pCVar2,0x41000000,0x44bb8000,0x40800000,0);
        pCVar3 = this_ptr->start_loc;
        this_ptr->timer = 1.0;
        (pCVar2->position).x = (pCVar3->base).location.position.x;
        (this_ptr->base).location.position.y = (pCVar3->base).location.position.y;
        (this_ptr->base).location.position.z = (pCVar3->base).location.position.z;
        (this_ptr->base).location.area_id = (pCVar3->base).location.area_id;
        pCVar3 = this_ptr->start_loc;
        pUVar7 = &(pCVar3->base).orient;
        if (pUVar1 == pUVar7) {
          this_ptr->state = 2;
        }
        else {
          (pUVar1->vec).x = (pUVar7->vec).x;
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
      fStack_18 = 999.9;
      iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_20 = 0.0;
      pCVar2 = &(this_ptr->base).location;
      fStack_4c = *(float *)(iVar6 + 0x20) - (pCVar2->position).x;
      fStack_48 = *(float *)(iVar6 + 0x24) - (this_ptr->base).location.position.y;
      fStack_44 = *(float *)(iVar6 + 0x28) - (this_ptr->base).location.position.z;
      fStack_40 = fStack_4c;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar8 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      pCVar4 = this_ptr->prey;
      fStack_1c = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
      if (pCVar4 != (CCryptVessel *)0x0) {
        fStack_34 = (pCVar2->position).x - (pCVar4->base).location.position.x;
        fStack_30 = (this_ptr->base).location.position.y - (pCVar4->base).location.position.y;
        fStack_2c = (this_ptr->base).location.position.z - (pCVar4->base).location.position.z;
        fStack_64 = fStack_34;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        fStack_18 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
      }
      pCVar4 = this_ptr->neutral;
      if (pCVar4 != (CCryptVessel *)0x0) {
        fStack_58 = (pCVar4->base).location.position.x - (this_ptr->base).location.position.x;
        fStack_54 = (pCVar4->base).location.position.y - (this_ptr->base).location.position.y;
        fStack_50 = (pCVar4->base).location.position.z - (this_ptr->base).location.position.z;
        fStack_70 = fStack_58;
        *(uint *)((int)&stack0xffffff94 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffb0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        fStack_20 = SQRT(fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c);
      }
      if ((((fStack_18 < this_ptr->eat_distance) && (this_ptr->eat_distance < fStack_1c)) &&
          (this_ptr->eat_distance < fStack_20)) &&
         ((pCVar4 = this_ptr->prey, pCVar4->carrier == (CDemonActor *)0x0 && (pCVar4->state == 0))))
      {
        pCVar4->state = 1;
        this_ptr->prey->timer = 0.0;
        core_event_cpp_CEventList_executeCommands_FUN_0048c150
                  (0x01C6E360,this_ptr->prey->destroyed_event);
      }
      if (((this_ptr->prey != (CCryptVessel *)0x0) && (this_ptr->neutral != (CCryptVessel *)0x0)) &&
         ((this_ptr->end_loc->triggered != 0 &&
          ((this_ptr->prey->end_loc->triggered != 0 && (this_ptr->neutral->end_loc->triggered != 0))
          )))) {
        core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,this_ptr->win_event);
        this_ptr->prey->puzzle_complete = 1;
        this_ptr->neutral->puzzle_complete = 1;
        this_ptr->puzzle_complete = 1;
        return;
      }
    }
  }
  return;
}
