// Name: core_vessel.cpp_CCryptVessel_process_FUN_005e91a0
// Address: 005e91a0
// Address Range: [[005e91a0, 005e974d]]
// Convention: __cdecl
// Signature: void core_vessel.cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel * this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel *this_ptr)

{
  COrientation *pCVar1;
  CLocation *pCVar2;
  CHero *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float in_stack_00000008;
  float local_18;
  float local_14;
  
  if (this_ptr->visual_type == 1) {
    *(float *)(this_ptr->field14_0x3c0 + 0x24) = (this_ptr->base_actor).location.position.x;
    *(float *)(this_ptr->field14_0x3c0 + 0x28) = (this_ptr->base_actor).location.position.y;
    *(float *)(this_ptr->field14_0x3c0 + 0x2c) = (this_ptr->base_actor).location.position.z;
    *(int *)(this_ptr->field14_0x3c0 + 0x30) = (this_ptr->base_actor).location.area_id;
    pCVar1 = &(this_ptr->base_actor).orient;
    *(float *)(this_ptr->field14_0x3c0 + 0x28) =
         *(float *)(this_ptr->field14_0x3c0 + 0x28) + 1.7f;
    if ((COrientation *)(this_ptr->field14_0x3c0 + 0x34) != pCVar1) {
      *(float *)(this_ptr->field14_0x3c0 + 0x34) = pCVar1->pitch;
      *(float *)(this_ptr->field14_0x3c0 + 0x38) = (this_ptr->base_actor).orient.bank;
      *(float *)(this_ptr->field14_0x3c0 + 0x3c) = (this_ptr->base_actor).orient.heading;
    }
    core_flame_cpp_FUN_004c9c00();
  }
  else if (this_ptr->visual_type == 0) {
    *(float *)(this_ptr->field14_0x3c0 + 0x2a8) =
         in_stack_00000008 * (float)3.1415926535000001 + *(float *)(this_ptr->field14_0x3c0 + 0x2a8);
  }
  else {
    fVar4 = in_stack_00000008 * (float)8 + *(float *)(this_ptr->field14_0x3c0 + 0x42c)
    ;
    *(float *)(this_ptr->field14_0x3c0 + 0x42c) = fVar4;
    if ((float)16 <= fVar4) {
      *(float *)(this_ptr->field14_0x3c0 + 0x42c) =
           *(float *)(this_ptr->field14_0x3c0 + 0x42c) + -16.0f;
    }
  }
  if (this_ptr->field3_0x2d4 == 0) {
    if (*(int *)this_ptr->field14_0x3c0 != 0) {
      this_ptr->field14_0x3c0[0] = '\0';
      this_ptr->field14_0x3c0[1] = '\0';
      this_ptr->field14_0x3c0[2] = '\0';
      this_ptr->field14_0x3c0[3] = '\0';
      return;
    }
    pCVar1 = &(this_ptr->base_actor).orient;
    iVar10 = this_ptr->state;
    pCVar2 = &(this_ptr->base_actor).location;
    if (iVar10 == 1) {
      fVar4 = this_ptr->timer + in_stack_00000008;
      this_ptr->timer = fVar4;
      if (fVar4 <= 1.0) {
        return;
      }
      this_ptr->timer = 1.0;
      if (this_ptr->prey == 0) {
        iVar10 = core_vessel_cpp_FUN_005e9180();
        if (iVar10 != 0) {
          iVar10 = *(int *)this_ptr->start_loc;
          this_ptr->state = 2;
          (pCVar2->position).x = *(float *)(iVar10 + 0x20);
          (this_ptr->base_actor).location.position.y = *(float *)(iVar10 + 0x24);
          (this_ptr->base_actor).location.position.z = *(float *)(iVar10 + 0x28);
          (this_ptr->base_actor).location.area_id = *(int *)(iVar10 + 0x2c);
          iVar10 = *(int *)this_ptr->start_loc;
          if (pCVar1 != (COrientation *)(iVar10 + 0x30)) {
            pCVar1->pitch = *(float *)(iVar10 + 0x30);
            (this_ptr->base_actor).orient.bank = *(float *)(iVar10 + 0x34);
            (this_ptr->base_actor).orient.heading = *(float *)(iVar10 + 0x38);
          }
        }
      }
      else {
        iVar10 = core_vessel_cpp_FUN_005e9180();
        if (((iVar10 == 0) || (iVar10 = core_vessel_cpp_FUN_005e9180(), iVar10 == 0)) &&
           ((iVar10 = core_vessel_cpp_FUN_005e9180(), iVar10 != 0 ||
            (iVar10 = core_vessel_cpp_FUN_005e9180(), iVar10 != 0)))) {
          (this_ptr->base_actor).location.position.y = 9999.9;
          (this_ptr->base_actor).location.position.z = 9999.9;
          (this_ptr->base_actor).location.position.x = 9999.9;
        }
        else {
          iVar10 = *(int *)this_ptr->start_loc;
          this_ptr->state = 2;
          (this_ptr->base_actor).location.position.x = *(float *)(iVar10 + 0x20);
          (this_ptr->base_actor).location.position.y = *(float *)(iVar10 + 0x24);
          (this_ptr->base_actor).location.position.z = *(float *)(iVar10 + 0x28);
          (this_ptr->base_actor).location.area_id = *(int *)(iVar10 + 0x2c);
          iVar10 = *(int *)this_ptr->start_loc;
          pCVar1 = &(this_ptr->base_actor).orient;
          if (pCVar1 != (COrientation *)(iVar10 + 0x30)) {
            pCVar1->pitch = *(float *)(iVar10 + 0x30);
            (this_ptr->base_actor).orient.bank = *(float *)(iVar10 + 0x34);
            (this_ptr->base_actor).orient.heading = *(float *)(iVar10 + 0x38);
          }
        }
      }
    }
    else if (iVar10 == 2) {
      fVar4 = this_ptr->timer - in_stack_00000008;
      this_ptr->timer = fVar4;
      if (0.0 <= fVar4) {
        return;
      }
      this_ptr->state = 0;
      this_ptr->timer = 0.0;
    }
    else if (iVar10 == 3) {
      if ((*(int *)(*(int *)this_ptr->start_loc + 0x184) == 0) &&
         (*(int *)(*(int *)this_ptr->end_loc + 0x184) == 0)) {
        fVar4 = this_ptr->timer - in_stack_00000008;
        this_ptr->timer = fVar4;
        if (0.0 <= fVar4) {
          return;
        }
        core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
        iVar10 = *(int *)this_ptr->start_loc;
        this_ptr->timer = 1.0;
        (pCVar2->position).x = *(float *)(iVar10 + 0x20);
        (this_ptr->base_actor).location.position.y = *(float *)(iVar10 + 0x24);
        (this_ptr->base_actor).location.position.z = *(float *)(iVar10 + 0x28);
        (this_ptr->base_actor).location.area_id = *(int *)(iVar10 + 0x2c);
        iVar10 = *(int *)this_ptr->start_loc;
        if (pCVar1 == (COrientation *)(iVar10 + 0x30)) {
          this_ptr->state = 2;
        }
        else {
          pCVar1->pitch = *(float *)(iVar10 + 0x30);
          (this_ptr->base_actor).orient.bank = *(float *)(iVar10 + 0x34);
          (this_ptr->base_actor).orient.heading = *(float *)(iVar10 + 0x38);
          this_ptr->state = 2;
        }
      }
      else {
        this_ptr->timer = 0.0;
        this_ptr->state = 0;
      }
    }
    if ((*(int *)(*(int *)this_ptr->start_loc + 0x184) == 0) &&
       (*(int *)(*(int *)this_ptr->end_loc + 0x184) == 0)) {
      if (this_ptr->state == 0) {
        this_ptr->timer = 3.0;
        this_ptr->state = 3;
        return;
      }
    }
    else {
      pCVar3 = g_HeroActors[g_LocalHeroIndex];
      pCVar2 = &(this_ptr->base_actor).location;
      fVar4 = (pCVar3->base_character).base_actor.location.position.x - (pCVar2->position).x;
      fVar5 = (pCVar3->base_character).base_actor.location.position.y -
              (this_ptr->base_actor).location.position.y;
      fVar6 = (pCVar3->base_character).base_actor.location.position.z -
              (this_ptr->base_actor).location.position.z;
      local_18 = 999.9;
      local_14 = 0.0;
      iVar10 = this_ptr->prey;
      if (iVar10 != 0) {
        fVar7 = (pCVar2->position).x - *(float *)(iVar10 + 0x20);
        fVar8 = (this_ptr->base_actor).location.position.y - *(float *)(iVar10 + 0x24);
        fVar9 = (this_ptr->base_actor).location.position.z - *(float *)(iVar10 + 0x28);
        local_18 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
      }
      iVar10 = this_ptr->neutral;
      if (iVar10 != 0) {
        fVar7 = *(float *)(iVar10 + 0x20) - (this_ptr->base_actor).location.position.x;
        fVar8 = *(float *)(iVar10 + 0x24) - (this_ptr->base_actor).location.position.y;
        fVar9 = *(float *)(iVar10 + 0x28) - (this_ptr->base_actor).location.position.z;
        local_14 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
      }
      if ((((local_18 < this_ptr->eat_distance) &&
           (this_ptr->eat_distance < SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5))) &&
          (this_ptr->eat_distance < local_14)) &&
         ((iVar10 = this_ptr->prey, *(int *)(iVar10 + 0x2d4) == 0 && (*(int *)(iVar10 + 0x3b8) == 0)
          ))) {
        *(uint *)(iVar10 + 0x3b8) = 1;
        *(uint *)(this_ptr->prey + 0x3bc) = 0;
        core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      }
      if (((this_ptr->prey != 0) && (this_ptr->neutral != 0)) &&
         ((*(int *)(*(int *)this_ptr->end_loc + 0x184) != 0 &&
          ((*(int *)(*(int *)(this_ptr->prey + 0x3ac) + 0x184) != 0 &&
           (*(int *)(*(int *)(this_ptr->neutral + 0x3ac) + 0x184) != 0)))))) {
        core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
        *(uint *)(this_ptr->prey + 0x7f0) = 1;
        *(uint *)(this_ptr->neutral + 0x7f0) = 1;
        this_ptr->field14_0x3c0[0x430] = '\x01';
        this_ptr->field14_0x3c0[0x431] = '\0';
        this_ptr->field14_0x3c0[0x432] = '\0';
        this_ptr->field14_0x3c0[0x433] = '\0';
        return;
      }
    }
  }
  return;
}
