// Name: core_flies.cpp_CFlies_process_FUN_004a6c30
// Address: 004a6c30
// Address Range: [[004a6c30, 004a6fdd]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_process_FUN_004a6c30(CFlies *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flies_cpp_CFlies_process_FUN_004a6c30(CFlies *this_ptr,float delta_time)

{
  float fVar1;
  CDemonActor *pCVar2;
  float fVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  SFly *pSVar7;
  byte bVar8;
  float afStackY_105c [1011];
  ulonglong uStack_80;
  float fStack_78;
  float fStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  double dStack_18;
  
  bVar8 = 0;
  if (this_ptr->is_visible != 0) {
    pCVar2 = this_ptr->follow_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      if (pCVar2->lifecycle_state != ACTOR_CREATED) {
        (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
        return;
      }
      afStack_50[3] = (pCVar2->location).position.x - (this_ptr->base).location.position.x;
      fStack_40 = (pCVar2->location).position.y - (this_ptr->base).location.position.y;
      fStack_78 = (pCVar2->location).position.z - (this_ptr->base).location.position.z;
      uStack_80 = __BITCAST_DOUBLE(CONCAT44(fStack_40,afStack_50[3]));
      fStack_3c = fStack_78;
      if (0.0 < SQRT(fStack_78 * fStack_78 + afStack_50[3] * afStack_50[3] + fStack_40 * fStack_40))
      {
        core_actor_cpp_FUN_00408d30(this_ptr,&uStack_80);
        afStack_70[2] = fStack_38;
        afStack_70[(uint)bVar8 * -2 + 3] = afStack_50[(uint)bVar8 * -2 + 7];
        afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 8];
        fStack_2c = afStack_70[2] * _DAT_005d66d9;
        fStack_28 = afStack_70[3] * _DAT_005d66d9;
        fStack_24 = fStack_60 * _DAT_005d66d9;
        fStack_74 = afStack_70[2] * _DAT_005d66d9;
        afStack_70[(uint)bVar8 * -2] = afStack_50[(uint)bVar8 * -2 + 10];
        afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xb];
        if ((float *)&uStack_80 != &fStack_74) {
          uStack_80 = __BITCAST_DOUBLE(CONCAT44(afStack_70[0],fStack_74));
          fStack_78 = afStack_70[1];
        }
        iVar6 = 0;
        if (0 < this_ptr->fly_count) {
          pSVar7 = this_ptr->flies;
          pCVar5 = this_ptr->flies[0].control_points + 2;
          do {
            pCVar4 = pSVar7->control_points;
            pCVar4->x = pCVar4->x - (float)uStack_80;
            pCVar4->y = pCVar4->y - uStack_80._4_4_;
            fVar1 = pCVar4[1].x;
            pCVar4->z = pCVar4->z - fStack_78;
            pCVar4[1].x = fVar1 - (float)uStack_80;
            pCVar4[1].y = pCVar4[1].y - uStack_80._4_4_;
            pCVar4[1].z = pCVar4[1].z - fStack_78;
            pCVar5->x = pCVar5->x - (float)uStack_80;
            pCVar5->y = pCVar5->y - uStack_80._4_4_;
            fVar1 = pCVar5[1].x;
            pCVar5->z = pCVar5->z - fStack_78;
            pCVar5[1].x = fVar1 - (float)uStack_80;
            pCVar5[1].y = pCVar5[1].y - uStack_80._4_4_;
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
        core_flies_cpp_CFlies_initFly_FUN_004a7560(this_ptr,this_ptr->fly_count);
        this_ptr->fly_count = this_ptr->fly_count + 1;
        this_ptr->gather_timer = this_ptr->gather_time;
        this_ptr->gather_count = this_ptr->gather_count + -1;
      }
      else {
        this_ptr->gather_count = 0;
      }
    }
    fVar1 = (float)_DAT_005d66e1;
    iVar6 = 0;
    if (0 < this_ptr->fly_count) {
      pSVar7 = this_ptr->flies;
      do {
        fVar3 = pSVar7->t + delta_time * fVar1;
        pSVar7->t = fVar3;
        uStack_80 = (double)fVar3;
        if (1.0 <= uStack_80) {
          dStack_18 = floor(uStack_80);
          pSVar7->t = pSVar7->t - (float)dStack_18;
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
          core_flies_cpp_FUN_004a7660(this_ptr,pSVar7->control_points + 2);
          fStack_54 = afStack_50[2];
          afStack_50[(uint)bVar8 * -2] = afStack_50[(uint)bVar8 * -2 + 3];
          afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          if (pSVar7->control_points + 3 != (CVector3f *)(afStack_70 + 7)) {
            pSVar7->control_points[3].x = fStack_54;
            pSVar7->control_points[3].y = afStack_50[0];
            pSVar7->control_points[3].z = afStack_50[1];
          }
        }
        pSVar7 = pSVar7 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < this_ptr->fly_count);
    }
  }
  return;
}
