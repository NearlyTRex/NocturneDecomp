// Name: core_gore.cpp_CBloodPool_init_FUN_004ed0d0
// Address: 004ed0d0
// Address Range: [[004ed0d0, 004ed15b]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_init_FUN_004ed0d0(CBloodPool *this_ptr,CVector3f *position,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_init_FUN_004ed0d0(CBloodPool *this_ptr,CVector3f *position,int blood_type)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->texture_variant = iVar1;
  (this_ptr->position).x = position->x;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0(this_ptr_00,position,0.0);
  (this_ptr->position).y = fVar2;
  fVar2 = (this_ptr->position).y;
  (this_ptr->position).z = position->z;
  this_ptr->age = 0.0;
  (this_ptr->position).y = fVar2 + 0.1f;
  (this_ptr->position_fixed).x = (int)ROUND((this_ptr->position).x * 256.0f);
  (this_ptr->position_fixed).y = (int)ROUND((this_ptr->position).y * 256.0f);
  (this_ptr->position_fixed).z = (int)ROUND((this_ptr->position).z * 256.0f);
  this_ptr->blood_type = blood_type;
  return;
}
