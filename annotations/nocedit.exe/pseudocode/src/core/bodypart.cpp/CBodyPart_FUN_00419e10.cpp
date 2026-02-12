// Name: core_bodypart.cpp_CBodyPart_FUN_00419e10
// Address: 00419e10
// Address Range: [[00419e10, 00419f41]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_00419e10(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_00419e10(CBodyPart *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *input_local_point;
  CLocation *pCVar3;
  int iVar4;
  float in_stack_00000008;
  float local_30;
  CVector3f local_2c;
  float local_18;
  SBodyPartFire *local_14;
  
  if (this_ptr->fire_count != 0) {
    fVar1 = (float)this_ptr->fire_time_remaining - in_stack_00000008;
    this_ptr->fire_time_remaining = (int)fVar1;
    if (fVar1 < 0.0) {
      this_ptr->fire_count = 0;
      this_ptr->fire_time_remaining = 0;
      return;
    }
    iVar4 = 0;
    if (0 < this_ptr->fire_count) {
      local_14 = this_ptr->fires;
      pCVar3 = &this_ptr->fires[0].flame.base.location;
      do {
        input_local_point = &local_14[iVar4].local_position;
        pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&local_2c,input_local_point);
        (pCVar3->position).x = pCVar2->x;
        local_30 = 1.0;
        (pCVar3->position).y = pCVar2->y;
        (pCVar3->position).z = pCVar2->z;
        if ((float)this_ptr->fire_time_remaining < (float)5) {
          local_30 = (float)this_ptr->fire_time_remaining * (float)0.20000000000000001;
        }
        local_18 = local_30 * (float)1.5;
        fVar1 = (float)3;
        input_local_point[0x1d].z = local_18;
        input_local_point[0x1e].x = local_30 * fVar1;
        input_local_point[0x1e].y = local_18;
        core_flame_cpp_CFlame_process_FUN_004c9c00
                  ((CFlame *)(input_local_point + 1),in_stack_00000008);
        iVar4 = iVar4 + 1;
        pCVar3 = pCVar3 + 0x2b;
      } while (iVar4 < this_ptr->fire_count);
    }
  }
  return;
}
