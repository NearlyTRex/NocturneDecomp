// Name: core_bird.cpp_CBird_processDamage_FUN_00410110
// Address: 00410110
// Address Range: [[00410110, 004101b1]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_processDamage_FUN_00410110(CBird *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_processDamage_FUN_00410110(CBird *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  CDemonActorType *pCVar2;
  byte *puVar3;
  
  pCVar2 = (CDemonActorType *)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xcc))(this_ptr);
  if (pCVar2 == &g_CBirdClassInfo) {
    fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
    *(float *)&this_ptr->field_0x2538 = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)&this_ptr->field_0x2538 = 0;
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0xa8))(this_ptr,0x32,0x41c80000);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0((CCharacter *)this_ptr);
      puVar3 = &DAT_005b6452;
    }
    else {
      if ((*(float *)(damage_info + 4) <= 0.0) || (*(int *)&this_ptr->field_0x26fc != 0))
      goto LAB_00410173;
      puVar3 = &DAT_005b6456;
    }
    unkafter_bird_cpp_FUN_00410030(&this_ptr->field_0x158,puVar3);
  }
LAB_00410173:
  core_charactr_cpp_CCharacter_processDamage_FUN_00430d60((CCharacter *)this_ptr,damage_info);
  return;
}
