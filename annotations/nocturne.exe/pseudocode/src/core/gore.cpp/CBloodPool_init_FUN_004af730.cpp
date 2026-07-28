// Name: core_gore.cpp_CBloodPool_init_FUN_004af730
// Address: 004af730
// Address Range: [[004af730, 004af7bb]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_init_FUN_004af730(CBloodPool *this_ptr,CVector3f *position,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_init_FUN_004af730(CBloodPool *this_ptr,CVector3f *position,int blood_type)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,3);
  uVar1 = 0x01E57284;
  this_ptr->texture_variant = iVar2;
  (this_ptr->position).x = position->x;
  fVar3 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(uVar1,position,0);
  (this_ptr->position).y = fVar3;
  fVar3 = (this_ptr->position).y;
  (this_ptr->position).z = position->z;
  this_ptr->age = 0.0;
  (this_ptr->position).y = fVar3 + 0.1f;
  (this_ptr->position_fixed).x = (int)ROUND((this_ptr->position).x * 256.0f);
  (this_ptr->position_fixed).y = (int)ROUND((this_ptr->position).y * 256.0f);
  (this_ptr->position_fixed).z = (int)ROUND((this_ptr->position).z * 256.0f);
  this_ptr->blood_type = blood_type;
  return;
}
