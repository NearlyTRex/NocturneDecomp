// Name: core_flies.cpp_CFlies_process_FUN_004cbf00
// Address: 004cbf00
// Address Range: [[004cbf00, 004cc221]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_process_FUN_004cbf00(CFlies *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_process_FUN_004cbf00(CFlies *this_ptr,float delta_time)

{
  double input_value;
  CDemonActor *pCVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  char *pcVar5;
  float *pfVar6;
  char *pcVar7;
  int iVar8;
  char *extraout_EBX;
  CVector3f local_44;
  CVector3f local_38;
  byte local_2c [20];
  int local_18;
  
  if (*(int *)(this_ptr->unk3 + 4) != 0) {
    pCVar1 = this_ptr->follow_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      local_38.x = (pCVar1->location).position.x - (this_ptr->base).location.position.x;
      local_38.y = (pCVar1->location).position.y - (this_ptr->base).location.position.y;
      local_38.z = (pCVar1->location).position.z - (this_ptr->base).location.position.z;
      if (0.0 < SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y)) {
        pCVar4 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                           (&this_ptr->base,(CVector3f *)local_2c,&local_38);
        local_44.x = pCVar4->x * 0.5f;
        local_44.y = pCVar4->y * 0.5f;
        local_44.z = 0.5f * pCVar4->z;
        if (&local_38 != &local_44) {
          local_38.x = local_44.x;
          local_38.y = local_44.y;
          local_38.z = local_44.z;
        }
        iVar8 = 0;
        if (0 < this_ptr->count) {
          pcVar7 = this_ptr->unk1 + 4;
          pcVar5 = this_ptr->unk1 + 0x1c;
          do {
            *(float *)pcVar7 = *(float *)pcVar7 - local_38.x;
            *(float *)(pcVar7 + 4) = *(float *)(pcVar7 + 4) - local_38.y;
            *(float *)(pcVar7 + 8) = *(float *)(pcVar7 + 8) - local_38.z;
            *(float *)(pcVar7 + 0xc) = *(float *)(pcVar7 + 0xc) - local_38.x;
            *(float *)(pcVar7 + 0x10) = *(float *)(pcVar7 + 0x10) - local_38.y;
            *(float *)(pcVar7 + 0x14) = *(float *)(pcVar7 + 0x14) - local_38.z;
            *(float *)pcVar5 = *(float *)pcVar5 - local_38.x;
            *(float *)(pcVar5 + 4) = *(float *)(pcVar5 + 4) - local_38.y;
            *(float *)(pcVar5 + 8) = *(float *)(pcVar5 + 8) - local_38.z;
            *(float *)(pcVar5 + 0xc) = *(float *)(pcVar5 + 0xc) - local_38.x;
            *(float *)(pcVar5 + 0x10) = *(float *)(pcVar5 + 0x10) - local_38.y;
            iVar8 = iVar8 + 1;
            *(float *)(pcVar5 + 0x14) = *(float *)(pcVar5 + 0x14) - local_38.z;
            pcVar7 = pcVar7 + 0x34;
            pcVar5 = pcVar5 + 0x34;
          } while (iVar8 < this_ptr->count);
        }
      }
      pCVar1 = this_ptr->follow_actor;
      (this_ptr->base).location.position.x = (pCVar1->location).position.x;
      (this_ptr->base).location.position.y = (pCVar1->location).position.y;
      (this_ptr->base).location.position.z = (pCVar1->location).position.z;
      (this_ptr->base).location.area_id = (pCVar1->location).area_id;
    }
    if ((0 < this_ptr->gather_count) &&
       (fVar2 = (float)this_ptr->unk2 - delta_time, this_ptr->unk2 = (int)fVar2, fVar2 <= 0.0)) {
      if (this_ptr->count < 200) {
        core_flies_cpp_CFlies_FUN_004cc760(this_ptr);
        this_ptr->count = this_ptr->count + 1;
        this_ptr->unk2 = (int)this_ptr->gather_time;
        this_ptr->gather_count = this_ptr->gather_count + -1;
      }
      else {
        this_ptr->gather_count = 0;
      }
    }
    fVar2 = (float)2;
    local_18 = 0;
    if (0 < this_ptr->count) {
      pcVar7 = this_ptr->unk1;
      do {
        fVar3 = *(float *)pcVar7 + delta_time * fVar2;
        *(float *)pcVar7 = fVar3;
        input_value = (double)fVar3;
        pcVar5 = pcVar7;
        if (1.0 <= input_value) {
          local_2c._8_8_ = floor(input_value);
          *(float *)extraout_EBX = *(float *)extraout_EBX - (float)(double)local_2c._8_8_;
          if (extraout_EBX + 4 != extraout_EBX + 0x10) {
            *(float *)(extraout_EBX + 4) = *(float *)(extraout_EBX + 0x10);
            *(float *)(extraout_EBX + 8) = *(float *)(extraout_EBX + 0x14);
            *(float *)(extraout_EBX + 0xc) = *(float *)(extraout_EBX + 0x18);
          }
          if (pcVar7 + 0x10 != pcVar7 + 0x1c) {
            *(float *)(pcVar7 + 0x10) = *(float *)(pcVar7 + 0x1c);
            *(float *)(pcVar7 + 0x14) = *(float *)(pcVar7 + 0x20);
            *(float *)(pcVar7 + 0x18) = *(float *)(pcVar7 + 0x24);
          }
          if (pcVar7 + 0x1c != pcVar7 + 0x28) {
            *(float *)(pcVar7 + 0x1c) = *(float *)(pcVar7 + 0x28);
            *(float *)(pcVar7 + 0x20) = *(float *)(pcVar7 + 0x2c);
            *(float *)(pcVar7 + 0x24) = *(float *)(pcVar7 + 0x30);
          }
          pfVar6 = core_flies_cpp_CFlies_FUN_004cc820(this_ptr);
          pcVar5 = extraout_EBX;
          if ((float *)(pcVar7 + 0x28) != pfVar6) {
            *(float *)(pcVar7 + 0x28) = *pfVar6;
            *(float *)(pcVar7 + 0x2c) = pfVar6[1];
            *(float *)(pcVar7 + 0x30) = pfVar6[2];
          }
        }
        pcVar7 = pcVar5 + 0x34;
        local_18 = local_18 + 1;
      } while (local_18 < this_ptr->count);
    }
  }
  return;
}
