// Name: core_gore.cpp_CBloodSplat_initWallSplat_FUN_004cd510
// Address: 004cd510
// Address Range: [[004cd510, 004cd5f4]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004cd510(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004cd510(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

{
  int iVar1;
  float10 fVar2;
  
  *(uint *)&this_ptr->field_0x14 = 1;
  if ((CVector3f *)&this_ptr->field_0x4 != position) {
    *(float *)&this_ptr->field_0x4 = position->x;
    *(float *)&this_ptr->field_0x8 = position->y;
    *(float *)&this_ptr->field_0xc = position->z;
  }
  fVar2 = (float10)normal->y;
  atan2();
  *(uint *)&this_ptr->field_0x24 = 0;
  *(float *)&this_ptr->field_0x1c = (float)-fVar2;
  fVar2 = (float10)normal->x;
  atan2();
  *(float *)&this_ptr->field_0x20 = (float)fVar2;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
  this_ptr->texture_variant = iVar1;
  this_ptr->age = 0.0;
  (this_ptr->position_fixed).x = (int)ROUND(position->x * _DAT_005e0e18);
  (this_ptr->position_fixed).y = (int)ROUND(position->y * _DAT_005e0e18);
  (this_ptr->position_fixed).z = (int)ROUND(position->z * _DAT_005e0e18);
  (this_ptr->normal_fixed).x = (int)ROUND(normal->x * _DAT_005e0e1c);
  (this_ptr->normal_fixed).y = (int)ROUND(normal->y * _DAT_005e0e1c);
  (this_ptr->normal_fixed).z = (int)ROUND(normal->z * _DAT_005e0e1c);
  *(EBloodType *)&this_ptr->field_0x18 = blood_type;
  iVar1 = _DAT_01d5ba14;
  this_ptr->expired = 0;
  *(uint *)&this_ptr->field_0x10 = *(uint *)(*(int *)(iVar1 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
