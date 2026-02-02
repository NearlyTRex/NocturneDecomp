// Name: core_tvbat.cpp_CTVBat_FUN_005e5260
// Address: 005e5260
// Address Range: [[005e5260, 005e53f7]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_FUN_005e5260(CTVBat *this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e5260(CTVBat *this_ptr)

{
  CLocation *pCVar1;
  CKeys *this_ptr_00;
  int iVar2;
  float in_stack_0000000c;
  float in_stack_00000014;
  float in_stack_0000001c;
  float in_stack_00000024;
  float in_stack_0000002c;
  
  if (this_ptr->follow_orders == 0) {
    pCVar1 = &(this_ptr->base).base.base.location;
    if ((CLocation *)&this_ptr->home_pos != pCVar1) {
      (this_ptr->home_pos).x = (pCVar1->position).x;
      (this_ptr->home_pos).y = (this_ptr->base).base.base.location.position.y;
      (this_ptr->home_pos).z = (this_ptr->base).base.base.location.position.z;
    }
  }
  this_ptr_00 = g_CKeysPtr;
  (this_ptr->base).base.hit_points = 10.0;
  iVar2 = (*this_ptr_00->vtable->getKeyState)(this_ptr_00,0x1d);
  if (iVar2 == 0) {
    core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800((CCharacter *)this_ptr);
    return;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance - (float)this_ptr;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance + in_stack_0000000c;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar2 != 0) {
    this_ptr->max_height = this_ptr->max_height - in_stack_00000014;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar2 != 0) {
    this_ptr->max_height = this_ptr->max_height + in_stack_0000001c;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance - in_stack_00000024;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance + in_stack_0000002c;
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
