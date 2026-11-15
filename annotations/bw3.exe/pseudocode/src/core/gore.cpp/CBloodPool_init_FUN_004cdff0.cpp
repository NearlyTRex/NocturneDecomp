// Name: core_gore.cpp_CBloodPool_init_FUN_004cdff0
// Address: 004cdff0
// Address Range: [[004cdff0, 004ce08d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_init_FUN_004cdff0(CBloodPool *this_ptr,CVector3f *position,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodPool_init_FUN_004cdff0(CBloodPool *this_ptr,CVector3f *position,EBloodType blood_type)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->texture_variant = iVar1;
  (this_ptr->position).x = position->x;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0053bc80(this_ptr_00,position,0.0);
  (this_ptr->position).y = fVar2;
  fVar2 = (this_ptr->position).y;
  (this_ptr->position).z = position->z;
  this_ptr->age = 0.0;
  (this_ptr->position).y = fVar2 + _DAT_005c46e9;
  (this_ptr->position_fixed).x = (int)ROUND((this_ptr->position).x * _DAT_005e0e18);
  (this_ptr->position_fixed).y = (int)ROUND((this_ptr->position).y * _DAT_005e0e18);
  (this_ptr->position_fixed).z = (int)ROUND((this_ptr->position).z * _DAT_005e0e18);
  this_ptr->blood_type = blood_type;
  this_ptr->area_id = *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
