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
    *(uint *)&this_ptr->field_0x4 = *(uint *)position;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&position->field_0x4;
    *(uint *)&this_ptr->field_0xc = *(uint *)&position->field_0x8;
  }
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
  *(int *)&this_ptr->field_0x2c = iVar1;
  *(uint *)&this_ptr->field_0x28 = 0;
  *(int *)&this_ptr->field_0x30 = (int)ROUND(*(float *)position * _DAT_005e0e18);
  *(int *)&this_ptr->field_0x34 = (int)ROUND(*(float *)&position->field_0x4 * _DAT_005e0e18);
  *(int *)&this_ptr->field_0x38 = (int)ROUND(*(float *)&position->field_0x8 * _DAT_005e0e18);
  *(uint *)&this_ptr->field_0x3c = 0;
  *(uint *)&this_ptr->field_0x40 = 0xffff;
  *(uint *)&this_ptr->field_0x44 = 0;
  *(EBloodType *)&this_ptr->field_0x18 = blood_type;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x24 = 0;
  *(uint *)&this_ptr->field_0x20 = *(uint *)&this_ptr->field_0x24;
  *(uint *)&this_ptr->field_0x1c = *(uint *)&this_ptr->field_0x20;
  *(uint *)&this_ptr->field_0x10 =
       *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
