// Name: core_bird.cpp_CBird_processDamage_FUN_00415910
// Address: 00415910
// Address Range: [[00415910, 004159b1]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_processDamage_FUN_00415910(CBird *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_processDamage_FUN_00415910(CBird *this_ptr,SDamageInfo *damage_info)

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
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0((CCharacter *)this_ptr);
      puVar3 = &DAT_005d3d6a;
    }
    else {
      if ((*(float *)(damage_info + 4) <= 0.0) || (*(int *)&this_ptr->field_0x26fc != 0))
      goto LAB_00415973;
      puVar3 = &DAT_005d3d6e;
    }
    unkafter_bird_cpp_FUN_00415830(&this_ptr->field_0x158,puVar3);
  }
LAB_00415973:
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
