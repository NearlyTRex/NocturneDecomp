// Name: core_gore.cpp_CBloodSplat_initWallSplat_FUN_004e4830
// Address: 004e4830
// Address Range: [[004e4830, 004e4902]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004e4830(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004e4830(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

{
  int iVar1;
  float10 fVar2;
  
  this_ptr->is_wall_splat = 1;
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  fVar2 = (float10)normal->y;
  atan2();
  (this_ptr->rotation).z = 0.0;
  (this_ptr->rotation).x = (float)-fVar2;
  fVar2 = (float10)normal->x;
  atan2();
  (this_ptr->rotation).y = (float)fVar2;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
  this_ptr->texture_variant = iVar1;
  this_ptr->age = 0.0;
  (this_ptr->position_fixed).x = (int)ROUND(position->x * _DAT_006016a8);
  (this_ptr->position_fixed).y = (int)ROUND(position->y * _DAT_006016a8);
  (this_ptr->position_fixed).z = (int)ROUND(position->z * _DAT_006016a8);
  (this_ptr->normal_fixed).x = (int)ROUND(normal->x * _DAT_006016ac);
  (this_ptr->normal_fixed).y = (int)ROUND(normal->y * _DAT_006016ac);
  (this_ptr->normal_fixed).z = (int)ROUND(normal->z * _DAT_006016ac);
  this_ptr->expired = 0;
  this_ptr->blood_type = blood_type;
  return;
}
