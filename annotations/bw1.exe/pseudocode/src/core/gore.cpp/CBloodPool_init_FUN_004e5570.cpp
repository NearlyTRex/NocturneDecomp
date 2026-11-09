// Name: core_gore.cpp_CBloodPool_init_FUN_004e5570
// Address: 004e5570
// Address Range: [[004e5570, 004e55fb]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_init_FUN_004e5570(CBloodPool *this_ptr,CVector3f *position,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodPool_init_FUN_004e5570(CBloodPool *this_ptr,CVector3f *position,EBloodType blood_type)

{
  CDemonSet *pCVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = core_actor_cpp_FUN_0040cc60(0,3);
  pCVar1 = g_CDemonSetPtr;
  *(int *)&this_ptr->field_0x14 = iVar2;
  *(uint *)&this_ptr->field_0x4 = *(uint *)position;
  uVar3 = core_setcolid_cpp_FUN_005562c0(pCVar1,position,0);
  *(uint *)&this_ptr->field_0x8 = uVar3;
  *(uint *)&this_ptr->field_0xc = *(uint *)&position->field_0x8;
  *(uint *)&this_ptr->field_0x18 = 0;
  *(float *)&this_ptr->field_0x8 = *(float *)&this_ptr->field_0x8 + _DAT_005e40cd;
  *(int *)&this_ptr->field_0x1c = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_006016a8);
  *(int *)&this_ptr->field_0x20 = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_006016a8);
  *(int *)&this_ptr->field_0x24 = (int)ROUND(*(float *)&this_ptr->field_0xc * _DAT_006016a8);
  *(EBloodType *)&this_ptr->field_0x10 = blood_type;
  return;
}
