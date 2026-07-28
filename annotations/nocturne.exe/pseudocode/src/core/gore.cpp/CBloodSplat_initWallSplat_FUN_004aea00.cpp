// Name: core_gore.cpp_CBloodSplat_initWallSplat_FUN_004aea00
// Address: 004aea00
// Address Range: [[004aea00, 004aead2]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004aea00(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004aea00(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,int blood_type)

{
  int iVar1;
  float10 fVar2;
  
  this_ptr->is_wall_splat = 1;
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  fVar2 = atan2
                    ((float10)normal->y,
                     SQRT((float10)normal->x * (float10)normal->x +
                          (float10)normal->z * (float10)normal->z));
  (this_ptr->rotation).z = 0.0;
  (this_ptr->rotation).x = (float)-fVar2;
  fVar2 = atan2((float10)normal->x,(float10)normal->z);
  (this_ptr->rotation).y = (float)fVar2;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040de00(0,3);
  this_ptr->texture_variant = iVar1;
  this_ptr->age = 0.0;
  (this_ptr->position_fixed).x = (int)ROUND(position->x * 256.0f);
  (this_ptr->position_fixed).y = (int)ROUND(position->y * 256.0f);
  (this_ptr->position_fixed).z = (int)ROUND(position->z * 256.0f);
  (this_ptr->normal_fixed).x = (int)ROUND(normal->x * 65536.0f);
  (this_ptr->normal_fixed).y = (int)ROUND(normal->y * 65536.0f);
  (this_ptr->normal_fixed).z = (int)ROUND(normal->z * 65536.0f);
  this_ptr->expired = 0;
  this_ptr->blood_type = (int)position;
  return;
}
