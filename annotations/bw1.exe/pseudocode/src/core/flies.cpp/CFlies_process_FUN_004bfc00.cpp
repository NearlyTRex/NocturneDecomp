// Name: core_flies.cpp_CFlies_process_FUN_004bfc00
// Address: 004bfc00
// Address Range: [[004bfc00, 004bffad]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_process_FUN_004bfc00(CFlies *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flies_cpp_CFlies_process_FUN_004bfc00(CFlies *this_ptr,float delta_time)

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
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
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
      CStack_80.x = (pCVar2->location).position.x - (this_ptr->base).location.position.x;
      CStack_80.y = (pCVar2->location).position.y - (this_ptr->base).location.position.y;
      CStack_80.z = (pCVar2->location).position.z - (this_ptr->base).location.position.z;
      fStack_44 = CStack_80.x;
      fStack_40 = CStack_80.y;
      fStack_3c = CStack_80.z;
      if (0.0 < SQRT(CStack_80.z * CStack_80.z +
                     CStack_80.x * CStack_80.x + CStack_80.y * CStack_80.y)) {
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
                  (&this_ptr->base,&CStack_80,&CStack_38);
        fStack_68 = CStack_38.x;
        afStack_64[(uint)bVar8 * -2] = *(float *)((int)&CStack_38 + (uint)bVar8 * -8 + 4);
        afStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             *(float *)((int)&CStack_38 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        fStack_2c = fStack_68 * _DAT_005e0752;
        afStack_28[0] = afStack_64[0] * _DAT_005e0752;
        afStack_28[1] = afStack_64[1] * _DAT_005e0752;
        CStack_74.x = fStack_68 * _DAT_005e0752;
        *(float *)((int)&CStack_74 + (uint)bVar8 * -8 + 4) = afStack_28[(uint)bVar8 * -2];
        *(float *)((int)&CStack_74 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_28[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (&CStack_80 != &CStack_74) {
          CStack_80.x = CStack_74.x;
          CStack_80.y = CStack_74.y;
          CStack_80.z = CStack_74.z;
        }
        iVar6 = 0;
        if (0 < this_ptr->fly_count) {
          pSVar7 = this_ptr->flies;
          pCVar5 = this_ptr->flies[0].control_points + 2;
          do {
            pCVar4 = pSVar7->control_points;
            pCVar4->x = pCVar4->x - CStack_80.x;
            pCVar4->y = pCVar4->y - CStack_80.y;
            fVar1 = pCVar4[1].x;
            pCVar4->z = pCVar4->z - CStack_80.z;
            pCVar4[1].x = fVar1 - CStack_80.x;
            pCVar4[1].y = pCVar4[1].y - CStack_80.y;
            pCVar4[1].z = pCVar4[1].z - CStack_80.z;
            pCVar5->x = pCVar5->x - CStack_80.x;
            pCVar5->y = pCVar5->y - CStack_80.y;
            fVar1 = pCVar5[1].x;
            pCVar5->z = pCVar5->z - CStack_80.z;
            pCVar5[1].x = fVar1 - CStack_80.x;
            pCVar5[1].y = pCVar5[1].y - CStack_80.y;
            iVar6 = iVar6 + 1;
            pCVar5[1].z = pCVar5[1].z - CStack_80.z;
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
        core_flies_cpp_CFlies_initFly_FUN_004c0530(this_ptr,this_ptr->fly_count);
        this_ptr->fly_count = this_ptr->fly_count + 1;
        this_ptr->gather_timer = this_ptr->gather_time;
        this_ptr->gather_count = this_ptr->gather_count + -1;
      }
      else {
        this_ptr->gather_count = 0;
      }
    }
    fVar1 = (float)_DAT_005e075a;
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
          core_flies_cpp_CFlies_generateRandomPoint_FUN_004c0630
                    (this_ptr,pSStack_14->control_points + 2,&CStack_50);
          afStack_64[2] = CStack_50.x;
          afStack_64[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_50 + (uint)bVar8 * -8 + 4);
          afStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               *(float *)((int)&CStack_50 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          if (pSStack_14->control_points + 3 != (CVector3f *)(afStack_64 + 2)) {
            pSStack_14->control_points[3].x = afStack_64[2];
            pSStack_14->control_points[3].y = afStack_64[3];
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
