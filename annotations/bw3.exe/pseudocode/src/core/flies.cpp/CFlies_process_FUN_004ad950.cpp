// Name: core_flies.cpp_CFlies_process_FUN_004ad950
// Address: 004ad950
// Address Range: [[004ad950, 004adcfd]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_process_FUN_004ad950(CFlies *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flies_cpp_CFlies_process_FUN_004ad950(CFlies *this_ptr,float delta_time)

{
  float fVar1;
  double input_value;
  CDemonActor *pCVar2;
  float fVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  SFly *pSVar7;
  byte bVar8;
  float afStackY_105c [1011];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  double dStack_20;
  int iStack_18;
  SFly *pSStack_14;
  
  bVar8 = 0;
  if (this_ptr->is_visible != 0) {
    pCVar2 = this_ptr->follow_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      if (pCVar2->lifecycle_state != ACTOR_CREATED) {
        (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
        return;
      }
      fStack_80 = (pCVar2->location).position.x - (this_ptr->base).location.position.x;
      fStack_7c = (pCVar2->location).position.y - (this_ptr->base).location.position.y;
      fStack_78 = (pCVar2->location).position.z - (this_ptr->base).location.position.z;
      fStack_44 = fStack_80;
      fStack_40 = fStack_7c;
      fStack_3c = fStack_78;
      if (0.0 < SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c)) {
        core_actor_cpp_FUN_00408b40(this_ptr,&stack0xffffff80);
        fStack_68 = fStack_38;
        *(uint *)((int)&stack0xffffff9c + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffcc + (uint)bVar8 * 0xfffffffe * 4);
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffffd0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        fStack_2c = fStack_68 * _DAT_005c1c41;
        fStack_28 = fStack_64 * _DAT_005c1c41;
        fStack_24 = fStack_60 * _DAT_005c1c41;
        fStack_74 = fStack_68 * _DAT_005c1c41;
        (&stack0xffffff90)[(uint)bVar8 * 0xfffffffe] =
             (float)*(uint *)((int)&stack0xffffffd8 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff94 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffdc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        if (&stack0xffffff80 != &stack0xffffff8c) {
          fStack_80 = fStack_74;
          fStack_7c = fStack_70;
          fStack_78 = fStack_6c;
        }
        iVar6 = 0;
        if (0 < this_ptr->fly_count) {
          pSVar7 = this_ptr->flies;
          pCVar5 = this_ptr->flies[0].control_points + 2;
          do {
            pCVar4 = pSVar7->control_points;
            pCVar4->x = pCVar4->x - fStack_80;
            pCVar4->y = pCVar4->y - fStack_7c;
            fVar1 = pCVar4[1].x;
            pCVar4->z = pCVar4->z - fStack_78;
            pCVar4[1].x = fVar1 - fStack_80;
            pCVar4[1].y = pCVar4[1].y - fStack_7c;
            pCVar4[1].z = pCVar4[1].z - fStack_78;
            pCVar5->x = pCVar5->x - fStack_80;
            pCVar5->y = pCVar5->y - fStack_7c;
            fVar1 = pCVar5[1].x;
            pCVar5->z = pCVar5->z - fStack_78;
            pCVar5[1].x = fVar1 - fStack_80;
            pCVar5[1].y = pCVar5[1].y - fStack_7c;
            iVar6 = iVar6 + 1;
            pCVar5[1].z = pCVar5[1].z - fStack_78;
            pSVar7 = (SFly *)(pCVar4 + 4);
            pCVar5 = (CVector3f *)((int)(pCVar5 + 4) + 4);
          } while (iVar6 < this_ptr->fly_count);
        }
      }
      pCVar2 = this_ptr->follow_actor;
      (this_ptr->base).location.position.x = (pCVar2->location).position.x;
      (this_ptr->base).location.position.y = (pCVar2->location).position.y;
      (this_ptr->base).location.position.z = (pCVar2->location).position.z;
      (this_ptr->base).location.area_id = (pCVar2->location).area_id;
    }
    if ((0 < this_ptr->gather_count) &&
       (fVar1 = this_ptr->gather_timer - delta_time, this_ptr->gather_timer = fVar1, fVar1 <= 0.0))
    {
      if (this_ptr->fly_count < 200) {
        core_flies_cpp_CFlies_initFly_FUN_004ae280(this_ptr,this_ptr->fly_count);
        this_ptr->fly_count = this_ptr->fly_count + 1;
        this_ptr->gather_timer = this_ptr->gather_time;
        this_ptr->gather_count = this_ptr->gather_count + -1;
      }
      else {
        this_ptr->gather_count = 0;
      }
    }
    fVar1 = (float)_DAT_005c1c49;
    iStack_18 = 0;
    if (0 < this_ptr->fly_count) {
      pSVar7 = this_ptr->flies;
      do {
        fVar3 = pSVar7->t + delta_time * fVar1;
        pSVar7->t = fVar3;
        input_value = (double)fVar3;
        if (1.0 <= input_value) {
          pSStack_14 = pSVar7;
          dStack_20 = floor(input_value);
          pSVar7->t = pSVar7->t - (float)dStack_20;
          if (pSVar7->control_points != pSVar7->control_points + 1) {
            pSVar7->control_points[0].x = pSVar7->control_points[1].x;
            pSVar7->control_points[0].y = pSVar7->control_points[1].y;
            pSVar7->control_points[0].z = pSVar7->control_points[1].z;
          }
          if (pSStack_14->control_points + 1 != pSStack_14->control_points + 2) {
            pSStack_14->control_points[1].x = pSStack_14->control_points[2].x;
            pSStack_14->control_points[1].y = pSStack_14->control_points[2].y;
            pSStack_14->control_points[1].z = pSStack_14->control_points[2].z;
          }
          if (pSStack_14->control_points + 2 != pSStack_14->control_points + 3) {
            pSStack_14->control_points[2].x = pSStack_14->control_points[3].x;
            pSStack_14->control_points[2].y = pSStack_14->control_points[3].y;
            pSStack_14->control_points[2].z = pSStack_14->control_points[3].z;
          }
          core_flies_cpp_FUN_004ae380(this_ptr,pSStack_14->control_points + 2);
          fStack_5c = fStack_50;
          (&stack0xffffffa8)[(uint)bVar8 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffffb4 + (uint)bVar8 * -8);
          *(uint *)((int)&stack0xffffffac + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xffffffb8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if (pSStack_14->control_points + 3 != (CVector3f *)&stack0xffffffa4) {
            pSStack_14->control_points[3].x = fStack_5c;
            pSStack_14->control_points[3].y = fStack_58;
            pSStack_14->control_points[3].z = fStack_54;
          }
        }
        pSVar7 = pSVar7 + 1;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < this_ptr->fly_count);
    }
  }
  return;
}
