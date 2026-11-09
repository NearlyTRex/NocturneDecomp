// Name: core_vampboss.cpp_FUN_00583520
// Address: 00583520
// Address Range: [[00583520, 00583596]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_00583520(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_FUN_00583520(CVampireBoss *this_ptr)

{
  CDrip *this_ptr_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"voicusummon.wav");
  for (iVar2 = 0; iVar2 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar2 = iVar2 + 1) {
    this_ptr_00 = (CDrip *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar3),
                                      g_CDripClassInfo.name_hash);
    if ((this_ptr_00 != (CDrip *)0x0) && (*(int *)&this_ptr_00->field_0x430 == 2)) {
      iVar1 = core_actor_cpp_FUN_0040d060(0.5);
      if (iVar1 == 0) {
        core_drip_cpp_FUN_0046d560(this_ptr_00);
      }
    }
    iVar3 = iVar3 + 4;
  }
  return;
}
