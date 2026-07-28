// Name: core_flies.cpp_CFlies_process_FUN_0048f090
// Address: 0048f090
// Address Range: [[0048f090, 0048f3b1]]
// Convention: unknown
// Signature: void core_flies_cpp_CFlies_process_FUN_0048f090(CFlies *param_1,float param_2)

#include "nocturne.h"

void core_flies_cpp_CFlies_process_FUN_0048f090(CFlies *param_1,float param_2)

{
  float fVar1;
  CDemonActor *pCVar2;
  float fVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  SFly *pSVar7;
  int iVar8;
  double dVar9;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  byte local_2c [12];
  ulonglong local_20;
  int local_18;
  
  if (param_1->is_visible != 0) {
    pCVar2 = param_1->follow_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      local_38 = (pCVar2->location).position.x - (param_1->base).location.position.x;
      local_34 = (pCVar2->location).position.y - (param_1->base).location.position.y;
      local_30 = (pCVar2->location).position.z - (param_1->base).location.position.z;
      if (0.0 < SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34)) {
        pfVar4 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                    (param_1,local_2c,&local_38);
        local_44 = *pfVar4 * 0.5f;
        local_40 = pfVar4[1] * 0.5f;
        local_3c = 0.5f * pfVar4[2];
        if (&local_38 != &local_44) {
          local_38 = local_44;
          local_34 = local_40;
          local_30 = local_3c;
        }
        iVar8 = 0;
        if (0 < param_1->fly_count) {
          pSVar7 = param_1->flies;
          pCVar5 = param_1->flies[0].control_points + 2;
          do {
            pCVar6 = pSVar7->control_points;
            pCVar6->x = pCVar6->x - local_38;
            pCVar6->y = pCVar6->y - local_34;
            fVar1 = pCVar6[1].x;
            pCVar6->z = pCVar6->z - local_30;
            pCVar6[1].x = fVar1 - local_38;
            pCVar6[1].y = pCVar6[1].y - local_34;
            pCVar6[1].z = pCVar6[1].z - local_30;
            pCVar5->x = pCVar5->x - local_38;
            pCVar5->y = pCVar5->y - local_34;
            fVar1 = pCVar5[1].x;
            pCVar5->z = pCVar5->z - local_30;
            pCVar5[1].x = fVar1 - local_38;
            pCVar5[1].y = pCVar5[1].y - local_34;
            iVar8 = iVar8 + 1;
            pCVar5[1].z = pCVar5[1].z - local_30;
            pSVar7 = (SFly *)(pCVar6 + 4);
            pCVar5 = (CVector3f *)((int)(pCVar5 + 4) + 4);
          } while (iVar8 < param_1->fly_count);
        }
      }
      pCVar2 = param_1->follow_actor;
      (param_1->base).location.position.x = (pCVar2->location).position.x;
      (param_1->base).location.position.y = (pCVar2->location).position.y;
      (param_1->base).location.position.z = (pCVar2->location).position.z;
      (param_1->base).location.area_id = (pCVar2->location).area_id;
    }
    if ((0 < param_1->gather_count) &&
       (fVar1 = param_1->gather_timer - param_2, param_1->gather_timer = fVar1, fVar1 <= 0.0)) {
      if (param_1->fly_count < 200) {
        core_flies_cpp_CFlies_initFly_FUN_0048f8f0(param_1,param_1->fly_count);
        param_1->fly_count = param_1->fly_count + 1;
        param_1->gather_timer = param_1->gather_time;
        param_1->gather_count = param_1->gather_count + -1;
      }
      else {
        param_1->gather_count = 0;
      }
    }
    fVar1 = (float)2;
    local_18 = 0;
    if (0 < param_1->fly_count) {
      pSVar7 = param_1->flies;
      do {
        fVar3 = pSVar7->t + param_2 * fVar1;
        pSVar7->t = fVar3;
        dVar9 = (double)fVar3;
        if (1.0 <= dVar9) {
          dVar9 = (double)floor(dVar9);
          pSVar7->t = pSVar7->t - (float)dVar9;
          if (pSVar7->control_points != pSVar7->control_points + 1) {
            pSVar7->control_points[0].x = pSVar7->control_points[1].x;
            pSVar7->control_points[0].y = pSVar7->control_points[1].y;
            pSVar7->control_points[0].z = pSVar7->control_points[1].z;
          }
          if (pSVar7->control_points + 1 != pSVar7->control_points + 2) {
            pSVar7->control_points[1].x = pSVar7->control_points[2].x;
            pSVar7->control_points[1].y = pSVar7->control_points[2].y;
            pSVar7->control_points[1].z = pSVar7->control_points[2].z;
          }
          if (pSVar7->control_points + 2 != pSVar7->control_points + 3) {
            pSVar7->control_points[2].x = pSVar7->control_points[3].x;
            pSVar7->control_points[2].y = pSVar7->control_points[3].y;
            pSVar7->control_points[2].z = pSVar7->control_points[3].z;
          }
          local_20 = dVar9;
          pCVar5 = core_flies_cpp_CFlies_generateRandomPoint_FUN_0048f9b0
                             (param_1,&local_50,pSVar7->control_points + 2);
          if (pSVar7->control_points + 3 != pCVar5) {
            pSVar7->control_points[3].x = pCVar5->x;
            pSVar7->control_points[3].y = pCVar5->y;
            pSVar7->control_points[3].z = pCVar5->z;
          }
        }
        pSVar7 = pSVar7 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < param_1->fly_count);
    }
  }
  return;
}
