// Name: core_gore.cpp_CBloodSplat_initWallSplat_FUN_004c7ea0
// Address: 004c7ea0
// Address Range: [[004c7ea0, 004c7f72]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004c7ea0(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004c7ea0(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

{
  int iVar1;
  float10 fVar2;
  
  *(uint *)&this_ptr->field_0x10 = 1;
  if ((CVector3f *)&this_ptr->field_0x4 != position) {
    *(uint *)&this_ptr->field_0x4 = *(uint *)position;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&position->field_0x4;
    *(uint *)&this_ptr->field_0xc = *(uint *)&position->field_0x8;
  }
  fVar2 = (float10)*(float *)&normal->field_0x4;
  atan2();
  *(uint *)&this_ptr->field_0x20 = 0;
  *(float *)&this_ptr->field_0x18 = (float)-fVar2;
  fVar2 = (float10)*(float *)normal;
  atan2();
  *(float *)&this_ptr->field_0x1c = (float)fVar2;
  iVar1 = core_actor_cpp_FUN_0040cfc0(0,3);
  *(int *)&this_ptr->field_0x28 = iVar1;
  *(uint *)&this_ptr->field_0x24 = 0;
  *(int *)&this_ptr->field_0x2c = (int)ROUND(*(float *)position * _DAT_005f7ba8);
  *(int *)&this_ptr->field_0x30 = (int)ROUND(*(float *)&position->field_0x4 * _DAT_005f7ba8);
  *(int *)&this_ptr->field_0x34 = (int)ROUND(*(float *)&position->field_0x8 * _DAT_005f7ba8);
  *(int *)&this_ptr->field_0x38 = (int)ROUND(*(float *)normal * _DAT_005f7bac);
  *(int *)&this_ptr->field_0x3c = (int)ROUND(*(float *)&normal->field_0x4 * _DAT_005f7bac);
  *(int *)&this_ptr->field_0x40 = (int)ROUND(*(float *)&normal->field_0x8 * _DAT_005f7bac);
  *(uint *)this_ptr = 0;
  *(EBloodType *)&this_ptr->field_0x14 = blood_type;
  return;
}
