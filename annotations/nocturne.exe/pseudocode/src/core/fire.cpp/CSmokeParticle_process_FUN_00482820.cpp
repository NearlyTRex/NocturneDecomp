// Name: core_fire.cpp_CSmokeParticle_process_FUN_00482820
// Address: 00482820
// Address Range: [[00482820, 0048294b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_00482820(CSmokeParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_00482820(CSmokeParticle *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  
  fVar3 = *(float *)(0x01C775EC + 0x264);
  this_ptr->age = fVar3 * 30.0f + this_ptr->age;
  if (0x421fffff < (int)this_ptr->age) {
    this_ptr->active = 0;
    return;
  }
  (this_ptr->position).y =
       fVar3 * this_ptr->vertical_accel * this_ptr->drag_factor + (this_ptr->position).y;
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-1.0,1.0);
  (this_ptr->position).x = fVar5 * fVar3 + (this_ptr->position).x;
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-1.0,1.0);
  (this_ptr->position).z = fVar5 * fVar3 + (this_ptr->position).z;
  fVar5 = (this_ptr->wind_influence).y;
  fVar2 = (this_ptr->wind_influence).z;
  pCVar1 = &this_ptr->position;
  pCVar1->x = pCVar1->x + (this_ptr->wind_influence).x * fVar3;
  (this_ptr->position).y = (this_ptr->position).y + fVar5 * fVar3;
  iVar4 = 0x01E57284;
  (this_ptr->position).z = (this_ptr->position).z + fVar2 * fVar3;
  fVar5 = *(float *)(iVar4 + 0x15a87c);
  fVar2 = *(float *)(iVar4 + 0x15a880);
  pCVar1->x = pCVar1->x + *(float *)(iVar4 + 0x15a878) * fVar3;
  (this_ptr->position).y = (this_ptr->position).y + fVar5 * fVar3;
  (this_ptr->position).z = (this_ptr->position).z + fVar2 * fVar3;
  return;
}
