// Name: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004cd450
// Address: 004cd450
// Address Range: [[004cd450, 004cd502]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004cd450(CBloodSplat *this_ptr,CVector3f *position,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004cd450(CBloodSplat *this_ptr,CVector3f *position,EBloodType blood_type)

{
  int iVar1;
  
  *(uint *)&this_ptr->field_0x14 = 0;
  if ((CVector3f *)&this_ptr->field_0x4 != position) {
    *(float *)&this_ptr->field_0x4 = position->x;
    *(float *)&this_ptr->field_0x8 = position->y;
    *(float *)&this_ptr->field_0xc = position->z;
  }
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
  this_ptr->texture_variant = iVar1;
  this_ptr->age = 0.0;
  (this_ptr->position_fixed).x = (int)ROUND(position->x * _DAT_005e0e18);
  (this_ptr->position_fixed).y = (int)ROUND(position->y * _DAT_005e0e18);
  (this_ptr->position_fixed).z = (int)ROUND(position->z * _DAT_005e0e18);
  (this_ptr->normal_fixed).x = 0;
  (this_ptr->normal_fixed).y = 0xffff;
  (this_ptr->normal_fixed).z = 0;
  *(EBloodType *)&this_ptr->field_0x18 = blood_type;
  this_ptr->expired = 0;
  *(uint *)&this_ptr->field_0x24 = 0;
  *(uint *)&this_ptr->field_0x20 = *(uint *)&this_ptr->field_0x24;
  *(uint *)&this_ptr->field_0x1c = *(uint *)&this_ptr->field_0x20;
  *(uint *)&this_ptr->field_0x10 =
       *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
