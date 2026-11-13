// Name: core_fire.cpp_CSmokeParticle_process_FUN_004abf50
// Address: 004abf50
// Address Range: [[004abf50, 004ac0a7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004abf50(CSmokeParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004abf50(CSmokeParticle *this_ptr)

{
  CVector3f *pCVar1;
  CDemonSet *pCVar2;
  byte bVar3;
  float afStackY_1024 [1014];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  bVar3 = 0;
  local_c = g_CGamePtr->delta_time_float;
  this_ptr->age = local_c * _DAT_005df184 + this_ptr->age;
  if (0x421fffff < (int)this_ptr->age) {
    this_ptr->active = 0;
    return;
  }
  (this_ptr->position).y =
       local_c * this_ptr->vertical_accel * this_ptr->drag_factor + (this_ptr->position).y;
  local_8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-1.0,1.0);
  (this_ptr->position).x = local_8 * local_c + (this_ptr->position).x;
  local_8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-1.0,1.0);
  (this_ptr->position).z = local_8 * local_c + (this_ptr->position).z;
  pCVar2 = g_CDemonSetPtr;
  local_30 = (this_ptr->wind_influence).x * local_c;
  pCVar1 = &this_ptr->position;
  local_2c = (this_ptr->wind_influence).y * local_c;
  local_28 = (this_ptr->wind_influence).z * local_c;
  local_24 = local_30;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  pCVar1->x = pCVar1->x + local_24;
  (this_ptr->position).y = (this_ptr->position).y + local_20;
  (this_ptr->position).z = (this_ptr->position).z + local_1c;
  local_18 = (pCVar2->active_fog).scroll.x * local_c;
  local_14 = (pCVar2->active_fog).scroll.y * local_c;
  local_10 = (pCVar2->active_fog).scroll.z * local_c;
  local_3c = local_18;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  pCVar1->x = pCVar1->x + local_3c;
  (this_ptr->position).y = (this_ptr->position).y + local_38;
  (this_ptr->position).z = (this_ptr->position).z + local_34;
  return;
}
