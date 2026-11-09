// Name: core_gore.cpp_FUN_004cdff0
// Address: 004cdff0
// Address Range: [[004cdff0, 004ce08d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004cdff0(CBloodPool *this_ptr,CVector3f *position,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004cdff0(CBloodPool *this_ptr,CVector3f *position,EBloodType blood_type)

{
  CDemonSet *pCVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
  pCVar1 = g_CDemonSetPtr;
  *(int *)&this_ptr->field_0x18 = iVar2;
  *(uint *)&this_ptr->field_0x4 = *(uint *)position;
  uVar3 = core_setcolid_cpp_FUN_0053bc80(pCVar1,position,0);
  *(uint *)&this_ptr->field_0x8 = uVar3;
  *(uint *)&this_ptr->field_0xc = *(uint *)&position->field_0x8;
  *(uint *)&this_ptr->field_0x1c = 0;
  *(float *)&this_ptr->field_0x8 = *(float *)&this_ptr->field_0x8 + _DAT_005c46e9;
  *(int *)&this_ptr->field_0x20 = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_005e0e18);
  *(int *)&this_ptr->field_0x24 = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005e0e18);
  *(int *)&this_ptr->field_0x28 = (int)ROUND(*(float *)&this_ptr->field_0xc * _DAT_005e0e18);
  *(EBloodType *)&this_ptr->field_0x10 = blood_type;
  *(uint *)&this_ptr->field_0x14 =
       *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
