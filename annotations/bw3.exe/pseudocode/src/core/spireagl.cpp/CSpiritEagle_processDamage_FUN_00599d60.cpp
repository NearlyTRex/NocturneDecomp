// Name: core_spireagl.cpp_CSpiritEagle_processDamage_FUN_00599d60
// Address: 00599d60
// Address Range: [[00599d60, 00599e01]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_CSpiritEagle_processDamage_FUN_00599d60(CSpiritEagle *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_spireagl_cpp_CSpiritEagle_processDamage_FUN_00599d60(CSpiritEagle *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  CDemonActorType *pCVar2;
  byte *puVar3;
  
  pCVar2 = (CDemonActorType *)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xcc))(this_ptr);
  if (pCVar2 == &g_CSpiritEagleClassInfo) {
    fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
    *(float *)&this_ptr->field_0x2538 = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)&this_ptr->field_0x2538 = 0;
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0xa8))(this_ptr,0x32,0x41c80000);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0((CCharacter *)this_ptr);
      puVar3 = &DAT_005d9a11;
    }
    else {
      if ((*(float *)(damage_info + 4) <= 0.0) || (*(int *)&this_ptr->field_0x26fc != 0))
      goto LAB_00599dc3;
      puVar3 = &DAT_005d9a15;
    }
    core_spireagl_cpp_FUN_00599c80(&this_ptr->field_0x158,puVar3);
  }
LAB_00599dc3:
  core_charactr_cpp_CCharacter_processDamage_FUN_00430d60((CCharacter *)this_ptr,damage_info);
  return;
}
