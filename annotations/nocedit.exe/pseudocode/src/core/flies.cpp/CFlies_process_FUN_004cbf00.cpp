// Name: core_flies.cpp_CFlies_process_FUN_004cbf00
// Address: 004cbf00
// Address Range: [[004cbf00, 004cc221]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_process_FUN_004cbf00(CFlies *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_process_FUN_004cbf00(CFlies *this_ptr,float delta_time)

{
  float fVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  SFly *pSVar6;
  int iVar7;
  double dVar8;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  double local_20;
  int local_18;
  float fVar3;
  CDemonActor *pCVar2;
  double input_value;
  float fVar1;
  
  if (this_ptr->is_visible != 0) {
    pCVar2 = this_ptr->follow_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      local_38.x = (pCVar2->location).position.x - (this_ptr->base).location.position.x;
      local_38.y = (pCVar2->location).position.y - (this_ptr->base).location.position.y;
      local_38.z = (pCVar2->location).position.z - (this_ptr->base).location.position.z;
      if (0.0 < SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y)) {
        pCVar6 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                           (&this_ptr->base,&local_2c,&local_38);
        local_44.x = pCVar6->x * 0.5f;
        local_44.y = pCVar6->y * 0.5f;
        local_44.z = 0.5f * pCVar6->z;
        if (&local_38 != &local_44) {
          local_38.x = local_44.x;
          local_38.y = local_44.y;
          local_38.z = local_44.z;
        }
        iVar7 = 0;
        if (0 < this_ptr->fly_count) {
          pCVar6 = (CVector3f *)this_ptr->flies;
          pCVar7 = this_ptr->flies[0].control_points + 2;
          do {
            pCVar5 = (CVector3f *)&pCVar6->y;
            pCVar5->x = pCVar5->x - local_38.x;
            pCVar5->y = pCVar5->y - local_38.y;
            fVar1 = pCVar5[1].x;
            pCVar5->z = pCVar5->z - local_38.z;
            pCVar5[1].x = fVar1 - local_38.x;
            pCVar5[1].y = pCVar5[1].y - local_38.y;
            pCVar5[1].z = pCVar5[1].z - local_38.z;
            pCVar7->x = pCVar7->x - local_38.x;
            pCVar7->y = pCVar7->y - local_38.y;
            fVar2 = pCVar7[1].x;
            pCVar7->z = pCVar7->z - local_38.z;
            pCVar7[1].x = fVar2 - local_38.x;
            pCVar7[1].y = pCVar7[1].y - local_38.y;
            iVar7 = iVar7 + 1;
            pCVar7[1].z = pCVar7[1].z - local_38.z;
            pCVar6 = pCVar5 + 4;
            pCVar7 = (CVector3f *)((int)(pCVar7 + 4) + 4);
          } while (iVar7 < this_ptr->fly_count);
        }
      }
      pCVar3 = this_ptr->follow_actor;
      (this_ptr->base).location.position.x = (pCVar3->location).position.x;
      (this_ptr->base).location.position.y = (pCVar3->location).position.y;
      (this_ptr->base).location.position.z = (pCVar3->location).position.z;
      (this_ptr->base).location.area_id = (pCVar3->location).area_id;
    }
    if ((0 < this_ptr->gather_count) &&
       (fVar2 = this_ptr->gather_timer - delta_time, this_ptr->gather_timer = fVar2, fVar2 <= 0.0))
    {
      if (this_ptr->fly_count < 200) {
        core_flies_cpp_CFlies_initFly_FUN_004cc760(this_ptr,this_ptr->fly_count);
        this_ptr->fly_count = this_ptr->fly_count + 1;
        this_ptr->gather_timer = this_ptr->gather_time;
        this_ptr->gather_count = this_ptr->gather_count + -1;
      }
      else {
        this_ptr->gather_count = 0;
      }
    }
    fVar2 = (float)2;
    local_18 = 0;
    if (0 < this_ptr->fly_count) {
      pSVar6 = this_ptr->flies;
      do {
        fVar3 = pSVar6->t + delta_time * fVar2;
        pSVar6->t = fVar3;
        input_value = (double)fVar3;
        if (1.0 <= input_value) {
          dVar8 = floor(input_value);
          pSVar6->t = pSVar6->t - (float)dVar8;
          if (pSVar6->control_points != pSVar6->control_points + 1) {
            pSVar6->control_points[0].x = pSVar6->control_points[1].x;
            pSVar6->control_points[0].y = pSVar6->control_points[1].y;
            pSVar6->control_points[0].z = pSVar6->control_points[1].z;
          }
          if (pSVar6->control_points + 1 != pSVar6->control_points + 2) {
            pSVar6->control_points[1].x = pSVar6->control_points[2].x;
            pSVar6->control_points[1].y = pSVar6->control_points[2].y;
            pSVar6->control_points[1].z = pSVar6->control_points[2].z;
          }
          if (pSVar6->control_points + 2 != pSVar6->control_points + 3) {
            pSVar6->control_points[2].x = pSVar6->control_points[3].x;
            pSVar6->control_points[2].y = pSVar6->control_points[3].y;
            pSVar6->control_points[2].z = pSVar6->control_points[3].z;
          }
          pCVar4 = core_flies_cpp_CFlies_generateRandomPoint_FUN_004cc820
                             (this_ptr,&local_50,pSVar6->control_points + 2);
          if (pSVar6->control_points + 3 != pCVar4) {
            pSVar6->control_points[3].x = pCVar4->x;
            pSVar6->control_points[3].y = pCVar4->y;
            pSVar6->control_points[3].z = pCVar4->z;
          }
        }
        pSVar6 = pSVar6 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < this_ptr->fly_count);
    }
  }
  return;
}
