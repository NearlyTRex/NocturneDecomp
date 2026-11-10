// Name: core_flies.cpp_CFlies_process_FUN_004a6c30
// Address: 004a6c30
// Address Range: [[004a6c30, 004a6fdd]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_process_FUN_004a6c30(CFlies *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flies_cpp_CFlies_process_FUN_004a6c30(CFlies *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
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
    pCVar1 = this_ptr->follow_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      if (pCVar1->lifecycle_state != ACTOR_CREATED) {
        (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
        return;
      }
      afStack_50[3] = *(float *)&pCVar1->field_0x20 - *(float *)&(this_ptr->base).field_0x20;
      fStack_40 = *(float *)&pCVar1->field_0x24 - *(float *)&(this_ptr->base).field_0x24;
      fStack_78 = *(float *)&pCVar1->field_0x28 - *(float *)&(this_ptr->base).field_0x28;
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
          pfVar4 = (float *)&this_ptr->flies[0].field_0x4;
          pfVar5 = (float *)&this_ptr->flies[0].field_0x1c;
          do {
            *pfVar4 = *pfVar4 - (float)uStack_80;
            pfVar4[1] = pfVar4[1] - uStack_80._4_4_;
            pfVar4[2] = pfVar4[2] - fStack_78;
            pfVar4[3] = pfVar4[3] - (float)uStack_80;
            pfVar4[4] = pfVar4[4] - uStack_80._4_4_;
            pfVar4[5] = pfVar4[5] - fStack_78;
            *pfVar5 = *pfVar5 - (float)uStack_80;
            pfVar5[1] = pfVar5[1] - uStack_80._4_4_;
            pfVar5[2] = pfVar5[2] - fStack_78;
            pfVar5[3] = pfVar5[3] - (float)uStack_80;
            pfVar5[4] = pfVar5[4] - uStack_80._4_4_;
            iVar6 = iVar6 + 1;
            pfVar5[5] = pfVar5[5] - fStack_78;
            pfVar4 = pfVar4 + 0xd;
            pfVar5 = pfVar5 + 0xd;
          } while (iVar6 < this_ptr->fly_count);
        }
      }
      pCVar1 = this_ptr->follow_actor;
      *(uint *)&(this_ptr->base).field_0x20 = *(uint *)&pCVar1->field_0x20;
      *(uint *)&(this_ptr->base).field_0x24 = *(uint *)&pCVar1->field_0x24;
      *(uint *)&(this_ptr->base).field_0x28 = *(uint *)&pCVar1->field_0x28;
      *(uint *)&(this_ptr->base).field_0x2c = *(uint *)&pCVar1->field_0x2c;
    }
    if ((0 < this_ptr->gather_count) &&
       (fVar2 = this_ptr->gather_timer - delta_time, this_ptr->gather_timer = fVar2, fVar2 <= 0.0))
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
    fVar2 = (float)_DAT_005d66e1;
    iVar6 = 0;
    if (0 < this_ptr->fly_count) {
      pSVar7 = this_ptr->flies;
      do {
        fVar3 = *(float *)pSVar7 + delta_time * fVar2;
        *(float *)pSVar7 = fVar3;
        uStack_80 = (double)fVar3;
        if (1.0 <= uStack_80) {
          dStack_18 = floor(uStack_80);
          *(float *)pSVar7 = *(float *)pSVar7 - (float)dStack_18;
          if (&pSVar7->field_0x4 != &pSVar7->field_0x10) {
            *(uint *)&pSVar7->field_0x4 = *(uint *)&pSVar7->field_0x10;
            *(uint *)&pSVar7->field_0x8 = *(uint *)&pSVar7->field_0x14;
            *(uint *)&pSVar7->field_0xc = *(uint *)&pSVar7->field_0x18;
          }
          if (&pSVar7->field_0x10 != &pSVar7->field_0x1c) {
            *(uint *)&pSVar7->field_0x10 = *(uint *)&pSVar7->field_0x1c;
            *(uint *)&pSVar7->field_0x14 = *(uint *)&pSVar7->field_0x20;
            *(uint *)&pSVar7->field_0x18 = *(uint *)&pSVar7->field_0x24;
          }
          if (&pSVar7->field_0x1c != &pSVar7->field_0x28) {
            *(uint *)&pSVar7->field_0x1c = *(uint *)&pSVar7->field_0x28;
            *(uint *)&pSVar7->field_0x20 = *(uint *)&pSVar7->field_0x2c;
            *(uint *)&pSVar7->field_0x24 = *(uint *)&pSVar7->field_0x30;
          }
          core_flies_cpp_FUN_004a7660(this_ptr,&pSVar7->field_0x1c);
          fStack_54 = afStack_50[2];
          afStack_50[(uint)bVar8 * -2] = afStack_50[(uint)bVar8 * -2 + 3];
          afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          if ((float *)&pSVar7->field_0x28 != afStack_70 + 7) {
            *(float *)&pSVar7->field_0x28 = fStack_54;
            *(float *)&pSVar7->field_0x2c = afStack_50[0];
            *(float *)&pSVar7->field_0x30 = afStack_50[1];
          }
        }
        pSVar7 = pSVar7 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < this_ptr->fly_count);
    }
  }
  return;
}
