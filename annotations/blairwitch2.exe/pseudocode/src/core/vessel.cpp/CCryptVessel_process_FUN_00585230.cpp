// Name: core_vessel.cpp_CCryptVessel_process_FUN_00585230
// Address: 00585230
// Address Range: [[00585230, 0058580b]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_00585230(CCryptVessel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_00585230(CCryptVessel *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  byte *puVar2;
  CActorDestination *pCVar3;
  CCryptVessel *pCVar4;
  float fVar5;
  int iVar6;
  UOrientationVector *pUVar7;
  byte bVar8;
  float afStackY_1058 [1013];
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
    *(uint *)&(this_ptr->flame).base.field_0x20 = *(uint *)&(this_ptr->base).field_0x20;
    *(uint *)&(this_ptr->flame).base.field_0x24 = *(uint *)&(this_ptr->base).field_0x24;
    *(uint *)&(this_ptr->flame).base.field_0x28 = *(uint *)&(this_ptr->base).field_0x28;
    *(uint *)&(this_ptr->flame).base.field_0x2c = *(uint *)&(this_ptr->base).field_0x2c;
    pUVar7 = &(this_ptr->flame).base.orient;
    pUVar1 = &(this_ptr->base).orient;
    *(float *)&(this_ptr->flame).base.field_0x24 =
         *(float *)&(this_ptr->flame).base.field_0x24 + _DAT_005eddfa;
    if (pUVar7 != pUVar1) {
      (pUVar7->vec).x = (pUVar1->vec).x;
      (this_ptr->flame).base.orient.vec.y = (this_ptr->base).orient.vec.y;
      (this_ptr->flame).base.orient.vec.z = (this_ptr->base).orient.vec.z;
    }
    core_flame_cpp_CFlame_process_FUN_0049f2e0(&this_ptr->flame,delta_time);
  }
  else if (this_ptr->visual_type == CRYPT_VESSEL_AIR) {
    this_ptr->spin_angle = delta_time * _DAT_005eddf6 + this_ptr->spin_angle;
  }
  else {
    fVar5 = delta_time * (float)_DAT_005edde2 + this_ptr->water_anim_timer;
    this_ptr->water_anim_timer = fVar5;
    if ((float)_DAT_005eddea <= fVar5) {
      this_ptr->water_anim_timer = this_ptr->water_anim_timer + _DAT_005eddf2;
    }
  }
  if (this_ptr->carrier == (CDemonActor *)0x0) {
    if (this_ptr->init_frame != 0) {
      this_ptr->init_frame = 0;
      return;
    }
    pUVar1 = &(this_ptr->base).orient;
    iVar6 = this_ptr->state;
    puVar2 = &(this_ptr->base).field_0x20;
    if (iVar6 == 1) {
      fVar5 = this_ptr->timer + delta_time;
      this_ptr->timer = fVar5;
      if (fVar5 <= 1.0) {
        return;
      }
      this_ptr->timer = 1.0;
      if (this_ptr->prey == (CCryptVessel *)0x0) {
        iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00585210(this_ptr->neutral);
        if (iVar6 != 0) {
          pCVar3 = this_ptr->start_loc;
          this_ptr->state = 2;
          *(uint *)puVar2 = *(uint *)&(pCVar3->base).field_0x20;
          *(uint *)&(this_ptr->base).field_0x24 = *(uint *)&(pCVar3->base).field_0x24;
          *(uint *)&(this_ptr->base).field_0x28 = *(uint *)&(pCVar3->base).field_0x28;
          *(uint *)&(this_ptr->base).field_0x2c = *(uint *)&(pCVar3->base).field_0x2c;
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
        iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00585210(this_ptr->prey);
        if (((iVar6 == 0) ||
            (iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00585210(this_ptr->neutral), iVar6 == 0
            )) && ((iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00585210(this_ptr->prey),
                   iVar6 != 0 ||
                   (iVar6 = core_vessel_cpp_isStartLocTriggered_FUN_00585210(this_ptr->neutral),
                   iVar6 != 0)))) {
          *(uint *)&(this_ptr->base).field_0x24 = 0x461c3f9a;
          *(uint *)&(this_ptr->base).field_0x28 = 0x461c3f9a;
          *(uint *)&(this_ptr->base).field_0x20 = 0x461c3f9a;
        }
        else {
          pCVar3 = this_ptr->start_loc;
          this_ptr->state = 2;
          *(uint *)&(this_ptr->base).field_0x20 = *(uint *)&(pCVar3->base).field_0x20;
          *(uint *)&(this_ptr->base).field_0x24 = *(uint *)&(pCVar3->base).field_0x24;
          *(uint *)&(this_ptr->base).field_0x28 = *(uint *)&(pCVar3->base).field_0x28;
          *(uint *)&(this_ptr->base).field_0x2c = *(uint *)&(pCVar3->base).field_0x2c;
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
        core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360
                  (0x01C3DEB4,(CVector3f *)puVar2,8.0,1500.0,4.0);
        pCVar3 = this_ptr->start_loc;
        this_ptr->timer = 1.0;
        *(uint *)puVar2 = *(uint *)&(pCVar3->base).field_0x20;
        *(uint *)&(this_ptr->base).field_0x24 = *(uint *)&(pCVar3->base).field_0x24;
        *(uint *)&(this_ptr->base).field_0x28 = *(uint *)&(pCVar3->base).field_0x28;
        *(uint *)&(this_ptr->base).field_0x2c = *(uint *)&(pCVar3->base).field_0x2c;
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
      iVar6 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      fStack_20 = 0.0;
      puVar2 = &(this_ptr->base).field_0x20;
      fStack_4c = *(float *)(iVar6 + 0x20) - *(float *)puVar2;
      fStack_48 = *(float *)(iVar6 + 0x24) - *(float *)&(this_ptr->base).field_0x24;
      fStack_44 = *(float *)(iVar6 + 0x28) - *(float *)&(this_ptr->base).field_0x28;
      fStack_40 = fStack_4c;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar8 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      pCVar4 = this_ptr->prey;
      fStack_1c = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
      if (pCVar4 != (CCryptVessel *)0x0) {
        fStack_34 = *(float *)puVar2 - *(float *)&(pCVar4->base).field_0x20;
        fStack_30 = *(float *)&(this_ptr->base).field_0x24 - *(float *)&(pCVar4->base).field_0x24;
        fStack_2c = *(float *)&(this_ptr->base).field_0x28 - *(float *)&(pCVar4->base).field_0x28;
        fStack_64 = fStack_34;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        fStack_18 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
      }
      pCVar4 = this_ptr->neutral;
      if (pCVar4 != (CCryptVessel *)0x0) {
        fStack_58 = *(float *)&(pCVar4->base).field_0x20 - *(float *)&(this_ptr->base).field_0x20;
        fStack_54 = *(float *)&(pCVar4->base).field_0x24 - *(float *)&(this_ptr->base).field_0x24;
        fStack_50 = *(float *)&(pCVar4->base).field_0x28 - *(float *)&(this_ptr->base).field_0x28;
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
        core_event_cpp_CEventList_executeCommands_FUN_004894f0
                  (0x01C38BC0,this_ptr->prey->destroyed_event);
      }
      if (((this_ptr->prey != (CCryptVessel *)0x0) && (this_ptr->neutral != (CCryptVessel *)0x0)) &&
         ((this_ptr->end_loc->triggered != 0 &&
          ((this_ptr->prey->end_loc->triggered != 0 && (this_ptr->neutral->end_loc->triggered != 0))
          )))) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->win_event);
        this_ptr->prey->puzzle_complete = 1;
        this_ptr->neutral->puzzle_complete = 1;
        this_ptr->puzzle_complete = 1;
        return;
      }
    }
  }
  return;
}
