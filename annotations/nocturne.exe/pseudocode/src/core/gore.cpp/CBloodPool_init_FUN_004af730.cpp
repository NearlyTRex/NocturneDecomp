// Name: core_gore.cpp_CBloodPool_init_FUN_004af730
// Address: 004af730
// Address Range: [[004af730, 004af7bb]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_init_FUN_004af730(CBloodPool *this_ptr,CVector3f *position,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_init_FUN_004af730(CBloodPool *this_ptr,CVector3f *position,int blood_type)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040de00(0,3);
  this_ptr_00 = 0x01E57284;
  this_ptr->texture_variant = iVar1;
  (this_ptr->position).x = position->x;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(this_ptr_00,position,0.0);
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
