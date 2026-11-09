// Name: core_gore.cpp_FUN_004cd510
// Address: 004cd510
// Address Range: [[004cd510, 004cd5f4]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004cd510(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004cd510(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

{
  int iVar1;
  float10 fVar2;
  
  *(uint *)&this_ptr->field_0x14 = 1;
  if ((CVector3f *)&this_ptr->field_0x4 != position) {
    *(uint *)&this_ptr->field_0x4 = *(uint *)position;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&position->field_0x4;
    *(uint *)&this_ptr->field_0xc = *(uint *)&position->field_0x8;
  }
  fVar2 = (float10)*(float *)&normal->field_0x4;
  atan2();
  *(uint *)&this_ptr->field_0x24 = 0;
  *(float *)&this_ptr->field_0x1c = (float)-fVar2;
  fVar2 = (float10)*(float *)normal;
  atan2();
  *(float *)&this_ptr->field_0x20 = (float)fVar2;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
  *(int *)&this_ptr->field_0x2c = iVar1;
  *(uint *)&this_ptr->field_0x28 = 0;
  *(int *)&this_ptr->field_0x30 = (int)ROUND(*(float *)position * _DAT_005e0e18);
  *(int *)&this_ptr->field_0x34 = (int)ROUND(*(float *)&position->field_0x4 * _DAT_005e0e18);
  *(int *)&this_ptr->field_0x38 = (int)ROUND(*(float *)&position->field_0x8 * _DAT_005e0e18);
  *(int *)&this_ptr->field_0x3c = (int)ROUND(*(float *)normal * _DAT_005e0e1c);
  *(int *)&this_ptr->field_0x40 = (int)ROUND(*(float *)&normal->field_0x4 * _DAT_005e0e1c);
  *(int *)&this_ptr->field_0x44 = (int)ROUND(*(float *)&normal->field_0x8 * _DAT_005e0e1c);
  *(EBloodType *)&this_ptr->field_0x18 = blood_type;
  iVar1 = _DAT_01d5ba14;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x10 = *(uint *)(*(int *)(iVar1 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
