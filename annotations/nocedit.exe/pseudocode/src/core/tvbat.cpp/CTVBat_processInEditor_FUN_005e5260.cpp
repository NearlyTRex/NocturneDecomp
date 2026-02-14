// Name: core_tvbat.cpp_CTVBat_processInEditor_FUN_005e5260
// Address: 005e5260
// Address Range: [[005e5260, 005e53f7]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_processInEditor_FUN_005e5260(CTVBat *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_tvbat_cpp_CTVBat_processInEditor_FUN_005e5260(CTVBat *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  CKeys *this_ptr_00;
  int iVar3;
  
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
  iVar3 = (*this_ptr_00->vtable->getKeyState)(this_ptr_00,0x1d);
  if (iVar3 == 0) {
    core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800((CCharacter *)this_ptr);
    return;
  }
  fVar2 = g_CGamePtr->delta_time_float * (float)4;
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar3 != 0) {
    this_ptr->max_distance = this_ptr->max_distance - fVar2;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar3 != 0) {
    this_ptr->max_distance = this_ptr->max_distance + fVar2;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar3 != 0) {
    this_ptr->max_height = this_ptr->max_height - fVar2;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar3 != 0) {
    this_ptr->max_height = this_ptr->max_height + fVar2;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar3 != 0) {
    this_ptr->max_distance = this_ptr->max_distance - fVar2;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar3 != 0) {
    this_ptr->max_distance = this_ptr->max_distance + fVar2;
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
