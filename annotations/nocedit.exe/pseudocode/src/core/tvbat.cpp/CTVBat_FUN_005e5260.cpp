// Name: core_tvbat.cpp_CTVBat_FUN_005e5260
// Address: 005e5260
// Address Range: [[005e5260, 005e53f7]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_FUN_005e5260(CTVBat * this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e5260(CTVBat *this_ptr)

{
  CLocation *pCVar1;
  CKeys *this_ptr_00;
  int iVar2;
  float fStack00000008;
  uint uStack0000000c;
  float in_stack_0000001c;
  uint uStack00000020;
  float in_stack_00000030;
  uint uStack00000034;
  float in_stack_00000044;
  uint uStack00000048;
  float in_stack_00000058;
  uint uStack0000005c;
  float in_stack_0000006c;
  float in_stack_00000080;
  
  if (this_ptr->follow_orders == 0) {
    pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.location;
    if ((CLocation *)&this_ptr->home_pos != pCVar1) {
      (this_ptr->home_pos).x = (pCVar1->position).x;
      (this_ptr->home_pos).y = (this_ptr->base_enemy).base_character.base_actor.location.position.y;
      (this_ptr->home_pos).z = (this_ptr->base_enemy).base_character.base_actor.location.position.z;
    }
  }
  this_ptr_00 = g_CKeysPtr;
  (this_ptr->base_enemy).base_character.hit_points = 10.0;
  iVar2 = (*this_ptr_00->vtable->getKeyState)(this_ptr_00,0x1d);
  if (iVar2 == 0) {
    core_charactr_cpp_CCharacter_computePickupInLoop_FUN_0042f800((CCharacter *)this_ptr);
    return;
  }
  fStack00000008 = g_CGamePtr->delta_time_float * (float)4;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance - in_stack_0000001c;
  }
  uStack0000000c = 0x5e52f4;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance + in_stack_00000030;
  }
  uStack00000020 = 0x5e5317;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar2 != 0) {
    this_ptr->max_height = this_ptr->max_height - in_stack_00000044;
  }
  uStack00000034 = 0x5e533a;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar2 != 0) {
    this_ptr->max_height = this_ptr->max_height + in_stack_00000058;
  }
  uStack00000048 = 0x5e535d;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance - in_stack_0000006c;
  }
  uStack0000005c = 0x5e5380;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance + in_stack_00000080;
  }
  if ((int)this_ptr->max_distance < 0x3f000000) {
    this_ptr->max_distance = 0.5;
  }
  if (this_ptr->max_height < 0.5) {
    this_ptr->max_height = 0.5;
  }
  if (0.5 <= this_ptr->max_distance) {
    return;
  }
  this_ptr->max_distance = 0.5;
  return;
}
